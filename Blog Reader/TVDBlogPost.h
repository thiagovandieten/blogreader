//
//  TVDBlogPost.h
//  NewBlogReader
//
//  Created by Thiago van Dieten on 04/08/14.
//  Copyright (c) 2014 Thiago van Dieten. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TVDBlogPost : NSObject

@property (strong, nonatomic) NSString *author;
@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *thumbnail;
@property (strong, nonatomic) NSString *date;
@property (strong, nonatomic) NSURL *url;
//Designated initalizer
- (id) initWithTitle:(NSString *)title;

//Convience constructor
+(id) blogPostWithTitle:(NSString *)title;

- (NSURL *)thumbnailURL;

- (NSString *)formattedDate;
@end
