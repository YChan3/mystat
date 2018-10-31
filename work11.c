#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <time.h>

int main(){
  struct stat buffer;
  stat("work11.c", &buffer);
  
  printf("File size: %ld\n", buffer.st_size);
  printf("File permissions: %o\n", buffer.st_mode);
  printf("Last accessed: %s", ctime(&buffer.st_atime));
  printf("Last Modified: %s", ctime(&vuffer.st_mtime));
  
  return 0;
}
