#include<stdio.h>
#include<conio.h>
#include "test.c"
float calculate(int,float);
void main()
{
    float rupees,result;
    int ch;
    printf("1.for dollar\n");
    printf("2.for euros\n"); 
    printf("3.for dinar\n");
    printf("4.for riyal\n");
    printf("enter your choice\n");
    scanf("%d",&ch);
    printf("enter the amount of rupees\n");
    scanf("%f",&rupees);
    result=calculate(ch,rupees);
    printf("%f",result);
    test();
}
float calculate(int ch,float rupees)
{
    float result;
    switch(ch)
    {
        case 1 :
        result=rupees/76;
        printf("%f amount equal to %f dollar\n",rupees,result);
        break;
        case 2 :
        result=rupees/84;
        printf("%f amount equal to %f euros\n",rupees,result);
        break;
        case 3:
        result=rupees/249;
        printf("%f amount equal to %f dinar\n",rupees,result);
        break;
        case 4:
        result=rupees/20;
        printf("%f amount equal to %f riyal\n",rupees,result);
        break;
        case 5:
        result = rupees/ 88;
        printf("\n%.2f Rupee =  %.2f pound", rupees,result);
        default :
        printf("choose from only 1 to 4\n");
        break;
    }
    return result;
}
void test()
{
    if((int)calculate(1,76)==1)
    {
    printf("testcase1 passed\n");
    }
    else
    {
    printf("testcase failed\n");
    }
    if((int)calculate(2,84)==1)
    {
    printf("testcase2 passed\n");
    }
    else
    {
    printf("testcase failed\n");
    }
    if((int)calculate(3,249)==1)
    {
    printf("testcase3 passed\n");
    }
    else
    {
    printf("testcase failed\n");
    }
    if((int)calculate(4,20)!=2)
    {
    printf("testcase4 passed\n");
    }
    else
    {
    printf("testcase failed\n");
    }
    if((int)calculate(5,88)==1)
    {
        printf("testcase5 passed\n");
    }
    else
    {
        printf("testcase failed")
    }
}
