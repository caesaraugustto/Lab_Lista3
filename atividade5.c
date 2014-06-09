#include <stdio.h>
int naturais_impares(int aa){
	int i,aux;
	aux=0;
	for (i=1; i<=aa; i++){
		aux=(2*i)-1;
		printf("%d\n",aux);
	}
}
void print (int a){
	printf("Digite um numero inteiro\n");
	scanf("%d",&a);
	naturais_impares(a);
}
int main (){
	int N;
	print(N);	
	return(0);
}
