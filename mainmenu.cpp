#include <iostream>
#include <limits>
#include "writefile.h"
#include "readfile.h"
#include "calculate_sum.h"
#include "calculate_product.h"

void writefile() {
   FILE *fp;  
   
   
    fp = fopen("test.txt", "w+");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);
   printf("Successfully wrote test.txt");
};

void readfile() {

   FILE *fp;
   char buff[255];
    printf("This is the content of your file test.txt....");
   
   fp = fopen("test.txt", "r");
   fscanf(fp, "%s", buff);
   printf("1 : %s\n", buff );
   fgets(buff, 255, (FILE*)fp);
   printf("2: %s\n", buff );
   fgets(buff, 255, (FILE*)fp);
   printf("3: %s\n", buff );
   fclose(fp);
   printf("End of content");
}



void calculate_sum() {
    int num1, num2, sum;
    std::cout << "Enter the first integer: ";
    std::cin >> num1;
    std::cout << "Enter the second integer: ";
    std::cin >> num2;
    sum = num1 + num2;
    std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << std::endl;
}

void calculate_product() {
    int num1, num2, v_prod;
    std::cout << "Enter the first integer: ";
    std::cin >> num1;
    std::cout << "Enter the second integer: ";
    std::cin >> num2;
    v_prod = num1 * num2;
    std::cout << "The product of " << num1 << " and " << num2 << " is " << v_prod << std::endl;
}


int main() {
    int choice;
    bool exit_program = false;

    do {
        std::cout << "\n--- File Menu ---\n";
        std::cout << "1. Write File \n";
        std::cout << "2. Read File \n";
        std::cout << "3. Calculate Sum\n";
        std::cout << "4. Calculate Product\n";
       
        std::cout << "Press CTRL+C to exit\n";
       
        std::cout << "Enter your choice (1-4)";
       
     
        if (!(std::cin >> choice)) {
            std::cout << ">> Invalid input. Exiting program. Goodbye!\n";
            exit_program = true;
            break;
        } /*end of if*/

        switch (choice) {
            case 1:
                writefile();
                break;
            case 2:
                readfile();
               
                break;
            case 3:
                calculate_sum();
               
                break;
            case 4:
                calculate_product();
               
                break;
            case 5:
                               
                break;
            default:
                std::cout << ">> Invalid choice. Please enter 1 or 2.\n";
                break;
        }/*end of switch*/

    } /*end of do*/ while (!exit_program);

    return 0;

}; /*end of main*/