#include "lqueue.h"

int main()
{
	lqueuetype* lq = createlinkedqueue();
	enqueue(lq,'a');
	enqueue(lq,'b');
	enqueue(lq,'c');
	enqueue(lq,'d');
	enqueue(lq,'e');
	dequeue(lq);
	printlq(lq);
	return 0;

}
