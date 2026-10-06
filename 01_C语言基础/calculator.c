#include<stdio.h>
int main()
{
    double x, y;
    char c;
    printf("请输入数字 运算符 数字");
    scanf("%lf %c %lf", &x, &c, &y);
    switch (c)
    {
    case '+':
        printf("结果为:%.2lf + %.2lf = %.2lf", x, y, x + y);
        break;
    case '-':
        printf("结果为:%.2lf - %.2lf = %.2lf", x, y, x - y);
        break;
    case '*':
        printf("结果为:%.2lf * %.2lf = %.2lf", x, y, x * y);
        break;
    case '/':
        if (y == 0)
        {
            printf("除数不能为0");
        }
        else
        {
            printf("结果为:%.2lf / %.2lf = %.2lf", x, y, x / y);
        }
        break;
    default:
        printf("输入了无效运算符");
        break;
    }
    return 0;
}
