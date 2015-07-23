/*
* This header is generated by classdump-dyld 0.7
* on Friday, July 10, 2015 at 1:06:26 PM Central European Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/db/stash/_.4xjUVk/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class WorldClockView, UIView;

@interface WorldClockCollectionCell : UICollectionViewCell {

	WorldClockView* _clockView;
	BOOL _verticalLines;
	BOOL _horizontalLines;
	UIView* _verticalLineView;
	UIView* _horizontalLineView;

}

@property (nonatomic,retain) WorldClockView * clockView;              //@synthesize clockView=_clockView - In the implementation block
+(double)heightForOrientation:(long long)arg1 ;
-(WorldClockView *)clockView;
-(void)setClockView:(WorldClockView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
@end

