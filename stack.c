/* File        : stack.c */
/* Deskripsi   : body file untuk menangani */
/* Dibuat oleh :  faris ichsan alyawa */

#include <stdlib.h>
#include "stack.h"

void CreateStack(Stack *S)
{
    *S = NULL;
}

boolean is_Empty(Stack S)
{
    return isEmpty(S);  
}

void push(Stack *S, infotype X)
{
    address PNew;
    Create_Node(&PNew);
    Isi_Node(&PNew, X);  
    Ins_Akhir(S, PNew);  
}

void pop(Stack *S, infotype *X)
{
    if (!is_Empty(*S)) 
	{  
        Del_Akhir(S, X);  
    } 
	else 
	{
        printf("Stack Kosong.\n");
    }
}


