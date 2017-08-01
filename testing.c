#include <stdio.h>
#include <stdlib.h>

void normalizeArray(double arr[]);

int main(int argc, char* argv[])
{	
	int i = 0;
	double numbers[4] = {0, 1, 2, 3};
	for(i = 0; i < 4; i++){
		printf("%lf\n", numbers[i]);
	}
	normalizeArray(numbers);
	for(i = 0; i < 4; i++){
		printf("%lf\n", numbers[i]);
	}


}

void normalizeArray(double arr[]){
	int i = 0;
	double max = 0;
	for(i = 0; i < 4; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}

	for(i = 0; i < 4; i++){
		arr[i] = ((arr[i] + 1)/(max + 1)) * 100;
	}

}