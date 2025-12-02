#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define rolls 50000

int frequenzies[13]; //Initialized to 13 so I don't have to do correcting math later as we would if just to 10

void rollDice() {
  for (size_t i = 0; i < rolls; i++) {
    int d1 = (rand() % 6) + 1; //+1 because rand() will be 0 to 5)
    int d2 = (rand() % 6) + 1;
    ++frequenzies[d1+d2];
  }
}

int main() {
  srand(time(nullptr));
  rollDice();

  for (int i = 2; i <= 12; i++)
      printf("%d: %d \n", i, frequenzies[i]);
    return 0;
  }
