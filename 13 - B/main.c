//
//  main.c
//  13 - B
//
//  Created by Erica Correa on 2/2/16.
//  Copyright © 2016 Turn to Tech. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {

    
//Evaluate S using n = 100 terms where S = √ 6 ∗ (1 + 1 / (2 * 2) + 1 / (3 * 3) + 1 / (4 * 4) + 1 / (5 * 5) + ... 1 / (n * n))
//Calculate the value of n above if it is given that the above sum is equal to PI to 6 decimal places.
               
    double s = 0;
    double x = 0;
    long n = 2;
    
    while (s <= 3.141592) {
        x += 1.0/(n * n);
        s = sqrt(6 * (1 + x));
        if (s >= 3.141592) {
            break;
        }
        n++;
    }
    
    printf("s is equal to %f\n", s);
    printf("n is equal to %ld\n", n);
    
    return 0;
}
