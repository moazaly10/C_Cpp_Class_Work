#include <stdio.h>
#include <stdlib.h>

void convert_distances(){

    //Open the input and output files
    FILE *fp_in = fopen("distances.txt", "r");
    FILE *fp_out = fopen("distances_meters.txt", "w");

    //Check if the files opened successfully
    if (fp_in == NULL || fp_out == NULL){
        perror("Error opening files");
        exit(1);
    }

    //Variables to store values read from the files
    double yards,feet;
    int line_number = 1;

    //Read from the input file to write to the output file

    while (fscanf(fp_in,"%lf %lf", &yards, &feet)==2.0){
        double meters_yard = yards * 0.9144;
        double meters_feet = feet * 0.3048;

        //write the line number and distances in the output file
        
        fprintf(fp_out,"%d %.4lf %.4lf", line_number, meters_yard, meters_feet);
        
        //increment line number

        line_number++;
    }
    //close files

    fclose(fp_in);
    fclose(fp_out);
}