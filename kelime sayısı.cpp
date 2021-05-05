#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char metin[256];
	int i=1;
	
	
	printf("bir metin giriniz:");
	gets(metin);
	
	while(metin[i]!='\0'){
		i++;
	}
	printf("girilen metinde %d kelime bulunur.",i);
}
