/*
* This header is generated by classdump-dyld 0.7
* on Friday, July 10, 2015 at 1:06:26 PM Central European Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/db/stash/_.4xjUVk/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIView, UIDatePicker, TimerTimeView;

@interface MTTimerPickerCell : UITableViewCell {

	UIView* _keylineView;
	UIView* _pickerBackgroundView;
	int _state;
	UIDatePicker* _picker;
	TimerTimeView* _timeView;

}

@property (nonatomic,retain,readonly) UIDatePicker * picker;                 //@synthesize picker=_picker - In the implementation block
@property (nonatomic,retain,readonly) TimerTimeView * timeView;              //@synthesize timeView=_timeView - In the implementation block
@property (assign,nonatomic) int state;                                      //@synthesize state=_state - In the implementation block
-(TimerTimeView *)timeView;
-(void)setState:(int)arg1 animated:(BOOL)arg2 ;
-(id)initWithPicker:(id)arg1 timeView:(id)arg2 reuseIdentifier:(id)arg3 ;
-(void)dealloc;
-(void)layoutSubviews;
-(int)state;
-(void)setState:(int)arg1 ;
-(UIDatePicker *)picker;
@end

