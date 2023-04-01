#include <stdio.h>
#include <string.h>

#define MAX_CHARS 256

void countChars(char *str, int *freq) {
    int i;
    int len = strlen(str);
    
    for (i = 0; i < len; i++) {
        freq[str[i]]++;
    }
}

int main() {
    char str[100];
    int freq[MAX_CHARS] = {0};
    int i;
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    
    countChars(str, freq);
    
    for (i = 0; i < MAX_CHARS; i++) {
        if (freq[i] != 0) {
            printf("'%c' occurs %d times\n", i, freq[i]);
        }
    }
    
    return 0;
}