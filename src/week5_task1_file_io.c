// week5_task1_file_io.c
// Task 1: Read and write data from text files
// Week 5 – Files & Modular Programming
// TODO: Fill in the missing parts marked below.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    char filename[100] = "data.txt";
    char line[256];
    int line_count = 0;
    // TODO: 1. Open file for writing (mode = "w")
    printf("Enter filename to write to (e.g., data.txt): ");
    scanf("%99s", filename);
    
    fp = fopen(filename, "w");
    // TODO: 2. Check if file opened successfully
    if (fp == NULL){
        perror("error cant open file properly");
        return 1;
    }
    printf("Writing lines to %s...\n", filename);
    // TODO: 3. Write 2–3 lines of text to the file using fprintf()
    fprintf(fp, "hello, there kind sir,C!\n");
    fprintf(fp, " i hope you are having a fine day today C!\n");
    // TODO: 4. Close the file
    fclose(fp);
    // TODO: 5. Open file again for reading (mode = "r")
    fp = fopen(filename, "r");
    // TODO: 6. Use fgets() in a loop to read and print each line to the console
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
        line_count++;
    }
    // TODO: 7. Close the file
    fclose(fp);
    // BONUS: ask user for filename instead of using default "data.txt"
    
    // BONUS: count number of lines read
    printf("\nTotal lines read: %d\n", line_count);
    return 0;
}
