#include "lists.h"

LinkNode::LinkNode(LinkNode* pre, char* data, LinkNode* next)
{
this->pre = pre;
this->data = data;
this->next = next;
}

linkedlist_h::linkedlist_h(LinkNode* head)
{
this->head =head;
}

void addlastnode(linkedlist_h* L, char* data)
{	
	LinkNode* newnode =  new LinkNode(NULL,data,NULL);
	if(L->head == NULL)
	{
		L-> head = newnode;
		newnode->pre = NULL;
		newnode->next = L->head;
	}

	else
	{	
		LinkNode* p = L->head;
		while(p->next != L->head)
		{
			p = p->next;
		}
		p->next=newnode;
		newnode->pre = p;
		newnode->next = L->head;
	}
}

void printnode(linkedlist_h* L)
{
	if(L->head==NULL){printf("not exist data\n");}
	else
	{
		LinkNode* p = L->head;
		while(p->next!=L->head)
		{	
			printf("%s\n",p->data);
			p=p->next;
		}
		
			printf("%s\n",p->data);
	}
}

void deletenode(linkedlist_h* L)
{
	if(L->head == NULL)
	{
		printf("not exist data\n");
	}

	else
	{
		LinkNode* p = L->head;
		while(p->next!=L->head)
		{
			p=p->next;
		}
		p->pre->next=L->head;
		delete p;

	}
}

