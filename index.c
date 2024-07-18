#include <stdio.h>

int main(void)
{
    int count = 0, x = 3;
    while (count <= 50)
    {
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                // printf("Not Prime: %d \n", x);
                break;
            }
            else
            {
                printf("Prime: %d \n", x);
                count++;
                break;
            }
        }
                x++;
    }
    return 0;
}
