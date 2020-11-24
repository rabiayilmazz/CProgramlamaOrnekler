#include <stdio.h>

int main()
{
    int day;
	int week;
	
	printf("please enter the day information ...");
	scanf("%i",&day);
	
	week = day/7;
	day = day%7;
	
	printf("Values\n Week: %i\n Day: %i\n", week , day);
	
    system("pause");
    return 0;
}

