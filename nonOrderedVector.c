#include <stdio.h>
//#include <stdlib.h>

int main()
{
        int vect[] = {3,4,1,2,5,6,11};
        int size = sizeof(vect)/sizeof(vect[0]);
        int sum = 16, l = 0, c = 0, a = 0, b = 0, result, verification = 0;

        printf("Sum value: %d\n", sum);
        printf("Array size: %d\n", size);

for (l = 0; l<size; l++){

        //printf("Position, l: %d\n", vect[l]);
        b++;
        a = b;
                for (c = 0; c<size-b; c++){

                        //printf("Position, i: %d\n", a);
                        //printf("Position, c: %d\n", vect[a]);
                        result = vect[l]+vect[a];
                        verification++;
                        if (result >= sum){
                                printf("First two values that added are equal or greater then %d are: %d+%d = %d \n", sum, vect[l], vect[a], result);
                                printf("Number of checks: %d\n", verification);
                                return 0;
                        }
                        a++;
                }
        }
        //return 0;
        system("pause");
}