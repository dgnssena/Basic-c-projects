#include<stdio.h>
#include<stdlib.h>

int main(){
	char metin[256];
	int i=0;
	int sayac=0;
	
	printf("bir metin giriniz:");
	gets(metin);
	
	while(metin[i]!='\0'){
		char karakter=metin[i];
		
		if(karakter<='57'&& karakter>='48'){
			sayac++;
			i++;
			printf ("girilen %s metinde %d tane rakam bulunmakta.",karakter,sayac);
		}
			
	}

}
