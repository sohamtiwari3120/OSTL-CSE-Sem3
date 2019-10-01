#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
	int arr[5];
	int top;
}Stack;
int isEmpty(Stack *s)
{
	if((s->top)>=0)
		return 1;
	printf("Underload!\n");
	return 0;
}