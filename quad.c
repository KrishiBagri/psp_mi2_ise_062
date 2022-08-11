//write your code here
#include <stdio.h>
#include<math.h>
void main()
{  
   float a,b,c,x1,x2,D;
   printf("Enter the Square coefficient of x square ");
   scanf("%f",&a);
   printf("Enter coefficient of x ");
   scanf("%f",&b);
   printf("Enter the value of constant term ");
   scanf("%f",&c);
   
   D=b*b-4*a*c;
   printf("The value of D = %f \n",D);
   
   if(D>0){
       printf("Your roots are real and distinct \n");
       x1=(-b+sqrt(D))/(2*a);
       x2=(-b-sqrt(D))/(2*a);
       printf("The roots of the give equation are %f and %f",x1,x2);
   }
   
    else if(D==0){
       printf("Your roots are real and equal\n");
       x1=x2=(-b+sqrt(D))/(2*a);
       printf("The roots of the give equation are %f and %f",x1,x2);
   }
       
    else if(D<0){
       printf("Your roots are Imaginary\n");
       x1=-b/(2*a);
       x2=sqrt(-D)/(2*a);
       printf("The roots of the give equation are %f+%fi and %f-%fi",x1,x2,x1,x2);
   }
   
   else{
       printf("Invalid Input");
   }
  
}
