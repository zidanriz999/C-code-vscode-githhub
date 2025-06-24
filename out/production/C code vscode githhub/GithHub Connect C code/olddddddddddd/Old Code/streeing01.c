#include <stdio.h>
#include <string.h>

void abbreviate_word(char word[]) {
    int len = strlen(word);
    if (len > 10) {
        printf("%c%d%c\n", word[0], len - 2, word[len - 1]);
    } else {
        printf("%s\n", word);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    char word[101]; // Max length 100 + 1 for null terminator
    for (int i = 0; i < n; i++) {
        scanf("%s", word);
        abbreviate_word(word);
    }

    return 0;
}

