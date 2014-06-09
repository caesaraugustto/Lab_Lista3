#include <stdio.h>

int soma_fib(){
	int i,aux,a,b;
	a=1;
	b=1;
	i=0;		
	for (aux=0;aux<=4000000;){	
	aux=a+b;
	a=b;
	b=aux;
	if((aux%2)==0)
	i=i+aux;	
}
printf("\n%d",i);
}

int main(){
	soma_fib();
	return(0);
}
