#include <stdio.h>
void writefile() {
   FILE *fp;   
    
    
    fp = fopen("test.txt", "w+");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);
   printf("Successfully wrote test.txt");
};

int main()
{
  writefile();
}

