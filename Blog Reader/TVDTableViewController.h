//
//  TVDTableViewController.h
//  NewBlogReader
//
//  Created by Thiago van Dieten on 30/07/14.
//  Copyright (c) 2014 Thiago van Dieten. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TVDTableViewController : UITableViewController

@property(strong, nonatomic) NSMutableArray *blogPosts;
@property(weak, nonatomic) NSDictionary *dataDictionary;

-(void) makeRequestToJSONAPIWithURL:(NSURL *)url;

-(void)insertBlogPosts:(NSDictionary *)blogPosts;
@end
