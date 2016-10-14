#include <stdio.h>
#include <math.h>

int main()
{
	printf("Assignment 1-5, Michael Manzanares, manz1119@yahoo.com\n");

	char operator;
	int x;
	int y;
	double toDegrees = M_PI/180;

	printf("> ");

	scanf("%c%d", &operator, &x);
	if('C' == operator || 'c' == operator)
		printf("%0.3f\n", cos(x*toDegrees));
	else if('S' == operator || 's' == operator)
		printf("%0.3f\n", sin(x*toDegrees));
	else{
		scanf("%d",&y);
		if('+' == operator)	printf("%d\n", x+y);
		if('-' == operator)	printf("%d\n", x-y);
		if('*' == operator)	printf("%d\n", x*y);
		if('/' == operator)	printf("%d\n", x/y);
	}
	return 0;
}
