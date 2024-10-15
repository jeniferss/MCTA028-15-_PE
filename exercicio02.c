/*
  Em uma loja, o gerente determinou que o troco deve ser devolvido ao cliente usando
  o menor número possível de moedas. Os valores disponíveis de moedas são: 
    R$ 0,50 R$ 0,25 R$ 0,10 R$0,05 R$ 0,01
  Crie um programa que recebe como entrada um valor inteiro troco, 0 < troco <= 100,
  e imprime, em seguida, as quantidades de moedas necessárias para fornecer o troco,
  discriminadas por valor, de maneira a minimizar o número total de moedas.
  Assuma que sempre existam moedas suficientes para fornecer o troco, de qualquer valor.
  Por exemplo, para o valor de entrada 98, seu programa deve imprimir:
    50 centavos: 1
    25 centavos: 1
    10 centavos: 2
    5  centavos: 0
    1  centavos: 3
  Caso o usuário digite um valor de entrada menor que 1 centavo ou maior que 100 centavos,
  seu programa deve imprimir uma mensagem e pedir que o usuário digite o valor novamente.
*/
#include<stdio.h>

void main(){
  int exchange = 0;
    
  while(exchange < 1 || exchange > 100){
      printf("Digite o valor do troco esperado (entre 1 - 100): ");
      scanf("%d", &exchange);
  }
  
  float coins[5] = {0.01, 0.05, 0.10, 0.25, 0.50};
  int coinQuantity[5] = {0, 0, 0, 0, 0};
  
  int arrayLength = sizeof(coins) / sizeof(coins[0]); 
  
  int i;
  int remain = exchange;
  
  for(i=(arrayLength-1); i>=0; i--){
    float coinAsInt = coins[i] * 100;    
    int numberOfCoins = remain / coinAsInt;
    
    if(numberOfCoins > 0 ) {
      remain -= coinAsInt * numberOfCoins;
      coinQuantity[i] = numberOfCoins;
    }
    
    printf("%.0f centavos: %d\n", coinAsInt, coinQuantity[i]);
  }
}


