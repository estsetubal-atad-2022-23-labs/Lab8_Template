/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief A mathematical expression calculator. 
 * @version 0.1
 * @date 2022-05-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "stack.h"
#include "input.h"
#include "calculator.h"

int main() {
    char expr[100];

    printf("### Mathematical Expression Calculator ### \n");
    printf("------------------------------------------ \n\n");
    printf("Valid tokens: 0-9, +, -, *, /, ( and ) \n\n");

    printf("Expression?: ");
    readString(expr, 100);

    if(!isValid(expr)) {
        printf("The expression has invalid tokens or is unbalanced. Quiting...\n");
        return EXIT_SUCCESS;
    }
    
    //TODO...
    
    return EXIT_SUCCESS;
}