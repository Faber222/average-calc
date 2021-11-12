#include <stdio.h>

int main() {
  float smaller;
  float bigger;
  float totalAverage;
  float iterar;
  float number;
  float num;
  float average;
  float overallAverage;

  smaller = 100000;
  bigger = 0;
  totalAverage = 0;
  iterar = 0;

  printf("Entre com o valor de N ");
  scanf("%f", &number);

  if (number <= 0) printf("N tem que ser maior que 0\n");

  while (iterar < number) {
    printf("Digite num\n");
    scanf("%f", &num);

    if (num > bigger) {
      bigger = num;
      printf("maior=num\n");
    }
    if (num < smaller) {
      smaller = num;
      printf("menor=num\n");
    }
    iterar = iterar + 1;
    totalAverage = totalAverage + num;
  }
  average = (bigger + smaller) / 2;
  overallAverage = totalAverage / number;
  if (average < overallAverage)
    printf("Media geral é maior que a average do maior pelo menor \n");

  if (average > overallAverage)
    printf("Media geral é menor que a average do maior pelo menor \n");

  else
    printf("Media geral é igual a average do maior pelo menor \n");
}
