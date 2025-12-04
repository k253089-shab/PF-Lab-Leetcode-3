#include <stdio.h>

int isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

void reverseVowels(char* s) {
    int left = 0, right = 0;

    while (s[right] != '\0')
        right++;
    right--;

    while (left < right) {
        while (left < right && !isVowel(s[left]))
            left++;
        while (left < right && !isVowel(s[right]))
            right--;

        if (left < right) {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            left++;
            right--;
        }
    }
}

int main() {
    char s1[] = "IceCreAm";
    reverseVowels(s1);
    printf("%s\n", s1);

    char s2[] = "leetcode";
    reverseVowels(s2);
    printf("%s\n", s2);

    return 0;
}
