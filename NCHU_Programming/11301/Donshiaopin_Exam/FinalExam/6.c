#include <stdio.h>
int main() {
    FILE *fp;
    char filename[100];
    char line[1000];
    // Get filename from user
    printf("Enter the filename to open: ");
    scanf("%s", filename);
    // Complete your code from here
    fp = fopen(filename, "r");

    while(!feof(fp)) {
        fgets(line, 100, fp);
        printf("%s", line);
        //puts(line);
    }
    fclose(fp);

    return 0;
}