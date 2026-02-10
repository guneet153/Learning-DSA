#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];

    printf("Enter a string: ");
    scanf("%s", s);   // reads a single word (no spaces)

    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            printf("NO\n");
            return 0;
        }
        left++;
        right--;
    }

    printf("YES\n");
    return 0;
}
