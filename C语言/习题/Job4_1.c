#include <stdio.h>
#include <math.h>

void main()
{
    double x;
    double fz, fm;
    const double E = 2.718;
    
    printf("请输入弧度x:");
    scanf("%lf", &x);

    fz = (sin(3*x) * pow(E, 2) + pow(x, 8) - tan(2*x));
    fm = fabs(1.53*x + cos(5*x));

    if(fm == 0)
    {
        printf("分母为0, 无法计算");
    }
    else
    {
        printf("\nfun(x) = %.2lf", fz/fm);
    }
    
}