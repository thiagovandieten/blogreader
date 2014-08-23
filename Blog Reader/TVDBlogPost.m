//
//  TVDBlogPost.m
//  NewBlogReader
//
//  Created by Thiago van Dieten on 04/08/14.
//  Copyright (c) 2014 Thiago van Dieten. All rights reserved.
//

#import "TVDBlogPost.h"

@implementation TVDBlogPost

- (id) initWithTitle:(NSString *)title {
    self = [super init];
    
    if (self) {
        self.title = title;
        self.author = nil;
        self.thumbnail = nil;
    }
    
    return self;
}

+(id) blogPostWithTitle:(NSString *)title {
 
    return [[self alloc] initWithTitle:title];
    
}

#pragma mark - thumbnail methods

- (NSURL *)thumbnailURL {
    return [NSURL URLWithString:self.thumbnail];
}

#pragma mark - date methods

- (NSString *)formattedDate {
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:@"yyyy-MM-dd HH:mm:ss"];
    NSDate *tempDate = [dateFormatter dateFromString:self.date];
    
    [dateFormatter setDateFormat:@"EE MMM, dd"];
    return [dateFormatter stringFromDate:tempDate];
}

@end
