#import "UIView+Toast.m"
#import "MobileTimer/EditAlarmView.h"

@interface EditAlarmViewController : UIViewController

@end

int differenceFromTimeInterval(int secondsForAlarm) {
	// Get the current time as seconds into the day
	NSDate *now = [NSDate date];
	NSCalendar *calendar = [NSCalendar currentCalendar];
	NSDateComponents *components = [calendar components:(NSHourCalendarUnit | NSMinuteCalendarUnit) fromDate:now];
	int secondsNow = ([components hour] * 3600) + ([components minute] * 60);

	// Calculate difference between the alarm and time now
	int difference = 0;
	if (secondsNow < secondsForAlarm) {
		difference = secondsForAlarm - secondsNow;
	} else {
		difference = (86400) - (secondsNow - secondsForAlarm);
	}

	return difference;
}

NSString *stringFromDifference(int difference) {
	// Convert the difference to days, hours and minutes
	int days = difference / 86400;
	int hours = (difference % 86400) / 3600;
	int minutes = ((difference % 86400) % 3600) / 60;

	// Turn into string
	NSString *daysString = (days > 0) ? [NSString stringWithFormat:@"%dd ", days] : @"";
	NSString *hoursString = (hours > 0) ? [NSString stringWithFormat:@"%dh ", hours] : @"";
	return [NSString stringWithFormat:@"%@%@%dm", daysString, hoursString, minutes];
}

%hook EditAlarmViewController

- (void)handlePickerChanged { 
	%orig;
	
	EditAlarmView *editAlarmView = MSHookIvar<EditAlarmView *>(self, "_editAlarmView");
	UIDatePicker *timePicker = MSHookIvar<UIDatePicker *>(editAlarmView, "_timePicker");

	int pickedTime = timePicker.countDownDuration;

	int difference = differenceFromTimeInterval(pickedTime);
	[self.view hideToastActivity];
	[self.view makeToast:stringFromDifference(difference)];
}

%end
