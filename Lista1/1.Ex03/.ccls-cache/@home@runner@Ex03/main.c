#include <stdio.h>

int main(void) {
  printf("Vamos distribuir 359 carros ára 4 pessoas e portanto devem sobrar %d "
         "carros",
         359 % 4);
  return 0;
}