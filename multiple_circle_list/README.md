# 다중 원형 연결리스트 만들기
 - 파일의 구조<br>
 ![structure](./img/structure.jpg)
## Makefile 새로운 옵션<br>
 - SRC = **$(notdir $(wildcard $(SRC_DIR)/*.cc))** 
 > **$(wildcard $(SRC_DIR)/*.cc)) : ./src의 .cc가 붙은 모든 파일을 꺼낸다.**<br>
 > **$(notdir) : .cc가 붙은 파일에 경로를 없앤 파일이름을 꺼낸다.**<br>
