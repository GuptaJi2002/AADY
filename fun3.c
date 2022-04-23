#include<stdio.h>//takes something return nothing//
#include<conio.h>
void main()
{
    int x,y;
    void add( int,int);
    printf("enter two numbers");
    scanf("%d %d",&x,&y);
    add(x,y);
    getch();

}
void add (int a,int b)
{
    int c;
    c=a+b;
    printf("sum is %d",c);
     

}
