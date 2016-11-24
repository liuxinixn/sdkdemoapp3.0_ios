//
//  EMConfAddUserCell.h
//  ChatDemo-UI3.0
//
//  Created by XieYajie on 23/11/2016.
//  Copyright © 2016 XieYajie. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol EMConfAddUserCellDelegate <NSObject>

@optional

- (void)checkUserAction:(NSString *)aUsername;

@end

@interface EMConfAddUserCell : UITableViewCell

@property (weak, nonatomic) id<EMConfAddUserCellDelegate> delegate;

@property (weak, nonatomic) IBOutlet UIImageView *imgView;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UIButton *checkButton;

@end
