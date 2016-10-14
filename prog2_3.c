#include <stdio.h>
#include <math.h>

int main()
{
	printf("Assignment 2-3, Michael Manzanares, manz1119@yahoo.com\n");

	int theta;
	double toDegrees = M_PI/180;
	double tan_value;

	printf("Please input an integer:\n");
	
	scanf("%d", &theta);
	tan_value = tan(theta*toDegrees);

	printf("%.3f \n", tan_value);
	return 0;
}
