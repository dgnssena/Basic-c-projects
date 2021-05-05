#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char s[40],gecici;
    int i,k=0,m=0;
    printf("Ters cevirmek istediginiz cumleyi giriniz : \n");
    gets(s);
    while(s[k]!='\0')
    {
        k++;

    }
    m=k;
    for(i=0;i<k/2;i++)
    {
        gecici=s[k-i-1];
        s[k-i-1]=s[i];
        s[i]=gecici;	
    }
    for(i=0;i<m;i++)
    {
    	if(s[i]==' ')
    	{
    		printf(" ");
		}
		else
		{
			printf("%c",s[i]);
		}
	
	
