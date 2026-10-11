/*
CH-230-A
a8_p6.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

int main(void)
{
    char file1[100];
    char file2[100];
    double num1, num2;

    // read file names
    scanf("%99s", file1);
    scanf("%99s", file2);

    FILE *f1 = fopen(file1, "r");
    FILE *f2 = fopen(file2, "r");

    if (f1 == NULL || f2 == NULL)
    {
        return 1;
    }

    // read values
    fscanf(f1, "%lf", &num1);
    fscanf(f2, "%lf", &num2);

    fclose(f1);
    fclose(f2);

    FILE *out = fopen("results.txt", "w");
    if (out == NULL)
    {
        return 1;
    }

    // write results
    fprintf(out, "%lf\n", num1 + num2);
    fprintf(out, "%lf\n", num1 - num2);
    fprintf(out, "%lf\n", num1 * num2);
    fprintf(out, "%lf\n", num1 / num2);

    fclose(out);
    return 0;
}
