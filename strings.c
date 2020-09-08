#include <stdio.h>
#include <string.h> //strlen, strcmp, strcpy

int main(){
    //How to represent strings in C
    //1. A string is an array of characters
    //2. A pointer to character

    char str1[] = {'H', 'e', 'l', 'l', 'o', '\0'}; //ends with a null character
    char str2[] = "Hello";
    char str3[6] = "Hello";
    char str4[10] = "Hello";
    char *str5 = str2; //an array is a pointer
    char *str6 = "World!";

    //str3 = str5; //error, a pointer is not an array

    size_t length = strlen(str2);  //sizeof(str2)/sizeof(char)
    for(int i=0; i<5; i++){
        printf("%c ", str5[i]);
        printf("%c ", *(str5+i));
    }

    //compare two strings  str2 == str3? --> False; different memory addresses
    // you can use the 'strcmp' mehtod
    int result = strcmp(str2, str3); //returns 1 or 0

    //str2 = str3, error
    strcpy(str2, str3); // arguments: strcpy(dst, src)
    printf("str2 now is %s\n", str2);
}