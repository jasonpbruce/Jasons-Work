//
//  main.c
//  Addresses
//
//  Created by Jason Bruce on 1/19/12.
//  Copyright (c) 2012 Fuimus Four. All rights reserved.
//

#include <stdio.h>

int main (int argc, const char * argv[])
{

    int i;
    int *addressOfI = &i;
    printf("I store its value at %p\n", addressOfI);
    printf("I store its value at %p\n", &i);
    printf("The int of addressOfI is %d\n", *addressOfI);
    *addressOfI = 89;
    printf("Now i is %d\n", i);
    printf("An int is %zu bytes\n", sizeof(int));
    printf("A pointer is %zu bytes\n", sizeof(int*));
    printf("This function starts at %p\n", main);
    return 0;
}

