#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num = 0, i, j;
	printf("Enter Number : ");
	scanf("%d", &num);
	for (i = 1; i < num * 2; i++) {
		for (j = 1; j < num * 2; j++) {
			//printf("(%d,%d)",j,i);
			if (j >= i && i <= num && j <= num) 				printf("*");
			else if (j + i <= num * 2 && i<num && j>num) 		printf("*");
			else if (i >= j && i > num && j >= num) 			printf("*");
			else if (j + i >= num * 2 && i > num && j < num) 	printf("*");
			else 												printf(" ");
		}
		printf("\n");
	}
	return 0;
}