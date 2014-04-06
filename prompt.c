#include <stdio.h>
#include <stdlib.h>

 // Declare a static buffer for max user input  
static char input[2048]; 

int main(int argc, char** argv){

    // Print Version and  Exit information
    puts("ComeAtMe Version 47.0.2.1");
    puts("Press Ctrl+c to Exit\n");

    // In a never ending loop
    while(1){

        // output prompt
        fputs("ComeAtme > ", stdout);

        // read line
        fgets(input, 2048, stdin); 

        // echo back input
        printf("No you're %s", input);
    }

    return 0;
}