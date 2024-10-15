/*
  Um ano é considerado bissexto caso se encaixe em alguma das regras abaixo:
    * Um ano é bissexto caso seja divisível por 4, mas não seja divisível por 100;
    * Um ano é bissexto caso seja divisível por 400.
  Em todos os demais casos, o ano não é bissexto.
  
  1. Implemente uma função que recebe um argumento inteiro, representando um ano, e 
  que devolva 01 caso o ano seja bissexto ou devolve 0 caso contrário;
  2. Usando esta função, escreva um programa que recebe um número inteiro positivo do
  teclado, representando um ano e imprime em seguida uma mensagem dizendo se o ano é
  bissexto ou não.
*/
#include<stdio.h>

int leapYear(int year);

void main(){
  int year = 0;
  
  printf("Digite o valor do ano: ");
  scanf("%d", &year);
  
  if(leapYear(year)){
    printf("%d é ano bissexto\n", year);
  } else {
    printf("%d não é ano bissexto\n", year);
  }
}

int leapYear(int year){
  if(year % 400 == 0){return 1;}
  if(year % 4 == 0 && year % 100 != 0){return 1;}
  return 0;
}
