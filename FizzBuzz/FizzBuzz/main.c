//
//  main.c
//  FizzBuzz
//
//  Created by Jason Bruce on 1/19/12.
//  Copyright (c) 2012 Fuimus Four. All rights reserved.
//

#include <stdio.h>

int main (int argc, const char * argv[]) {

    for (int i = 1; i <= 100; i++) {
    
        if (i % 15 == 0) {
            printf("FizzBuzz!\n");
            
        } else if (i % 5 == 0) {
            printf("Buzz!\n");
           
        } else if (i % 3 == 0) {
            printf("Fizz!\n");
            
        } else {
            printf("%d\n", i);
        }
        
        printf("End of loop\n");
    }
     
    return 0;
}