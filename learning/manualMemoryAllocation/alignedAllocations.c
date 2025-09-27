#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  // Allocate 256 bytes aligned on 64 byte boundary
  char *p = aligned_alloc(64, 256);

  strcpy(p, "Hello Mom!");
  printf("%s\n", p);

  free(p);
}

// The following is a nice function that does 
// what realloc does but aligned


void *aligned_realloc(void *ptr, size_t old_size, size_t alignment, size_t size)
{
  char *new_ptr = aligned_alloc(alignment, size);

  if (new_ptr == NULL)
    return NULL;

  size_t copy_size = old_size < size? old_size: size;
  // get min
  if (ptr != NULL)
    memcpy(new_ptr, ptr, copy_size);

  free(ptr);

  return new_ptr;
}
