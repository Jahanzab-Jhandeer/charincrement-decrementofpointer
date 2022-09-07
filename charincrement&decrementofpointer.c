#include<stdio.h>
//char increment and decrement in pointers
int main () {
    char star;
    star = '*';
    char *ptr = &star;
    printf("ptr = %d" , ptr);
    ptr++;
    printf("ptr = %d" , ptr);
    ptr--;
    printf("ptr = %d" , ptr);
}