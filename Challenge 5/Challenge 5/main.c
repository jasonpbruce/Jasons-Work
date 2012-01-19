//
//  main.c
//  Challenge 5
//
//  Created by Jason Bruce on 1/19/12.
//  Copyright (c) 2012 Fuimus Four. All rights reserved.
//

#include <stdio.h>

int main (int argc, const char * argv[])
{

    int i = 0;
    int *floatBytes = &i;
    printf("A float uses %zu bytes of memory.\n", sizeof(*floatBytes));
    return 0;
    
}

