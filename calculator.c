#include "calculator.h"

#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include "stack.h"
#include "queue.h"

////////////////////////////////////////////////////////////////////////////////////////
// Functions only declared and defined in this file are not
// exported by the module, i.e., are "private" and only
// recognized inside this file. Consider them as "auxiliary functions"
////////////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Converts a single digit to its integer form.
 * 
 * @param digit a char containing a digit
 * @return the corresponding integer value
 * @return -1 if 'digit' is not a digit
 */
int digit2decimal(char digit) {
    if(isdigit(digit)) {
        return (int)digit - 48; //see ascii table 
    } else {
        return -1;
    }
}

/**
 * @brief Checks whether a character represents an operator (+, -, * or /)
 * 
 * @param c the character to check
 * @return true if it is a valid operator
 * @return false if it is not a valid operator
 */
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

/**
 * @brief Computes the relative precedence of an operator.
 * 
 * If operatorPrecendence(op1) == operatorPrecendence(op2), then both
 * have the same precedence;
 * 
 * If operatorPrecendence(op1) < operatorPrecendence(op2), then op1 has
 * less precedence then op2
 * 
 * If operatorPrecendence(op1) > operatorPrecendence(op2), then op1 has
 * higher precedence over op2
 * 
 * @param op an operator
 * @return is relative precedence 
 */
int operatorPrecedence(char op) {
	if (op == '+' || op == '-')
        return 1;
    else if(op == '*' || op == '/')
        return 2;
    else
        return 0;
}

/**
 * @brief Populates a queue with the contents of a string expression.
 * 
 * The expression is wrapped in parenthesis in the resulting queue and
 * spaces are ignored.
 * 
 * @param expr an expression
 * @return the resulting queue
 */
PtQueue expr2queue(char *expr) {
    
    //TODO...

    return NULL;
}

////////////////////////////////////////////////////////////////////////////////////////
// "Public" exported functions
////////////////////////////////////////////////////////////////////////////////////////

bool isValid(char *expr) {
    if(expr == NULL) return false;

    PtStack s = stackCreate();

    bool valid = true;
    int len = strlen(expr);
    for(int i=0; i<len; i++) {
        char c = expr[i];
        if(!isdigit(c) && !isOperator(c) && c != ' ' && c != '(' && c != ')') {
            valid = false;
            break;
        }

        if(c == '(') {
            stackPush(s, c); //accepts char (subset of int)
        }

        if(c == ')') {
            int top;
            int error = stackPop(s, &top);
            if(error == STACK_EMPTY) {
                valid = false;
                break;
            }
        }
    }

    if(!stackIsEmpty(s)) {
        valid = false;
    }

    stackDestroy(&s);
    return valid;
}

char* infix2postfix(char *infixExpr) {
    PtQueue fi = expr2queue(infixExpr);
    if(fi == NULL) return NULL;

    //TODO...

    return NULL;
}

int computePostfixExpression(char *postfixExpr) {
    
    //TODO...
    
    return -1;
}