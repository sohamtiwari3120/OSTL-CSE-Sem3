#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
	int arr[5];
	int top;
}Stack;
int isFull(Stack *s)
{
	if(((s->top)+1)<5)
		return 1;
	printf("Overload!\n");
	return 0;
}