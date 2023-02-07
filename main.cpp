#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int element;

class stack{
public : 
	stack(element data, stack* link){
	this->data = data;
	this->link = link;

}

	element data;
	stack* link;
	
};

stack* top=NULL;


void push(element item){

	stack* node = new stack(item,top);
	top=node;

}

void printstack(){
	while(top->link!=NULL){
	printf("data:%d\n",top->data);	
	top=top->link;
}
	printf("data:%d\n",top->data);	
	
}

int main(){
	push(1);
 	printstack();
return 0;

}

