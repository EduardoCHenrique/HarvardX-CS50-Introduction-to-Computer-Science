#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[]) {
  for(int i = 0; i < argc; i++) {
    int n = strlen(argv[i]) ;
    printf("%i : %s : %i letras\n", i, argv[i], n);
  }
}
