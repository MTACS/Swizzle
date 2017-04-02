//
//  TBSwitchCell.h
//  TBTweakViewController
//
//  Created by Tanner on 9/1/16.
//  Copyright © 2016 Tanner Bennett. All rights reserved.
//

#import "TBBaseValueCell.h"


@interface TBSwitchCell : TBBaseValueCell

@property (nonatomic, readonly) UISwitch *switchh;
@property (nonatomic, copy) void (^switchToggleAction)(BOOL on);

@end
