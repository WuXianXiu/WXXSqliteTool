//
//  WXXDataTableTool.h
//  WXXSqliteTool
//
//  Created by tim on 2018/3/27.
//  Copyright © 2018年 WuXianXiu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WXXDataTableTool : NSObject

/**
 获取表格中所有的排序后字段
 
 @param cls 类名
 @param uid 用户唯一标识
 @return 字段数组
 */
+ (NSArray *)tableSortedColumnNames:(Class)cls uid:(NSString *)uid;



+ (BOOL)isTableExists:(Class)cls uid:(NSString *)uid;

@end
