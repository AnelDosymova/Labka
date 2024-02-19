#include <stdio.h>
#include <stdlib.h>

void checking(int num)
{
    int is_simple= 1;
    for(int i = 2; i < num; i++)
        if(num%i == 0)
        is_simple = 0;
    if(is_simple == 1)
    printf("%d\n", num);
}


int main()
{
    int num;
    scanf("%d",&num);
    for(int i = 1; i < num; i++)
    {
        checking(i);
    }
    return 0;

}
