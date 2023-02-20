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

![deque4](./img/deque4.jpg)
