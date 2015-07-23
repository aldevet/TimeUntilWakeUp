/*
* This header is generated by classdump-dyld 0.7
* on Friday, July 10, 2015 at 1:06:26 PM Central European Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/db/stash/_.4xjUVk/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <MobileTimer/PagingLandscapeCollectionViewController.h>
#import <MobileTimer/StateManagement.h>
#import <MobileTimer/AddClockViewControllerDelegate.h>

@class FullScreenSmallClockCollectionController, MapCollectionCell, NSTimer, WorldClockCollectionEditController;

@interface WorldClockViewController : PagingLandscapeCollectionViewController <StateManagement, AddClockViewControllerDelegate> {

	long long _clockStyle;
	FullScreenSmallClockCollectionController* _fullScreenClocksController;
	MapCollectionCell* _mapCollectionCell;
	UIEdgeInsets _mapCollectionCellPadding;
	NSTimer* _weatherUpdateTimer;
	BOOL _networkReachable;
	WorldClockCollectionEditController* _collectionEditController;

}
-(void)dismissFullScreenClock;
-(void)pagingCollectionViewDidLoad;
-(void)saveScrollPoint;
-(void)showAddView;
-(id)noItemsText;
-(float)itemsTableRowHeight;
-(id)addViewController;
-(void)stopWeatherUpdates;
-(void)_dismissEditController:(id)arg1 ;
-(void)updateMapWeatherDataForAllCities;
-(void)reachabilityChanged:(id)arg1 ;
-(void)updateMapWeatherDataForCities:(id)arg1 ;
-(void)pagingCollectionViewDidAppear;
-(void)startWeatherUpdates;
-(void)pagingCollectionViewDidDisappear;
-(id)pagingCollectionViewRotationBackgroundColor;
-(void)toggleClockMode;
-(void)presentFullScreenClockForIndexPath:(id)arg1 afterDelay:(double)arg2 ;
-(BOOL)shouldPresentFullScreenClock;
-(void)presentFullScreenClockForIndexPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addClockViewController:(id)arg1 addCity:(id)arg2 ;
-(void)weatherTemperatureUnitsDidChange;
-(void)collectionEditController:(id)arg1 removeCityAtIndex:(unsigned long long)arg2 ;
-(void)collectionEditController:(id)arg1 moveCityAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)saveState;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)defaultPNGName;
-(long long)numberOfItems;
-(void)reloadState;
@end
