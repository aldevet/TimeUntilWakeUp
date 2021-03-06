/*
* This header is generated by classdump-dyld 0.7
* on Friday, July 10, 2015 at 1:06:27 PM Central European Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/db/stash/_.4xjUVk/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, NSDateFormatter;

@interface AlarmScheduleHeaderView : UIView {

	NSMutableArray* _dateLabels;
	NSDateFormatter* _formatter;
	long long _firstDayOfWeek;
	long long _currentDayOfWeek;
	double _leftMargin;
	double _columnWidth;

}

@property (assign,nonatomic) long long firstDayOfWeek;                //@synthesize firstDayOfWeek=_firstDayOfWeek - In the implementation block
@property (assign,nonatomic) long long currentDayOfWeek;              //@synthesize currentDayOfWeek=_currentDayOfWeek - In the implementation block
@property (assign,nonatomic) double leftMargin;                       //@synthesize leftMargin=_leftMargin - In the implementation block
@property (assign,nonatomic) double columnWidth;                      //@synthesize columnWidth=_columnWidth - In the implementation block
+(double)defaultHeight;
-(void)handleLocaleChange;
-(long long)currentDayOfWeek;
-(void)setCurrentDayOfWeek:(long long)arg1 ;
-(void)updateDayLabelValues;
-(id)newDateLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(double)columnWidth;
-(void)setColumnWidth:(double)arg1 ;
-(void)setFirstDayOfWeek:(long long)arg1 ;
-(long long)firstDayOfWeek;
-(double)leftMargin;
-(void)setLeftMargin:(double)arg1 ;
@end

