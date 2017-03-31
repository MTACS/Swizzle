//
//  UITableView+Convenience.m
//  TBTweakViewController
//
//  Created by Tanner on 3/9/17.
//  Copyright © 2017 Tanner Bennett. All rights reserved.
//

#import "UITableView+Convenience.h"
#import "TBBaseValueCell.h"

@implementation UITableView (Convenience)

- (void)registerCell:(Class)cellClass {
    [self registerClass:cellClass forCellReuseIdentifier:[cellClass reuseID]];
}

- (void)registerCells:(NSArray<Class> *)classes {
    for (Class cls in classes) {
        [self registerClass:cls forCellReuseIdentifier:[cls reuseID]];
    }
}


- (void)reloadSection:(NSUInteger)section {
    [self reloadSections:[NSIndexSet indexSetWithIndex:section] withRowAnimation:UITableViewRowAnimationFade];
}

- (void)reloadSection:(NSUInteger)section withRowAnimation:(UITableViewRowAnimation)animation {
    [self reloadSections:[NSIndexSet indexSetWithIndex:section] withRowAnimation:animation];
}

- (void)insertSection:(NSUInteger)section {
    [self insertSections:[NSIndexSet indexSetWithIndex:section] withRowAnimation:UITableViewRowAnimationFade];
}

- (void)deleteSection:(NSUInteger)section {
    [self deleteSections:[NSIndexSet indexSetWithIndex:section] withRowAnimation:UITableViewRowAnimationFade];
}

- (void)deselectSelectedRow {
    [self deselectRowAtIndexPath:self.indexPathForSelectedRow animated:YES];
}

@end
