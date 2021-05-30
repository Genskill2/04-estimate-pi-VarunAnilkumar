#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>

float wallis_pi(int);

int main()
{
    float pi;
    int i;

    for(i=0;i<5;i++)
    {
        pi = wallis_pi(i);

        if(!(fabs(pi - M_PI)>0.15))
        {
            printf("Estimate with just %d iterations is %f which is too accurate\n",i,pi);
            abort();
        }
    }

    for(i=500;i<3000;i++)
    {
        pi = wallis_pi(i);

        if(!(fabs(pi - M_PI)>0.01))
        {
            printf("Estimate with even %d iterations is %f which is not accurate enough\n",i,pi);
            abort();
        }
    }

    return 0;
}

float wallis_pi(int i)
{
    int j;
    float pi;
    float half_of_pi;

    for(j=1;j<=i;j++)
    {
        half_of_pi = ((4 * i^2)/((4 * i^2) - 1));
    }

    pi = 2 * half_of_pi;

    return pi;
}
