#include <stdio.h>

int main(){
    FILE *fp1, *fp2;
    char ch1, ch2;
    int i = 0;

    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "r");

    while((ch1 = fgetc(fp1)) != EOF){
        ch2 = fgetc(fp2);
        if(ch1 != ch2){
            printf("Files are different at position %d\n", i);
            break;
        }
        i++;
      }
    fclose(fp1);
    fclose(fp2);

    return 0;
}
