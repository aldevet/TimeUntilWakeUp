/*
* This header is generated by classdump-dyld 0.7
* on Friday, July 10, 2015 at 1:06:26 PM Central European Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/db/stash/_.4xjUVk/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface BookmarkTextEntryTableViewCell : UITableViewCell <UITextFieldDelegate> {

	UITextField* _textField;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithText:(id)arg1 autoCapsType:(long long)arg2 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)textField;
@end

