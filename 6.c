//Write a program in C to display the multiplication table of a given integer using for loop
#  include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
}