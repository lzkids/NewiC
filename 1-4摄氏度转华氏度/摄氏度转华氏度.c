#include  <stdio.h>
int main ()
{
    float  F, C;
    int S ,X,B;
    S = 300;
    X = 0;
    B = 20;
    C = X ;
    printf("摄氏度转华氏度\n"); 
    while (C <= S)
    {
        F = 5.0 * (C - 50.0);
        printf("%3.0f %6.1f\n",C,F);
        C = C + B;
        
        /* 5（f- 50º）= */
    }
    return 0;
}