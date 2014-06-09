#include <stdio.h>

int multiplos (){
	int i,aux;
	printf("Os 5 primeiros multiplos de 3 sao\n");
	for (i=1; i<=5; i++){
	 aux=(3*i);
	 printf("%d\n",aux);
}
}
int main(){
multiplos();	
return (0);
}
