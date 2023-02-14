#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef char element;

class qnode
{
public : 
	qnode(qnode* link, element item);

qnode* link;
char item;
};

class lqueuetype
{
public:
	lqueuetype(qnode* front,qnode* rear);

qnode* front;
qnode* rear;
};


lqueuetype* createlinkedqueue();
int isempty(lqueuetype* lq);
void enqueue(lqueuetype* lq,char item);
void del(lqueuetype* lq);
element dequeue(lqueuetype* lq);
element peek(lqueuetype* lq);
void printlq(lqueuetype* lq);



