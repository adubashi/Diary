//
//  EntryCell.h
//  Diary
//
//  Created by Deepa Arora on 8/10/14.
//  Copyright (c) 2014 dubash. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DiaryEntry;

@interface EntryCell : UITableViewCell

+ (CGFloat)heightForEntry:(DiaryEntry *)entry;

- (void)configureCellForEntry:(DiaryEntry *)entry;

@end
