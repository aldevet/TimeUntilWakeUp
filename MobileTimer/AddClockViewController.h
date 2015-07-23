/*
* This header is generated by classdump-dyld 0.7
* on Friday, July 10, 2015 at 1:06:26 PM Central European Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/db/stash/_.4xjUVk/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol AddClockViewControllerDelegate;
@class ClockSearchField, UILabel, NSArray, NSMutableIndexSet, NSString;

@interface AddClockViewController : UITableViewController <UISearchBarDelegate> {

	id<AddClockViewControllerDelegate> _delegate;
	ClockSearchField* _searchField;
	UILabel* _noResultsFoundLabel;
	NSArray* _cities;
	NSArray* _partitionedCities;
	NSArray* _sectionIndexTitles;
	NSMutableIndexSet* _populatedIndexSet;

}

@property (assign,nonatomic) id<AddClockViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ClockSearchField * searchField;                         //@synthesize searchField=_searchField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepopulateSuggestions;
-(void)_showNoResultsFound:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<AddClockViewControllerDelegate>)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(id<AddClockViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(ClockSearchField *)searchField;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)_dismiss;
@end

