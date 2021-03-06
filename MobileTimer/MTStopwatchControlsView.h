/*
* This header is generated by classdump-dyld 0.7
* on Friday, July 10, 2015 at 1:06:27 PM Central European Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/db/stash/_.4xjUVk/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class MTStopwatchController, UIView, StopwatchTimeView, UITableView;

@interface MTStopwatchControlsView : UIView {

	MTStopwatchController* _controller;
	UIView* _topKeylineView;
	UIView* _bottomKeylineView;
	StopwatchTimeView* _timeView;
	UITableView* _lapTimeTable;

}

@property (assign,nonatomic) int mode; 
@property (nonatomic,readonly) id<StopWatchControlsTarget> target; 
@property (nonatomic,retain,readonly) StopwatchTimeView * timeView;              //@synthesize timeView=_timeView - In the implementation block
@property (nonatomic,readonly) UITableView * lapTimeTable;                       //@synthesize lapTimeTable=_lapTimeTable - In the implementation block
+(double)timeViewHeight;
+(double)defaultHeight;
-(void)handleLocaleChange;
-(UITableView *)lapTimeTable;
-(StopwatchTimeView *)timeView;
-(void)_configureAndAddButton:(id)arg1 ;
-(void)setButtonSize:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<StopWatchControlsTarget>)target;
-(id)initWithTarget:(id)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
@end

