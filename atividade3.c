#include <stdio.h>
int fib(int x){
	int a,b,aux,i;
	aux=0;
	a=0;
	b=1;
printf("Serie Fibonacci:\n");
	printf("%d\n", b);	
		for(i=0;(i<x) && (aux<=x); i++){			
			aux=a+b;
			a=b;
			b=aux;		
			printf("%d\n",aux);
		}		
}

void print (int n){
printf("Digite um numero positivo\n");
	scanf("%d",&n);	
	fib(n);
}

int main(){
	int num;
	print(num);		
	return(0);
	
}
