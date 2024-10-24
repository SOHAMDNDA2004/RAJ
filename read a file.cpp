#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main ()
{
	int num;
	FILE *fptr;
	fptr=fopen("d:\\program1.txt","w");
	if (fptr==NULL)
	{
		printf("Error!");
		exit(1);
		
	}
	printf("Enter num");
	scanf("%d",&num);
	fprintf(fptr,"%d",num);
	fclose(fptr);
	getch();
}