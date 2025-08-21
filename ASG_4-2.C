#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, start, end, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    printf("Reversed words: ");
    end= len- 1;
    while (end >= 0) {
        
        while (end >= 0 && str[end] == ' ')
            end--;

        if (end < 0)
            break;

        start = end;
            
            while (start >= 0 && str[start] != ' ')
                start--;

            for (i = start + 1; i <= end; i++) {
                printf("%c", str[i]);
                }
                
                printf(" ");
                    end = start - 1;
    }

    return 0;
}
