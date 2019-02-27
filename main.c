#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }
int (*func[4])(int, int) = {plus, minus, multiply, divided};
int main()
{
	int a, c, i;
	char b;
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
	char temp[] = "+-*/";
	for(i=0;i<4;i++){
		if(temp[i] == b)
			printf("%d %c %d = %d\n", a, b, c, func[i](a, c));
	}
}

