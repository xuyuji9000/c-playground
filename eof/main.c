#include <stdio.h>


int main() {
    FILE *fp = fopen("test.txt", "r");
    int ch = getc(fp);

    while (ch != EOF) {
        // display content on screen
        putc(ch, stdout);

        ch = getc(fp);
    }


    fclose(fp);
    
    return 0;
}