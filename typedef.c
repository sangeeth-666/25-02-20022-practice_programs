 #include<stdio.h>
 
 struct student
 {
     int eno;
     char ename[20];
     float esal;
 };
 
 typedef struct student emp;
 void main()
 {
     emp e;
     printf("enter the details:");
     scanf("%d %s %f",&e.eno,e.ename,&e.esal);
     printf("%d %s %f",e.eno,e.ename,e.esal);
 }
 
