#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char element;

class dqnode 
{
public : 
	dqnode(element data, dqnode* pre, dqnode* next);
	
	element data;
	dqnode* pre;
	dqnode* next;
};

class dqtype
{
public : 
	dqtype(dqnode* front, dqnode* rear);

	dqnode* front;
	dqnode* rear;
};

dqtype* createdqnode();

int isempty(dqtype* dq);


void insertfront(dqtype* dq,element data);


void insertrear(dqtype* dq,element data);

element deletefront(dqtype* dq);

element deleterear(dqtype* dq);


element peekfront(dqtype* dq);

element peekrear(dqtype* dq);

void printdq(dqtype* dq);

