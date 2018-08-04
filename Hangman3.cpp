#include<stdio.h>
#include<conio.h>
#include<string.h>
void shape(int);
int main()
{
	int i,j,h,score=120;
	char a[10]="vishal",b[10],c[10];
	i=strlen(a);
	for(h=0;h<11;h++)
	{
		b[h]=' ';
	}
	printf("Enter a alphabet:");
	scanf("%c",&c[0]);
	for(h=0;h<i;)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]==c[h])
			{
				b[j]=c[h];break;
			}
		}
		if(j<=5)
		{
			printf("%s",b);
		h++;
		if(h<i)
		{
		printf("\nEnter next alphabet:");
		scanf(" %c",&c[h]);}}
		else
		{
			printf("\nwrong guess");
			printf("\n");
			score=score-20;
			shape(score);
			printf("\n%s",b);
			printf("\nEnter another alphabet:");
			scanf(" %c",&c[h]);
		}
		if(score==0)
		{
			h=13;
		}
	}
	if(score>0)
	{
		printf("\nYOU WON");
	}
	else
	{
		printf("\nBetter luck next time");
		printf("\nAnswer is:%s",a);
	}
}

void shape(int n)
{
	switch(n)
	{
		case 100: printf("_________ \n");

    printf("| \n");

    printf("| \n");

    printf("| \n");

    printf("| \n");

    printf("| \n");

    printf("| \n");break;
		case 80: printf("--------- \n\n");

        printf("_________\n");

        printf("|   |\n");

        printf("|\n");

        printf("|\n");

        printf("|\n");

        printf("|\n");

        printf("|\n");break;
		case 60:printf("---------\n\n");


        printf("_________\n");

        printf("|   |\n");

        printf("|   o\n");

        printf("|\n");

        printf("|\n");

        printf("|\n");

        printf("|\n");break;
		case 40: printf("---------\n\n");

        printf("_________\n");

        printf("|   |\n");

        printf("|   o\n");

        printf("|   |\n");

        printf("|\n");

        printf("|\n");

        printf("|\n");break;
		case 20:printf("---------\n\n");

        printf("_________\n");

        printf("|   |\n");

        printf("|   o\n");

        printf("|  /|\\ ");

        printf("\n|\n");

        printf("|\n");

        printf("|\n");

        printf("---------\n\n");break;
		case 0:printf("_________\n");

        printf("|   |\n");


        printf("|   O\n");

        printf("|  /|\\ ");

        printf("\n|   |\n");

        printf("|\n");

        printf("|\n");
        printf("---------\n\n");
	}
}

