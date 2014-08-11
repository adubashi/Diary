//
//  DiaryEntry.m
//  Diary
//
//  Created by Deepa Arora on 8/9/14.
//  Copyright (c) 2014 dubash. All rights reserved.
//

#import "DiaryEntry.h"


@implementation DiaryEntry

@dynamic date;
@dynamic body;
@dynamic imageData;
@dynamic mood;
@dynamic location;

- (NSString *)sectionName {
    NSDate *date = [NSDate dateWithTimeIntervalSince1970:self.date];
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:@"MMM yyyy"];
    
    return [dateFormatter stringFromDate:date];
}

@end
