#include <stdio.h>

int main () {
    char vowels;

    printf("Enter How many Vowels are there in English? ");
    scanf(" %c", &vowels);

    // if (vowels == 'a') {
    //     puts("It is vowel");
    // }
    // else if (vowels == 'e') {
    //     puts("It is vowel");
    // }
    // else if (vowels == 'i') {
    //     puts("It is vowel");
    // }
    // else if (vowels == 'o') {
    //     puts("It is vowel");
    // }
    // else if (vowels == 'u') {
    //     puts("It is vowel");
    // }
    // else {
    //     puts("There is no vowels");
    // }

    if (vowels == 'a' || vowels == 'e' || vowels == 'i' || vowels == 'o' || vowels == 'u' || vowels == 'A' || vowels == 'E' || vowels == 'I' || vowels == 'O' || vowels == 'U' ) {
        puts("Its Vowel!");
    }
    else {
        puts("Its not a vowel!");
    }
}