#include <stdio.h>
#include <stdlib.h>

int main() {

  // read in user input
  //
  char *line = NULL;
  size_t len = 0;

  printf("Enter input: ");
  getline(&line, &len, stdin);
}
//
