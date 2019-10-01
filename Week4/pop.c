#include<stdio.h>
typedef struct 
{
	int arr[3];
	int top;
}Stack;
int pop(Stack *s)
{
	if((s->top)>=0)
		return s->arr[(s->top)--];
	printf("Underload!\n");
	return -9999;
}