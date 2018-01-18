#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  srand(time(NULL));

  switch(rand() % 9) {

    case 0:
      printf("You're out of your element, Donny!\n");
      break;

    case 1:
      printf("This is what happens when you fuck a stranger in the ass, Larry.\n");
      break;

    case 2:
      printf("Eight-year-olds, Dude.\n");
      break;

    case 3:
      printf("Yeah, well, you know, that’s just, like, your opinion, man.\n");
      break;

    case 4:
      printf("The Dude abides.\n");
      break;

    case 5:
      printf("Shut the f*ck up, Donny!\n");
      break;

    case 6:
      printf("That rug really tied the room together.\n");
      break;

    case 7:
      printf("Hey, nice marmot.\n");
      break;

    case 8:
      printf("This is not ‘Nam. This is bowling. There are rules.\n");
      break;

    default:
      printf("Error: Out of your element.");
      break;

  }

  return 0;
}
