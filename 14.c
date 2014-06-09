#include <stdio.h>

int soma(){
	int i,aux;	
	for (i=1,aux=0;i<1000;i++){
	if (((i%3)==0)||((i%5)==0))
	aux=aux+i;	
}
printf("\n%d",aux);
}

int main(){
	soma();
	return(0);
}
