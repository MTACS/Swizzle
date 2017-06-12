//
//  TBToolbarButton.h
//
//  Created by Rudd Fawcett on 12/3/13.
//  Copyright (c) 2013 Rudd Fawcett. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^TBToolbarAction)(NSString *buttonTitle);


@interface TBToolbarButton : UIButton

@property (nonatomic) UIKeyboardAppearance appearance;

+ (instancetype)buttonWithTitle:(NSString *)title;
+ (instancetype)buttonWithTitle:(NSString *)title action:(TBToolbarAction)eventHandler;
+ (instancetype)buttonWithTitle:(NSString *)title action:(TBToolbarAction)action forControlEvents:(UIControlEvents)controlEvents;

/// Adds the event handler for the button.
///
/// @param eventHandler The event handler block.
/// @param controlEvent The type of event.
- (void)addEventHandler:(TBToolbarAction)eventHandler forControlEvents:(UIControlEvents)controlEvents;

@end
