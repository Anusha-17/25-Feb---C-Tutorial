#include <stdio.h>  
float add(float,int);  
float sub(float,int);  
float mul(float,int);  
float div(float,int);  
int main()  
{  
    float x;               
    int y;  
    float (*fp[4]) (float,int);        
    fp[0]=add;              
    fp[1]=sub;  
    fp[2]=mul;  
    fp[3]=div;  
    printf("Enter the values of x and y :");  
    scanf("%f %d",&x,&y);  
  float r=(*fp[0]) (x,y);        
    printf("\nSum of two values is : %f",r);  
     r=(*fp[1]) (x,y);             
    printf("\nDifference of two values is : %f",r);  
      r=(*fp[2]) (x,y);            
    printf("\nMultiplication of two values is : %f",r);  
     r=(*fp[3]) (x,y);            
    printf("\nDivision of two values is : %f",r);  
    return 0;  
}    
float add(float x,int y)  
{  
    float a=x+y;  
    return a;  
}  
float sub(float x,int y)  
{  
    float a=x-y;  
    return a;  
}  
float mul(float x,int y)  
{  
    float a=x*y;  
    return a;  
}  
float div(float x,int y)  
{  
    float a=x/y;  
    return a;  
}  
