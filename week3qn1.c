#include <stdio.h>
#include <string.h>

void removeChar(char *str, char remove) {
    int i, j;
    int len = strlen(str);
    
    for (i = j = 0; i < len; i++) {
        if (str[i] != remove) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    char remove;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("Enter a character to remove: ");
    scanf(" %c", &remove);
    
    removeChar(str, remove);
    
    printf("Result: %s", str);
    
    return 0;
}