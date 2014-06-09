#include <stdio.h>
void print (){
	printf("---------------------------------------------------------------\n");
}
int _for (){
	int i;
	
	for (i=1;i<=100;i++)
	printf("%d\n",i);
}
int _while (){
	int j;
    j=0;
	while (j<100){
		j=j+1;
		printf("%d\n",j);
	}
}
int _dowhile (){
	int l;
	l=0;
	do{
		l=l+1;
		printf("%d\n",l);
	}while (l<100);	
}
int chamada(){
	_for ();
	print();
	_while ();
	print();
	_dowhile ();
}
int main(){
	chamada();
	return(0);
}

