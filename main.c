#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i=365;
	int *ptr = &i;

	printf("i주소=%u\n", &i);
	printf("i값=%d\n", i);
	
	printf("ptr의 주소=%u\n", ptr);
	printf("ptr의 값=%d\n", *ptr);
	return 0;
}
