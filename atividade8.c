#include <stdio.h>
void print2 (int a, int b, int c, int d, int e, int f){
printf("A soma dos numero digitados e %d\n",b);	
	printf("A quatidade de numeros digitados e %d\n",(a-1));
	printf("A media dos numeros digitados e %d\n",(b/(a-1)));
	printf("O maior numero digitado foi %d\n", d);
	printf("O menor numero digitado foi %d\n", c);
	printf("A media dos numeros pares e %d\n", (f/(e-1)));	
}
int calculo (int b){
	int i,s,menor,maior,a,aux;
	s=0;		
	s=s+b;
	menor=b;
	maior=b;
	a=0;
	aux=0;
	if ((b%2)==0){
	aux=aux+b;
	a=a+1;
}		
	for (i=1;b!=0;i++){
		printf("Digite o numero\n");
		scanf("%d",&b);
		s=s+b;
		if((b<menor)&& (b!=0))
		menor=b;
		if((b>maior)&& (b!=0))
		maior=b;
		if ((b%2)==0){
	    aux=aux+b;
	    a=a+1;
	}
	}
	print2(i,s,menor,maior,a,aux);	
}
void print (int a){
	printf("Digite varios numeros e para encerar digite 0\n");
	printf("Digite o numero\n");
	scanf("%d",&a);
	calculo(a);	
}

int main (){
	int num;	
	print(num);	
	return(0);
}
