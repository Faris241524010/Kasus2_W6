/* File        : main.c */
/* Deskripsi   : file untuk menjalankan program konversi binary */
/* Dibuat oleh : Faris Ichsan Alyawa */

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Stack tempS; 
	int des, tempB;
	
	CreateStack (&tempS);
	
	printf("Masukkan angka desimal: ");
	scanf("%d", &des);
	while (des != 0) {
		push (&tempS, des % 2);
		des = des / 2;
	}
	
	printf("Hasil konversi ke Binary: ");
	while (!is_Empty(tempS)) {
		pop (&tempS, &tempB);
		printf("%d", tempB);
	}
	
	printf("\n");
	return 0;
}
