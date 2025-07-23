#include<stdio.h>
#include<conio.h>
int main(){
  char ch;
  int ascci;
  printf("Enter any character?\n");
  ch = getch();
  putch(ch);
  ascci = (int)ch;
  if(ascci >= 97 && ascci <= 122){
    printf(" is Small alphabet");
  } else if(ascci >= 65 && ascci <= 90){
    printf(" is Capital alphabet");
  } else if(ascci >= 48 && ascci <= 57){
    printf(" is Digit");
  }else if((ascci >= 0 && ascci <= 47) || 
  (ascci >= 58 && ascci <= 64) || 
  (ascci >= 91 && ascci <= 96) || 
  (ascci >= 123 && ascci <= 127)){
    printf(" is Special Symbol");
  }  else {
    printf(" is Invalid Character");
  }
  return 0;
}
