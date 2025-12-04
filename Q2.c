#include <stdio.h>
#include <string.h>

int isPalindrome(char* str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right])
            return 0;
        left++;
        right--;
    }
    return 1;
}

char* firstPalindrome(char* words[], int wordsSize) {
    for (int i = 0; i < wordsSize; i++) {
        if (isPalindrome(words[i]))
            return words[i];
    }
    return "";
}

int main() {
    char* words1[] = {"abc","car","ada","racecar","cool"};
    printf("%s\n", firstPalindrome(words1, 5));

    char* words2[] = {"notapalindrome","racecar"};
    printf("%s\n", firstPalindrome(words2, 2));

    char* words3[] = {"def","ghi"};
    printf("%s\n", firstPalindrome(words3, 2));

    return 0;
}
