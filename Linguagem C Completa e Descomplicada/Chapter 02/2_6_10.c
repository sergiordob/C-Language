#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int day=0, month=0, year=0;

	printf("Enter the day: ");
	scanf("%d", &day);
	printf("Enter the month: ");
	scanf("%d", &month);
	printf("Enter the year: ");
	scanf("%d", &year);

	printf("\nDate: %d\\%d\\%d", day, month, year);  
	return 0;
}