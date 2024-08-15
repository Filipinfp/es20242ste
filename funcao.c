#include <stdio.h>
int par_impar(int num){
	
	return !(num % 2);
}
int main(){
	printf("Par == 1 e impar == 0: %d", par_impar(8));
	return 0;
}


