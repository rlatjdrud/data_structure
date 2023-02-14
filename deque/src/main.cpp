#include "deque.h"

int main()
{	element a;
	dqtype* dq = createdqnode();
	insertfront(dq,'A');
	insertrear(dq,'b');
	printdq(dq);
	a= deleterear(dq);
	printf("element : %c\n",a);
	printdq(dq);
	return 0;
}
