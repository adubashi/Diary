//
//  CoreDataStack.h
//  Diary
//
//  Created by Deepa Arora on 8/9/14.
//  Copyright (c) 2014 dubash. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CoreDataStack : NSObject

+(instancetype)defaultStack;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
