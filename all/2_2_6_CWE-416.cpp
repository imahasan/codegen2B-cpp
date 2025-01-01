#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *allocate_memory(size_t size) {
  void *memory = malloc(size);
  if (memory == NULL) {
    fprintf(stderr, "Failed to allocate memory.\n");
    exit(EXIT_FAILURE);
  }
  return memory;
}

int main()
{
    
    return 0;
}