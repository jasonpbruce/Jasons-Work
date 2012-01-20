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

    for (int i = 1; i <= 100; i++) {
        printf("%d\n", i);
      
    // If divisible by 3 and 5 print "FizzBuzz"
    
    if (i % 15 == 0) {
        printf("FizzBuzz!\n");
    
    else (i % 5 == 0) {
        printf("Buzz!\n");
        
    else (i % 3 == 0) {
        printf("Fizz!\n")
        
    else (i % 1 == 0) {
        printf("%d\n")
        
    }
    }    
    }
    }
    }
    
    return 0;
}
