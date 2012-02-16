//
//  main.m
//  BMITime
//
//  Created by Jason Bruce on 2/15/12.
//  Copyright (c) 2012 Fuimus Four. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"

int main (int argc, const char * argv[])
{

    @autoreleasepool {
        
        // Create an instance of Person
        Person *person = [[Person alloc] init];
        
        // Give the instance variables interesting values
        [person setWeightInKilos:96];
        [person setHeightInMeters:1.8];
        
        // Call the bodyMassIndex method
        float bmi = [person bodyMassIndex];
        NSLog(@"person (%d, %f) has a BMI of %f",
              [person weightInKilos], [person heightInMeters], bmi);
        
    }
    return 0;
}

