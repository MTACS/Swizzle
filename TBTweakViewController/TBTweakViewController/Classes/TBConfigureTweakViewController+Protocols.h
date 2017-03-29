//
//  TBConfigureTweakViewController+Protocols.h
//  TBTweakViewController
//
//  Created by Tanner on 9/1/16.
//  Copyright © 2016 Tanner Bennett. All rights reserved.
//

#import "TBConfigureTweakViewController.h"
#import "TBTweakTypeSectionController.h"
#import "TBValueSectionController.h"


@interface TBConfigureTweakViewController (Protocols)
<TBTweakTypeSectionDelegate, TBValueSectionDelegate>

- (void)configureTableViewForCellReuseAndAutomaticRowHeight;

@end
