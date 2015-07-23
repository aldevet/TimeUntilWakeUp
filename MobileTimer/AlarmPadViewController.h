/*
* This header is generated by classdump-dyld 0.7
* on Friday, July 10, 2015 at 1:06:27 PM Central European Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/db/stash/_.4xjUVk/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <MobileTimer/EditAlarmViewControllerDelegate.h>
#import <MobileTimer/AlarmDelegate.h>
#import <MobileTimer/AlarmActiveDelegate.h>
#import <MobileTimer/StateManagement.h>

@class UIPopoverController, EditAlarmViewController, AlarmCollectionEditController, UILongPressGestureRecognizer, Alarm, CADisplayLink, NSString;

@interface AlarmPadViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIPopoverControllerDelegate, UIGestureRecognizerDelegate, EditAlarmViewControllerDelegate, AlarmDelegate, AlarmActiveDelegate, StateManagement> {

	UIPopoverController* _addOrEditPopover;
	EditAlarmViewController* _addController;
	AlarmCollectionEditController* _editListController;
	CGRect _previousAlarmsViewport;
	UILongPressGestureRecognizer* _alarmDragRecognizer;
	Alarm* _draggingAlarm;
	CADisplayLink* _dragScrollDisplayLink;
	BOOL _dragScrollingUp;
	double _dragScrollTimestamp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)activeChangedForAlarm:(id)arg1 active:(BOOL)arg2 ;
-(void)showAddView;
-(void)dismissAddViewController:(id)arg1 ;
-(void)didEditAlarm:(id)arg1 ;
-(void)didDeleteAlarm:(id)arg1 ;
-(void)didSuspend;
-(id)selectedAlarm;
-(void)refreshButtonStates;
-(void)showEditView;
-(void)selectAlarm:(id)arg1 scroll:(BOOL)arg2 ;
-(void)handleAlarmDrag:(id)arg1 ;
-(void)beginAlarmDrag;
-(void)updateAlarmDrag;
-(void)endAlarmDragAndSave:(BOOL)arg1 ;
-(void)scrollAlarmSchedule:(id)arg1 ;
-(void)commitAddOrEditOperation;
-(void)cleanUpPopover;
-(void)saveState;
-(void)dealloc;
-(id)init;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(id)contentView;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)viewDidUnload;
-(id)defaultPNGName;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(BOOL)popoverControllerShouldDismissPopover:(id)arg1 ;
-(void)reloadState;
-(void)alarmDidUpdate:(id)arg1 ;
@end

