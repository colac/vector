#include <stdio.h>
#include <stdlib.h>

int main(){
	//array to check
	//int vect[] = {3,4,1,2,5,6,11};
	//size of the array in bytes divided by the value of an int, 4.
	//int size = sizeof(vect)/sizeof(vect[0]);
	int sum, l = 0, c = 0, a = 0, b = 0, result, verification = 0;

	//variables for insert vector
	int iteration, size, *vect;
	//Insert number of elements
	printf("Enter nr of elements:\n");
	//Stores nr in number
	scanf("%d", &size);
	//Allocates memory using malloc, and the variable number
	vect = (int*)malloc(size * sizeof(int));
	
	//Get vactor values
	printf("Enter the values:\n");
	for (iteration = 0; iteration < size; ++iteration)
	{
		scanf("%d", &vect[iteration]);
	}

	printf("Enter the value of sum:\n");
	//Stores sum
	scanf("%d", &sum);

	printf("Sum value: %d\n", sum);
	printf("Array size: %d\n", size);

	for (l = 0; l<size; l++){
		if (vect[l] > sum){
		printf("Value of: %d > %d\n", vect[l], sum);
		return 0;
		}
		//Debug, prints the 1st number to be added
        //printf("Position, l: %d\n", vect[l]);
        b++;
		//use a to save the position of the 2nd number that will be added to the 1st
        a = b;
		for (c = 0; c<size-b; c++){
			if (vect[a] > sum) {
				printf("Value of %d > %d\n", vect[a], sum);
				return 0;
				}
			//Debug, prints the position of the number that will be added
			//printf("Position, a: %d\n", a);
			//Debug, prints the 2nd number to be added
			//printf("Position, c: %d\n", vect[a]);
			result = vect[l]+vect[a];
			verification++;
			if (result >= sum){
			printf("First two values that added are equal or greater then %d are: %d+%d = %d \n", sum, vect[l], vect[a], result);
			printf("Number of checks: %d\n", verification);
			//return 0;
			system("pause");
				}
			a++;
			}
		}
	return 0;
	//system("pause");
}