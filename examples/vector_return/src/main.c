#include <stdio.h>
#include <stdint.h>

extern size_t
counter_generate(size_t start, size_t size, size_t **vec);

extern void
counter_free(size_t *vec, size_t size);

int main(void) {
  size_t *vec;

  counter_generate(0, 10, &vec);
  for (int i = 0; i < 10; i++) {
    printf("%d..", i);
  }
  printf("\n");

  counter_free(vec, 10);

  return 0;
}
