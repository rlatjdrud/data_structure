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

int postfix(char* exp){
	
	int length=strlen(exp);
	char word=NULL;
	int value=0;
	int opr1,opr2;
	for(int i=0; i<length; i++){
		word = exp[i];
		
		if((word!='*') && (word!='/') && (word!='+')&& (word!='-')){
			value = word-'0';
			push(value);	
		
		}
		else {
			int opr2 = pop();
			int opr1 = pop();
		switch(word) {
			case('*') : 
			push(opr1*opr2); break;
			case('/') : 
			push(opr1/opr2); break;	
			case('+'): 
			push(opr1+opr2); break;
			case('-') : 
			push(opr1-opr2); break;	

		}
		}

			
		
	}
return pop();	
}


int main(){
	int result;
	char *express = "35*62/-";
	printf("%s\n",express);

	result = postfix(express);
	printf("%d\n",result);

	
return 0;

}

