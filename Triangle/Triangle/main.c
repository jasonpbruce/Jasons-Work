//
//  main.c
//  Triangle
//
//  Created by Jason Bruce on 1/14/12.
//  Copyright (c) 2012 Fuimus Four. All rights reserved.
//

#include <stdio.h>

float remainingAngle(float a, float b);
void pIt(float remainingAngle);

// Challenge Two - Triangle

// You can ignore this warning for now.
float remainingAngle(float a, float b)
{
    float resultingAngle = 180 - (a + b);
    return resultingAngle;
    
}

// A Function to "print it" easiliy
void pIt(float remainingAngle) {
    printf("The third angle is %.4f\n", remainingAngle);
}

int main (int argc, const char * argv[])
{

//    float angleA = 30.0;
//    float angleB = 60.0;
    float angleC = remainingAngle(30.0, 60.0);
    pIt(angleC);
    
    // pIt does this: printf("The third angle is %f.2\n", angleC);
    
    angleC = remainingAngle(10.0, 20.0);
    pIt(angleC);
    
    angleC = remainingAngle(90.0, 90.0);
    pIt(angleC);
    

    
    return 0;
}

// ok
