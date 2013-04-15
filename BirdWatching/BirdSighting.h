//
//  BirdSighting.h
//  BirdWatching
//
//  Created by luyuan_mac on 13-4-15.
//  Copyright (c) 2013年 Eisoo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BirdSighting : NSObject
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, strong) NSDate *date;
-(id)initWithName:(NSString *)name location:(NSString *)location date:(NSDate *)date;
@end
