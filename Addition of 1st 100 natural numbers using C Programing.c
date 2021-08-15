// Addition of first 100 natural numbers using C Programing
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,f=0;
	for( i = 1; i<=100; i++ )
	{
	f=f+i;	
	}
	printf(" Addition of first 100 natural numners = %d",f );
	getch();
	return 0;
}
