#include <stdio.h>
int soma (int b){
	int aux,i;
aux=0;
aux=aux+b;
for (i=1;i<10;i++){
scanf("%d",&b);
aux=aux+b;	
}
printf("%d\n",aux);	
return 0;	
}
void print (int a){
printf("Digite 10 valores para serem somados\n");
scanf("%d",&a);
soma(a);	
}
int main() {
int num;
print(num);
return 0;
} 
