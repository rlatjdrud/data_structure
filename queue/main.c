#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Queue_size 4

typedef char element;

typedef struct 
{
	element queue[Queue_size];
	int front,rear;

}queue_type;

queue_type* createqueue()
{
	queue_type* q= (queue_type*)malloc(sizeof(queue_type));
	q->front = -1;
	q->rear = -1;
	return q;
}

int isempty(queue_type* q)
{
	if(q->front ==q-> rear)
	{
	printf("Queue is empty!\n");
	return 1;
	}

	else return 0;
}

int isfull(queue_type* q)
{
	if(q->rear==Queue_size-1)
	{
		printf("queue is full!\n");
		return 1;
	}
	else return 0;
}

void enqueue(queue_type* q, element item)
{	
	if(isfull(q))
	{	
		exit(1);
	}
	else{
	q->rear++;
	q->queue[q->rear] = item;
	}
}

element dequeue(queue_type* q)
{
	if(isempty(q))
	{
		exit(1);
	}
	else{

	q->front++;
	return q->queue[q->front];}
}

void delete(queue_type* q)
{
	if(isempty(q))
	{
		exit(1);
	}
	else
	{
		q->front++;
		
	}
}

element peek(queue_type* q)
{
	if(isempty(q))
	{
		exit(1);
	}	
	else
	{
		return q->queue[q->front+1];
	}
}

void printq(queue_type* q)
{
	if(isempty(q))
	{
		exit(1);
	}
	else
	{
	for(int i=q->front+1; i<=q->rear; i++)
	{
		printf("%c\n",q->queue[i]);

	}
}
}

int main()
{
	queue_type* q = createqueue();
	enqueue(q,'a');
	enqueue(q,'b');
	enqueue(q,'c');
	enqueue(q,'d');
	enqueue(q,'e');
	printf("%c\n",dequeue(q));
	printq(q);
	printf("%c\n",q->queue[0]);
	return 0;
}
