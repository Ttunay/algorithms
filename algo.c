#include <stdio.h>
#include <string.h>

int main() {
  char *strings[] = {"bvasd", "boot", "sad"};
  char input[100];

  printf("string: ");
  scanf("%s", input);

  for (int i = 0; i < 3; i++) {
    if (strcmp(strings[i], input) == 0) {
      printf("flotd\n");
      return 0;
    }
  }

  printf("not fo\n");
  return 1;
}
