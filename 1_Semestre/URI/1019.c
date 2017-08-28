#include <stdio.h>
	
int main(void){
	int x,y,z, menor,meio,maior,temporario;
	scanf("%d %d %d",&x, &y, &z);

	menor = x;
	meio = y;
	maior = z;

	if(menor < meio){
		temporario = menor;
		menor = meio;
		meio = temporario;
	}
	if (maior < meio){
		temporario = maior;
		maior = meio;
		meio = temporario;
	}
	if (menor < meio){
		temporario = menor;
		menor = maior;
		maior = temporario;
	}

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",menor,meio,maior,x,y,z);
}

#include <stdio.h>

int main()

{

    int x, y, z, menor, meio, maior, temporario;

    scanf("%d %d %d", &x, &y, &z);

    menor = x;
    meio = y;
    maior = z;
    if (menor < meio){
        temporario = menor;
        menor = meio;
        meio= temporario;
    }
    if (meio< maio){
        temporario = meio;
        meio = maior;
        maior = temporario;
    }
    if (menor < meio){
        temporario = menor;
        menor = meio;
        meio = temporario;
    }

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",maior,meio,menor,x,y,z);

}