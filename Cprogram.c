#include <stdio.h>
#include<stdlib.h>
int main()

{

int num;
FILE *fptr;
fptr = fopen("file1.txt", "w");

	if(fptr == NULL)
	{
	
	printf("error");
	exit(1);
	
	}
printf("enter number :");
scanf("%d",&num);

fprintf(fptr, "%d", num);
fclose(fptr);

}
