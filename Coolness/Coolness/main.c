//
//  main.c
//  Coolness
//
//  Created by Jason Bruce on 1/16/12.
//  Copyright (c) 2012 Fuimus Four. All rights reserved.
//

#include <stdio.h>

int main (int argc, const char * argv[])
{

    int i;
    for (i = 0; i < 12; i++) {
        if (i % 3 == 0) {
            continue;
        }
    printf("Check i = %d\n", i);
        if (i + 90 == i * i) {
            break;
        }
        
    }
    printf("The answer is %d.\n", i);
    return 0;
}