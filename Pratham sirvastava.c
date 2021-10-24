QUES-1
#include <stdio.h>

int main()
{
    printf("Hello World");

    return 0;
}


QUES 2 
#include <stdio.h>

int main()
{
    int n;
    printf("enter an integer");
    scanf("%d",&n);
    printf("%d,n");

    return 0;
}
  
QUES 3
#include <stdio.h>

int main()
{
int a=5;
int b=10;
int sum;
sum=a+b;
printf("the sum of two number are %d",sum);

    return 0;
}
 QUES 4
 
#include <stdio.h>

int main()
{
int a=5.6;
int b=6.4;
int multiply;
multiply=x*y;
printf("the multiply of two number are %f",multiply);

    return 0;
}

QUES 5
    #include <stdio.h>
int main() {  
    char c;
    printf("enter the character ");
    scanf("%c", &c); 
    printf("ASCII value of %c = %d", c, c);
    
    return 0;
}
QUES 6
#include <stdio.h>

int main()
{
    int dividend ,divisior,quotient, remainder;
    printf("enter dividend");
    scanf("%d",&dividend);
printf("enter divisior");
scanf("%d",&divisior);
quotient=divisior/divisior;
remainder=dividend % divisior;
printf("q=%d\n",quotient);
printf("r=%d",remainder);
    

    return 0;
}

QUES 7
#include <stdio.h>


int main()
{
    int a;
    char b;
    float c;
    double d;
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(c));
    printf("%d\n",sizeof(d));
    

    return 0;
}
QUES 8
int main()
{
    int l;
    long m;
    long long n;
    double o;
    long double p;
    printf("size of int %zu",sizeof(l));
    printf("size of long int %zu",sizeof(m));
    printf("size of long long  int %zu",sizeof(n));
    printf("size of double %zu",sizeof(o));
    printf("size of long double %zu",sizeof(p));
    
    return 0;
}
QUES 9
#include <stdio.h>

int main()
{
    int a=10;
    int b=20;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value of x is %d\n",a);
    printf("the value of y is %d",b);
    

    return 0;
}
QUES 10
#include <stdio.h>

int main()
{
  int x , y;
    printf("enter the length of the square\n");
    scanf("%d",&y);
    x = (y*y);
    printf("area of square :%d", x);
    return 0;
}
QUES11
#include <stdio.h>

#include<math.h>

int main()

{
    
float s1,s2,s3,s,area;
 
scanf("f%f%f",&s1 ,&s2 ,%s3);
 
s=(s1+s2+s3)/2;
  
area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
 
printf("%f",area);


return 0;

}
QUES 12
#include <stdio.h>

int main()
{
     float b1,b2,h;
    float t;
    printf("Enter the size of two bases and height of the trapezium");
    scanf("%f%f%f",&b1,&b2,&h);
    t = 0.5*( b1+b2 ) * h ;
    printf("t of trapezium is: %.3f",t);
    return 0;
}
 QUES 13
#include <stdio.h>
int main()
{
int r=48;
float pie=3.14285714286;
double v=(4.0/3.0)*pie*(r*r*r);
printf("V of the sphere=%f",v);
return 0;
}
QUES 14

QUES 15
 #include<stdio.h>
int main()
{
int a=5;
 int b=5;
int sum;
printf("%d",a+b);
return 0;
}


QUES 16
#include <stdio.h>
int main() {
int a, b;
int sum, sub, mul, mod;
float div;
printf("Enter any numbers:\n");
scanf("%d%d", &a, &b);
sum = a+b;
sub = a-b;
mul = a*b;
div = (float)a/b;
mod = a % b;
printf("\n");
printf("Addition of %d+%d=%d\n",a,b,sum);
printf("Subtraction of %d-%d = %d\n",a,b,sub);
printf("Multiplication of %d * %d = %d\n", a, b, mul);
printf("Division of %d / %d = %f\n", a, b, div);
printf("Modulus of %d %% %d = %d\n", a, b, mod);
return 0;
}



QUES 17
#include <stdio.h>
int main(){
    float l, w, a;
    printf("enter the length of rectangle\n");
    scanf("%f", &l);
    printf("enter the width of  rectangle\n");
    scanf("%f", &w);
    
    a = l * w;
    printf("Area of Rectangle : %0.4f\n", a);
    return 0;
}
QUES18
#include <stdio.h>

int main()
{
    int length,width,area ;
    printf("enter length of rectangle");
    scanf("%d",&length);
    printf("enter the width of rectangle");
    scanf("%d",&width);
    area=(length*width);
    printf("area of rectangle=%d sq.units",area);

    return 0;
}
QUES 19
#include <stdio.h>
int main()
{
float radius, diamter,circumfernce,area;
printf("enter the radius of circle");
scanf("%f",&radius);
diamter=2*radius;
circumfernce=2*3.14*radius;
area=3.14*(radius*radius);
printf("diamter of circle=%.1f units\n",diamter);
printf("circumfernce of circle = %.2f units \n", circumfernce);
printf("area of circle = %1f sq.units", area);
    return 0;
}
QUES 20
#include <stdio.h>

