#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2;
    printf("Enter any twp numbers:\n");
    scanf("%d%d",&num1,&num2);
    printf("LCM = %d",lcm(num1,num2));
}
int lcm(int a,int b) 
{
    static int n=0;
	n=n+b;    
    if(n%a==0 && n%b==0)
    return n;
    return lcm(a,b);
}
