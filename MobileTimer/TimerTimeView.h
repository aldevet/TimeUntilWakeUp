/*
* This header is generated by classdump-dyld 0.7
* on Friday, July 10, 2015 at 1:06:26 PM Central European Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/db/stash/_.4xjUVk/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <MobileTimer/TimeView.h>

@interface TimerTimeView : TimeView {

	int _style;

}

@property (assign,nonatomic) int style;              //@synthesize style=_style - In the implementation block
+(double)defaultHeight;
-(void)configureTimeLabel;
-(void)sizeLabelToFit;
-(void)configureBackground;
-(id)init;
-(void)layoutSubviews;
-(int)style;
-(void)setStyle:(int)arg1 ;
@end

