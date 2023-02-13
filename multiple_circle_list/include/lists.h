#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class LinkNode{
public : 
	LinkNode(LinkNode* pre, char* data, LinkNode* next);

	LinkNode* pre;
	char* data;
	LinkNode* next;
	
};

class linkedlist_h{
public : 
linkedlist_h(LinkNode* head);
LinkNode* head;
};

void addlastnode(linkedlist_h* L, char* data);
void printnode(linkedlist_h* L);
void deletenode(linkedlist_h* L);


