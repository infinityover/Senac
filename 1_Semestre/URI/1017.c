#include <stdio.h>
#include <math.h>

int main(void){
	int x,y;
	double result;
	
	x = 0;
	y = 0;
	result = 0.00;

	scanf("%d %d",&x, &y);

	//printf("%f\n",result);

	result = (x * y)/12.00;
	printf("%.3f\n",result);

	//printf("%.3f\n",);
	//system("pause");
}