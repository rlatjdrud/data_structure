#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

class treenode
{
public:
	treenode(char data, treenode* left, treenode* right)
	{
		this->data = data;
		this->left = left;
		this->right = right;
	}

char data;
treenode* left;
treenode* right;
};

treenode* makerootnode(char data, treenode* leftnode, treenode* rightnode)
{
	treenode* root = new treenode(data,leftnode,rightnode);
	return root;
}

void preorder(treenode* root)
{
	if(root)
	{
	printf("%c",root->data);
	preorder(root->left);
	preorder(root->right);
	}
}

void inorder(treenode* root)
{
	if(root)
	{
	inorder(root->left);
	printf("%c",root->data);
	inorder(root->right);
	}	
}

void postorder(treenode* root)
{
	if(root)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%c",root->data);
	}
}

int main()
{
	treenode* n7 = makerootnode('D',NULL,NULL);
	treenode* n6 = makerootnode('C',NULL,NULL);
	treenode* n5 = makerootnode('B',NULL,NULL);
	treenode* n4 = makerootnode('A',NULL,NULL);
	treenode* n3 = makerootnode('/',n6,n7);
	treenode* n2 = makerootnode('*',n4,n5);
	treenode* n1 = makerootnode('-',n2,n3);
	printf("\n preorder :");
	preorder(n1);
	printf("\n inorder :");
	inorder(n1);
	printf("\n postorder : ");
	postorder(n1);
}


