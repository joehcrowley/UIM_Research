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


int main(int argc, char* argv[])
{
	int j = 0;
	srand(time(NULL));

	int goodPercentage[5] = {20, 20, 5, 3, 2};
	int badPercentage[5] = {10, 10, 10, 20, 30};
	//5 Star
	int quality5[5] = {50, 40, 5, 2, 1};
	int price5[5] = {45, 40, 8, 1, 1};
	int time5[5] = {40, 30, 10, 10, 5};
	int userInterface5[5] = {30, 10, 10, 10, 10};
	int design5[5] = {40, 30, 5, 3, 2};
	int color5[5] = {25, 20, 15, 3, 7};
	int material5[5] = {30, 30, 30, 5, 1};
	int name5[5] = {35, 25, 20, 10, 5};
	int origin5[5] = {35, 35, 10, 10, 5};
	int safety5[5] = {50, 25, 10, 3, 2};
	int age5[5] = {25, 25, 25, 10, 10};
	int repair5[5] = {45, 20, 20, 5, 5};
	//4 Star
	int quality4[5] = {15, 35, 15, 11, 4};
	int price4[5] = {20, 40, 10, 10, 10};
	int time4[5] = {10, 40, 20, 15, 5};
	int userInterface4[5] = {20, 20, 10, 10 ,10};
	int design4[5] = {20, 20, 10, 10, 10};
	int color4[5] = {20, 35, 15, 7, 3};
	int material4[5] = {25, 35, 25, 3, 2};
	int name4[5] = {30, 30, 20, 10, 5};
	int origin4[5] = {25, 40, 20, 2, 3};
	int safety4[5] = {30, 30, 20, 10, 3};
	int age4[5] = {25, 30, 20, 10, 10};
	int repair4[5] = {25, 45, 15, 5, 5};
	//3 Star
	int quality3[5] = {10, 20, 30, 20, 10};
	int price3[5] = {8, 15, 40, 15, 7};
	int time3[5] = {5, 20, 35, 15, 15};
	int userInterface3[5] = {5, 15, 25, 10, 5};
	int design3[5] = {7, 15, 20, 5, 3};
	int color3[5] = {5, 15, 30, 10, 5};
	int material3[5] = {5, 25, 35, 20, 10};
	int name3[5] = {2, 20, 40, 30, 3};
	int origin3[5] = {10, 10, 25, 15, 20};
	int safety3[5] = {10, 20, 30, 20, 10};
	int age3[5] = {5, 20, 35, 15, 15};
	int repair3[5] = {10, 15, 35, 30, 10};
	//2 Star
	int quality2[5] = {5, 10, 18, 30, 22};
	int price2[5] = {5, 10, 15, 35, 10};
	int time2[5] = {3, 12, 20, 30, 15};
	int userInterface2[5] = {2, 3, 10, 30, 15};
	int design2[5] = {5, 10 ,10, 25, 15};
	int color2[5] = {3, 12, 20, 20, 20};
	int material2[5] = {2, 3, 10, 30, 15};
	int name2[5] = {5, 5, 15, 40, 20};
	int origin2[5] = {5, 5, 20, 30, 20};
	int safety2[5] = {1, 4, 15, 35, 30};
	int age2[5] = {5, 10, 20, 40, 20};
	int repair2[5] = {5, 5, 20, 30, 25};
	//1 Star
	int quality1[5] = {1, 2, 5, 40, 50};
	int price1[5] = {1, 1, 3, 30, 60};
	int time1[5] = {2, 8, 15, 25, 45};
	int userInterface1[5] = {4, 6, 10, 20, 30};
	int design1[5] = {5, 10, 15, 25, 25};
	int color1[5] = {7, 3, 10, 25, 25};
	int material1[5] = {5, 5, 15, 20, 40};
	int name1[5] = {5, 5, 15, 30, 35};
	int origin1[5] = {2, 3, 20, 25, 45};
	int safety1[5] = {1, 4, 10, 30, 50};
	int age1[5] = {1, 9, 10, 20, 45};
	int repair1[5] = {10, 10, 10, 20, 40};


	
for(j=0;j<1000;j++){	
	int overallRating = 0;
	int categoryRatings[12] = {0};
	int randomNumber = 0;
	int i = 0;	
	randomNumber =getRand(2);

		//If 1, item is seen as a 'good product'
		if(randomNumber == 1){
			randomNumber = getRand(100);
			if(randomNumber <= goodPercentage[0]){
				overallRating = 5;
			}
			else if(randomNumber <= goodPercentage[0]+goodPercentage[1]){
				overallRating = 4;
			}
			else if(randomNumber <= goodPercentage[0]+goodPercentage[1]+goodPercentage[2]){
				overallRating = 3;
			}
			else if(randomNumber <= goodPercentage[0]+goodPercentage[1]+goodPercentage[2]+goodPercentage[3]){
				overallRating = 2;
			}
			else if(randomNumber <= goodPercentage[0]+goodPercentage[1]+goodPercentage[2]+goodPercentage[3]+goodPercentage[4]){
				overallRating = 1;
			}
			else{
				overallRating = 0;
			}
		}
		//If 2, item is seen as a 'bad product'
		else if(randomNumber == 2){
			randomNumber = getRand(100);
			if(randomNumber <= badPercentage[0]){
				overallRating = 5;
			}
			else if(randomNumber <= badPercentage[0]+badPercentage[1]){
				overallRating = 4;
			}
			else if(randomNumber <= badPercentage[0]+badPercentage[1]+badPercentage[2]){
				overallRating = 3;
			}
			else if(randomNumber <= badPercentage[0]+badPercentage[1]+badPercentage[2]+badPercentage[3]){
				overallRating = 2;
			}
			else if(randomNumber <= badPercentage[0]+badPercentage[1]+badPercentage[2]+badPercentage[3]+badPercentage[4]){
				overallRating = 1;
			}
			else{
				overallRating = 0;
			}
		//R = 5
		if(overallRating == 5){
			//Quality
			randomNumber = getRand(100);
			if(randomNumber <= quality5[0]){
				categoryRatings[0] = 5;
			}
			else if(randomNumber <= quality5[0]+quality5[1]){
				categoryRatings[0] = 4;
			}
			else if(randomNumber <= quality5[0]+quality5[1]+quality5[2]){
				categoryRatings[0] = 3;
			}
			else if(randomNumber <= quality5[0]+quality5[1]+quality5[2]+quality5[3]){
				categoryRatings[0] = 2;
			}
			else if(randomNumber <= quality5[0]+quality5[1]+quality5[2]+quality5[3]+quality5[4]){
				categoryRatings[0] = 1;
			}
			else{
				categoryRatings[0] = 0;
			}
			//Price
			randomNumber = getRand(100);
			if(randomNumber <= price5[0]){
				categoryRatings[1] = 5;
			}
			else if(randomNumber <= price5[0]+price5[1]){
				categoryRatings[1] = 4;
			}
			else if(randomNumber <= price5[0]+price5[1]+ price5[2]){
				categoryRatings[1] = 3;
			}
			else if(randomNumber <= price5[0]+ price5[1]+price5[2]+ price5[3]){
				categoryRatings[1] = 2;
			}
			else if(randomNumber <= price5[0]+ price5[1]+price5[2]+ price5[3]+price5[4]){
				categoryRatings[1] = 1;
			}
			else{
				categoryRatings[1] = 0;
			}
			//Time
			randomNumber = getRand(100);
			if(randomNumber <= time5[0]){
				categoryRatings[2] = 5;
			}
			else if(randomNumber <= time5[0]+time5[1]){
				categoryRatings[2] = 4;
			}
			else if(randomNumber <= time5[0]+time5[1]+time5[2]){
				categoryRatings[2] = 3;
			}
			else if(randomNumber <= time5[0]+time5[1]+time5[2]+time5[3]){
				categoryRatings[2] = 2;
			}
			else if(randomNumber <= time5[0]+time5[1]+time5[2]+time5[3]+time5[4]){
				categoryRatings[2] = 1;
			}
			else{
				categoryRatings[2] = 0;
			}
			//User Interface
			randomNumber = getRand(100);
			if(randomNumber <= userInterface5[0]){
				categoryRatings[3] = 5;
			}
			else if(randomNumber <= userInterface5[0]+userInterface5[1]){
				categoryRatings[3] = 4;
			}
			else if(randomNumber <= userInterface5[0]+userInterface5[1]+userInterface5[2]){
				categoryRatings[3] = 3;
			}
			else if(randomNumber <= userInterface5[0]+userInterface5[1]+userInterface5[2]+userInterface5[3]){
				categoryRatings[3] = 2;
			}
			else if(randomNumber <= userInterface5[0]+userInterface5[1]+userInterface5[2]+userInterface5[3]+userInterface5[4]){
				categoryRatings[3] = 1;
			}
			else{
				categoryRatings[3] = 0;
			}
			//Design
			randomNumber = getRand(100);
			if(randomNumber <= design5[0]){
				categoryRatings[4] = 5;
			}
			else if(randomNumber <= design5[0]+design5[1]){
				categoryRatings[4] = 4;
			}
			else if(randomNumber <= design5[0]+design5[1]+design5[2]){
				categoryRatings[4] = 3;
			}
			else if(randomNumber <= design5[0]+design5[1]+design5[2]+design5[3]){
				categoryRatings[4] = 2;
			}
			else if(randomNumber <= design5[0]+design5[1]+design5[2]+design5[3]+design5[4]){
				categoryRatings[4] = 1;
			}
			else{
				categoryRatings[4] = 0;
			}
			//Color
			randomNumber = getRand(100);
			if(randomNumber <= color5[0]){
				categoryRatings[5] = 5;
			}
			else if(randomNumber <= color5[0]+color5[1]){
				categoryRatings[5] = 4;
			}
			else if(randomNumber <= color5[0]+color5[1]+color5[2]){
				categoryRatings[5] = 3;
			}
			else if(randomNumber <= color5[0]+color5[1]+color5[2]+color5[3]){
				categoryRatings[5] = 2;
			}
			else if(randomNumber <= color5[0]+color5[1]+color5[2]+color5[3]+color5[4]){
				categoryRatings[5] = 1;
			}
			else{
				categoryRatings[5] = 0;
			}
			//Material
			randomNumber = getRand(100);
			if(randomNumber <= material5[0]){
				categoryRatings[6] = 5;
			}
			else if(randomNumber <= material5[0]+material5[1]){
				categoryRatings[6] = 4;
			}
			else if(randomNumber <= material5[0]+material5[1]+material5[2]){
				categoryRatings[6] = 3;
			}
			else if(randomNumber <= material5[0]+material5[1]+material5[2]+material5[3]){
				categoryRatings[6] = 2;
			}
			else if(randomNumber <= material5[0]+material5[1]+material5[2]+material5[3]+material5[4]){
				categoryRatings[6] = 1;
			}
			else{
				categoryRatings[6] = 0;
			}
			//NameBrand
			randomNumber = getRand(100);
			if(randomNumber <= name5[0]){
				categoryRatings[7] = 5;
			}
			else if(randomNumber <= name5[0]+name5[1]){
				categoryRatings[7] = 4;
			}
			else if(randomNumber <= name5[0]+name5[1]+name5[2]){
				categoryRatings[7] = 3;
			}
			else if(randomNumber <= name5[0]+name5[1]+name5[2]+name5[3]){
				categoryRatings[7] = 2;
			}
			else if(randomNumber <= name5[0]+name5[1]+name5[2]+name5[3]+name5[4]){
				categoryRatings[7] = 1;
			}
			else{
				categoryRatings[7] = 0;
			}
			//Origin
			randomNumber = getRand(100);
			if(randomNumber <= origin5[0]){
				categoryRatings[8] = 5;
			}
			else if(randomNumber <= origin5[0]+origin5[1]){
				categoryRatings[8] = 4;
			}
			else if(randomNumber <= origin5[0]+origin5[1]+origin5[2]){
				categoryRatings[8] = 3;
			}
			else if(randomNumber <= origin5[0]+origin5[1]+origin5[2]+origin5[3]){
				categoryRatings[8] = 2;
			}
			else if(randomNumber <= origin5[0]+origin5[1]+origin5[2]+origin5[3]+origin5[4]){
				categoryRatings[8] = 1;
			}
			else{
				categoryRatings[8] = 0;
			}
			//Safety
			randomNumber = getRand(100);
			if(randomNumber <= safety5[0]){
				categoryRatings[9] = 5;
			}
			else if(randomNumber <= safety5[0]+safety5[1]){
				categoryRatings[9] = 4;
			}
			else if(randomNumber <= safety5[0]+safety5[1]+safety5[2]){
				categoryRatings[9] = 3;
			}
			else if(randomNumber <= safety5[0]+safety5[1]+safety5[2]+safety5[3]){
				categoryRatings[9] = 2;
			}
			else if(randomNumber <= safety5[0]+safety5[1]+safety5[2]+safety5[3]+safety5[4]){
				categoryRatings[9] = 1;
			}
			else{
				categoryRatings[9] = 0;
			}
			//Age
			randomNumber = getRand(100);
			if(randomNumber <= age5[0]){
				categoryRatings[10] = 5;
			}
			else if(randomNumber <= age5[0]+age5[1]){
				categoryRatings[10] = 4;
			}
			else if(randomNumber <= age5[0]+age5[1]+age5[2]){
				categoryRatings[10] = 3;
			}
			else if(randomNumber <= age5[0]+age5[1]+age5[2]+age5[3]){
				categoryRatings[10] = 2;
			}
			else if(randomNumber <= age5[0]+age5[1]+age5[2]+age5[3]+age5[4]){
				categoryRatings[10] = 1;
			}
			else{
				categoryRatings[10] = 0;
			}
			//Repair
			randomNumber = getRand(100);
			if(randomNumber <= repair5[0]){
				categoryRatings[11] = 5;
			}
			else if(randomNumber <= repair5[0]+repair5[1]){
				categoryRatings[11] = 4;
			}
			else if(randomNumber <= repair5[0]+repair5[1]+repair5[2]){
				categoryRatings[11] = 3;
			}
			else if(randomNumber <= repair5[0]+repair5[1]+repair5[2]+repair5[3]){
				categoryRatings[11] = 2;
			}
			else if(randomNumber <= repair5[0]+repair5[1]+repair5[2]+repair5[3]+repair5[4]){
				categoryRatings[11] = 1;
			}
			else{
				categoryRatings[11] = 0;
			}

		}
		if(overallRating == 4){
			//Quality
			randomNumber = getRand(100);
			if(randomNumber <= quality4[0]){
				categoryRatings[0] = 5;
			}
			else if(randomNumber <= quality4[0]+quality4[1]){
				categoryRatings[0] = 4;
			}
			else if(randomNumber <= quality4[0]+quality4[1]+quality4[2]){
				categoryRatings[0] = 3;
			}
			else if(randomNumber <= quality4[0]+quality4[1]+quality4[2]+quality4[3]){
				categoryRatings[0] = 2;
			}
			else if(randomNumber <= quality4[0]+quality4[1]+quality4[2]+quality4[3]+quality4[4]){
				categoryRatings[0] = 1;
			}
			else{
				categoryRatings[0] = 0;
			}
			//Price
			randomNumber = getRand(100);
			if(randomNumber <= price4[0]){
				categoryRatings[1] = 5;
			}
			else if(randomNumber <= price4[0]+price4[1]){
				categoryRatings[1] = 4;
			}
			else if(randomNumber <= price4[0]+price4[1]+ price4[2]){
				categoryRatings[1] = 3;
			}
			else if(randomNumber <= price4[0]+ price4[1]+price4[2]+ price4[3]){
				categoryRatings[1] = 2;
			}
			else if(randomNumber <= price4[0]+ price4[1]+price4[2]+ price4[3]+price4[4]){
				categoryRatings[1] = 1;
			}
			else{
				categoryRatings[1] = 0;
			}
			//Time
			randomNumber = getRand(100);
			if(randomNumber <= time4[0]){
				categoryRatings[2] = 5;
			}
			else if(randomNumber <= time4[0]+time4[1]){
				categoryRatings[2] = 4;
			}
			else if(randomNumber <= time4[0]+time4[1]+time4[2]){
				categoryRatings[2] = 3;
			}
			else if(randomNumber <= time4[0]+time4[1]+time4[2]+time4[3]){
				categoryRatings[2] = 2;
			}
			else if(randomNumber <= time4[0]+time4[1]+time4[2]+time4[3]+time4[4]){
				categoryRatings[2] = 1;
			}
			else{
				categoryRatings[2] = 0;
			}
			//User Interface
			randomNumber = getRand(100);
			if(randomNumber <= userInterface4[0]){
				categoryRatings[3] = 5;
			}
			else if(randomNumber <= userInterface4[0]+userInterface4[1]){
				categoryRatings[3] = 4;
			}
			else if(randomNumber <= userInterface4[0]+userInterface4[1]+userInterface4[2]){
				categoryRatings[3] = 3;
			}
			else if(randomNumber <= userInterface4[0]+userInterface4[1]+userInterface4[2]+userInterface4[3]){
				categoryRatings[3] = 2;
			}
			else if(randomNumber <= userInterface4[0]+userInterface4[1]+userInterface4[2]+userInterface4[3]+userInterface4[4]){
				categoryRatings[3] = 1;
			}
			else{
				categoryRatings[3] = 0;
			}
			//Design
			randomNumber = getRand(100);
			if(randomNumber <= design4[0]){
				categoryRatings[4] = 5;
			}
			else if(randomNumber <= design4[0]+design4[1]){
				categoryRatings[4] = 4;
			}
			else if(randomNumber <= design4[0]+design4[1]+design4[2]){
				categoryRatings[4] = 3;
			}
			else if(randomNumber <= design4[0]+design4[1]+design4[2]+design4[3]){
				categoryRatings[4] = 2;
			}
			else if(randomNumber <= design4[0]+design4[1]+design4[2]+design4[3]+design4[4]){
				categoryRatings[4] = 1;
			}
			else{
				categoryRatings[4] = 0;
			}
			//Color
			randomNumber = getRand(100);
			if(randomNumber <= color4[0]){
				categoryRatings[5] = 5;
			}
			else if(randomNumber <= color4[0]+color4[1]){
				categoryRatings[5] = 4;
			}
			else if(randomNumber <= color4[0]+color4[1]+color4[2]){
				categoryRatings[5] = 3;
			}
			else if(randomNumber <= color4[0]+color4[1]+color4[2]+color4[3]){
				categoryRatings[5] = 2;
			}
			else if(randomNumber <= color4[0]+color4[1]+color4[2]+color4[3]+color4[4]){
				categoryRatings[5] = 1;
			}
			else{
				categoryRatings[5] = 0;
			}
			//Material
			randomNumber = getRand(100);
			if(randomNumber <= material4[0]){
				categoryRatings[6] = 5;
			}
			else if(randomNumber <= material4[0]+material4[1]){
				categoryRatings[6] = 4;
			}
			else if(randomNumber <= material4[0]+material4[1]+material4[2]){
				categoryRatings[6] = 3;
			}
			else if(randomNumber <= material4[0]+material4[1]+material4[2]+material4[3]){
				categoryRatings[6] = 2;
			}
			else if(randomNumber <= material4[0]+material4[1]+material4[2]+material4[3]+material4[4]){
				categoryRatings[6] = 1;
			}
			else{
				categoryRatings[6] = 0;
			}
			//NameBrand
			randomNumber = getRand(100);
			if(randomNumber <= name4[0]){
				categoryRatings[7] = 5;
			}
			else if(randomNumber <= name4[0]+name4[1]){
				categoryRatings[7] = 4;
			}
			else if(randomNumber <= name4[0]+name4[1]+name4[2]){
				categoryRatings[7] = 3;
			}
			else if(randomNumber <= name4[0]+name4[1]+name4[2]+name4[3]){
				categoryRatings[7] = 2;
			}
			else if(randomNumber <= name4[0]+name4[1]+name4[2]+name4[3]+name4[4]){
				categoryRatings[7] = 1;
			}
			else{
				categoryRatings[7] = 0;
			}
			//Origin
			randomNumber = getRand(100);
			if(randomNumber <= origin4[0]){
				categoryRatings[8] = 5;
			}
			else if(randomNumber <= origin4[0]+origin4[1]){
				categoryRatings[8] = 4;
			}
			else if(randomNumber <= origin4[0]+origin4[1]+origin4[2]){
				categoryRatings[8] = 3;
			}
			else if(randomNumber <= origin4[0]+origin4[1]+origin4[2]+origin4[3]){
				categoryRatings[8] = 2;
			}
			else if(randomNumber <= origin4[0]+origin4[1]+origin4[2]+origin4[3]+origin4[4]){
				categoryRatings[8] = 1;
			}
			else{
				categoryRatings[8] = 0;
			}
			//Safety
			randomNumber = getRand(100);
			if(randomNumber <= safety4[0]){
				categoryRatings[9] = 5;
			}
			else if(randomNumber <= safety4[0]+safety4[1]){
				categoryRatings[9] = 4;
			}
			else if(randomNumber <= safety4[0]+safety4[1]+safety4[2]){
				categoryRatings[9] = 3;
			}
			else if(randomNumber <= safety4[0]+safety4[1]+safety4[2]+safety4[3]){
				categoryRatings[9] = 2;
			}
			else if(randomNumber <= safety4[0]+safety4[1]+safety4[2]+safety4[3]+safety4[4]){
				categoryRatings[9] = 1;
			}
			else{
				categoryRatings[9] = 0;
			}
			//Age
			randomNumber = getRand(100);
			if(randomNumber <= age4[0]){
				categoryRatings[10] = 5;
			}
			else if(randomNumber <= age4[0]+age4[1]){
				categoryRatings[10] = 4;
			}
			else if(randomNumber <= age4[0]+age4[1]+age4[2]){
				categoryRatings[10] = 3;
			}
			else if(randomNumber <= age4[0]+age4[1]+age4[2]+age4[3]){
				categoryRatings[10] = 2;
			}
			else if(randomNumber <= age4[0]+age4[1]+age4[2]+age4[3]+age4[4]){
				categoryRatings[10] = 1;
			}
			else{
				categoryRatings[10] = 0;
			}
			//Repair
			randomNumber = getRand(100);
			if(randomNumber <= repair4[0]){
				categoryRatings[11] = 5;
			}
			else if(randomNumber <= repair4[0]+repair4[1]){
				categoryRatings[11] = 4;
			}
			else if(randomNumber <= repair4[0]+repair4[1]+repair4[2]){
				categoryRatings[11] = 3;
			}
			else if(randomNumber <= repair4[0]+repair4[1]+repair4[2]+repair4[3]){
				categoryRatings[11] = 2;
			}
			else if(randomNumber <= repair4[0]+repair4[1]+repair4[2]+repair4[3]+repair4[4]){
				categoryRatings[11] = 1;
			}
			else{
				categoryRatings[11] = 0;
			}
		}
		if(overallRating == 3){
			//Quality
			randomNumber = getRand(100);
			if(randomNumber <= quality3[0]){
				categoryRatings[0] = 5;
			}
			else if(randomNumber <= quality3[0]+quality3[1]){
				categoryRatings[0] = 4;
			}
			else if(randomNumber <= quality3[0]+quality3[1]+quality3[2]){
				categoryRatings[0] = 3;
			}
			else if(randomNumber <= quality3[0]+quality3[1]+quality3[2]+quality3[3]){
				categoryRatings[0] = 2;
			}
			else if(randomNumber <= quality3[0]+quality3[1]+quality3[2]+quality3[3]+quality3[4]){
				categoryRatings[0] = 1;
			}
			else{
				categoryRatings[0] = 0;
			}
			//Price
			randomNumber = getRand(100);
			if(randomNumber <= price3[0]){
				categoryRatings[1] = 5;
			}
			else if(randomNumber <= price3[0]+price3[1]){
				categoryRatings[1] = 4;
			}
			else if(randomNumber <= price3[0]+price3[1]+ price3[2]){
				categoryRatings[1] = 3;
			}
			else if(randomNumber <= price3[0]+ price3[1]+price3[2]+ price3[3]){
				categoryRatings[1] = 2;
			}
			else if(randomNumber <= price3[0]+ price3[1]+price3[2]+ price3[3]+price3[4]){
				categoryRatings[1] = 1;
			}
			else{
				categoryRatings[1] = 0;
			}
			//Time
			randomNumber = getRand(100);
			if(randomNumber <= time3[0]){
				categoryRatings[2] = 5;
			}
			else if(randomNumber <= time3[0]+time3[1]){
				categoryRatings[2] = 4;
			}
			else if(randomNumber <= time3[0]+time3[1]+time3[2]){
				categoryRatings[2] = 3;
			}
			else if(randomNumber <= time3[0]+time3[1]+time3[2]+time3[3]){
				categoryRatings[2] = 2;
			}
			else if(randomNumber <= time3[0]+time3[1]+time3[2]+time3[3]+time3[4]){
				categoryRatings[2] = 1;
			}
			else{
				categoryRatings[2] = 0;
			}
			//User Interface
			randomNumber = getRand(100);
			if(randomNumber <= userInterface3[0]){
				categoryRatings[3] = 5;
			}
			else if(randomNumber <= userInterface3[0]+userInterface3[1]){
				categoryRatings[3] = 4;
			}
			else if(randomNumber <= userInterface3[0]+userInterface3[1]+userInterface3[2]){
				categoryRatings[3] = 3;
			}
			else if(randomNumber <= userInterface3[0]+userInterface3[1]+userInterface3[2]+userInterface3[3]){
				categoryRatings[3] = 2;
			}
			else if(randomNumber <= userInterface3[0]+userInterface3[1]+userInterface3[2]+userInterface3[3]+userInterface3[4]){
				categoryRatings[3] = 1;
			}
			else{
				categoryRatings[3] = 0;
			}
			//Design
			randomNumber = getRand(100);
			if(randomNumber <= design3[0]){
				categoryRatings[4] = 5;
			}
			else if(randomNumber <= design3[0]+design3[1]){
				categoryRatings[4] = 4;
			}
			else if(randomNumber <= design3[0]+design3[1]+design3[2]){
				categoryRatings[4] = 3;
			}
			else if(randomNumber <= design3[0]+design3[1]+design3[2]+design3[3]){
				categoryRatings[4] = 2;
			}
			else if(randomNumber <= design3[0]+design3[1]+design3[2]+design3[3]+design3[4]){
				categoryRatings[4] = 1;
			}
			else{
				categoryRatings[4] = 0;
			}
			//Color
			randomNumber = getRand(100);
			if(randomNumber <= color3[0]){
				categoryRatings[5] = 5;
			}
			else if(randomNumber <= color3[0]+color3[1]){
				categoryRatings[5] = 4;
			}
			else if(randomNumber <= color3[0]+color3[1]+color3[2]){
				categoryRatings[5] = 3;
			}
			else if(randomNumber <= color3[0]+color3[1]+color3[2]+color3[3]){
				categoryRatings[5] = 2;
			}
			else if(randomNumber <= color3[0]+color3[1]+color3[2]+color3[3]+color3[4]){
				categoryRatings[5] = 1;
			}
			else{
				categoryRatings[5] = 0;
			}
			//Material
			randomNumber = getRand(100);
			if(randomNumber <= material3[0]){
				categoryRatings[6] = 5;
			}
			else if(randomNumber <= material3[0]+material3[1]){
				categoryRatings[6] = 4;
			}
			else if(randomNumber <= material3[0]+material3[1]+material3[2]){
				categoryRatings[6] = 3;
			}
			else if(randomNumber <= material3[0]+material3[1]+material3[2]+material3[3]){
				categoryRatings[6] = 2;
			}
			else if(randomNumber <= material3[0]+material3[1]+material3[2]+material3[3]+material3[4]){
				categoryRatings[6] = 1;
			}
			else{
				categoryRatings[6] = 0;
			}
			//NameBrand
			randomNumber = getRand(100);
			if(randomNumber <= name3[0]){
				categoryRatings[7] = 5;
			}
			else if(randomNumber <= name3[0]+name3[1]){
				categoryRatings[7] = 4;
			}
			else if(randomNumber <= name3[0]+name3[1]+name3[2]){
				categoryRatings[7] = 3;
			}
			else if(randomNumber <= name3[0]+name3[1]+name3[2]+name3[3]){
				categoryRatings[7] = 2;
			}
			else if(randomNumber <= name3[0]+name3[1]+name3[2]+name3[3]+name3[4]){
				categoryRatings[7] = 1;
			}
			else{
				categoryRatings[7] = 0;
			}
			//Origin
			randomNumber = getRand(100);
			if(randomNumber <= origin3[0]){
				categoryRatings[8] = 5;
			}
			else if(randomNumber <= origin3[0]+origin3[1]){
				categoryRatings[8] = 4;
			}
			else if(randomNumber <= origin3[0]+origin3[1]+origin3[2]){
				categoryRatings[8] = 3;
			}
			else if(randomNumber <= origin3[0]+origin3[1]+origin3[2]+origin3[3]){
				categoryRatings[8] = 2;
			}
			else if(randomNumber <= origin3[0]+origin3[1]+origin3[2]+origin3[3]+origin3[4]){
				categoryRatings[8] = 1;
			}
			else{
				categoryRatings[8] = 0;
			}
			//Safety
			randomNumber = getRand(100);
			if(randomNumber <= safety3[0]){
				categoryRatings[9] = 5;
			}
			else if(randomNumber <= safety3[0]+safety3[1]){
				categoryRatings[9] = 4;
			}
			else if(randomNumber <= safety3[0]+safety3[1]+safety3[2]){
				categoryRatings[9] = 3;
			}
			else if(randomNumber <= safety3[0]+safety3[1]+safety3[2]+safety3[3]){
				categoryRatings[9] = 2;
			}
			else if(randomNumber <= safety3[0]+safety3[1]+safety3[2]+safety3[3]+safety3[4]){
				categoryRatings[9] = 1;
			}
			else{
				categoryRatings[9] = 0;
			}
			//Age
			randomNumber = getRand(100);
			if(randomNumber <= age3[0]){
				categoryRatings[10] = 5;
			}
			else if(randomNumber <= age3[0]+age3[1]){
				categoryRatings[10] = 4;
			}
			else if(randomNumber <= age3[0]+age3[1]+age3[2]){
				categoryRatings[10] = 3;
			}
			else if(randomNumber <= age3[0]+age3[1]+age3[2]+age3[3]){
				categoryRatings[10] = 2;
			}
			else if(randomNumber <= age3[0]+age3[1]+age3[2]+age3[3]+age3[4]){
				categoryRatings[10] = 1;
			}
			else{
				categoryRatings[10] = 0;
			}
			//Repair
			randomNumber = getRand(100);
			if(randomNumber <= repair3[0]){
				categoryRatings[11] = 5;
			}
			else if(randomNumber <= repair3[0]+repair3[1]){
				categoryRatings[11] = 4;
			}
			else if(randomNumber <= repair3[0]+repair3[1]+repair3[2]){
				categoryRatings[11] = 3;
			}
			else if(randomNumber <= repair3[0]+repair3[1]+repair3[2]+repair3[3]){
				categoryRatings[11] = 2;
			}
			else if(randomNumber <= repair3[0]+repair3[1]+repair3[2]+repair3[3]+repair3[4]){
				categoryRatings[11] = 1;
			}
			else{
				categoryRatings[11] = 0;
			}
			
		}
		if(overallRating == 2){
			//Quality
			randomNumber = getRand(100);
			if(randomNumber <= quality2[0]){
				categoryRatings[0] = 5;
			}
			else if(randomNumber <= quality2[0]+quality2[1]){
				categoryRatings[0] = 4;
			}
			else if(randomNumber <= quality2[0]+quality2[1]+quality2[2]){
				categoryRatings[0] = 3;
			}
			else if(randomNumber <= quality2[0]+quality2[1]+quality2[2]+quality2[3]){
				categoryRatings[0] = 2;
			}
			else if(randomNumber <= quality2[0]+quality2[1]+quality2[2]+quality2[3]+quality2[4]){
				categoryRatings[0] = 1;
			}
			else{
				categoryRatings[0] = 0;
			}
			//Price
			randomNumber = getRand(100);
			if(randomNumber <= price2[0]){
				categoryRatings[1] = 5;
			}
			else if(randomNumber <= price2[0]+price2[1]){
				categoryRatings[1] = 4;
			}
			else if(randomNumber <= price2[0]+price2[1]+ price2[2]){
				categoryRatings[1] = 3;
			}
			else if(randomNumber <= price2[0]+ price2[1]+price2[2]+ price2[3]){
				categoryRatings[1] = 2;
			}
			else if(randomNumber <= price2[0]+ price2[1]+price2[2]+ price2[3]+price2[4]){
				categoryRatings[1] = 1;
			}
			else{
				categoryRatings[1] = 0;
			}
			//Time
			randomNumber = getRand(100);
			if(randomNumber <= time2[0]){
				categoryRatings[2] = 5;
			}
			else if(randomNumber <= time2[0]+time2[1]){
				categoryRatings[2] = 4;
			}
			else if(randomNumber <= time2[0]+time2[1]+time2[2]){
				categoryRatings[2] = 3;
			}
			else if(randomNumber <= time2[0]+time2[1]+time2[2]+time2[3]){
				categoryRatings[2] = 2;
			}
			else if(randomNumber <= time2[0]+time2[1]+time2[2]+time2[3]+time2[4]){
				categoryRatings[2] = 1;
			}
			else{
				categoryRatings[2] = 0;
			}
			//User Interface
			randomNumber = getRand(100);
			if(randomNumber <= userInterface2[0]){
				categoryRatings[3] = 5;
			}
			else if(randomNumber <= userInterface2[0]+userInterface2[1]){
				categoryRatings[3] = 4;
			}
			else if(randomNumber <= userInterface2[0]+userInterface2[1]+userInterface2[2]){
				categoryRatings[3] = 3;
			}
			else if(randomNumber <= userInterface2[0]+userInterface2[1]+userInterface2[2]+userInterface2[3]){
				categoryRatings[3] = 2;
			}
			else if(randomNumber <= userInterface2[0]+userInterface2[1]+userInterface2[2]+userInterface2[3]+userInterface2[4]){
				categoryRatings[3] = 1;
			}
			else{
				categoryRatings[3] = 0;
			}
			//Design
			randomNumber = getRand(100);
			if(randomNumber <= design2[0]){
				categoryRatings[4] = 5;
			}
			else if(randomNumber <= design2[0]+design2[1]){
				categoryRatings[4] = 4;
			}
			else if(randomNumber <= design2[0]+design2[1]+design2[2]){
				categoryRatings[4] = 3;
			}
			else if(randomNumber <= design2[0]+design2[1]+design2[2]+design2[3]){
				categoryRatings[4] = 2;
			}
			else if(randomNumber <= design2[0]+design2[1]+design2[2]+design2[3]+design2[4]){
				categoryRatings[4] = 1;
			}
			else{
				categoryRatings[4] = 0;
			}
			//Color
			randomNumber = getRand(100);
			if(randomNumber <= color2[0]){
				categoryRatings[5] = 5;
			}
			else if(randomNumber <= color2[0]+color2[1]){
				categoryRatings[5] = 4;
			}
			else if(randomNumber <= color2[0]+color2[1]+color2[2]){
				categoryRatings[5] = 3;
			}
			else if(randomNumber <= color2[0]+color2[1]+color2[2]+color2[3]){
				categoryRatings[5] = 2;
			}
			else if(randomNumber <= color2[0]+color2[1]+color2[2]+color2[3]+color2[4]){
				categoryRatings[5] = 1;
			}
			else{
				categoryRatings[5] = 0;
			}
			//Material
			randomNumber = getRand(100);
			if(randomNumber <= material2[0]){
				categoryRatings[6] = 5;
			}
			else if(randomNumber <= material2[0]+material2[1]){
				categoryRatings[6] = 4;
			}
			else if(randomNumber <= material2[0]+material2[1]+material2[2]){
				categoryRatings[6] = 3;
			}
			else if(randomNumber <= material2[0]+material2[1]+material2[2]+material2[3]){
				categoryRatings[6] = 2;
			}
			else if(randomNumber <= material2[0]+material2[1]+material2[2]+material2[3]+material2[4]){
				categoryRatings[6] = 1;
			}
			else{
				categoryRatings[6] = 0;
			}
			//NameBrand
			randomNumber = getRand(100);
			if(randomNumber <= name2[0]){
				categoryRatings[7] = 5;
			}
			else if(randomNumber <= name2[0]+name2[1]){
				categoryRatings[7] = 4;
			}
			else if(randomNumber <= name2[0]+name2[1]+name2[2]){
				categoryRatings[7] = 3;
			}
			else if(randomNumber <= name2[0]+name2[1]+name2[2]+name2[3]){
				categoryRatings[7] = 2;
			}
			else if(randomNumber <= name2[0]+name2[1]+name2[2]+name2[3]+name2[4]){
				categoryRatings[7] = 1;
			}
			else{
				categoryRatings[7] = 0;
			}
			//Origin
			randomNumber = getRand(100);
			if(randomNumber <= origin2[0]){
				categoryRatings[8] = 5;
			}
			else if(randomNumber <= origin2[0]+origin2[1]){
				categoryRatings[8] = 4;
			}
			else if(randomNumber <= origin2[0]+origin2[1]+origin2[2]){
				categoryRatings[8] = 3;
			}
			else if(randomNumber <= origin2[0]+origin2[1]+origin2[2]+origin2[3]){
				categoryRatings[8] = 2;
			}
			else if(randomNumber <= origin2[0]+origin2[1]+origin2[2]+origin2[3]+origin2[4]){
				categoryRatings[8] = 1;
			}
			else{
				categoryRatings[8] = 0;
			}
			//Safety
			randomNumber = getRand(100);
			if(randomNumber <= safety2[0]){
				categoryRatings[9] = 5;
			}
			else if(randomNumber <= safety2[0]+safety2[1]){
				categoryRatings[9] = 4;
			}
			else if(randomNumber <= safety2[0]+safety2[1]+safety2[2]){
				categoryRatings[9] = 3;
			}
			else if(randomNumber <= safety2[0]+safety2[1]+safety2[2]+safety2[3]){
				categoryRatings[9] = 2;
			}
			else if(randomNumber <= safety2[0]+safety2[1]+safety2[2]+safety2[3]+safety2[4]){
				categoryRatings[9] = 1;
			}
			else{
				categoryRatings[9] = 0;
			}
			//Age
			randomNumber = getRand(100);
			if(randomNumber <= age2[0]){
				categoryRatings[10] = 5;
			}
			else if(randomNumber <= age2[0]+age2[1]){
				categoryRatings[10] = 4;
			}
			else if(randomNumber <= age2[0]+age2[1]+age2[2]){
				categoryRatings[10] = 3;
			}
			else if(randomNumber <= age2[0]+age2[1]+age2[2]+age2[3]){
				categoryRatings[10] = 2;
			}
			else if(randomNumber <= age2[0]+age2[1]+age2[2]+age2[3]+age2[4]){
				categoryRatings[10] = 1;
			}
			else{
				categoryRatings[10] = 0;
			}
			//Repair
			randomNumber = getRand(100);
			if(randomNumber <= repair2[0]){
				categoryRatings[11] = 5;
			}
			else if(randomNumber <= repair2[0]+repair2[1]){
				categoryRatings[11] = 4;
			}
			else if(randomNumber <= repair2[0]+repair2[1]+repair2[2]){
				categoryRatings[11] = 3;
			}
			else if(randomNumber <= repair2[0]+repair2[1]+repair2[2]+repair2[3]){
				categoryRatings[11] = 2;
			}
			else if(randomNumber <= repair2[0]+repair2[1]+repair2[2]+repair2[3]+repair2[4]){
				categoryRatings[11] = 1;
			}
			else{
				categoryRatings[11] = 0;
			}
			
		}
		if(overallRating == 1){
			//Quality
			randomNumber = getRand(100);
			if(randomNumber <= quality1[0]){
				categoryRatings[0] = 5;
			}
			else if(randomNumber <= quality1[0]+quality1[1]){
				categoryRatings[0] = 4;
			}
			else if(randomNumber <= quality1[0]+quality1[1]+quality1[2]){
				categoryRatings[0] = 3;
			}
			else if(randomNumber <= quality1[0]+quality1[1]+quality1[2]+quality1[3]){
				categoryRatings[0] = 2;
			}
			else if(randomNumber <= quality1[0]+quality1[1]+quality1[2]+quality1[3]+quality1[4]){
				categoryRatings[0] = 1;
			}
			else{
				categoryRatings[0] = 0;
			}
			//Price
			randomNumber = getRand(100);
			if(randomNumber <= price1[0]){
				categoryRatings[1] = 5;
			}
			else if(randomNumber <= price1[0]+price1[1]){
				categoryRatings[1] = 4;
			}
			else if(randomNumber <= price1[0]+price1[1]+ price1[2]){
				categoryRatings[1] = 3;
			}
			else if(randomNumber <= price1[0]+ price1[1]+price1[2]+ price1[3]){
				categoryRatings[1] = 2;
			}
			else if(randomNumber <= price1[0]+ price1[1]+price1[2]+ price1[3]+price1[4]){
				categoryRatings[1] = 1;
			}
			else{
				categoryRatings[1] = 0;
			}
			//Time
			randomNumber = getRand(100);
			if(randomNumber <= time1[0]){
				categoryRatings[2] = 5;
			}
			else if(randomNumber <= time1[0]+time1[1]){
				categoryRatings[2] = 4;
			}
			else if(randomNumber <= time1[0]+time1[1]+time1[2]){
				categoryRatings[2] = 3;
			}
			else if(randomNumber <= time1[0]+time1[1]+time1[2]+time1[3]){
				categoryRatings[2] = 2;
			}
			else if(randomNumber <= time1[0]+time1[1]+time1[2]+time1[3]+time1[4]){
				categoryRatings[2] = 1;
			}
			else{
				categoryRatings[2] = 0;
			}
			//User Interface
			randomNumber = getRand(100);
			if(randomNumber <= userInterface1[0]){
				categoryRatings[3] = 5;
			}
			else if(randomNumber <= userInterface1[0]+userInterface1[1]){
				categoryRatings[3] = 4;
			}
			else if(randomNumber <= userInterface1[0]+userInterface1[1]+userInterface1[2]){
				categoryRatings[3] = 3;
			}
			else if(randomNumber <= userInterface1[0]+userInterface1[1]+userInterface1[2]+userInterface1[3]){
				categoryRatings[3] = 2;
			}
			else if(randomNumber <= userInterface1[0]+userInterface1[1]+userInterface1[2]+userInterface1[3]+userInterface1[4]){
				categoryRatings[3] = 1;
			}
			else{
				categoryRatings[3] = 0;
			}
			//Design
			randomNumber = getRand(100);
			if(randomNumber <= design1[0]){
				categoryRatings[4] = 5;
			}
			else if(randomNumber <= design1[0]+design1[1]){
				categoryRatings[4] = 4;
			}
			else if(randomNumber <= design1[0]+design1[1]+design1[2]){
				categoryRatings[4] = 3;
			}
			else if(randomNumber <= design1[0]+design1[1]+design1[2]+design1[3]){
				categoryRatings[4] = 2;
			}
			else if(randomNumber <= design1[0]+design1[1]+design1[2]+design1[3]+design1[4]){
				categoryRatings[4] = 1;
			}
			else{
				categoryRatings[4] = 0;
			}
			//Color
			randomNumber = getRand(100);
			if(randomNumber <= color1[0]){
				categoryRatings[5] = 5;
			}
			else if(randomNumber <= color1[0]+color1[1]){
				categoryRatings[5] = 4;
			}
			else if(randomNumber <= color1[0]+color1[1]+color1[2]){
				categoryRatings[5] = 3;
			}
			else if(randomNumber <= color1[0]+color1[1]+color1[2]+color1[3]){
				categoryRatings[5] = 2;
			}
			else if(randomNumber <= color1[0]+color1[1]+color1[2]+color1[3]+color1[4]){
				categoryRatings[5] = 1;
			}
			else{
				categoryRatings[5] = 0;
			}
			//Material
			randomNumber = getRand(100);
			if(randomNumber <= material1[0]){
				categoryRatings[6] = 5;
			}
			else if(randomNumber <= material1[0]+material1[1]){
				categoryRatings[6] = 4;
			}
			else if(randomNumber <= material1[0]+material1[1]+material1[2]){
				categoryRatings[6] = 3;
			}
			else if(randomNumber <= material1[0]+material1[1]+material1[2]+material1[3]){
				categoryRatings[6] = 2;
			}
			else if(randomNumber <= material1[0]+material1[1]+material1[2]+material1[3]+material1[4]){
				categoryRatings[6] = 1;
			}
			else{
				categoryRatings[6] = 0;
			}
			//NameBrand
			randomNumber = getRand(100);
			if(randomNumber <= name1[0]){
				categoryRatings[7] = 5;
			}
			else if(randomNumber <= name1[0]+name1[1]){
				categoryRatings[7] = 4;
			}
			else if(randomNumber <= name1[0]+name1[1]+name1[2]){
				categoryRatings[7] = 3;
			}
			else if(randomNumber <= name1[0]+name1[1]+name1[2]+name1[3]){
				categoryRatings[7] = 2;
			}
			else if(randomNumber <= name1[0]+name1[1]+name1[2]+name1[3]+name1[4]){
				categoryRatings[7] = 1;
			}
			else{
				categoryRatings[7] = 0;
			}
			//Origin
			randomNumber = getRand(100);
			if(randomNumber <= origin1[0]){
				categoryRatings[8] = 5;
			}
			else if(randomNumber <= origin1[0]+origin1[1]){
				categoryRatings[8] = 4;
			}
			else if(randomNumber <= origin1[0]+origin1[1]+origin1[2]){
				categoryRatings[8] = 3;
			}
			else if(randomNumber <= origin1[0]+origin1[1]+origin1[2]+origin1[3]){
				categoryRatings[8] = 2;
			}
			else if(randomNumber <= origin1[0]+origin1[1]+origin1[2]+origin1[3]+origin1[4]){
				categoryRatings[8] = 1;
			}
			else{
				categoryRatings[8] = 0;
			}
			//Safety
			randomNumber = getRand(100);
			if(randomNumber <= safety1[0]){
				categoryRatings[9] = 5;
			}
			else if(randomNumber <= safety1[0]+safety1[1]){
				categoryRatings[9] = 4;
			}
			else if(randomNumber <= safety1[0]+safety1[1]+safety1[2]){
				categoryRatings[9] = 3;
			}
			else if(randomNumber <= safety1[0]+safety1[1]+safety1[2]+safety1[3]){
				categoryRatings[9] = 2;
			}
			else if(randomNumber <= safety1[0]+safety1[1]+safety1[2]+safety1[3]+safety1[4]){
				categoryRatings[9] = 1;
			}
			else{
				categoryRatings[9] = 0;
			}
			//Age
			randomNumber = getRand(100);
			if(randomNumber <= age1[0]){
				categoryRatings[10] = 5;
			}
			else if(randomNumber <= age1[0]+age1[1]){
				categoryRatings[10] = 4;
			}
			else if(randomNumber <= age1[0]+age1[1]+age1[2]){
				categoryRatings[10] = 3;
			}
			else if(randomNumber <= age1[0]+age1[1]+age1[2]+age1[3]){
				categoryRatings[10] = 2;
			}
			else if(randomNumber <= age1[0]+age1[1]+age1[2]+age1[3]+age1[4]){
				categoryRatings[10] = 1;
			}
			else{
				categoryRatings[10] = 0;
			}
			//Repair
			randomNumber = getRand(100);
			if(randomNumber <= repair1[0]){
				categoryRatings[11] = 5;
			}
			else if(randomNumber <= repair1[0]+repair1[1]){
				categoryRatings[11] = 4;
			}
			else if(randomNumber <= repair1[0]+repair1[1]+repair1[2]){
				categoryRatings[11] = 3;
			}
			else if(randomNumber <= repair1[0]+repair1[1]+repair1[2]+repair1[3]){
				categoryRatings[11] = 2;
			}
			else if(randomNumber <= repair1[0]+repair1[1]+repair1[2]+repair1[3]+repair1[4]){
				categoryRatings[11] = 1;
			}
			else{
				categoryRatings[11] = 0;
			}
			
		}
		else{
			
		}



	}

	printf("%d", overallRating);
	for(i = 0; i < 12; i++){
		printf(" %d", categoryRatings[i]);
	}
	printf("\n");
}
}

//When given max, will return a number from 1 - max
int getRand(int max){
	int number = 0;
	number = (rand() % max + 1);
	return number;
}