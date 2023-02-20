# deque 
- 데이터를 저장하거나 삭제할 때 맨 앞 또는 맨 뒤쪽부터 수정하는 자료구조방식

![deque1](./img/deque1.jpg)
![deque2](./img/deque2.jpg)

## 비어있는 큐에 데이터를 앞에서 삽입 시
> void insertfront(dqtype* dq,element data)<br>
>{<br>
>	dqnode* newnode = new dqnode(data,NULL,NULL); <br>
>	if(isempty(dq))<br>
>{<br>
>		dq->front = newnode;<br>
>		dq->rear = newnode;<br>
>	}<br>

![deque3](./img/deque3.jpg)
Cancel changes
## 비어있는 큐에 데이터를 뒤에서 삽입 시
> void insertrear(dqtype* dq,element data)<br>
>{<br>
>	dqnode* newnode = new dqnode(data,NULL,NULL); <br>
>	if(isempty(dq))<br>
>{<br>
>		dq->front = newnode;<br>
>		dq->rear = newnode;<br>
>	}<br>

![deque3_1](./img/deque3_1.jpg)

## 이미 노드가 있는 큐에 앞에 새 노드를 삽입 시
>void insertfront(dqtype* dq,element data) <br>
>{<br>
>	dqnode* newnode = new dqnode(data,NULL,NULL);<br>
>	if(isempty(dq))<br>
>	{<br>
>		dq->front = newnode;<br>
>		dq->rear = newnode;<br>
>	}<br>
>	else<br>
>	{	<br>
>		newnode->next=dq->front;<br>
>		newnode->pre = NULL;<br>
>		dq->front->pre=newnode;<br>
>		dq->front=newnode;<br>
><br>
>	}<br>
>}<br>


 ### newnode->next=dq->front 
 - 새 노드가 맨 앞으로 오게되므로 새 노드의 next에 기존애 가장 앞에있었던 노드의 주소를 저장한다.
 ### newnode->pre=NULL
 - 마찬가지로 새 노드 앞에는 아무 노드가 없으므로 pre에는 NULL를 저장한다.
 ### dq->front->pre = newnode
 - 기존에 맨 앞이 었던 노드앞에 새 노드가 생겼으므로 dq->front->pre(기존에 있던 노드의 pre)에 새 노드의 주소를 넣는다. 
 ### dq->front = newnode
 - front 포인터는 늘 젤 앞의 노드를 가르켜야 하므로 새 노드의 주소를 가리킨다.
 
![deque4](./img/deque5.jpg)

## 이미 노드가 있는 큐에 뒤에서 새 노드를 삽입 시
>void insertrear(dqtype* dq,element data)<br>
>{	dqnode* newnode = new dqnode(data,NULL,NULL);<br>
>	if(isempty(dq))<br>
>	{<br>
>		dq->front = newnode;<br>
>		dq->rear = newnode;<br>
>	}<br>
>	else<br>
>	{<br>
>		newnode->pre = dq->rear;<br>
>		newnode->next = NULL;<br>
> 	dq->rear->next = newnode;<br>
> 	dq->rear = newnode;<br>
>}<br>
>}<br>


 ### newnode->pre=dq->rear 
 - 새 노드가 맨 뒤로 오게되므로 새 노드의 pre에 기존애 가장 뒤에있었던 노드의 주소를 저장한다.
 ### newnode->next=NULL
 - 마찬가지로 새 노드 뒤에는 아무 노드가 없으므로 next에는 NULL를 저장한다.
 ### dq->rear->next = newnode
 - 기존에 맨 뒤에 었던 노드앞에 새 노드가 생겼으므로 dq->front->next(기존에 있던 노드의 next)에 새 노드의 주소를 넣는다. 
 ### dq->rear = newnode
 - rear 포인터는 늘 젤 뒤의 노드를 가르켜야 하므로 새 노드의 주소를 가리킨다.
 
![deque4](./img/deque4.jpg)

## 큐에 있는 맨앞 데이터를 제거 시 <br>
> element deletefront(dqtype* dq)<br>
>{	<br>
>	element item;<br>
>	if(isempty(dq))<br>
>	{<br>
>		return 0;<br>
>	}<br>
>	else {<br>
>	dqnode* old = dq->front;<br>
>	item=old->data;<br>
>	if(dq->front->next==NULL)<br>
>	{<br>
>	dq->front = NULL;<br>
>	dq->rear = NULL;<br>
>	}<br>
>	else
>	{<br>
>	dq->front = dq->front->next;<br>
>	dq->front->pre=NULL;<br>
>	delete old;<br>
>	}<br>
>	}<br>
>	return item;<br>
>}<br>

### if(isempty(dq)) 
- 큐에 데이터가 없을 시 제거연산을 수행하지 않음
### if(dq->front->next==NULL)
### dq->front = NULL;<br>
### dq->front = NULL;<br>
- dq->front->next==NULL은 맨 앞의 데이터의 오른쪽에 아무 노드가 없을때 라는 뜻이다 
> 즉 큐에 노드가 하나있는것을 제거 할때 front와 rear를 NULL로 저장.
### dqnode* old = dq->front
- old:노드를 가리키는 포인터 
- Old에 현재 맨앞의 노드의 주소를 저장
### dq->front = dq->front->next
- front포인터가 제거해야할 노드의 오른쪽 노드주소를 가리키도록 함.
### dq->front->pre=NULL
- 그리고 제거해야할 노드가 지워지면 front가 가리키는 노드가 맨 앞이 되므로 pre를 NULL로 저장
### delete old;<br>
- 제거해야할 노드를 제거 
![deque6](./img/deque6.jpg)

## 큐에 있는 맨 뒤 데이터를 제거 시 <br>
>element deleterear(dqtype* dq)<br>
{	element item;<br>
	dqnode* old = dq->rear;<br>
	if(isempty(dq))<br>
	{<br>
		return 0;<br>
	}<br>
	<br>
	else<br>
	{	<br>
		<br>
		item = old->data;<br>
		if(dq->rear->pre == NULL)<br>
		{<br>
			dq->front=NULL;<br>
			dq->rear=NULL;<br>
		}<br>
		else<br>
		{<br>
			dq->rear = dq->rear->pre;<br>
			dq->rear->next=NULL;<br>
		}<br>
	<br>
>	}<br>
