#include<stdio.h>
#define TAM 3

main(){
	
	int matriz[3][3] ,i, j;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("Digite os valores: ");
			scanf("%d", &matriz[i][j]);
		}
		printf("\n");
	}
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf(" %d",matriz[i][j]);
		}
				printf("\n");
	}

}
	
