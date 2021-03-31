#include <stdio.h>

main() {

   FILE *fp;

   fp = fopen("rest.txt", "w+");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);
}
