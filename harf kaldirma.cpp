#include <stdio.h>
#include <string.h>

//Soru: D��ar�dan girilen bir c�mle i�erisinde ge�en tekrar d��ar�dan girilen bir harfi c�mleden kald�ran program

int main()
{
 char yazi[100] = "";
 char harf[1] = "";
 scanf("%[^\n]s", &yazi);
 scanf("%s", &harf);
 int i = 0;
 for (i = 0; i < strlen(yazi); i++)
 {
  if (yazi[i] != harf[0])
   printf("%c", yazi[i]);
 }
}


