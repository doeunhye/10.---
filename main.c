#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x=10;
	int y=20;
	int *ptr;
	
	ptr = &x;
	printf("ptr이 가리키는 값=%d\n",*ptr);
	
	ptr = &y;
	printf("ptr이 가리키는 값=%d\n",*ptr);
	
	return 0;
}
