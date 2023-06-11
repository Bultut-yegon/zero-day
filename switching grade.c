#include<stdio.h>
void main()
{
 int marks,a;
 scanf("%d",&marks);
 a=marks/10;
 switch(a)-
 {
 case 10:
 case 9:
 case 8:
 case 7:
    printf("Grade A\n");
    break;
 case 6:
    printf("Grade B\n");
    break;
 case 5:
    printf("Grade C\n");
    break;
 case 4:
    printf("Grade D\n");
    break;
 case 3:
 case 2:
 case 1:
 case 0:
    printf("Grade E\n");
    break;
 default:
    printf("Invalid marks\n");
 }
}














 }












}
