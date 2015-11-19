
#include<stdio.h> 
main(){ 
char centero[10];
int entero;
void romanos(int);
printf("Introduce el número en arábigo\n");
scanf("%s",centero);
entero=atoi(centero); 
printf("%d",entero); 
romanos(entero);
}
void romanos(int entero){
char *millares[]={"","M","MM","MMM"};
char *centenas[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
char *decenas[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
char *unidades[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};

int m,aux,c,aux2,d,u;

m=entero/1000; /*millares*/ 
aux=entero%1000; 
c=aux/100; /*centenas*/ 
aux2=aux%100; 
d=aux2/10; /*decenas*/ 
u=aux2%10; /*unidades*/ 

printf("\nEl número %d en romano es %s%s%s%s\n\n",entero,millares[m],centenas[c],decenas[d],unidades[u]);
}
