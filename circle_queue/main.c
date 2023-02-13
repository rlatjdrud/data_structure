#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QUEUE_SIZE 4
typedef char element;

typedef struct
{
	char cqueue[QUEUE_SIZE];
	int front,rear;
}cqueue_type;

cqueue_type* createcqueue()
{
	cqueue_type* cq = (cqueue_type*)malloc(sizeof(cqueue_type));
	cq->front=0;
	cq->rear=0;
	return cq;
}

int isempty(cqueue_type* cq)
{
	if(cq->front==cq->rear)
	{	printf("queue is empty!\n");
		return 1;
	}
	else return 0;
}

int isfull(cqueue_type* cq)
{
	if(((cq->rear+1) % QUEUE_SIZE)==cq->front)
	{
		printf("queue is full!\n");
		return 1;
	}
	else return 0;
}

void enqueue(cqueue_type* cq, element item)
{	if(isfull(cq)){exit(1);}

	cq->rear=(cq->rear+1) % QUEUE_SIZE;
	cq->cqueue[cq->rear]=item;

}

int dequeue(cqueue_type* cq)
{
	if(isempty(cq)) {exit(1);}
	else
	{
		cq->front = (cq->front+1) % QUEUE_SIZE;
	}

	return cq->cqueue[cq->front];
		
}

void delete(cqueue_type* cq)
{
	if(isempty(cq)) {exit(1);}
	else
	{
		cq->front = (cq->front+1) % QUEUE_SIZE;	
	}
}

element peek(cqueue_type* cq){
	if(isempty(cq)) {exit(1);}

	else
	{
		return cq->cqueue[(cq->front+1) % QUEUE_SIZE];

	}
}

void printcq(cqueue_type* cq){
	

	
		int i, first,last;
		first = (cq->front+1) % QUEUE_SIZE;
		last = (cq->rear+1)%QUEUE_SIZE;
		printf("\n circular queue :[");

		i = first;
	
		while(i!=last)
		{
			printf("%3c",cq->cqueue[i]);
			i=(i+1)%QUEUE_SIZE;
		}
	printf(" ]");

}

int main()
{
	cqueue_type* cq = createcqueue();
	element  data;
	enqueue(cq,'a'); printcq(cq);
	enqueue(cq,'b'); printcq(cq);
	enqueue(cq,'c'); printcq(cq);
	enqueue(cq,'D'); printcq(cq);
/*
	data = peek(cq); printf("\n peek item : %c",data);
	dequeue(cq);	 printcq(cq);
	dequeue(cq);  	 printcq(cq);
	dequeue(cq);  	 printcq(cq);
*/
	getchar();
	return 0;


}
