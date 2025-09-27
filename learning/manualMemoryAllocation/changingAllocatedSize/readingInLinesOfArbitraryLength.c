#include <stdio.h>
#include <stdlib.h>

// Read a line of arbitrary size from a file
//
// Returns a pointer to the line.
// Returns NULL on EOF or error.
//
// It's up to the caller to free() this pointer when done with it.
//
// Note that this strips the newline from the result. If you need
// it in there, probably best to switch this to a do-while.

char *readline(FILE *fp)
{
  int offset = 0;
  int bufsize = 4;
  char *buf;
  int c;

  buf = malloc(bufsize);

  if (buf == NULL)
    return NULL;

  while (c = fgetc(fp), c != '\n' && c != EOF) {
    printf("%p\n", &fp); 
    if (offset == bufsize - 1) {
      bufsize *= 2;
    

      char *new_buf = realloc(buf, bufsize);

      if (new_buf == NULL) {
        free(buf);
        return NULL;
      }

      buf = new_buf;
    }
    buf[offset++] = c;
  }
  

  if (c == EOF && offset == 0) {
    free(buf);
    return NULL;
  }

  if (offset < bufsize - 1) {
    char *new_buf = realloc(buf, offset + 1);
    
    if (new_buf != NULL)
      buf = new_buf;
  }

  buf[offset] = '\0';

  return buf;
}

int main(void)
{
  FILE *fp = fopen("foo.txt", "r");

  char *line;

  while ((line = readline(fp)) != NULL) {
    printf("%s\n", line);
    free(line);
  }

  fclose(fp);
}


