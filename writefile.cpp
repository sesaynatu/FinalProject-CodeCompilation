#include <stdio.h>

// This function creates a file and writes text into it.
// It shows a basic example of file writing in C.
void writefile()
{
    FILE *fp;   // File pointer used to access the file

    // Open the file in write mode (creates it if it doesn't exist)
    fp = fopen("test.txt", "w+");

    // Write text to the file using two different methods
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);

    // Close the file once writing is finished
    fclose(fp);

    // Confirm to the user that the file was written
    printf("Successfully wrote test.txt");
}

int main()
{
    // Call the writefile function to create and write to the file
    writefile();

    return 0;
}
