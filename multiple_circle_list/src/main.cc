#include "lists.h"

int main(int argc, char* argv[])
{
	linkedlist_h* L = new linkedlist_h(NULL);
	addlastnode(L,argv[1]);
	addlastnode(L,argv[2]);
	deletenode(L);
	printnode(L);
	addlastnode(L,argv[2]);
	printnode(L);


	return 0;
	
}
