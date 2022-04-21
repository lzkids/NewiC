#include <stdio.h>
int main( )
{
    float fahr, celsius;
    /* fahr是华氏； celsius是摄氏度 */
    int lower,upper,stup;
    /* lower 是下限; upper 是上限；stup是步长 */
    lower = 0;
    upper = 300;
    stup = 20;

    fahr = lower;
    while (/* condition */fahr <= upper)
    {
       celsius = (5.0 / 9.0 ) * (fahr - 32.0); 
        /* celsius = 5 * (fahr-32) / 9; */
       printf("%3.0f %6.1f\n",fahr,celsius);
       
        fahr = fahr + stup;
    }
    /* code */
    return 0;
}
