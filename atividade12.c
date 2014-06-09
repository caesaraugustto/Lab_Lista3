#include <stdio.h>
#define N 10
int regressiva (){
	int i, aux;
     aux=N+1;
	 i=0;
		while (i<=N){
	      i=i+1;
		  aux=aux-1;
		printf("%d\n",aux);	
}
		printf("\nFIM!");	
	return 0;
}
int main() {
regressiva();
return 0;
} 
