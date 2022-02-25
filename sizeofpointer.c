#include <stdio.h>

struct student
{
    int rollno;
    char name[20];
    float f;
}s1;


void main()
{
    int* ip;
    char* cp;
    struct student* s;
 
    printf("size of int:%d\n",sizeof(ip));
    printf("size of char:%d\n",sizeof(cp));
    printf("size of struct:%d\n",sizeof(s));
    printf("size of struct:%d",sizeof(s1));

    return 0;
}

