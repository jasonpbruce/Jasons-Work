//
//  main.c
//  Challenge 4
//
//  Created by Jason Bruce on 1/16/12.
//  Copyright (c) 2012 Fuimus Four. All rights reserved.
//

#include <stdio.h>

int main (int argc, const char * argv[])
{
    /**
     *   we declare i as an int and set it to 99, then each loop is going to 
     *   see if i is greater than or equal to 0, if not it will break, also on 
     *   each loop it is going to subtract 3 from i each loop.  
     *   So starts at 99 and stops at 0.
     */
    for (int i = 99; i >= 0; i = i - 3) {
        printf("%d\n", i);
        
        // If divisible by 5 print out found one
        if (i % 5 == 0) {
            printf("Found one!\n");
        }
    }

//    int i;
//    for (i = 0; i < 99; i--)
//        if (1 % 3 == 0) {
//            continue;
//        }
//    {
//        printf("Counting Down = %d\n", i);
//        i--;
//        
//        return 0;
//    }
    
    return 0;
}