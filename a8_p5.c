/*
CH-230-A
a8_p5.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

int main()
{
    FILE *inputFile;
    FILE *outputFile;
    char char1, char2;
    int sum;

    /* Open input file for reading */
    inputFile = fopen("chars.txt", "r");
    
    /* Read first two characters from file */
    char1 = fgetc(inputFile);
    char2 = fgetc(inputFile);
    
    /* Close input file */
    fclose(inputFile);
    
    /* Calculate sum of ASCII values */
    sum = (int)char1 + (int)char2;
    
    /* Open output file for writing */
    outputFile = fopen("codesum.txt", "w");
    
    /* Write sum to output file */
    fprintf(outputFile, "%d", sum);
    
    /* Close output file */
    fclose(outputFile);
    
    return 0;
}