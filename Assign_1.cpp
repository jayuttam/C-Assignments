#include<iostream>
using namespace std;
int check(int);
int factorial(int);
void swap(int *p, int *q);
int lcm(int ,int);
bool prime(int a);
int main()
{
    int x;
    cin>>x;
    bool y;
    y=prime(x);
    if(y==0)
        cout<<"Not a prime number.";
    else
        cout<<"Prime number.";
    return 0;
}
//1. Write a program to check the number is even or odd?
int check(int a)
{
    if(a%2==0)
        return 0;
    else
        return 1;
}

//2. WAP to calculate factorial of a number?
int factorial(int x)
{
    int count=1;
    for(int i=x;i>0;i--)
    {
        count=count*i;
    }
    return count;
}

//3. WAP to swap two variables?
void swap(int *p, int *q)
{
    int x;
    x=*p;
    *p=*q;
    *q=x;
}

//4. WAP to calculate LCM of two numbers(TSRS)?
int lcm(int a,int b)
{
    int gcd=0,x=a*b;
    while(b!=0)
    {
        gcd=a%b;
        a=b;
        b=gcd;
    }
    int LCM;
    LCM=x/a;
    return LCM;
}

//5. WAP to check wheather the number is prime or not?(TSRS)
bool prime(int a)
{
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;
}