#include <stdio.h>
#include <stdbool.h>
#define max 5

typedef struct
{
	int arr[max];
	int top;
}stack;

void Init(stack *s)
{
	s->top = -1;
}

bool IsFull(stack *s)
{
	if(s->top==max-1)
		return true;
	else
		return false;
}

bool IsEmpty(stack *s)
{
	if(s->top==-1)
		return true;
	else
		return false;
}

void Push(stack *s, int x)
{
	if(!IsFull(s))
	{
		s->arr[++(s->top)]=x;
	}
	else
	{
		printf("Stack Overflow");
	}
}

void Pop(stack *s)
{
	if(!IsEmpty(s))
	{
		s->top--;
	}
	else
	{
		printf("Empty Stack");
	}
}

void Peek(stack *s)
{
	printf("Top element: %d\n", s->arr[s->top]);
}


int main(int argc, char **argv) // example of using the stack
{
	stack s;
	stack *p = &s;
	Init(&s);
	Push(&s,11);
	Push(&s, 12);
	Push(&s, 13);
	Push(&s, 14);
	Pop(&s);
	Pop(&s);
	for(int i=0; i<=p->top; i++)
	{
		printf("%d\n", p->arr[i]);
	}
        Peek(&s);
	return 0;
}

