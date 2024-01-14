// clang 1.c -o 1 -m32
// echo 2 > /proc/sys/kernel/randomize_va_space

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
 char buf[256];
 strcpy(buf,argv[1]);
 printf("%s\n",buf);
 fflush(stdout);
 return 0;
}
