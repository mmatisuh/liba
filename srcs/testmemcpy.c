// Sample program to show that memcpy() can loose data.
#include <stdio.h>
#include <string.h>
int main()
{
   char csrc[100] = "Geeksfor";
   printf("%s\n", csrc);
   printf("size_t = %lu bytes\n", sizeof(size_t));
   printf("strlen    = %lu bytes\n", strlen(csrc) + 20);
   printf("%lu\n", strlen(csrc));
   printf("%lu\n", strlen(csrc) + 1);
   printf("%s\n", csrc+5);
   memcpy(csrc+5, csrc, ((strlen(csrc) + 20)));
   printf("%s", csrc);
   return 0;
}
