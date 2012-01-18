//
//  main.c
//  Numbers
//
//  Created by Jason Bruce on 1/16/12.
//  Copyright (c) 2012 Fuimus Four. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h> //Need to include this for abs function

int main (int argc, const char * argv[])
{

    double y = 12345.6789;
    printf("y is %.2f\n", y);
    printf("y is %.2e\n", y);
    printf("3 * 3 + 5 * 2 = %d\n", 3 * 3 + 5 * 2);
    printf("11 / 3 = %d remainder of %d \n", 11 / 3, 11 % 3);
    printf("11 / 3.0 = %f\n", (float)3);
    printf("The absolute value of -5 is %d\n", abs(-5));
           
    
    return 0;
}

