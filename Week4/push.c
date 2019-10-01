#include<stdio.h>
typedef struct 
{
	int arr[3];
	int top;
}Stack;
void push(Stack *s,int n)
{
	if((s->top)+1<3)
		s->arr[++(s->top)]=n;
	else
		printf("Overload!\n");
	return;
}