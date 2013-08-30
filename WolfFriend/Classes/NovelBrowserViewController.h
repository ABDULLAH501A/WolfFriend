//
//  NovelBrowserViewController.h
//  WolfFriend
//
//  Created by Jiang Chuncheng on 8/21/11.
//  Copyright 2011 SenseForce. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIViewController+Extension.h"
#import "ArticleModel.h"

@interface NovelBrowserViewController : UIViewController <UIWebViewDelegate, UIAlertViewDelegate> {
    
}

- (id)initWithArticle:(ArticleModel *)articleModel;

- (void)resetUI:(id)arg;

@end
