//
//  main.m
//  Chapter 15 Challenge
//
//  Created by Jason Bruce on 2/15/12.
//  Copyright (c) 2012 Fuimus Four. All rights reserved.
//

#import <Foundation/Foundation.h>

int main (int argc, const char * argv[])
{

    @autoreleasepool {
        
        // Create an empty array
        NSMutableArray *groceryList = [NSMutableArray array];
        
        // Add the items to the array
        [groceryList addObject:eggs];
        [groceryList addObject:bacon];
        [groceryList addObject:milk];
        [groceryList addObject:salt];
        [groceryList addObject:bread];
        
        for (NSMutableArray *d in groceryList)
            NSLog(@"Here is the grocery list: %@", d);
        
        
    }
    return 0;
}

