//
//  PBModel.h
//  CorePhotoBroswerVC
//
//  Created by 成林 on 15/5/4.
//  Copyright (c) 2015年 冯成林. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface PhotoModel : NSObject

/** mid，保存图片缓存唯一标识，必须传 */
@property (nonatomic,assign) NSUInteger mid;




/*
 *  网络图片
 */

/** 缩略图地址 */
@property (nonatomic,copy) NSString *image_thumb_U;

/** 高清图地址 */
@property (nonatomic,copy) NSString *image_HD_U;



/*
 *  本地图片
 */
@property (nonatomic,strong) UIImage *image;









/** 标题 */
@property (nonatomic,copy) NSString *title;

/** 描述 */
@property (nonatomic,copy) NSString *desc;








/*
 *  检查数组合法性
 */
+(BOOL)check:(NSArray *)photoModels;



/**
 *  读取
 *
 *  @return 是否已经保存到本地
 */
-(BOOL)read;



/*
 *  保存
 */
-(void)save;





@end
