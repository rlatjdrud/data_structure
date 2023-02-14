#include <lqueue.h>


qnode::qnode(qnode* link, element item)
	{
		this->link=link;
		this->item=item;
	}




lqueuetype::lqueuetype(qnode* front,qnode* rear)
	{
		this->front=front;
		this->rear = rear;
	}

lqueuetype* createlinkedqueue()
{
	lqueuetype* lq = new lqueuetype(NULL,NULL);
	return lq;
}

int isempty(lqueuetype* lq)
{
	if(lq->front==NULL)
	{printf("node is empty!\n"); return 1;}
	else return 0;
}

void enqueue(lqueuetype* lq,char item)
{	qnode *newnode = new qnode(NULL,item);
	if(lq->front==NULL)
	{
		lq->front=newnode;
		lq->rear= newnode;
	}

	else
	{
		lq->rear->link = newnode;
		lq->rear = newnode;
	}
}

void del(lqueuetype* lq)
{
	if(isempty(lq))
	{
		exit(1);
	}
	else
	{	qnode* old = lq->front;
		lq->front = lq->front->link;
		if(lq->front==NULL)
		{
			lq->rear=NULL;
		}
		delete old;
	}
}

element dequeue(lqueuetype* lq)
{
	if(isempty(lq))
	{
		exit(1);
	}
	else
	{
		qnode* old = lq->front;
		lq->front = lq->front->link;
		delete old;
		if(lq->front == NULL)
		{
			lq->rear=NULL;
		}
	}
}

element peek(lqueuetype* lq)
{	
	if(isempty(lq)){exit(1);}
	return lq->front->item;
}

void printlq(lqueuetype* lq)
{
	if(isempty(lq)){exit(1);}
	else
	{
		while(lq->front != lq->rear)
		{
			printf("%c\n",lq->front->item);
			lq->front=lq->front->link;
		}
			printf("%c\n",lq->front->item);

	
	}
}

