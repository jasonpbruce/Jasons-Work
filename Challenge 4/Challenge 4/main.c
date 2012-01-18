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

    int i;
    for (i = 0; i < 99; i--)
        if (1 % 3 == 0) {
            continue;
        }
    {
        printf("Counting Down = %d\n", i);
        i--;
        
        return 0;
    }
}