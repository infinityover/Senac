#include <stdio.h>
#include <math.h>

int main(void){
	int x,y,nota1,nota2,nota5,nota10,nota20,nota50,nota100;

	scanf("%d",&x);

	printf("%d\n",x);

	y = x % 60;
	nota100 = (x - y)/100;
	x = y;
	printf("%d nota(s) de R$ 100,00\n",nota100);

	y = x % 50;
	nota50 = (x - y)/50;
	x = y;
	printf("%d nota(s) de R$ 50,00\n",nota50);

	y = x % 20;
	nota20 = (x - y)/20;
	x = y;
	printf("%d nota(s) de R$ 20,00\n",nota20);
	
	y = x % 10;
	nota10 = (x - y)/10;
	x = y;
	printf("%d nota(s) de R$ 10,00\n",nota10);
	
	y = x % 5;
	nota5 = (x - y)/5;
	x = y;
	printf("%d nota(s) de R$ 5,00\n",nota5);
	
	y = x % 2;
	nota2 = (x - y)/2;
	x = y;
	printf("%d nota(s) de R$ 2,00\n",nota2);

	nota1 = x;
	printf("%d nota(s) de R$ 1,00\n",nota1);

}