#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char p[30],c[30],k[30];
	int i,j=0,len;
	
	printf("Enter PlainText ==> ");
	gets(p);
	printf("Enter Key ==> ");
	gets(k);	len=strlen(k);
	for(i=0;p[i]!='\0';i++)
	{
		c[i]=((p[i]+k[j])%26)+'a';
		j++;
		if(j==len)
		{
			j=0;
		}
	}
	c[i]='\0';
	printf("\nCipher text is %s",c);
	getch();
}
