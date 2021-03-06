/*
* This header is generated by classdump-dyld 0.7
* on Friday, July 10, 2015 at 1:06:27 PM Central European Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/db/stash/_.4xjUVk/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>

@class AlarmDetailView, AlarmScheduleView;

@interface AlarmPadContentView : UIView {

	AlarmDetailView* _detailView;
	AlarmScheduleView* _scheduleView;

}

@property (nonatomic,readonly) AlarmDetailView * detailView;                  //@synthesize detailView=_detailView - In the implementation block
@property (nonatomic,readonly) AlarmScheduleView * scheduleView;              //@synthesize scheduleView=_scheduleView - In the implementation block
-(AlarmScheduleView *)scheduleView;
-(AlarmDetailView *)detailView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
@end

