#include <stdio.h>
#include <stdlib.h>

class treenode
{
public : 
	treenode(char data,treenode* left, treenode* right)
	{
		this->data = data;
		this->left = left;
		this->right = right;	
	}

char data;
treenode* left;
treenode* right;
};

treenode* insertkey(treenode* p, char x)
{
	if(p==NULL)
	{
		treenode* newnode = new treenode(x,NULL,NULL);
		return newnode;
	}
	else if(x<p->data)
	{
		p->left=insertkey(p->left,x);
		return p;
	}
	else if(x>p->data)
	{
		insertkey(p->right,x);
		return p;
	}
	else
	{
		printf("already exist that key!\n");
		return p;

	}

}

void insert (treenode* root, char x)
{
	root=insertkey(root,x);
}

treenode* search(treenode* root, char x)
{
	treenode* p;
	p = root;
	while(p!=NULL)
	{
		if(x<p->data)
		{
			p=p->left;
		}
		else if(x>p->data)
		{
			p=p->right;
		}
		else 
		{
			printf("I find it! : %c\n",p->data);
			return p;
		}
	}
		printf("it isn't hear!\n");
		return p;
	
}

int main()
{
	treenode* root = NULL;
	treenode* foundnode = NULL;
	char key;
	insert(root,'G');
	insert(root,'I');
	insert(root,'H');
	insert(root,'D');
	insert(root,'B');
	insert(root,'M');
	insert(root,'N');
	insert(root,'A');
	insert(root,'J');
	insert(root,'E');
	insert(root,'Q');
	
	printf("%u\n",root);
	printf("\n 찾을 문자열을 입력: ");
	scanf("%c",&key);
	while(key !='z')
	{
	foundnode = search(root,key);
	if(foundnode != NULL )
	{printf("I find key! : %c\n",foundnode->data);}
	else
	{
	printf("I cannot find key... \n");
	}

	scanf("%c",&key);



	printf("\n\n\n 찾을문자를 입력하시오 : ");
	scanf("%c",&key);
	}
	getchar();
	return 0;
	
}	
