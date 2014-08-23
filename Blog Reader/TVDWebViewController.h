//
//  TVDWebViewController.h
//  NewBlogReader
//
//  Created by Thiago van Dieten on 11/08/14.
//  Copyright (c) 2014 Thiago van Dieten. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TVDWebViewController : UIViewController

@property (strong, nonatomic) NSURL *blogPostURL;
@property (strong, nonatomic) IBOutlet UIWebView *webView;

@end
