#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

class treenode
{
public : 
	treenode(int data, treenode* left, treenode* right)
{
	this->data = data;
	this->left = left;
	this->right  = right;
}

int data;
treenode* left;
treenode* right;
};


int t_size=0;
treenode* makenode(int data, treenode* left, treenode* right)
{
	treenode* newnode = new treenode(data,left,right);
	return newnode;
}


int total_postorder(treenode* root)
{	
	if(root)
	{
		total_postorder(root->left);
		total_postorder(root->right);
		t_size+=root->data;		
	}
return t_size;
}

int main()
{
	treenode* n11 = makenode(120,NULL,NULL);
	treenode* n10 = makenode(55,NULL,NULL);
	treenode* n9 = makenode(100,NULL,NULL);
	treenode* n8 = makenode(200,NULL,NULL);
	treenode* n7 = makenode(68,n10,n11);
	treenode* n6 = makenode(40,NULL,NULL);
	treenode* n5 = makenode(15,NULL,NULL);
	treenode* n4 = makenode(2,n8,n9);
	treenode* n3 = makenode(10,n6,n7);
	treenode* n2 = makenode(0,n4,n5);
	treenode* n1 = makenode(0,n2,n3);

	printf("c:\ 용량: %d\n",total_postorder(n2));
	t_size=0;
	printf("d:\ 용량: %d\n",total_postorder(n3));
	t_size=0;
	printf("total :\ 용량: %d\n",total_postorder(n1));
}
