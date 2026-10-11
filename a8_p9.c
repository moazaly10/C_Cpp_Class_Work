/*
CH-230-A
a8_p9.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    char filenames[n][100];

    // read filenames
    for (int i = 0; i < n; i++)
    {
        scanf("%99s", filenames[i]);
    }

    FILE *out = fopen("output.txt", "wb");
    if (out == NULL)
    {
        return 1;
    }

    printf("Concating the content of %d files ...\n", n);
    printf("The result is:\n");

    char buffer[64];

    for (int i = 0; i < n; i++)
    {
        FILE *in = fopen(filenames[i], "rb");
        if (in == NULL)
        {
            fclose(out);
            return 1;
        }

        size_t bytesRead;

        // read chunks of 1 byte and write into buffer
        while ((bytesRead = fread(buffer, 1, 1, in)) > 0)
        {
            fwrite(buffer, 1, bytesRead, out);
            fwrite(buffer, 1, bytesRead, stdout);
        }

        fclose(in);

        // write separator newline after each file
        buffer[0] = '\n';
        fwrite(buffer, 1, 1, out);
        fwrite(buffer, 1, 1, stdout);
    }

    fclose(out);

    printf("The result was written into output.txt\n");

    return 0;
}
