#include <stdio.h>
void inicio (int a){
	printf("Digite numeros inteiros (digite um numero negativo para parar)\n");
scanf("%d",&a);
}
void print (int a, int b){
printf("o maior numero e:%d",a);
printf("o menor numero e:%d",b);	
}

int maior_menor(int a){
	int maior,menor;
	maior=a;
menor=a;
for(a;a>0;){
if (maior<a)
maior=a;
else{
	if (a<menor)
	  menor=a;
}
printf("Digite numeros inteiros (digite um numero negativo para parar)\n");
scanf("%d",&a);	
}	
print(maior,menor);	
}
int main(){
	int num;
inicio(num);		
maior_menor(num);
return(0);
}
