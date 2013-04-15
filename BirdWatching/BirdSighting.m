//
//  BirdSighting.m
//  BirdWatching
//
//  Created by luyuan_mac on 13-4-15.
//  Copyright (c) 2013年 Eisoo Inc. All rights reserved.
//

#import "BirdSighting.h"

@implementation BirdSighting
-(id)initWithName:(NSString *)name location:(NSString *)location date:(NSDate *)date {
    self = [super init];
    if (self) {
        _name = name;
        _location = location;
        _date = date;
        return self;
    }
    return nil;

}
@end
