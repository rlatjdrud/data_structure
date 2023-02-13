#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class LinkNode{
public : 


	LinkNode(LinkNode* pre, char* data, LinkNode* next)
	{
	this->pre = pre;
	this->data = data;
	this->next = next;
	}

	LinkNode* pre;
	char* data;
	LinkNode* next;
	
};

class linkedlist_h{
public : 
linkedlist_h(LinkNode* head)
{
			this->head =head;
}

LinkNode* head;
};


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

int main(int argc, char* argv[])
{
	linkedlist_h* L = new linkedlist_h(NULL);
	addlastnode(L,argv[1]);
	addlastnode(L,argv[2]);
	deletenode(L);
	printnode(L);
	addlastnode(L,argv[2]);
	printnode(L);


	return 0;
	
}
