#include<stdio.h>
void f(int *px,int *py)
{
	int temp;
	temp=*px;
	*px=*py;
	*py=temp;
	printf("x=%d,y=%d",*px,*py);
}
int main()
{
	int a=5,b=6;
	int *p1,*p2;
	p1=&a;p2=&b;
	f(p1,p2);
	printf("a=%d,b=%d",a,b);
} 

