#pragma once

#include <stdbool.h>

/**
 * @brief Checks whether an expression has valid tokens and is balanced.
 * 
 * This operation checks for only valid tokens and
 * if the parenthesis are balanced.
 * 
 * @param expr expression to check
 * @return true if valid
 * @return false if not valid
 */
bool isValid(char *expr);

/**
 * @brief Convert an infix expression to its postfix form.
 * 
 * @param infix string containing the infix expression
 * @return allocated string with the converted postfix expression; 
 * @return NULL if 'infix' is malformed or invalid.
 */
char* infix2postfix(char *infixExpr);

/**
 * @brief Computes the result for a postfix expression
 * 
 * @param postfixExpr string containing a postfix expression
 * @return the calculated result;
 * @return -1 if 'postfix' is malformed or invalid.
 */
int computePostfixExpression(char *postfixExpr);