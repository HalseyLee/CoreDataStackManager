//
//  CoreStackManager.h
//  手动创建CoreDataStack
//
//  Created by Halsey on on 5/3/16.
//  Copyright © 2016 Halsey. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
//单例对象
#define KCoreStackManager [CoreStackManager sharedInstance]
//对象名
#define kFileName @"sqlit"

@interface LHCoreDataStackManager : NSObject

//单例实现
+(LHCoreDataStackManager *)sharedInstance;

//管理对象上下文
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

//模型对象
@property (strong, nonatomic) NSManagedObjectModel *managedObjectModel;

//存储器
@property (strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

//保存
- (void)save;

//清除数据库
- (void)deleteAllEntities;

//获取文档保存路径
- (NSURL *)getDocumentUrlPath;

@end
