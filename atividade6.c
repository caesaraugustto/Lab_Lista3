#include <stdio.h>
#define N 50
int soma (){
	int i,aux;	
	for (i=1; i<=N; i++){
		aux=(2*i);
		printf("%d\n",aux);
		}	
}
int main (){
	soma();
	return(0);
}
