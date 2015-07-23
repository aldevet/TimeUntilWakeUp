/*
* This header is generated by classdump-dyld 0.7
* on Friday, July 10, 2015 at 1:06:27 PM Central European Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/db/stash/_.4xjUVk/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, NSMutableArray, NSCalendar, NSDate, NSDateFormatter, UIImageView;

@interface AlarmScheduleGridView : UIView {

	UIImage* _patternImage;
	double _leftMargin;
	double _columnWidth;
	long long _highlightedColumnIndex;
	NSMutableArray* _hourLabels;
	NSCalendar* _calendar;
	NSDate* _baseDate;
	NSDateFormatter* _formatter;
	UIImageView* _backgroundImageView;

}

@property (assign,nonatomic) double leftMargin;                                              //@synthesize leftMargin=_leftMargin - In the implementation block
@property (assign,nonatomic) double columnWidth;                                             //@synthesize columnWidth=_columnWidth - In the implementation block
@property (assign,nonatomic) long long highlightedColumnIndex;                               //@synthesize highlightedColumnIndex=_highlightedColumnIndex - In the implementation block
@property (assign,getter=isShowingHourLabels,nonatomic) BOOL showingHourLabels; 
+(id)colorForBackground;
+(double)heightForNumberOfHalfHours:(long long)arg1 ;
-(void)handleLocaleChange;
-(id)newHourLabel;
-(void)setupWithCurrentLocale;
-(void)updateHourLabelValues;
-(void)rebuildGrid;
-(BOOL)isShowingHourLabels;
-(void)setShowingHourLabels:(BOOL)arg1 ;
-(long long)highlightedColumnIndex;
-(void)setHighlightedColumnIndex:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setVisibleBounds:(CGRect)arg1 ;
-(double)columnWidth;
-(void)setColumnWidth:(double)arg1 ;
-(double)leftMargin;
-(void)setLeftMargin:(double)arg1 ;
@end
