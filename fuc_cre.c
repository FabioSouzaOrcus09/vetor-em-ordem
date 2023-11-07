#include <stdio.h>

int main(){

	int vetor[7];
	int i,valor,temp;


for(i=0;i<7;i++){

printf("digite um numero para o vetor:");
scanf("%d", &vetor[i]);
}

	for(i=0;i<7-1;i++){

		for(valor=i+1;valor<7;valor++){
			if(vetor[i]>vetor[valor]){
				temp = vetor[i];
				vetor[i] = vetor[valor];
				vetor[valor]= temp;
			
	}
}


}
printf("numeros na ordem:\n");
for (i=0;i<7;i++){
printf("%d, ", vetor[i]);
		}

		return 0;



}

