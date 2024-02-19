#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int size, size2 = 1, menu, index = 0, counter = 0;
    float *array, *array2, number = 0;
    while (1)
    {
    printf("1. Zamutit massiv \n");
    printf("2. Vstavit massivy \n");
    printf("3. Vitashit massivy \n");
    printf("4. Individual0chka \n");
    printf("5. Yznat che tam \n");
    printf("6. Yznat che vo vtorom massie \n");
    printf("7. gg, livaem \n");
    printf("Please choose an option:");
    scanf("%d", &menu);

    switch(menu)
    {
        case 1:
        printf("Please type the size of array:");
        scanf("%d", &size);
        array=(float*)malloc(size * sizeof(float));
        for (int i=0; i<size;i++)
        {
            printf("Enter the values of Array: ");
            scanf("%f", &array[i]);
        }
        size = size - 1;
        break;

        case 2:
        {
            printf("Kuda vstavlat?:");
            scanf("%d", &index);
            printf("Chto vstavlat?:");
            scanf("%f", &number);
            if (index > size)
            {
                size++;
                array = (float *) realloc(array,size);
                index  = size;
            }
            array[index] = number;
            break;
        }

        case 3:
        {
            printf("Otkuda vitashit?:");
            scanf("%d", &index);
            for (int i=index; i<size;i++)
            {
                array[i] = array[i+1];
            }
            size = size - 1;
            array = (float *) realloc(array,size);
            index  = size;
            break;
        }

        case 4:
        {
            array2 = (float*)malloc(size2 * sizeof(float));
            for (int i=0; i<size + 1;i++)
            {
                if ((int)array[i]%9 == 0)
                {
                    array2[counter]= array[i];
                    counter++;
                    array2 = (float *) realloc(array2,counter);
                }
            }
            array2 = (float *) realloc(array2,counter - 1);
            break;
        }

        case 5:
        {
            for (int i=0; i<size + 1;i++)
            {
                printf("the values of Array: ");
                printf("%f\n", array[i]);
            }
            break;
        }

        case 6:
        {
            for (int i=0; i<counter;i++)
            {
                printf("the values of Array2: ");
                printf("%f\n", array2[i]);
            }
            break;
        }

        case 7:
        {
            free(array);
            free(array2);
            return 0;
        }

        default:
        {
            printf("akkuratnee \n");
        }
    }

    }
}
