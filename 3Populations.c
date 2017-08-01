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

	int overallPercentage[5] = {20, 20, 20, 10, 10};

	//QPTUDCMNOSAR
	int standard[5] = {10, 10, 10, 10, 10};

	//High
	int hQuality5[5] = {45, 25, 10, 5, 5};
	int hPrice5[5] = {15, 15, 10, 5, 5};
	int hName5[5] = {45, 25, 10, 5, 5};
	int hRepair5[5] = {15, 15, 10, 5, 5};

	int hQuality4[5] = {15, 40, 15, 10, 5};
	int hPrice4[5] = {10, 20, 10, 5, 5};
	int hName4[5] = {15, 40, 15, 10, 5};
	int hRepair4[5] = {10, 20, 10, 5, 5};

	int hQuality3[5] = {10, 20, 40, 10, 5};
	int hPrice3[5] = {10, 10, 20, 10, 5};
	int hName3[5] = {10, 20, 40, 10, 5};
	int hRepair3[5] = {10, 10, 20, 10, 5};

	int hQuality2[5] = {5, 10, 15, 40, 20};
	int hPrice2[5] = {5, 5, 20, 20, 20};
	int hName2[5] = {5, 10, 15, 40, 20};
	int hRepair2[5] = {5, 5, 20, 20, 20};

	int hQuality1[5] = {0, 0, 10, 30, 50};
	int hPrice1[5] = {5, 5, 10, 10, 25};
	int hName1[5] = {0, 0, 10, 30, 50};
	int hRepair1[5] = {5, 5, 10, 10, 25};

	//Medium
	int mQuality5[5] = {35, 20, 10, 5, 5};
	int mPrice5[5] = {35, 20, 10, 5, 5};
	int mName5[5] = {35, 20, 10, 5, 5};
	int mRepair5[5] = {45, 25, 10, 5, 5};

	int mQuality4[5] = {20, 30, 20, 5, 5};
	int mPrice4[5] = {20, 30, 20, 5, 5};
	int mName4[5] = {20, 30, 20, 5, 5};
	int mRepair4[5] = {15, 40, 15, 10, 5};

	int mQuality3[5] = {5, 20, 35, 15, 5};
	int mPrice3[5] = {5, 20, 35, 15, 5};
	int mName3[5] = {5, 20, 35, 15, 5};
	int mRepair3[5] = {10, 20, 40, 10, 5};

	int mQuality2[5] = {5, 15, 30, 30, 15};
	int mPrice2[5] = {5, 15, 30, 30, 15};
	int mName2[5] = {5, 15, 30, 30, 15};
	int mRepair2[5] = {5, 10, 15, 40, 20};

	int mQuality1[5] = {0, 0, 10, 20, 30};
	int mPrice1[5] = {0, 0, 10, 20, 30};
	int mName1[5] = {0, 0, 10, 20, 30};
	int mRepair1[5] = {5, 5, 15, 20, 40};

	//Low
	int lQuality5[5] = {15, 15, 10, 5, 5};
	int lPrice5[5] = {45, 25, 10, 5, 5};
	int lName5[5] = {15, 15, 10, 5, 5};
	int lRepair5[5] = {15, 15, 10, 5, 5};

	int lQuality4[5] = {10, 20, 10, 5, 5};
	int lPrice4[5] = {15, 40, 15, 10, 5};
	int lName4[5] = {10, 20, 10, 5, 5};
	int lRepair4[5] = {10, 20, 10, 5, 5};

	int lQuality3[5] = {10, 10, 20, 10, 5};
	int lPrice3[5] = {10, 20, 40, 10, 5};
	int lName3[5] = {10, 10, 20, 10, 5};
	int lRepair3[5] = {10, 10, 20, 10, 5};

	int lQuality2[5] = {5, 5, 20, 20, 20};
	int lPrice2[5] = {5, 10, 15, 40, 20};
	int lName2[5] = {5, 5, 20, 20, 20};
	int lRepair2[5] = {5, 5, 20, 20, 20};

	int lQuality1[5] = {5, 5, 10, 20, 25};
	int lPrice1[5] = {5, 5, 15, 20, 40};
	int lName1[5] = {5, 5, 10, 20, 25};
	int lRepair1[5] = {5, 5, 10, 20, 25};


	for(j=0;j<1000;j++){
		int overallRating = 0;
		int categoryRatings[12] = {0};
		int randomNumber = 0;
		int i = 0;	
		int personType = 0;
		//1 = High, 2 = Medium, 3 = Low
		randomNumber = getRand(100);
		if(randomNumber <= 20){
			personType = 1;
		}
		else if(randomNumber <= 80){
			personType = 2;
		}
		else{
			personType = 3;
		}

		//If 1, person is "High Income"
		
		randomNumber = getRand(100);
		if(randomNumber <= overallPercentage[0]){
			overallRating = 5;
		}
		else if(randomNumber <= overallPercentage[0]+overallPercentage[1]){
			overallRating = 4;
		}
		else if(randomNumber <= overallPercentage[0]+overallPercentage[1]+overallPercentage[2]){
			overallRating = 3;
		}
		else if(randomNumber <= overallPercentage[0]+overallPercentage[1]+overallPercentage[2]+overallPercentage[3]){
			overallRating = 2;
		}
		else if(randomNumber <= overallPercentage[0]+overallPercentage[1]+overallPercentage[2]+overallPercentage[3]+overallPercentage[4]){
			overallRating = 1;
		}
		else{
			overallRating = 0;
		}

		//switch operates on overallRating, then goes to personType
		switch(overallRating){
			case 5:
				switch(personType){
					case 1:
						//H Quality 5
						randomNumber = getRand(100);
						if(randomNumber <= hQuality5[0]){
							categoryRatings[0] = 5;
						}
						else if(randomNumber <= hQuality5[0]+hQuality5[1]){
							categoryRatings[0] = 4;
						}
						else if(randomNumber <= hQuality5[0]+hQuality5[1]+hQuality5[2]){
							categoryRatings[0] = 3;
						}
						else if(randomNumber <= hQuality5[0]+hQuality5[1]+hQuality5[2]+hQuality5[3]){
							categoryRatings[0] = 2;
						}
						else if(randomNumber <= hQuality5[0]+hQuality5[1]+hQuality5[2]+hQuality5[3]+hQuality5[4]){
							categoryRatings[0] = 1;
						}
						else{
							categoryRatings[0] = 0;
						}
						//H Price 5
						randomNumber = getRand(100);
						if(randomNumber <= hPrice5[0]){
							categoryRatings[1] = 5;
						}
						else if(randomNumber <= hPrice5[0]+hPrice5[1]){
							categoryRatings[1] = 4;
						}
						else if(randomNumber <= hPrice5[0]+hPrice5[1]+hPrice5[2]){
							categoryRatings[1] = 3;
						}
						else if(randomNumber <= hPrice5[0]+hPrice5[1]+hPrice5[2]+hPrice5[3]){
							categoryRatings[1] = 2;
						}
						else if(randomNumber <= hPrice5[0]+hPrice5[1]+hPrice5[2]+hPrice5[3]+hPrice5[4]){
							categoryRatings[1] = 1;
						}
						else{
							categoryRatings[1] = 0;
						}
						//H Name 5
						randomNumber = getRand(100);
						if(randomNumber <= hName5[0]){
							categoryRatings[7] = 5;
						}
						else if(randomNumber <= hName5[0]+hName5[1]){
							categoryRatings[7] = 4;
						}
						else if(randomNumber <= hName5[0]+hName5[1]+hName5[2]){
							categoryRatings[7] = 3;
						}
						else if(randomNumber <= hName5[0]+hName5[1]+hName5[2]+hName5[3]){
							categoryRatings[7] = 2;
						}
						else if(randomNumber <= hName5[0]+hName5[1]+hName5[2]+hName5[3]+hName5[4]){
							categoryRatings[7] = 1;
						}
						else{
							categoryRatings[7] = 0;
						}

						//H Repair 5
						randomNumber = getRand(100);
						if(randomNumber <= hRepair5[0]){
							categoryRatings[11] = 5;
						}
						else if(randomNumber <= hRepair5[0]+hRepair5[1]){
							categoryRatings[11] = 4;
						}
						else if(randomNumber <= hRepair5[0]+hRepair5[1]+hRepair5[2]){
							categoryRatings[11] = 3;
						}
						else if(randomNumber <= hRepair5[0]+hRepair5[1]+hRepair5[2]+hRepair5[3]){
							categoryRatings[11] = 2;
						}
						else if(randomNumber <= hRepair5[0]+hRepair5[1]+hRepair5[2]+hRepair5[3]+hRepair5[4]){
							categoryRatings[11] = 1;
						}
						else{
							categoryRatings[11] = 0;
						}
						break;

					case 2:
						//M Quality 5
						if(randomNumber <= mQuality5[0]){
							categoryRatings[0] = 5;
						}
						else if(randomNumber <= mQuality5[0]+mQuality5[1]){
							categoryRatings[0] = 4;
						}
						else if(randomNumber <= mQuality5[0]+mQuality5[1]+mQuality5[2]){
							categoryRatings[0] = 3;
						}
						else if(randomNumber <= mQuality5[0]+mQuality5[1]+mQuality5[2]+mQuality5[3]){
							categoryRatings[0] = 2;
						}
						else if(randomNumber <= mQuality5[0]+mQuality5[1]+mQuality5[2]+mQuality5[3]+mQuality5[4]){
							categoryRatings[0] = 1;
						}
						else{
							categoryRatings[0] = 0;
						}
						//M Price 5
						randomNumber = getRand(100);
						if(randomNumber <= mPrice5[0]){
							categoryRatings[1] = 5;
						}
						else if(randomNumber <= mPrice5[0]+mPrice5[1]){
							categoryRatings[1] = 4;
						}
						else if(randomNumber <= mPrice5[0]+mPrice5[1]+mPrice5[2]){
							categoryRatings[1] = 3;
						}
						else if(randomNumber <= mPrice5[0]+mPrice5[1]+mPrice5[2]+mPrice5[3]){
							categoryRatings[1] = 2;
						}
						else if(randomNumber <= mPrice5[0]+mPrice5[1]+mPrice5[2]+mPrice5[3]+mPrice5[4]){
							categoryRatings[1] = 1;
						}
						else{
							categoryRatings[1] = 0;
						}
						//M Name 5
						if(randomNumber <= mName5[0]){
							categoryRatings[7] = 5;
						}
						else if(randomNumber <= mName5[0]+mName5[1]){
							categoryRatings[7] = 4;
						}
						else if(randomNumber <= mName5[0]+mName5[1]+mName5[2]){
							categoryRatings[7] = 3;
						}
						else if(randomNumber <= mName5[0]+mName5[1]+mName5[2]+mName5[3]){
							categoryRatings[7] = 2;
						}
						else if(randomNumber <= mName5[0]+mName5[1]+mName5[2]+mName5[3]+mName5[4]){
							categoryRatings[7] = 1;
						}
						else{
							categoryRatings[7] = 0;
						}
						//M Repair 5
						randomNumber = getRand(100);
						if(randomNumber <= mRepair5[0]){
							categoryRatings[11] = 5;
						}
						else if(randomNumber <= mRepair5[0]+mRepair5[1]){
							categoryRatings[11] = 4;
						}
						else if(randomNumber <= mRepair5[0]+mRepair5[1]+mRepair5[2]){
							categoryRatings[11] = 3;
						}
						else if(randomNumber <= mRepair5[0]+mRepair5[1]+mRepair5[2]+mRepair5[3]){
							categoryRatings[11] = 2;
						}
						else if(randomNumber <= mRepair5[0]+mRepair5[1]+mRepair5[2]+mRepair5[3]+mRepair5[4]){
							categoryRatings[11] = 1;
						}
						else{
							categoryRatings[11] = 0;
						}
						break;
					case 3:
						//L Quality 5
						if(randomNumber <= lQuality5[0]){
							categoryRatings[0] = 5;
						}
						else if(randomNumber <= lQuality5[0]+lQuality5[1]){
							categoryRatings[0] = 4;
						}
						else if(randomNumber <= lQuality5[0]+lQuality5[1]+lQuality5[2]){
							categoryRatings[0] = 3;
						}
						else if(randomNumber <= lQuality5[0]+lQuality5[1]+lQuality5[2]+lQuality5[3]){
							categoryRatings[0] = 2;
						}
						else if(randomNumber <= lQuality5[0]+lQuality5[1]+lQuality5[2]+lQuality5[3]+lQuality5[4]){
							categoryRatings[0] = 1;
						}
						else{
							categoryRatings[0] = 0;
						}
						//L Price 5
						randomNumber = getRand(100);
						if(randomNumber <= lPrice5[0]){
							categoryRatings[1] = 5;
						}
						else if(randomNumber <= lPrice5[0]+lPrice5[1]){
							categoryRatings[1] = 4;
						}
						else if(randomNumber <= lPrice5[0]+lPrice5[1]+lPrice5[2]){
							categoryRatings[1] = 3;
						}
						else if(randomNumber <= lPrice5[0]+lPrice5[1]+lPrice5[2]+lPrice5[3]){
							categoryRatings[1] = 2;
						}
						else if(randomNumber <= lPrice5[0]+lPrice5[1]+lPrice5[2]+lPrice5[3]+lPrice5[4]){
							categoryRatings[1] = 1;
						}
						else{
							categoryRatings[1] = 0;
						}
						//L Name 5
						if(randomNumber <= lName5[0]){
							categoryRatings[7] = 5;
						}
						else if(randomNumber <= lName5[0]+lName5[1]){
							categoryRatings[7] = 4;
						}
						else if(randomNumber <= lName5[0]+lName5[1]+lName5[2]){
							categoryRatings[7] = 3;
						}
						else if(randomNumber <= lName5[0]+lName5[1]+lName5[2]+lName5[3]){
							categoryRatings[7] = 2;
						}
						else if(randomNumber <= lName5[0]+lName5[1]+lName5[2]+lName5[3]+lName5[4]){
							categoryRatings[7] = 1;
						}
						else{
							categoryRatings[7] = 0;
						}
						//L Repair 5
						randomNumber = getRand(100);
						if(randomNumber <= lRepair5[0]){
							categoryRatings[11] = 5;
						}
						else if(randomNumber <= lRepair5[0]+lRepair5[1]){
							categoryRatings[11] = 4;
						}
						else if(randomNumber <= lRepair5[0]+lRepair5[1]+lRepair5[2]){
							categoryRatings[11] = 3;
						}
						else if(randomNumber <= lRepair5[0]+lRepair5[1]+lRepair5[2]+lRepair5[3]){
							categoryRatings[11] = 2;
						}
						else if(randomNumber <= lRepair5[0]+lRepair5[1]+lRepair5[2]+lRepair5[3]+lRepair5[4]){
							categoryRatings[11] = 1;
						}
						else{
							categoryRatings[11] = 0;
						}
						break;
				}
				break;
			case 4:
				switch(personType){
					case 1:
						//H Quality 4
						randomNumber = getRand(100);
						if(randomNumber <= hQuality4[0]){
							categoryRatings[0] = 5;
						}
						else if(randomNumber <= hQuality4[0]+hQuality4[1]){
							categoryRatings[0] = 4;
						}
						else if(randomNumber <= hQuality4[0]+hQuality4[1]+hQuality4[2]){
							categoryRatings[0] = 3;
						}
						else if(randomNumber <= hQuality4[0]+hQuality4[1]+hQuality4[2]+hQuality4[3]){
							categoryRatings[0] = 2;
						}
						else if(randomNumber <= hQuality4[0]+hQuality4[1]+hQuality4[2]+hQuality4[3]+hQuality4[4]){
							categoryRatings[0] = 1;
						}
						else{
							categoryRatings[0] = 0;
						}
						//H Price 4
						randomNumber = getRand(100);
						if(randomNumber <= hPrice4[0]){
							categoryRatings[1] = 5;
						}
						else if(randomNumber <= hPrice4[0]+hPrice4[1]){
							categoryRatings[1] = 4;
						}
						else if(randomNumber <= hPrice4[0]+hPrice4[1]+hPrice4[2]){
							categoryRatings[1] = 3;
						}
						else if(randomNumber <= hPrice4[0]+hPrice4[1]+hPrice4[2]+hPrice4[3]){
							categoryRatings[1] = 2;
						}
						else if(randomNumber <= hPrice4[0]+hPrice4[1]+hPrice4[2]+hPrice4[3]+hPrice4[4]){
							categoryRatings[1] = 1;
						}
						else{
							categoryRatings[1] = 0;
						}
						//H Name 4
						randomNumber = getRand(100);
						if(randomNumber <= hName4[0]){
							categoryRatings[7] = 5;
						}
						else if(randomNumber <= hName4[0]+hName4[1]){
							categoryRatings[7] = 4;
						}
						else if(randomNumber <= hName4[0]+hName4[1]+hName4[2]){
							categoryRatings[7] = 3;
						}
						else if(randomNumber <= hName4[0]+hName4[1]+hName4[2]+hName4[3]){
							categoryRatings[7] = 2;
						}
						else if(randomNumber <= hName4[0]+hName4[1]+hName4[2]+hName4[3]+hName4[4]){
							categoryRatings[7] = 1;
						}
						else{
							categoryRatings[7] = 0;
						}

						//H Repair 4
						randomNumber = getRand(100);
						if(randomNumber <= hRepair4[0]){
							categoryRatings[11] = 5;
						}
						else if(randomNumber <= hRepair4[0]+hRepair4[1]){
							categoryRatings[11] = 4;
						}
						else if(randomNumber <= hRepair4[0]+hRepair4[1]+hRepair4[2]){
							categoryRatings[11] = 3;
						}
						else if(randomNumber <= hRepair4[0]+hRepair4[1]+hRepair4[2]+hRepair4[3]){
							categoryRatings[11] = 2;
						}
						else if(randomNumber <= hRepair4[0]+hRepair4[1]+hRepair4[2]+hRepair4[3]+hRepair4[4]){
							categoryRatings[11] = 1;
						}
						else{
							categoryRatings[11] = 0;
						}
						break;

					case 2:
						//M Quality 4
						if(randomNumber <= mQuality4[0]){
							categoryRatings[0] = 5;
						}
						else if(randomNumber <= mQuality4[0]+mQuality4[1]){
							categoryRatings[0] = 4;
						}
						else if(randomNumber <= mQuality4[0]+mQuality4[1]+mQuality4[2]){
							categoryRatings[0] = 3;
						}
						else if(randomNumber <= mQuality4[0]+mQuality4[1]+mQuality4[2]+mQuality4[3]){
							categoryRatings[0] = 2;
						}
						else if(randomNumber <= mQuality4[0]+mQuality4[1]+mQuality4[2]+mQuality4[3]+mQuality4[4]){
							categoryRatings[0] = 1;
						}
						else{
							categoryRatings[0] = 0;
						}
						//M Price 4
						randomNumber = getRand(100);
						if(randomNumber <= mPrice4[0]){
							categoryRatings[1] = 5;
						}
						else if(randomNumber <= mPrice4[0]+mPrice4[1]){
							categoryRatings[1] = 4;
						}
						else if(randomNumber <= mPrice4[0]+mPrice4[1]+mPrice4[2]){
							categoryRatings[1] = 3;
						}
						else if(randomNumber <= mPrice4[0]+mPrice4[1]+mPrice4[2]+mPrice4[3]){
							categoryRatings[1] = 2;
						}
						else if(randomNumber <= mPrice4[0]+mPrice4[1]+mPrice4[2]+mPrice4[3]+mPrice4[4]){
							categoryRatings[1] = 1;
						}
						else{
							categoryRatings[1] = 0;
						}
						//M Name 4
						if(randomNumber <= mName4[0]){
							categoryRatings[7] = 5;
						}
						else if(randomNumber <= mName4[0]+mName4[1]){
							categoryRatings[7] = 4;
						}
						else if(randomNumber <= mName4[0]+mName4[1]+mName4[2]){
							categoryRatings[7] = 3;
						}
						else if(randomNumber <= mName4[0]+mName4[1]+mName4[2]+mName4[3]){
							categoryRatings[7] = 2;
						}
						else if(randomNumber <= mName4[0]+mName4[1]+mName4[2]+mName4[3]+mName4[4]){
							categoryRatings[7] = 1;
						}
						else{
							categoryRatings[7] = 0;
						}
						//M Repair 4
						randomNumber = getRand(100);
						if(randomNumber <= mRepair4[0]){
							categoryRatings[11] = 5;
						}
						else if(randomNumber <= mRepair4[0]+mRepair4[1]){
							categoryRatings[11] = 4;
						}
						else if(randomNumber <= mRepair4[0]+mRepair4[1]+mRepair4[2]){
							categoryRatings[11] = 3;
						}
						else if(randomNumber <= mRepair4[0]+mRepair4[1]+mRepair4[2]+mRepair4[3]){
							categoryRatings[11] = 2;
						}
						else if(randomNumber <= mRepair4[0]+mRepair4[1]+mRepair4[2]+mRepair4[3]+mRepair4[4]){
							categoryRatings[11] = 1;
						}
						else{
							categoryRatings[11] = 0;
						}
						break;
					case 3:
						//L Quality 4
						if(randomNumber <= lQuality4[0]){
							categoryRatings[0] = 5;
						}
						else if(randomNumber <= lQuality4[0]+lQuality4[1]){
							categoryRatings[0] = 4;
						}
						else if(randomNumber <= lQuality4[0]+lQuality4[1]+lQuality4[2]){
							categoryRatings[0] = 3;
						}
						else if(randomNumber <= lQuality4[0]+lQuality4[1]+lQuality4[2]+lQuality4[3]){
							categoryRatings[0] = 2;
						}
						else if(randomNumber <= lQuality4[0]+lQuality4[1]+lQuality4[2]+lQuality4[3]+lQuality4[4]){
							categoryRatings[0] = 1;
						}
						else{
							categoryRatings[0] = 0;
						}
						//L Price 4
						randomNumber = getRand(100);
						if(randomNumber <= lPrice4[0]){
							categoryRatings[1] = 5;
						}
						else if(randomNumber <= lPrice4[0]+lPrice4[1]){
							categoryRatings[1] = 4;
						}
						else if(randomNumber <= lPrice4[0]+lPrice4[1]+lPrice4[2]){
							categoryRatings[1] = 3;
						}
						else if(randomNumber <= lPrice4[0]+lPrice4[1]+lPrice4[2]+lPrice4[3]){
							categoryRatings[1] = 2;
						}
						else if(randomNumber <= lPrice4[0]+lPrice4[1]+lPrice4[2]+lPrice4[3]+lPrice4[4]){
							categoryRatings[1] = 1;
						}
						else{
							categoryRatings[1] = 0;
						}
						//L Name 4
						if(randomNumber <= lName4[0]){
							categoryRatings[7] = 5;
						}
						else if(randomNumber <= lName4[0]+lName4[1]){
							categoryRatings[7] = 4;
						}
						else if(randomNumber <= lName4[0]+lName4[1]+lName4[2]){
							categoryRatings[7] = 3;
						}
						else if(randomNumber <= lName4[0]+lName4[1]+lName4[2]+lName4[3]){
							categoryRatings[7] = 2;
						}
						else if(randomNumber <= lName4[0]+lName4[1]+lName4[2]+lName4[3]+lName4[4]){
							categoryRatings[7] = 1;
						}
						else{
							categoryRatings[7] = 0;
						}
						//L Repair 4
						randomNumber = getRand(100);
						if(randomNumber <= lRepair4[0]){
							categoryRatings[11] = 5;
						}
						else if(randomNumber <= lRepair4[0]+lRepair4[1]){
							categoryRatings[11] = 4;
						}
						else if(randomNumber <= lRepair4[0]+lRepair4[1]+lRepair4[2]){
							categoryRatings[11] = 3;
						}
						else if(randomNumber <= lRepair4[0]+lRepair4[1]+lRepair4[2]+lRepair4[3]){
							categoryRatings[11] = 2;
						}
						else if(randomNumber <= lRepair4[0]+lRepair4[1]+lRepair4[2]+lRepair4[3]+lRepair4[4]){
							categoryRatings[11] = 1;
						}
						else{
							categoryRatings[11] = 0;
						}
						break;
				}
				break;
			case 3:
				switch(personType){
					case 1:
						//H Quality 3
						randomNumber = getRand(100);
						if(randomNumber <= hQuality3[0]){
							categoryRatings[0] = 5;
						}
						else if(randomNumber <= hQuality3[0]+hQuality3[1]){
							categoryRatings[0] = 4;
						}
						else if(randomNumber <= hQuality3[0]+hQuality3[1]+hQuality3[2]){
							categoryRatings[0] = 3;
						}
						else if(randomNumber <= hQuality3[0]+hQuality3[1]+hQuality3[2]+hQuality3[3]){
							categoryRatings[0] = 2;
						}
						else if(randomNumber <= hQuality3[0]+hQuality3[1]+hQuality3[2]+hQuality3[3]+hQuality3[4]){
							categoryRatings[0] = 1;
						}
						else{
							categoryRatings[0] = 0;
						}
						//H Price 3
						randomNumber = getRand(100);
						if(randomNumber <= hPrice3[0]){
							categoryRatings[1] = 5;
						}
						else if(randomNumber <= hPrice3[0]+hPrice3[1]){
							categoryRatings[1] = 4;
						}
						else if(randomNumber <= hPrice3[0]+hPrice3[1]+hPrice3[2]){
							categoryRatings[1] = 3;
						}
						else if(randomNumber <= hPrice3[0]+hPrice3[1]+hPrice3[2]+hPrice3[3]){
							categoryRatings[1] = 2;
						}
						else if(randomNumber <= hPrice3[0]+hPrice3[1]+hPrice3[2]+hPrice3[3]+hPrice3[4]){
							categoryRatings[1] = 1;
						}
						else{
							categoryRatings[1] = 0;
						}
						//H Name 3
						randomNumber = getRand(100);
						if(randomNumber <= hName3[0]){
							categoryRatings[7] = 5;
						}
						else if(randomNumber <= hName3[0]+hName3[1]){
							categoryRatings[7] = 4;
						}
						else if(randomNumber <= hName3[0]+hName3[1]+hName3[2]){
							categoryRatings[7] = 3;
						}
						else if(randomNumber <= hName3[0]+hName3[1]+hName3[2]+hName3[3]){
							categoryRatings[7] = 2;
						}
						else if(randomNumber <= hName3[0]+hName3[1]+hName3[2]+hName3[3]+hName3[4]){
							categoryRatings[7] = 1;
						}
						else{
							categoryRatings[7] = 0;
						}

						//H Repair 3
						randomNumber = getRand(100);
						if(randomNumber <= hRepair3[0]){
							categoryRatings[11] = 5;
						}
						else if(randomNumber <= hRepair3[0]+hRepair3[1]){
							categoryRatings[11] = 4;
						}
						else if(randomNumber <= hRepair3[0]+hRepair3[1]+hRepair3[2]){
							categoryRatings[11] = 3;
						}
						else if(randomNumber <= hRepair3[0]+hRepair3[1]+hRepair3[2]+hRepair3[3]){
							categoryRatings[11] = 2;
						}
						else if(randomNumber <= hRepair3[0]+hRepair3[1]+hRepair3[2]+hRepair3[3]+hRepair3[4]){
							categoryRatings[11] = 1;
						}
						else{
							categoryRatings[11] = 0;
						}
						break;

					case 2:
						//M Quality 3
						if(randomNumber <= mQuality3[0]){
							categoryRatings[0] = 5;
						}
						else if(randomNumber <= mQuality3[0]+mQuality3[1]){
							categoryRatings[0] = 4;
						}
						else if(randomNumber <= mQuality3[0]+mQuality3[1]+mQuality3[2]){
							categoryRatings[0] = 3;
						}
						else if(randomNumber <= mQuality3[0]+mQuality3[1]+mQuality3[2]+mQuality3[3]){
							categoryRatings[0] = 2;
						}
						else if(randomNumber <= mQuality3[0]+mQuality3[1]+mQuality3[2]+mQuality3[3]+mQuality3[4]){
							categoryRatings[0] = 1;
						}
						else{
							categoryRatings[0] = 0;
						}
						//M Price 3
						randomNumber = getRand(100);
						if(randomNumber <= mPrice3[0]){
							categoryRatings[1] = 5;
						}
						else if(randomNumber <= mPrice3[0]+mPrice3[1]){
							categoryRatings[1] = 4;
						}
						else if(randomNumber <= mPrice3[0]+mPrice3[1]+mPrice3[2]){
							categoryRatings[1] = 3;
						}
						else if(randomNumber <= mPrice3[0]+mPrice3[1]+mPrice3[2]+mPrice3[3]){
							categoryRatings[1] = 2;
						}
						else if(randomNumber <= mPrice3[0]+mPrice3[1]+mPrice3[2]+mPrice3[3]+mPrice3[4]){
							categoryRatings[1] = 1;
						}
						else{
							categoryRatings[1] = 0;
						}
						//M Name 3
						if(randomNumber <= mName3[0]){
							categoryRatings[7] = 5;
						}
						else if(randomNumber <= mName3[0]+mName3[1]){
							categoryRatings[7] = 4;
						}
						else if(randomNumber <= mName3[0]+mName3[1]+mName3[2]){
							categoryRatings[7] = 3;
						}
						else if(randomNumber <= mName3[0]+mName3[1]+mName3[2]+mName3[3]){
							categoryRatings[7] = 2;
						}
						else if(randomNumber <= mName3[0]+mName3[1]+mName3[2]+mName3[3]+mName3[4]){
							categoryRatings[7] = 1;
						}
						else{
							categoryRatings[7] = 0;
						}
						//M Repair 3
						randomNumber = getRand(100);
						if(randomNumber <= mRepair3[0]){
							categoryRatings[11] = 5;
						}
						else if(randomNumber <= mRepair3[0]+mRepair3[1]){
							categoryRatings[11] = 4;
						}
						else if(randomNumber <= mRepair3[0]+mRepair3[1]+mRepair3[2]){
							categoryRatings[11] = 3;
						}
						else if(randomNumber <= mRepair3[0]+mRepair3[1]+mRepair3[2]+mRepair3[3]){
							categoryRatings[11] = 2;
						}
						else if(randomNumber <= mRepair3[0]+mRepair3[1]+mRepair3[2]+mRepair3[3]+mRepair3[4]){
							categoryRatings[11] = 1;
						}
						else{
							categoryRatings[11] = 0;
						}
						break;
					case 3:
						//L Quality 3
						if(randomNumber <= lQuality3[0]){
							categoryRatings[0] = 5;
						}
						else if(randomNumber <= lQuality3[0]+lQuality3[1]){
							categoryRatings[0] = 4;
						}
						else if(randomNumber <= lQuality3[0]+lQuality3[1]+lQuality3[2]){
							categoryRatings[0] = 3;
						}
						else if(randomNumber <= lQuality3[0]+lQuality3[1]+lQuality3[2]+lQuality3[3]){
							categoryRatings[0] = 2;
						}
						else if(randomNumber <= lQuality3[0]+lQuality3[1]+lQuality3[2]+lQuality3[3]+lQuality3[4]){
							categoryRatings[0] = 1;
						}
						else{
							categoryRatings[0] = 0;
						}
						//L Price 3
						randomNumber = getRand(100);
						if(randomNumber <= lPrice3[0]){
							categoryRatings[1] = 5;
						}
						else if(randomNumber <= lPrice3[0]+lPrice3[1]){
							categoryRatings[1] = 4;
						}
						else if(randomNumber <= lPrice3[0]+lPrice3[1]+lPrice3[2]){
							categoryRatings[1] = 3;
						}
						else if(randomNumber <= lPrice3[0]+lPrice3[1]+lPrice3[2]+lPrice3[3]){
							categoryRatings[1] = 2;
						}
						else if(randomNumber <= lPrice3[0]+lPrice3[1]+lPrice3[2]+lPrice3[3]+lPrice3[4]){
							categoryRatings[1] = 1;
						}
						else{
							categoryRatings[1] = 0;
						}
						//L Name 3
						if(randomNumber <= lName3[0]){
							categoryRatings[7] = 5;
						}
						else if(randomNumber <= lName3[0]+lName3[1]){
							categoryRatings[7] = 4;
						}
						else if(randomNumber <= lName3[0]+lName3[1]+lName3[2]){
							categoryRatings[7] = 3;
						}
						else if(randomNumber <= lName3[0]+lName3[1]+lName3[2]+lName3[3]){
							categoryRatings[7] = 2;
						}
						else if(randomNumber <= lName3[0]+lName3[1]+lName3[2]+lName3[3]+lName3[4]){
							categoryRatings[7] = 1;
						}
						else{
							categoryRatings[7] = 0;
						}
						//L Repair 3
						randomNumber = getRand(100);
						if(randomNumber <= lRepair3[0]){
							categoryRatings[11] = 5;
						}
						else if(randomNumber <= lRepair3[0]+lRepair3[1]){
							categoryRatings[11] = 4;
						}
						else if(randomNumber <= lRepair3[0]+lRepair3[1]+lRepair3[2]){
							categoryRatings[11] = 3;
						}
						else if(randomNumber <= lRepair3[0]+lRepair3[1]+lRepair3[2]+lRepair3[3]){
							categoryRatings[11] = 2;
						}
						else if(randomNumber <= lRepair3[0]+lRepair3[1]+lRepair3[2]+lRepair3[3]+lRepair3[4]){
							categoryRatings[11] = 1;
						}
						else{
							categoryRatings[11] = 0;
						}
						break;
				}
				break;
			case 2:
				switch(personType){
					case 1:
						//H Quality 2
						randomNumber = getRand(100);
						if(randomNumber <= hQuality2[0]){
							categoryRatings[0] = 5;
						}
						else if(randomNumber <= hQuality2[0]+hQuality2[1]){
							categoryRatings[0] = 4;
						}
						else if(randomNumber <= hQuality2[0]+hQuality2[1]+hQuality2[2]){
							categoryRatings[0] = 3;
						}
						else if(randomNumber <= hQuality2[0]+hQuality2[1]+hQuality2[2]+hQuality2[3]){
							categoryRatings[0] = 2;
						}
						else if(randomNumber <= hQuality2[0]+hQuality2[1]+hQuality2[2]+hQuality2[3]+hQuality2[4]){
							categoryRatings[0] = 1;
						}
						else{
							categoryRatings[0] = 0;
						}
						//H Price 2
						randomNumber = getRand(100);
						if(randomNumber <= hPrice2[0]){
							categoryRatings[1] = 5;
						}
						else if(randomNumber <= hPrice2[0]+hPrice2[1]){
							categoryRatings[1] = 4;
						}
						else if(randomNumber <= hPrice2[0]+hPrice2[1]+hPrice2[2]){
							categoryRatings[1] = 3;
						}
						else if(randomNumber <= hPrice2[0]+hPrice2[1]+hPrice2[2]+hPrice2[3]){
							categoryRatings[1] = 2;
						}
						else if(randomNumber <= hPrice2[0]+hPrice2[1]+hPrice2[2]+hPrice2[3]+hPrice2[4]){
							categoryRatings[1] = 1;
						}
						else{
							categoryRatings[1] = 0;
						}
						//H Name 2
						randomNumber = getRand(100);
						if(randomNumber <= hName2[0]){
							categoryRatings[7] = 5;
						}
						else if(randomNumber <= hName2[0]+hName2[1]){
							categoryRatings[7] = 4;
						}
						else if(randomNumber <= hName2[0]+hName2[1]+hName2[2]){
							categoryRatings[7] = 3;
						}
						else if(randomNumber <= hName2[0]+hName2[1]+hName2[2]+hName2[3]){
							categoryRatings[7] = 2;
						}
						else if(randomNumber <= hName2[0]+hName2[1]+hName2[2]+hName2[3]+hName2[4]){
							categoryRatings[7] = 1;
						}
						else{
							categoryRatings[7] = 0;
						}

						//H Repair 2
						randomNumber = getRand(100);
						if(randomNumber <= hRepair2[0]){
							categoryRatings[11] = 5;
						}
						else if(randomNumber <= hRepair2[0]+hRepair2[1]){
							categoryRatings[11] = 4;
						}
						else if(randomNumber <= hRepair2[0]+hRepair2[1]+hRepair2[2]){
							categoryRatings[11] = 3;
						}
						else if(randomNumber <= hRepair2[0]+hRepair2[1]+hRepair2[2]+hRepair2[3]){
							categoryRatings[11] = 2;
						}
						else if(randomNumber <= hRepair2[0]+hRepair2[1]+hRepair2[2]+hRepair2[3]+hRepair2[4]){
							categoryRatings[11] = 1;
						}
						else{
							categoryRatings[11] = 0;
						}
						break;

					case 2:
						//M Quality 2
						if(randomNumber <= mQuality2[0]){
							categoryRatings[0] = 5;
						}
						else if(randomNumber <= mQuality2[0]+mQuality2[1]){
							categoryRatings[0] = 4;
						}
						else if(randomNumber <= mQuality2[0]+mQuality2[1]+mQuality2[2]){
							categoryRatings[0] = 3;
						}
						else if(randomNumber <= mQuality2[0]+mQuality2[1]+mQuality2[2]+mQuality2[3]){
							categoryRatings[0] = 2;
						}
						else if(randomNumber <= mQuality2[0]+mQuality2[1]+mQuality2[2]+mQuality2[3]+mQuality2[4]){
							categoryRatings[0] = 1;
						}
						else{
							categoryRatings[0] = 0;
						}
						//M Price 2
						randomNumber = getRand(100);
						if(randomNumber <= mPrice2[0]){
							categoryRatings[1] = 5;
						}
						else if(randomNumber <= mPrice2[0]+mPrice2[1]){
							categoryRatings[1] = 4;
						}
						else if(randomNumber <= mPrice2[0]+mPrice2[1]+mPrice2[2]){
							categoryRatings[1] = 3;
						}
						else if(randomNumber <= mPrice2[0]+mPrice2[1]+mPrice2[2]+mPrice2[3]){
							categoryRatings[1] = 2;
						}
						else if(randomNumber <= mPrice2[0]+mPrice2[1]+mPrice2[2]+mPrice2[3]+mPrice2[4]){
							categoryRatings[1] = 1;
						}
						else{
							categoryRatings[1] = 0;
						}
						//M Name 2
						if(randomNumber <= mName2[0]){
							categoryRatings[7] = 5;
						}
						else if(randomNumber <= mName2[0]+mName2[1]){
							categoryRatings[7] = 4;
						}
						else if(randomNumber <= mName2[0]+mName2[1]+mName2[2]){
							categoryRatings[7] = 3;
						}
						else if(randomNumber <= mName2[0]+mName2[1]+mName2[2]+mName2[3]){
							categoryRatings[7] = 2;
						}
						else if(randomNumber <= mName2[0]+mName2[1]+mName2[2]+mName2[3]+mName2[4]){
							categoryRatings[7] = 1;
						}
						else{
							categoryRatings[7] = 0;
						}
						//M Repair 2
						randomNumber = getRand(100);
						if(randomNumber <= mRepair2[0]){
							categoryRatings[11] = 5;
						}
						else if(randomNumber <= mRepair2[0]+mRepair2[1]){
							categoryRatings[11] = 4;
						}
						else if(randomNumber <= mRepair2[0]+mRepair2[1]+mRepair2[2]){
							categoryRatings[11] = 3;
						}
						else if(randomNumber <= mRepair2[0]+mRepair2[1]+mRepair2[2]+mRepair2[3]){
							categoryRatings[11] = 2;
						}
						else if(randomNumber <= mRepair2[0]+mRepair2[1]+mRepair2[2]+mRepair2[3]+mRepair2[4]){
							categoryRatings[11] = 1;
						}
						else{
							categoryRatings[11] = 0;
						}
						break;
					case 3:
						//L Quality 2
						if(randomNumber <= lQuality2[0]){
							categoryRatings[0] = 5;
						}
						else if(randomNumber <= lQuality2[0]+lQuality2[1]){
							categoryRatings[0] = 4;
						}
						else if(randomNumber <= lQuality2[0]+lQuality2[1]+lQuality2[2]){
							categoryRatings[0] = 3;
						}
						else if(randomNumber <= lQuality2[0]+lQuality2[1]+lQuality2[2]+lQuality2[3]){
							categoryRatings[0] = 2;
						}
						else if(randomNumber <= lQuality2[0]+lQuality2[1]+lQuality2[2]+lQuality2[3]+lQuality2[4]){
							categoryRatings[0] = 1;
						}
						else{
							categoryRatings[0] = 0;
						}
						//L Price 2
						randomNumber = getRand(100);
						if(randomNumber <= lPrice2[0]){
							categoryRatings[1] = 5;
						}
						else if(randomNumber <= lPrice2[0]+lPrice2[1]){
							categoryRatings[1] = 4;
						}
						else if(randomNumber <= lPrice2[0]+lPrice2[1]+lPrice2[2]){
							categoryRatings[1] = 3;
						}
						else if(randomNumber <= lPrice2[0]+lPrice2[1]+lPrice2[2]+lPrice2[3]){
							categoryRatings[1] = 2;
						}
						else if(randomNumber <= lPrice2[0]+lPrice2[1]+lPrice2[2]+lPrice2[3]+lPrice2[4]){
							categoryRatings[1] = 1;
						}
						else{
							categoryRatings[1] = 0;
						}
						//L Name 2
						if(randomNumber <= lName2[0]){
							categoryRatings[7] = 5;
						}
						else if(randomNumber <= lName2[0]+lName2[1]){
							categoryRatings[7] = 4;
						}
						else if(randomNumber <= lName2[0]+lName2[1]+lName2[2]){
							categoryRatings[7] = 3;
						}
						else if(randomNumber <= lName2[0]+lName2[1]+lName2[2]+lName2[3]){
							categoryRatings[7] = 2;
						}
						else if(randomNumber <= lName2[0]+lName2[1]+lName2[2]+lName2[3]+lName2[4]){
							categoryRatings[7] = 1;
						}
						else{
							categoryRatings[7] = 0;
						}
						//L Repair 2
						randomNumber = getRand(100);
						if(randomNumber <= lRepair2[0]){
							categoryRatings[11] = 5;
						}
						else if(randomNumber <= lRepair2[0]+lRepair2[1]){
							categoryRatings[11] = 4;
						}
						else if(randomNumber <= lRepair2[0]+lRepair2[1]+lRepair2[2]){
							categoryRatings[11] = 3;
						}
						else if(randomNumber <= lRepair2[0]+lRepair2[1]+lRepair2[2]+lRepair2[3]){
							categoryRatings[11] = 2;
						}
						else if(randomNumber <= lRepair2[0]+lRepair2[1]+lRepair2[2]+lRepair2[3]+lRepair2[4]){
							categoryRatings[11] = 1;
						}
						else{
							categoryRatings[11] = 0;
						}
						break;
				}
				break;
			case 1:
				switch(personType){
					case 1:
						//H Quality 1
						randomNumber = getRand(100);
						if(randomNumber <= hQuality1[0]){
							categoryRatings[0] = 5;
						}
						else if(randomNumber <= hQuality1[0]+hQuality1[1]){
							categoryRatings[0] = 4;
						}
						else if(randomNumber <= hQuality1[0]+hQuality1[1]+hQuality1[2]){
							categoryRatings[0] = 3;
						}
						else if(randomNumber <= hQuality1[0]+hQuality1[1]+hQuality1[2]+hQuality1[3]){
							categoryRatings[0] = 2;
						}
						else if(randomNumber <= hQuality1[0]+hQuality1[1]+hQuality1[2]+hQuality1[3]+hQuality1[4]){
							categoryRatings[0] = 1;
						}
						else{
							categoryRatings[0] = 0;
						}
						//H Price 1
						randomNumber = getRand(100);
						if(randomNumber <= hPrice1[0]){
							categoryRatings[1] = 5;
						}
						else if(randomNumber <= hPrice1[0]+hPrice1[1]){
							categoryRatings[1] = 4;
						}
						else if(randomNumber <= hPrice1[0]+hPrice1[1]+hPrice1[2]){
							categoryRatings[1] = 3;
						}
						else if(randomNumber <= hPrice1[0]+hPrice1[1]+hPrice1[2]+hPrice1[3]){
							categoryRatings[1] = 2;
						}
						else if(randomNumber <= hPrice1[0]+hPrice1[1]+hPrice1[2]+hPrice1[3]+hPrice1[4]){
							categoryRatings[1] = 1;
						}
						else{
							categoryRatings[1] = 0;
						}
						//H Name 1
						randomNumber = getRand(100);
						if(randomNumber <= hName1[0]){
							categoryRatings[7] = 5;
						}
						else if(randomNumber <= hName1[0]+hName1[1]){
							categoryRatings[7] = 4;
						}
						else if(randomNumber <= hName1[0]+hName1[1]+hName1[2]){
							categoryRatings[7] = 3;
						}
						else if(randomNumber <= hName1[0]+hName1[1]+hName1[2]+hName1[3]){
							categoryRatings[7] = 2;
						}
						else if(randomNumber <= hName1[0]+hName1[1]+hName1[2]+hName1[3]+hName1[4]){
							categoryRatings[7] = 1;
						}
						else{
							categoryRatings[7] = 0;
						}

						//H Repair 1
						randomNumber = getRand(100);
						if(randomNumber <= hRepair1[0]){
							categoryRatings[11] = 5;
						}
						else if(randomNumber <= hRepair1[0]+hRepair1[1]){
							categoryRatings[11] = 4;
						}
						else if(randomNumber <= hRepair1[0]+hRepair1[1]+hRepair1[2]){
							categoryRatings[11] = 3;
						}
						else if(randomNumber <= hRepair1[0]+hRepair1[1]+hRepair1[2]+hRepair1[3]){
							categoryRatings[11] = 2;
						}
						else if(randomNumber <= hRepair1[0]+hRepair1[1]+hRepair1[2]+hRepair1[3]+hRepair1[4]){
							categoryRatings[11] = 1;
						}
						else{
							categoryRatings[11] = 0;
						}
						break;

					case 2:
						//M Quality 1
						if(randomNumber <= mQuality1[0]){
							categoryRatings[0] = 5;
						}
						else if(randomNumber <= mQuality1[0]+mQuality1[1]){
							categoryRatings[0] = 4;
						}
						else if(randomNumber <= mQuality1[0]+mQuality1[1]+mQuality1[2]){
							categoryRatings[0] = 3;
						}
						else if(randomNumber <= mQuality1[0]+mQuality1[1]+mQuality1[2]+mQuality1[3]){
							categoryRatings[0] = 2;
						}
						else if(randomNumber <= mQuality1[0]+mQuality1[1]+mQuality1[2]+mQuality1[3]+mQuality1[4]){
							categoryRatings[0] = 1;
						}
						else{
							categoryRatings[0] = 0;
						}
						//M Price 1
						randomNumber = getRand(100);
						if(randomNumber <= mPrice1[0]){
							categoryRatings[1] = 5;
						}
						else if(randomNumber <= mPrice1[0]+mPrice1[1]){
							categoryRatings[1] = 4;
						}
						else if(randomNumber <= mPrice1[0]+mPrice1[1]+mPrice1[2]){
							categoryRatings[1] = 3;
						}
						else if(randomNumber <= mPrice1[0]+mPrice1[1]+mPrice1[2]+mPrice1[3]){
							categoryRatings[1] = 2;
						}
						else if(randomNumber <= mPrice1[0]+mPrice1[1]+mPrice1[2]+mPrice1[3]+mPrice1[4]){
							categoryRatings[1] = 1;
						}
						else{
							categoryRatings[1] = 0;
						}
						//M Name 1
						if(randomNumber <= mName1[0]){
							categoryRatings[7] = 5;
						}
						else if(randomNumber <= mName1[0]+mName1[1]){
							categoryRatings[7] = 4;
						}
						else if(randomNumber <= mName1[0]+mName1[1]+mName1[2]){
							categoryRatings[7] = 3;
						}
						else if(randomNumber <= mName1[0]+mName1[1]+mName1[2]+mName1[3]){
							categoryRatings[7] = 2;
						}
						else if(randomNumber <= mName1[0]+mName1[1]+mName1[2]+mName1[3]+mName1[4]){
							categoryRatings[7] = 1;
						}
						else{
							categoryRatings[7] = 0;
						}
						//M Repair 1
						randomNumber = getRand(100);
						if(randomNumber <= mRepair1[0]){
							categoryRatings[11] = 5;
						}
						else if(randomNumber <= mRepair1[0]+mRepair1[1]){
							categoryRatings[11] = 4;
						}
						else if(randomNumber <= mRepair1[0]+mRepair1[1]+mRepair1[2]){
							categoryRatings[11] = 3;
						}
						else if(randomNumber <= mRepair1[0]+mRepair1[1]+mRepair1[2]+mRepair1[3]){
							categoryRatings[11] = 2;
						}
						else if(randomNumber <= mRepair1[0]+mRepair1[1]+mRepair1[2]+mRepair1[3]+mRepair1[4]){
							categoryRatings[11] = 1;
						}
						else{
							categoryRatings[11] = 0;
						}
						break;
					case 3:
						//L Quality 1
						if(randomNumber <= lQuality1[0]){
							categoryRatings[0] = 5;
						}
						else if(randomNumber <= lQuality1[0]+lQuality1[1]){
							categoryRatings[0] = 4;
						}
						else if(randomNumber <= lQuality1[0]+lQuality1[1]+lQuality1[2]){
							categoryRatings[0] = 3;
						}
						else if(randomNumber <= lQuality1[0]+lQuality1[1]+lQuality1[2]+lQuality1[3]){
							categoryRatings[0] = 2;
						}
						else if(randomNumber <= lQuality1[0]+lQuality1[1]+lQuality1[2]+lQuality1[3]+lQuality1[4]){
							categoryRatings[0] = 1;
						}
						else{
							categoryRatings[0] = 0;
						}
						//L Price 1
						randomNumber = getRand(100);
						if(randomNumber <= lPrice1[0]){
							categoryRatings[1] = 5;
						}
						else if(randomNumber <= lPrice1[0]+lPrice1[1]){
							categoryRatings[1] = 4;
						}
						else if(randomNumber <= lPrice1[0]+lPrice1[1]+lPrice1[2]){
							categoryRatings[1] = 3;
						}
						else if(randomNumber <= lPrice1[0]+lPrice1[1]+lPrice1[2]+lPrice1[3]){
							categoryRatings[1] = 2;
						}
						else if(randomNumber <= lPrice1[0]+lPrice1[1]+lPrice1[2]+lPrice1[3]+lPrice1[4]){
							categoryRatings[1] = 1;
						}
						else{
							categoryRatings[1] = 0;
						}
						//L Name 1
						if(randomNumber <= lName1[0]){
							categoryRatings[7] = 5;
						}
						else if(randomNumber <= lName1[0]+lName1[1]){
							categoryRatings[7] = 4;
						}
						else if(randomNumber <= lName1[0]+lName1[1]+lName1[2]){
							categoryRatings[7] = 3;
						}
						else if(randomNumber <= lName1[0]+lName1[1]+lName1[2]+lName1[3]){
							categoryRatings[7] = 2;
						}
						else if(randomNumber <= lName1[0]+lName1[1]+lName1[2]+lName1[3]+lName1[4]){
							categoryRatings[7] = 1;
						}
						else{
							categoryRatings[7] = 0;
						}
						//L Repair 1
						randomNumber = getRand(100);
						if(randomNumber <= lRepair1[0]){
							categoryRatings[11] = 5;
						}
						else if(randomNumber <= lRepair1[0]+lRepair1[1]){
							categoryRatings[11] = 4;
						}
						else if(randomNumber <= lRepair1[0]+lRepair1[1]+lRepair1[2]){
							categoryRatings[11] = 3;
						}
						else if(randomNumber <= lRepair1[0]+lRepair1[1]+lRepair1[2]+lRepair1[3]){
							categoryRatings[11] = 2;
						}
						else if(randomNumber <= lRepair1[0]+lRepair1[1]+lRepair1[2]+lRepair1[3]+lRepair1[4]){
							categoryRatings[11] = 1;
						}
						else{
							categoryRatings[11] = 0;
						}
						break;
				}
				break;
			case 0:

				break;
		}

		//Using a standard distribution, fills in the other 8 categories
		for(i = 2; i < 11; i++){
			if(i != 7){
				randomNumber = getRand(100);
				if(randomNumber <= standard[0]){
					categoryRatings[i] = 5;
				}
				else if(randomNumber <= standard[0]+standard[1]){
					categoryRatings[i] = 4;
				}
				else if(randomNumber <= standard[0]+standard[1]+standard[2]){
					categoryRatings[i] = 3;
				}
				else if(randomNumber <= standard[0]+standard[1]+standard[2]+standard[3]){
					categoryRatings[i] = 2;
				}
				else if(randomNumber <= standard[0]+standard[1]+standard[2]+standard[3]+standard[4]){
					categoryRatings[i] = 1;
				}
				else{
					categoryRatings[i] = 0;
				}
			}
		}
		//Sets all categories to 0 if overallRating is 0
		if(overallRating == 0){
			for(i = 0; i < 12; i++){
				categoryRatings[i] = 0;
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