int main()
{
    int centimeter, meter, kilometer;
    printf("enter lenght in cm");
    scanf("%d",&centimeter);
    meter=centimeter/100.0;
    kilometer=centimeter/100000.00;
    printf("length in meter =%d m \n",meter);
    printf("length in kilometer=%d kilometer",kilometer);

    return 0;
}
 QUES 21
#include <stdio.h>

int main()
{
    float celsius,f;
    printf("enter the temp in celsius");
    scanf("%f",&celsius);
    celsius=(celsius*9/5)+32;
    printf("temp in f %f",celsius);

    return 0;
}
QUES 22
#include <stdio.h>

int main()
{
    float c,f;
    printf("enter the temp in f");
    scanf("%f",&f);
    c=(c*9/5)+32;
    printf("temp in f %f",f);

    return 0;
}

QUES 23
#include <stdio.h>
int main()
{  
int nd,y,w,d; 
printf("enter the total days");
scanf("%d",&nd);
y=nd/365;
w=(nd%365)/7;  
d=(nd%365)%7;  
printf("%d=%d years %d weeks %d days");
return 0;

QUES 24
#include <stdio.h>
#include <math.h>
int main()
{  
int a,b;
float p;
printf("enter the numbers to program ");
scanf("%d%d",&a,&b);
p=pow(a,b);
printf("%f",a);
return 0;
}

QUES 25
#include <stdio.h>

#include <math.h>

int main()

{
  
float x,y;
 
printf("enter the number");
  
scanf("%f",&x);
   
s=sqrt(x);
   
printf("square root is %f",y);
  
return 0;

}

QUES 26
 #include <stdio.h>
int main()
{    
int x, y, z;
printf("enter the two angles of triangle");   
scanf("%d%d",&x,&y);  
z=180-(x+y);  
printf("third angle of the triangle =%d",z);   
return 0;
}

QUES 27
#include <stdio.h>
int main()
{    
float base, height, area;   
printf("enter base of the trinagle");    
scanf("%f",&base);    
printf("enter height of the trinagle");    
scanf("%f",&height);    
area =(base*height)/2;    
printf("area of the triangle = %.2f sq.units",area);    
return 0;
}

QUES 28
#include <stdio.h>
#include <math.h>
{    
int s;    
float a;    
printf("enter side");
scanf("%d",&s);    
area=(sqrt(3)/(4))*(s*s));    
printf("area %f",a);    
return 0;
}



QUES 29
#include <stdio.h>


int main()

{

int phy,che,math,english,botany,total;
   
float avg;
    
printf("enter the marks of 5 subject");
    
scanf("%d%d%d%d%d",&phy,&che,&math,&english,&botany);
    
total=phy+che+math+english+botany;

printf("total marks %d",total);

avg=total/5;

printf("average marks %lf",avg);
    
return 0;

}
QUES 30
#include <stdio.h>


int main()

{
      
int si,p,t,r;
    
   
 printf ("\nenter p");
    
scanf("%d",&p);

printf ("\n enter rate of interest");
    
scanf("%d",&r);
    
printf ("\n enter time");
    
scanf("%d",&t);
    
si=(p*r*t)/100;
    
printf("the value of simple interest%d",si);
    

return 0;

    

}
QUES 32
#include<stdio.h>
int main()
{
printf("yes\nare\ni\n\'c\'known\n\"i you konw c language\"");
return 0;
}

QUES 31
#include <stdio.h>
#include<math.h>
int main()
{   
float principal,rate,time,compoundinterest;    
printf("enter principal rate time");
scanf("%f%f%f",&principal,&rate,&time);
compoundinterest=principal*(pow((1+rate/100),time));
printf("compoundinterest %f",compoundinterest);    
return 0;
}

QUES 33
#include <stdio.h>
int main()
{ 
long int mobile;  
printf("enter the mobile");    
scanf("%ld",&mobile);   
printf("%ld",mobile);    
return 0;
}
QUES 34
#include<stdio.h>
#include<math.h>

int main()
{
int a,b;
float p;
printf("enter the numbers to progrman");
scanf("%d%d",&a,&b);
p=pow(a,b);
printf("%f",p);
return 0;
}
QUES 35
#include <stdio.h>
int main()
{
float cost;
cost=172.53;
printf("the sales total is:$%.2f",cost);
return 0;
}

QUES 36
#include <stdio.h>

int main()
{
    float raju;
    raju=6.5*3;
    printf("total no. of apples raju got from raghu ,sheenu,and akash is:%.1f",raju);
    return 0;
}

QUES 37
#include <stdio.h>

int main()
{
    float value=123456.456f;
    printf("value %f \n", value);
    printf("value %e \n", value);
    

    return 0;
}
