# Simple indonesian mini-custom string.h library, stringman.h

*Hello guys from across the internet!*

My name is Muhammad Rifqi.
In this README.md file, i just want to give some documentation about my custom string library which is named **stringman.h**

(NOTE: This is just a hobby btw, so yeah... not so serious. at least for now. and oh yeah, *stringman* stands for string manipulation)


#### int cchar(const char* format) or int hitungkar(const char* format):
Its functionality is to count the length or the amount of the character in the *format* string

***example***
#include "stringman.h"

int main(){
    char text[] = "Hello";
    int len = hitungkar(text);
    printf("%d\n", len);
    return 0;
}


#### void copystr(char* dest, const char* src) or void kopistr(char* dest, const char* src):
Its functionality is to copy the string of *src* into *dest*

***example***
#include "stringman.h"

int main(){
    char dest[24];
    char src[] = "testing";
    kopistr(dest, src);
    printf("%s", dest);
    return 0;
}


#### int cmpstr(const char* dest, const char* src) or int bandingstr(const char* dest, const char* src):
Its functionality is to *compare* between *dest* and *src* strings

**return value:**
It will return 0 if both strings are similar and it will return -1 if both are different

***example***
#include "stringman.h"

int main(){
    if (bandingstr(text, dest) == 0){
        printf("Sama\n");
    }
    else {
        printf("Beda\n");
    }
    return 0;
}
(NOTE FOR ME: It still has a tech debt to pay)

# Summary:
So basically it's similar to '<string.h>', but in english and also bahasa indonesia, and also simpler.
