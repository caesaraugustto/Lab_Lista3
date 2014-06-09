#include <stdio.h>
void print (int a){
	printf("Digite um numero para determinar seus divisores\n");
    scanf("%d", &a);
    printf("\nDivisores de %d\n", a);
	divisores(a);
}
int divisores (int aa){
	int i;
for (i=1; i<=aa; i++)
if (aa%i == 0)
printf("\t%d", i);	
}
int main() {
int num;
print(num);
return 0;
} 
