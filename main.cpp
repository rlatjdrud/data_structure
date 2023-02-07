#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char element;

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

int testpair(char* exp){
char symbol;
char open_pair;
int i,length=strlen(exp);
top=NULL;

for(int i=0; i<length; i++){
	symbol=exp[i];
	switch(symbol){
		case '(' : 
		case '[' :
		case '{' :
	push(symbol); break;

		case ')' : 
		case ']' : 
		case '}' :
	if(top==NULL) return 0;
	else {
		open_pair=pop();
		if((open_pair=='(' && symbol!=')') ||
		  (open_pair=='[' && symbol!=']') ||
		  (open_pair=='{' && symbol!='}'))
		return 0;

		else break;	
	}
	
	}	
}

if(top==NULL) return 1;
else return 0;

}

int main(){
	char* express="((A+B)-3)*5+[{COS(X+Y)+7}-1]*4";
        printf("%s",express);
	if(testpair(express)==1) printf("올바른 괄호\n");
	else printf("잘못된 괄호\n");	
	getchar();

return 0;

}

