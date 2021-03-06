//
//  SubCategoryModel.h
//  WolfFriend
//
//  Created by Jiang Chuncheng on 8/11/13.
//  Copyright (c) 2013 SenseForce. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ArticleModel.h"

@interface SubCategoryModel : NSObject

@property (nonatomic, assign) NSInteger categoryId;
@property (nonatomic, copy) NSString *categoryTitle;

@property (nonatomic, strong) NSMutableArray *articles;

@end
