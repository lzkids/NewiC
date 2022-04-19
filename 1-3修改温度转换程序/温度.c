#include <stdio.h>
int main()
{
    float huashi,sheshidu;
    int xiaxian, shangxian , buchang;
    xiaxian = 0 ;
    shangxian = 300;
    buchang = 20;

    huashi = xiaxian;
    printf("华氏度转摄氏度\n");
    while (huashi <= shangxian/* condition */)
    {
        sheshidu = (5.0 / 9.0) * (huashi - 32.0);
        printf("%3.0f %6.1f\n",huashi,sheshidu);
        huashi = huashi + buchang;
        /* code */
    }
    
    /* code */
    return 0;
}


