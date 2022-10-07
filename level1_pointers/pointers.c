#include "pointers.h" // Include user header file
#include <ctype.h> // For toupper
#include <stdlib.h> // For NULL

void set_max(int a, int b, int *pm) {
    if(pm == NULL) {
        return;
    }
    if(a > b) {
        *pm = a;
    } else {
        *pm = b;
    }
    return;
}

int* range(int x) {
    if(x < 1) {
        return NULL;
    } else {
        int size = sizeof(int) * (x);
        int *array = malloc(size);
        for(int i = 1; i <= x; i++) {
            array[i-1] = i;
        }
        
        return array;
    }
    
}

char* capitalize(char* s, int slen) {
    if(slen == 0 || s == NULL) {
        return NULL;
    }
    int size = sizeof(char) * (slen + 1);
    char *newS = malloc(size);
    int count = 0;
    while (count < slen) {
        if(s[count] > 96 && s[count] < 123) {
            newS[count] = toupper(s[count]);
        } else {
            newS[count] = s[count];
        }
        count++;
    }
    newS[slen] = '\0';
    return newS;
}
