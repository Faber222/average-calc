#include <stdio.h>

int main() {
  float menor;
  float maior;
  float mediaTotal;
  float iterar;
  float number;
  float Num;
  float Media;
  float MediaGeral;

  menor = 100000;
  maior = 0;
  mediaTotal = 0;
  iterar = 0;

  printf("Entre com o valor de N ");
  scanf("%f", &number);

  if (number <= 0) printf("N tem que ser maior que 0\n");

  while (iterar < number) {
    printf("Digite Num\n");
    scanf("%f", &Num);

    if (Num > maior) {
      maior = Num;
      printf("maior=Num\n");
    }
    if (Num < menor) {
      menor = Num;
      printf("menor=Num\n");
    }
    iterar = iterar + 1;
    mediaTotal = mediaTotal + Num;
  }
  Media = (maior + menor) / 2;
  MediaGeral = mediaTotal / number;
  if (Media < MediaGeral)
    printf("Media Geral é maior que a media do maior pelo menor \n");

  if (Media > MediaGeral)
    printf("Media Geral é menor que a media do maior pelo menor \n");

  else
    printf("Media Geral é igual a media do maior pelo menor \n");
}
