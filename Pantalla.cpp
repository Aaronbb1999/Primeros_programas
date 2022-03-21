#include <stdio.h>

int main()
{
    double TC;
    double TF;

    printf("Enter the temperture in Celsius\n");
    scanf("%lf",&TC);

    TF=9/5*TC+32;

    printf("The temperture in Faranheit is %lf\n",TF);

    return 0;
}