#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];

    printf("Enter the string: ");
    scanf("%s", s);   // reads a single word (no spaces)

    int left = 0, right = strlen(s) - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }

    printf("Reversed string: %s\n", s);
    return 0;
}
