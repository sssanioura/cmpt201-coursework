#include <stdio.h>
#include <stdlib.h>

struct word {
  char *head;
  char *tail;
  char *previous;
  int value;
};

// store list of items
char *list_5(struct word *word, char *curr) {
  word->head = curr;
  word.tail = curr;
  word.previous = curr;
  return 0;
}

// get 5 last items and return them one by one
char *history(char *p) { return 0; }

int main() {

  char *buffer = NULL;
  int len = 0;
  printf("Enter input: ");
  getline(&buffer, &len, stdin);

  printf("\n");
  free(buffer);
}
