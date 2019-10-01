#include<stdio.h>
#include<stdlib.h>
#include "lib.h"
// typedef struct 
// {
// 	int arr[5];
// 	int top;
// }Stack;

// int isFull(Stack *s)
// {
// 	if(((s->top)+1)<5)
// 		return 1;
// 	printf("Overload!\n");
// 	return 0;
// }
// int isEmpty(Stack *s)
// {
// 	if((s->top)>=0)
// 		return 1;
// 	printf("Underload!\n");
// 	return 0;
// }
// void push(Stack *s,int n)
// {
// 	if(isFull(s))
// 		s->arr[++(s->top)]=n;
// 	return;
// }
// int pop(Stack *s)
// {
// 	if(isEmpty(s))
// 		return s->arr[(s->top)--];
// 	return -9999;
// }
void display(Stack s)
{
	int i=0;
	for(i=0;i<=s.top;i++)
		printf("%d ",s.arr[i]);
	printf("\n");
}
int main(int argc, char const *argv[])
{
	int choice;
	Stack s;
	s.top=-1;
	int n;
	do
	{
		printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
		printf("Enter your choice below!\n");
		scanf(" %d",&choice);
		switch(choice)
		{
			case 1:
			printf("Enter the number below!\n");
			scanf(" %d",&n);
			push(&s,n);
			break;
			case 2:
			n=pop(&s);
			if(n!=-9999)
				printf("The number returned is: %d\n",n );
			break;
			case 3:
			display(s);
			break;
			case 4:
			printf("Bye bye!\n");
			break;
			default:
			printf("Invalid option entered! Please enter a value between 1-4!\n");
		}
	}
	while(choice!=4);
	
	return 0;
}