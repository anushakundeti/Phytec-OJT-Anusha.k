#include<stdio.h>
#include<stdlib.h>



void main()
{
        int a=10,b=5,opt;
        while(1)
        {
                printf("MENU:\n0.exit\n1.addition\n2.subtraction\n3.multiplication\n");
                scanf("%d",&opt);
                switch(opt)
                {
                        case 0:exit(0);
                        case 1:add(a,b);
                               break;
                        case 2:sub(a,b);
                               break;
                        case 3:mul(a,b);
                               break;
                        default:printf("invalid option\n");
                }
        }
}
void mul(int a,int b)
{
        int mul=a*b;
        printf("mul=%d\n",mul);
}

void add(int a,int b)
{
        int sum=a+b;
        printf("sum=%d\n",sum);
}
void sub(int a,int b)
{
        int sub=a-b;
        printf("sub=%d\n",sub);
}

