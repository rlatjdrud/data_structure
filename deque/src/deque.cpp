#include "deque.h"


	dqnode::dqnode(element data, dqnode* pre, dqnode* next)
	{
		this->data = data;
		this->pre = pre;
		this->next = next;
	}


	dqtype::dqtype(dqnode* front, dqnode* rear)
	{
		this->front = front;
		this->rear = rear;
	}



dqtype* createdqnode()
{
	dqtype* dq = new dqtype(NULL,NULL);
	return dq;
}

int isempty(dqtype* dq)
{
	if(dq->front == NULL)
	{	printf("\n linked queue is empty! \n");
		return 1;
	}
	else return 0;
}

void insertfront(dqtype* dq,element data)
{
	dqnode* newnode = new dqnode(data,NULL,NULL);
	if(isempty(dq))
	{
		dq->front = newnode;
		dq->rear = newnode;
	}
	else
	{	
		newnode->next=dq->front;
		newnode->pre = NULL;
		dq->front->pre=newnode;
		dq->front=newnode;

	}
}

void insertrear(dqtype* dq,element data)
{	dqnode* newnode = new dqnode(data,NULL,NULL);
	if(isempty(dq))
	{
		dq->front = newnode;
		dq->rear = newnode;
	}
	else
	{
		newnode->pre = dq->rear;
		newnode->next = NULL;
		dq->rear->next = newnode;
		dq->rear = newnode;
	}
}

element deletefront(dqtype* dq)
{	
	element item;
	if(isempty(dq))
	{
		return 0;
	}
	else {
	dqnode* old = dq->front;
	item=old->data;
	if(dq->front->next==NULL)
	{
		dq->front = NULL;
		dq->rear = NULL;
	}
	else
	{
	dq->front = dq->front->next;
	dq->front->pre=NULL;
	delete old;
	}
	}
	return item;
}

element deleterear(dqtype* dq)
{	element item;
	dqnode* old = dq->rear;
	if(isempty(dq))
	{
		return 0;
	}
	
	else
	{	
		
		item = old->data;
		if(dq->rear->pre == NULL)
		{
			dq->front=NULL;
			dq->rear=NULL;
		}
		else
		{
			dq->rear = dq->rear->pre;
			dq->rear->next=NULL;
		}
	
	}
delete old;
	return item;	
}

element peekfront(dqtype* dq)
{
	if(isempty)
	{
		return 0;
	}
	else return dq->front->data;
}

element peekrear(dqtype* dq)
{
	if(isempty)
	{
		return 0;
	}
	else return dq->rear->data;
}

void printdq(dqtype* dq)
{
	dqnode* p = dq->front;
	if(isempty(dq))
	{
		exit(1);
	}

	else
	{	printf("[ ");
		while(p->next!=NULL)
		{
		printf("%c",p->data);
		p=p->next;
		}
		printf("%c",p->data);
		printf("]\n");
	}
}
