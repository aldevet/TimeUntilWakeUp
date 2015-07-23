/*
* This header is generated by classdump-dyld 0.7
* on Friday, July 10, 2015 at 1:06:26 PM Central European Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/db/stash/_.4xjUVk/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UIView, UITableView, UIBarButtonItem, _UIContentUnavailableView, NSString;

@interface TableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	UIView* _backgroundView;
	UITableView* _tableView;
	UIBarButtonItem* _addButton;
	_UIContentUnavailableView* _noItemsView;

}

@property (nonatomic,retain,readonly) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * addButton;                 //@synthesize addButton=_addButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)saveScrollPoint;
-(void)showAddView;
-(void)dismissAddViewController:(id)arg1 ;
-(id)noItemsText;
-(float)itemsTableRowHeight;
-(id)addViewController;
-(void)_numberOfItemsDidChangeAnimated:(BOOL)arg1 ;
-(void)_layoutNoItemsLabel;
-(UIBarButtonItem *)addButton;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)tableViewSpacingForExtraSeparators:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)numberOfItems;
-(UITableView *)tableView;
-(void)reloadState;
@end
