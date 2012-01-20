//
//  main.c
//  FizzBuzz
//
//  Created by Jason Bruce on 1/19/12.
//  Copyright (c) 2012 Fuimus Four. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char * argv[])
{

    int i;
    for (i = 1; i <= 100; i++) {
        printf("%d\n", i);
    }
    
    // If divisible by 3 print "Fizz"
    
    if (i % 3 == 0) {
        printf("Fizz!\n");
    }
    
    // If divisible by 5 print "Buzz"
    
    if (i % 5 == 0) {
        printf("Buzz!\n");
    }
    
    // If divisible by 3 or 5 print "FizzBuzz"
    
    if (i % 3 == 0, i % 5 == 0) {
        printf("FizzBuzz!\n");
    }
    
    return 0;
}

