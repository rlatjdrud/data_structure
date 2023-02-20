# deque 
- 데이터를 저장하거나 삭제할 때 맨 앞 또는 맨 뒤쪽부터 수정하는 자료구조방식

![deque1](./img/deque1.jpg)
![deque2](./img/deque2.jpg)
## 비어있는 큐에 데이터를 앞에서 삽입 시
>void insertfront(dqtype* dq,element data)
>{
>	dqnode* newnode = new dqnode(data,NULL,NULL); <br>
>	if(isempty(dq))<br>
>{<br>
>		dq->front = newnode;<br>
>		dq->rear = newnode;<br>
>	}<br>
