//
//  JAObjectListView.h
//  JAListView
//
//  Created by Josh Abernathy on 12/6/10.
//  Copyright 2010 Maybe Apps. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "JASectionedListView.h"

@class JAObjectListViewItem;


@interface JAObjectListView : JASectionedListView <JASectionedListViewDataSource> {}

- (void)addListViewItem:(JAObjectListViewItem *)view inSection:(NSUInteger)section atIndex:(NSUInteger)index;
- (void)addListViewItem:(JAObjectListViewItem *)view inSection:(NSUInteger)section;
- (void)removeListViewItemInSection:(NSUInteger)section atIndex:(NSUInteger)index;

- (void)addListViewItem:(JAObjectListViewItem *)view forHeaderForSection:(NSUInteger)section;
- (void)removeListViewItemForHeaderForSection:(NSUInteger)section;

- (void)removeListViewItem:(JAObjectListViewItem *)view;
- (void)removeAllListViewItems;
- (NSArray *)viewsInSection:(NSUInteger)section;
- (NSUInteger)numberOfSections;

- (JAObjectListViewItem *)viewItemForObject:(id)object;
- (NSIndexPath *)indexPathForObject:(id)object;

@end
