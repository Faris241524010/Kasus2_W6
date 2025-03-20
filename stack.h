/* File        : stack.h */
/* Deskripsi   : header file untuk menangani stack */
/* Dibuat oleh : Faris Ichsan Alyawa */

#ifndef STACK_H
#define STACK_H

#include "boolean.h"
#include "linked.h"     

typedef address Stack;

void CreateStack(Stack *S);
boolean is_Empty(Stack S);
boolean is_Full(Stack S);
void push(Stack *S, infotype X);
void pop(Stack *S, infotype *X);

#endif

