//
//  Photographer+Create.m
//  Photomania
//
//  Created by easonchen on 15/8/8.
//  Copyright (c) 2015年 easonchen. All rights reserved.
//

#import "Photographer+Create.h"

@implementation Photographer (Create)

+ (Photographer *)photographerWithName:(NSString *)name inManagedObjectContext:(NSManagedObjectContext *)context
{
    Photographer *photoGrapher=nil;
    
    if ([name length]) {
        NSFetchRequest *request=[NSFetchRequest fetchRequestWithEntityName:@"Photographer"];
        request.predicate=[NSPredicate predicateWithFormat:@"name=%@",name];
        
        NSError *error;
        NSArray *matches=[context executeFetchRequest:request error:&error];
        if (!matches||error||([matches count]>1)) {
            //handle error;
        }
        else if ([matches count]){
            photoGrapher=[matches firstObject];
        }
        else{
            photoGrapher=[NSEntityDescription insertNewObjectForEntityForName:@"Photographer" inManagedObjectContext:context];
            photoGrapher.name=name;
        }
    }
    
    return photoGrapher;
}

@end
