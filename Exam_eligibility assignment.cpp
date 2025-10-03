/* 
Name:Samuel munyua 
Reg:CT100/G/26198/25 
Description:Exam_Eligibility 
*/ 
#include <stdio.h> 
int main()  

{ 
 float attendance; 
 float average_marks; 
//variable declaration 
printf("Enter your attendance in percentage form:"); 
scanf("%f",&attendance); 
printf("Enter your average_mark:"); 
scanf("%f",&average_marks); 
if(attendance>=75 &&average_marks >=40) 
{ printf("your are eligible for final exam.\n");}else 
{printf("you are not eligible for your final exam.\n");} 
return 0; 
}