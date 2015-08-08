//
//  Photographer+Create.h
//  Photomania
//
//  Created by easonchen on 15/8/8.
//  Copyright (c) 2015年 easonchen. All rights reserved.
//

#import "Photographer.h"

@interface Photographer (Create)

+ (Photographer *)photographerWithName:(NSString *)name inManagedObjectContext:(NSManagedObjectContext *)context;

@end
