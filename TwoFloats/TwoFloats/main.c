//
//  main.c
//  TwoFloats
//
//  Created by Jason Bruce on 1/14/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>

int main (int argc, const char * argv[])
{

    // This is my first 'Challenge' exercise creating two floats
    
    // This is float one which is its' height
    
    float height;
    
    // This is my variable for the 'height'
    
    height = 10.5;
    
    // This if float two which is it's width
    
    float width;
    
    // This is the variable for 'width'
    
    width = 5.5;
    
    // Now I'm logging height to the user
    
    printf("The wall height %f.\n", height);
           
    // Now I'm logging width to the user
           
    printf("The wall width %f.\n", width);
    
    // Now the 'area' float variable
    
    float totalArea;
    
    // Calculate the width and height to equal the total area variable
    
    totalArea = height * width;
    
    // Finally log to the user
    
    printf("The total area is equal to %f square feet.\n", totalArea);
    
    // End this function and indicate success
    
    return 0; 
    
}

