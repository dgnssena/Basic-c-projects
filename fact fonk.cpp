#include<stdio.h>

int asalmi(int sayi){
    int n;
    for(n=2;n<sayi;n++){
        if(sayi%n==0){
            return 0;
        }
        return 1;
    }
}
int main(){
    int i;
    printf("bir sayi giriniz:");
    scanf("%d",&i);
    
    if(asalmi==0){
        printf("bu sayi asal degildir.");
    }
    else{
        printf("bu sayi asaldir.");
    }
}

