#include<stdio.h>
#include "project.c"

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
