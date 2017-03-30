//
//  TBBaseValueCell.h
//  TBTweakViewController
//
//  Created by Tanner on 8/26/16.
//  Copyright © 2016 Tanner Bennett. All rights reserved.
//

#import "TBTableViewCell.h"
#import "TBValue.h"
#import "TBValueCoordinator.h"


/// Used by the view controller to resize a cell?
@protocol TBTextViewCellResizing <NSObject>
- (void)textViewDidChange:(UITextView *)textView cell:(UITableViewCell *)cell;
@end

/// Delegate of value cells to make retreiving
/// responders and values easier.
@protocol TBValueCellDelegate <TBTextViewCellResizing>

/// i.e. the text field where the value is being entered
@property (nonatomic) UIResponder *currentResponder;
@property (nonatomic, readonly) TBValueCoordinator *coordinator;

@end


@interface TBBaseValueCell : TBTableViewCell

@property (nonatomic, weak) id<TBValueCellDelegate> delegate;

- (void)describeValue:(TBValue *)value;

@end
