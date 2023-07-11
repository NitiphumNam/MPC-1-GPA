#include <stdio.h>
#include <conio.h>
int main()
{
	int score;
	int A = 0;
	char ch;
    do{
	printf("input score:");
	scanf("%d",&score);
	if(score > 100 || score < 0)
	{
		printf("Error\n");
		printf("You want To Try Again?\n");
		printf("Y or N :\n");
		scanf(" %c",&ch);
		if(ch == 'Y' || ch == 'y')
		{
			A = 1;
		}
		else if(ch == 'N' || ch == 'n')
		{
			A = 0;
			return 0;
		}
	}
	else
	{
		A = 0;
	}
    }while (A == 1); /*Error score*/
	if(score >= 80)
	{
		printf("A");
	}
	else if(score >= 75)
	{
		printf("B+");
	}
	else if(score >= 70)
	{
		printf("B");
	}
	else if(score >= 65)
	{
		printf("C+");
	}
	else if(score >= 60)
	{
		printf("C");
	}
	else if(score >= 55)
	{
		printf("D+");
	}
	else if(score >= 50)
	{
		printf("D");
	}
	else
	{
		printf("F");
	}
	getch();
	return 0;
}
