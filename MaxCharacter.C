#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
	char s[100],us[100];
	int n,i,j,k=0,ascii1,ascii2,count=0,r[100],l,max=0;
	clrscr();
	printf("Enter string: ");
	scanf(" %[^\n]s", s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		count=1;
		if(s[i]!=' ' && s[i]!=-1)
		{
			for(j=i+1;j<n;j++)
			{
				if(s[i]==s[j])
				{
					s[j]=-1;
					count++;
				}
			}
			r[k]=count;
			us[k]=s[i];
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		if(r[i]>max)
		{
			max=r[i];
			l=i;
		}
		if(max==r[i])
		{
			ascii1=us[i];
			ascii2=us[l];
			if(ascii1>ascii2)
			{
				max=r[l];
			}
			else
			{
				max=r[i];
				l=i;
			}
		}
	}
	printf("\nMax: %c ==> %d times",us[l],max);
	getch();
}