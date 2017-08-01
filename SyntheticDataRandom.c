/*  Joe Crowley, 2017 Synthetic Data Generator
*	This program generates synthetic data for customer ratings on products. 
*   After assigning an overall star rating for a product, individual category ratings are assigned.
*	A 0 means that no rating was given for the product as a whole, or no rating was given in that category.
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int getRand(int max);
//int * normalize(int givenArray[]);


int main(int argc, char* argv[])
{
	int j = 0;
	srand(time(NULL));

	int percentage[6] = {0};
	
	
for(j=0;j<1000;j++){	

	int overallRating = 0;
	int categoryRatings[6] = {0};
	int randomNumber = 0;
	int i = 0;	

	for(i = 0; i < 6; i++){
		percentage[i] = getRand(100);
	}
	
	int sum = 0;
	//Gets sum of random numbers
	for(i = 0; i< 6; i++){
		sum += percentage[i];
	}
	//printf("%d\n", sum);
	//printf("%d\n", percentage[0]);
	//percentage[0] = (int)(percentage[0] * 100 / sum);
	//printf("%d\n", percentage[0]);

	//The category ratings are normailzed, to be a percent of 100
	for(i = 0; i< 6; i++){
		percentage[i] = (percentage[i] * 100 / sum);
	}
	

	//for(i = 0;i< 6; i++){
	//	printf("%d %d\n", i, percentage[i]);
	//}




		randomNumber = getRand(100);
		//Assigns the Overall Rating 0-5
			if(randomNumber <= percentage[0]){
				overallRating = 5;
			}
			else if(randomNumber <= percentage[0]+percentage[1]){
				overallRating = 4;
			}
			else if(randomNumber <= percentage[0]+percentage[1]+percentage[2]){
				overallRating = 3;
			}
			else if(randomNumber <= percentage[0]+percentage[1]+percentage[2]+percentage[3]){
				overallRating = 2;
			}
			else if(randomNumber <= percentage[0]+percentage[1]+percentage[2]+percentage[3]+percentage[4]){
				overallRating = 1;
			}
			else{
				overallRating = 0;
			}
		//Assigns the Category ratings 0-5
		if(overallRating != 0){
			for(i = 0; i < 6; i++){
				randomNumber = getRand(100);
				if(randomNumber <= percentage[0]){
					categoryRatings[i] = 5;
				}
				else if(randomNumber <= percentage[0]+percentage[1]){
					categoryRatings[i] = 4;
				}
				else if(randomNumber <= percentage[0]+percentage[1]+percentage[2]){
					categoryRatings[i] = 3;
				}
				else if(randomNumber <= percentage[0]+percentage[1]+percentage[2]+percentage[3]){
					categoryRatings[i] = 2;
				}
				else if(randomNumber <= percentage[0]+percentage[1]+percentage[2]+percentage[3]+percentage[4]){
					categoryRatings[i] = 1;
				}
				else{
					categoryRatings[i] = 0;
				}
			}
		}
		else if(overallRating == 0){
			for(i = 0; i < 6; i++){
				categoryRatings[i] = 0;
			}
		}


	printf("%d", overallRating);
	for(i = 0; i < 6; i++){
		printf(" %d", categoryRatings[i]);
	}
	printf("\n");

	

	
	}
}


//When given an int array, will will return each index as an integer percent of the sum of the array's contents
/*
int * normalize(int givenArray[]){
	
	static int normalArray[6];

	int sum = 0;
	for(int i=0;i< 6; i++){
		sum+= percentage[i];
	}
	for(int i=0;i< 6; i++){
		percentage[i] = percentage[i] / sum;
	}


	return normalArray;

}
*/

//When given max, will return a number from 1 - max
int getRand(int max){
	int number = 0;
	number = (rand() % max + 1);
	return number;
}