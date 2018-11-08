#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i=365;
	int *ptr = &i;

	printf("i林家=%u\n", &i);
	printf("i蔼=%d\n", i);
	
	printf("ptr狼 林家=%u\n", ptr);
	printf("ptr狼 蔼=%d\n", *ptr);
	return 0;
}
