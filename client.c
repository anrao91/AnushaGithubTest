#include<stdio.h>
#include"hdr.h"
#include"player.c"
int main()
{
	int size;
	printf("enter the no of players\n ");
	scanf("%d",&size);
	struct cricket data[size];
	read(data,size);
	printf("no,name,runs,balls faced,rate\n\n");
	display(data,size);
	printf("the structure sorted based on decreasing rate is as follows\n");
	sort(size,data,ratesort);
	display(data,size);
	printf("the structure sorted based on the name is as follows\n");
	sort(size,data,namesort);
	display(data,size);
	return 0;
}

