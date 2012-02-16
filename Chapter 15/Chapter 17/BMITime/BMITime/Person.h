//
//  Person.h
//  BMITime
//
//  Created by Jason Bruce on 2/15/12.
//  Copyright (c) 2012 Fuimus Four. All rights reserved.
//

#import <Foundation/Foundation.h>

// The class Person inherits all the instance variables
// and methods defined by the class NSObject
@interface Person : NSObject
{
    // It has two instance variables
    float heightInMeters;
    int weightInKilos;
}
@property float heightInMeters;
@property int weightInKilos;

// You will be able to set those instance variables using these methods
- (float)heightInMeters;
- (void)setHeightInMeters:(float)h;
- (int)weightInKilos;
- (void)setWeightInKilos:(int)w;

// This method calculates the Body Mas Index
- (float)bodyMassIndex;
@end
