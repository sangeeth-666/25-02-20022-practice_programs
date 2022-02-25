#include <stdio.h>
int add(int x,int y);
int multify(int x,int y,int z);

int main()
{
    int s1,s2;
    int (*ptr) (int,int,int);
    s1=add(30,40);
    s2=multify(2,3,4);
    printf("%d %d",s1,s2);
}

int add(int x,int y)
{
    int z=x+y;
    return z;
}

int multify(int x,int y,int z)
{
    int w=x*y+z;
    return w;
}


