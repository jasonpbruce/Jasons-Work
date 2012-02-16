//
//  Person.m
//  BMITime
//
//  Created by Jason Bruce on 2/15/12.
//  Copyright (c) 2012 Fuimus Four. All rights reserved.
//

#import "Person.h"

@implementation Person

@synthesize heightInMeters, weightInKilos;

- (float)bodyMassIndex
{
    float h = [self heightInMeters];
    return [self weightInKilos] / (h * h);
}

@end
