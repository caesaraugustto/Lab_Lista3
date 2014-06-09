#include <stdio.h>
void print3 (float h, float m1, float m2, float aux, float a, float b, float c){
	printf("O maior consumo e %0.2f\n",m1);
	printf("O menor consumo e %0.2f\n",m2);
	printf("A media de consumo e %0.2f\n",(aux/h));
	printf("O total de consumo das categorias e:\n");
	printf("Categoria 1:%0.2f\n",a);
	printf("Categoria 2:%0.2f\n",b);
	printf("Categoria 3:%0.2f\n",c);
}
	
void calculo (float a, float b, float c, int d ){
	float maior,menor,aux,cont1,cont2,cont3,i;
	    cont1=0;
	    cont2=0;
	    cont3=0;
	    aux=0;
		maior=c;
		menor=c;
		aux=aux+c;
	for (i=1;i<=a;i++){
		printf("%d\n",d);
		printf("%f\n",c);
		if (d==1)
		cont1=cont1+c;
		if (d==2)
		cont2=cont2+c;
		if (d==3)
		cont3=cont3+c;		
		if (maior<c)
        maior=c;
	    if (c<menor)
	    menor=c;
	    if (i!=a){
		 printf("Digite o seu consumo mensal\n");
		  scanf("%f",&c);	    
	     printf("Digite o codigo de consumidor(1-Residencial,2-Comercial,3-Industrial\n");		
		  scanf("%d",&d);		
		  aux=aux+c;
		  }			
	}
	
	print3(a,maior,menor,aux,cont1,cont2,cont3);
}

void print (float aa, float bb, float cc, int dd ){
	printf("Digite o numero de habitantes da cidade\n");
	scanf("%f",&aa);
	printf("Digite o valor em kwh\n");
	scanf("%f",&bb);	
	printf("Digite o seu consumo mensal\n");
		scanf("%f",&cc);
		printf("Digite o codigo de consumidor(1-Residencial,2-Comercial,3-Industrial\n");		
		scanf("%d",&dd);	    
		calculo(aa,bb,cc,dd);
}

int main(){
	float n_hab,kwh,consumo;
	int codigo; 
	print(n_hab,kwh,consumo,codigo);
	return(0);		
}
