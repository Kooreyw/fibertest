#include<stdio.h>
int print_hello(int a, int b){	
	int c=0;
	c=a+b;
	return c;
}
int main(void){
	print_hello(1,2);
	printf("End\n");
	return 0;
}
