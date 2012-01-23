//
//  main.c
//  BMICalc
//
//  Created by Jason Bruce on 1/21/12.
//  Copyright (c) 2012 Fuimus Four. All rights reserved.
//

#include <stdio.h>

// Here is the declaration of the type Person

typedef struct {
    float heightInFeet;
    int weightInPounds;
} Person;

float bodyMassIndex(Person p) {
    return p.weightInPounds / (p.heightInFeet * p.heightInFeet);
}

int main(int argc, const char * argv[]) {
    Person person;
    person.weightInPounds = 190;
    person.heightInFeet = 6.1;
    float bmi = bodyMassIndex(person);
    printf("person has a BMI of %.2f\n", bmi);
    
    return 0;
    
}