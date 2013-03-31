#include<stdio.h>
#include<string.h>


	char name[20];
	int runs;
	int balls;
	double rate;

void read(struct cricket *a,int size)
{
	int i;
	printf("enter the name,runs scored &no of balls faced by the player\n");
	for(i=0;i<size;i++)
	{
		scanf("%s%d%d",a[i].name,&a[i].runs,&a[i].balls);
		a[i].rate=(a[i].runs*100.0)/a[i].balls;
	}	
}
void display(struct cricket *a,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d\n%s\n%d\n%d\n%3f\n",(i+1),a[i].name,a[i].runs,a[i].balls,a[i].rate);
	}
}
void sort(int size,struct cricket *a,int(*decide)(struct cricket,struct cricket))
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<(size-1);j++)
		{
			struct cricket temp;
			if(decide(a[j],a[j+1]))
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int ratesort(struct cricket a,struct cricket b)
{
	return((a.rate)<(b.rate));
}
int namesort(struct cricket a,struct cricket b)
{
	if(strcmp(a.name,b.name)>0)
	return 1;
	else 
	return 0;
}





















