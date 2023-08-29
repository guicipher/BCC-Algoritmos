#include <stdio.h>

int main(void) {
  printf("Em uma festa, os homens pagam 20 reais de entrada e mulheres pagam "
         "10.\nNesta festa vieram 12 homens e 17 mulheres.\nLogo, nós "
         "arrecadamos %5.2f reais.",
         (20 * 12) + (10 * 17.0));
  return 0;
}