#include <stdio.h>

int divisivel(int num, int div){
	if(num % div == 0){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int num, div;
	printf("Digite 2 numeros.\n");
	scanf("%d%d", &num, &div);
	if(divisivel(num, div)){
		printf("Divisivel");
	}else{
		printf("Nao e divisivel");
	}
	return 0;
}


