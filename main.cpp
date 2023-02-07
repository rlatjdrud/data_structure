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

void del(){
	if(top==NULL) {printf("stack is empty!\n");}
	else {
		stack* temp;	
		temp=top;
		top=top->link;
		delete temp;
	}
	
}

element pop(){
	
	if(top==NULL) {printf("stack is empty!\n");
	return -1;}
	
	else{
	element a = top->data;
	top=top->link;
	return a;
	}
}

element peek(){
	
	if(top==NULL) {printf("stack is empty!\n"); return -1;}
	else {
	return top->data;
	}
}

void printstack(){
	stack* p=top;
	while(p){
	printf("data:%d\n",p->data);	
	p=p->link;
	
}
}


int main(){
	push(1);
	push(2);
	push(3);
	printstack();
	del();
	printstack();
	element a = pop();
	printf("%d\n",a);
	printstack();
	a=peek();
	printf("%d\n",a);
return 0;

}

