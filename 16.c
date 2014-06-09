#include <stdio.h>
#include <string.h>
int palindromo(){
	int i,j,k,l,aux;
	char aux2[6],aux3[6];	
	i=999;
	j=999;	
	while(i>=100){
		--i;		
		while(j>=100){
			--j;			
			aux=i*j;
			sprintf(aux2, "%d", aux);			
			strcpy(aux3,aux2);
			(strrev(aux2));
			for(k=0;k<6;k++)
			if(aux2[k]==aux3[k]){
			printf("\n%d",aux3);
			return(0);
		}
		}
		
	}
	
}



int main(){	
	palindromo();
	return(0);
}
