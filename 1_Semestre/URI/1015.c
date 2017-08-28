#include <stdio.h>
#include <math.h>

int main(void){
	double x1, x2, y1, y2,result,result2;
	
	x1 = 0;
	x2 = 0;
	y1 = 0;
	y2 = 0;

	scanf("%lf %lf",&x1, &y1);
	scanf("%lf %lf",&x2, &y2);
	
	result = pow((x2 - x1),2);
	result2 = pow((y2 - y1),2);



	printf("%.4f\n",sqrt(result+result2));

}