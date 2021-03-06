/*
* This header is generated by classdump-dyld 0.7
* on Friday, July 10, 2015 at 1:06:26 PM Central European Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/db/stash/_.4xjUVk/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <MobileTimer/WorldClockCellViewDelegate.h>

@class WorldClockCity, WorldClockCellView, NSString;

@interface WorldClockTableViewCell : UITableViewCell <WorldClockCellViewDelegate> {

	WorldClockCity* _city;
	WorldClockCellView* _clockCellView;
	long long _style;

}

@property (nonatomic,retain) WorldClockCity * city; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)defaultHeight;
-(WorldClockCity *)city;
-(void)setCity:(WorldClockCity *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)stop;
-(void)setStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)start;
-(void)timeDidChangeForClockCell:(id)arg1 ;
@end

