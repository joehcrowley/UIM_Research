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
	//4 Star
	int quality4[5] = {15, 35, 15, 11, 4};
	int price4[5] = {20, 40, 10, 10, 10};
	int time4[5] = {10, 40, 20, 15, 5};
	int userInterface4[5] = {20, 20, 10, 10 ,10};
	int design4[5] = {20, 20, 10, 10, 10};
	int color4[5] = {20, 35, 15, 7, 3};
	//3 Star
	int quality3[5] = {10, 20, 30, 20, 10};
	int price3[5] = {8, 15, 40, 15, 7};
	int time3[5] = {5, 20, 35, 15, 15};
	int userInterface3[5] = {5, 15, 25, 10, 5};
	int design3[5] = {7, 15, 20, 5, 3};
	int color3[5] = {5, 15, 30, 10, 5};
	//2 Star
	int quality2[5] = {5, 15, 18, 30, 22};
	int price2[5] = {5, 10, 15, 35, 10};
	int time2[5] = {3, 12, 20, 30, 15};
	int userInterface2[5] = {2, 3, 10, 30, 15};
	int design2[5] = {5, 10 ,10, 25, 15};
	int color2[5] = {3, 12, 20, 20, 20};
	//1 Star
	int quality1[5] = {1, 2, 5, 40, 50};
	int price1[5] = {1, 1, 3, 30, 60};
	int time1[5] = {2, 8, 15, 25, 45};
	int userInterface1[5] = {4, 6, 10, 20, 30};
	int design1[5] = {5, 10, 15, 25, 25};
	int color1[5] = {7, 3, 10, 25, 25};
	
	
for(j=0;j<1000;j++){	
	int overallRating = 0;
	int categoryRatings[6] = {0};
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
			
		}
		else{
			
		}



	}

	printf("%d", overallRating);
	for(i = 0; i < 6; i++){
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