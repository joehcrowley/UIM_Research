// Joe Crowley, March 2017
// This program runs alongside SyntheticData.c to perform a selective sum of the data generated.
// This program sums all ratings over 2 stars multiplied by their overall rating.
// Then, this program callculates a selective sum of pairs of categories in an attempt to find which categories
// impact each other the most.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	FILE *myFile;
	myFile = fopen("1000Entries.txt", "r");

	int i;
	int overallRating[1000];
	int quality[1000];
	int price[1000];
	int time[1000];
	int userInterface[1000];
	int design[1000];
	int color[1000];

    int totalWeightedUtility[1000];

	int qualitySum = 0;
	int priceSum = 0;
	int timeSum = 0;
	int userInterfaceSum = 0;
	int designSum = 0;
	int colorSum = 0;

	if (myFile == NULL)
    {
        printf("Error Reading File\n");
        exit (0);
    }
    for (i = 0; i < 1000; i++)
    {
        fscanf(myFile, " %d %d %d %d %d %d %d", &overallRating[i], &quality[i], &price[i], &time[i], &userInterface[i], &design[i], &color[i]);

    }

    fclose(myFile);

    /* Testing to make sure scanning is working properly
    for (i = 0; i < 16; i++)
    {
           printf("%d %d %d %d %d %d %d\n", overallRating[i], quality[i], price[i], time[i], userInterface[i], design[i], color[i]);


    }
    */

    for (i = 0; i < 1000; i++){
    	if(overallRating[i] > 2){
    		if(quality[i] > 2){
    			qualitySum += overallRating[i] * quality[i];
    		}
    		if(price[i] > 2){
    			priceSum += overallRating[i] * price[i];
    		}
    		if(time[i] > 2){
    			timeSum += overallRating[i] * time[i];
    		}
    		if(userInterface[i] > 2){
    			userInterfaceSum += overallRating[i] * userInterface[i];
    		}
    		if(design[i] > 2){
    			designSum += overallRating[i] * design[i];
	    	}
	    	if(color[i] > 2){
    			colorSum += overallRating[i] * color[i];
    		}
    	}

        totalWeightedUtility[i] = overallRating[i] * (quality[i] + price[i] 
                                        + time[i] + userInterface[i] + design[i] + color[i]);
    }


    printf("Sum of Quality: %d\n", qualitySum);
    printf("Sum of Price: %d\n", priceSum);
    printf("Sum of Time: %d\n", timeSum);
    printf("Sum of User Interface: %d\n", userInterfaceSum);
    printf("Sum of Design: %d\n", designSum);
    printf("Sum of Color: %d\n", colorSum);
    printf("\n");

    // If threshold value is 1500, Quality Price and Time pass
    // Could make if statements that only calculate categories involving these three
    // Then, put print statements in conditionals on whether their sum values equal zero or not

    int qpSum = 0;
    int qtSum = 0;
    int quSum = 0;
    int qdSum = 0;
    int qcSum = 0;

    int ptSum = 0;
    int puSum = 0;
    int pdSum = 0;
    int pcSum = 0;

    int tuSum = 0;
    int tdSum = 0;
    int tcSum = 0;

    int udSum = 0;
    int ucSum = 0;

    int dcSum = 0;


    for(i = 0; i < 1000; i++){
    	if(overallRating[i] > 2){
    		if(quality[i] > 2 && price[i] > 2){
    			qpSum += overallRating[i] * quality[i] + overallRating[i] * price[i];
    		}
    		if(quality[i] > 2 && time[i] > 2){
    			qtSum += overallRating[i] * quality[i] + overallRating[i] * time[i];
    		}
    		if(quality[i] > 2 && userInterface[i] > 2){
    			quSum += overallRating[i] * quality[i] + overallRating[i] * userInterface[i];
    		}
    		if(quality[i] > 2 && design[i] > 2){
    			qdSum += overallRating[i] * quality[i] + overallRating[i] * design[i];
    		}
    		if(quality[i] > 2 && color[i] > 2){
    			qcSum += overallRating[i] * quality[i] + overallRating[i] * color[i];
    		}

    		if(price[i] > 2 && time[i] > 2){
    			ptSum += overallRating[i] * price[i] + overallRating[i] * time[i];
    		}
    		if(price[i] > 2 && userInterface[i] > 2){
    			puSum += overallRating[i] * price[i] + overallRating[i] * userInterface[i];
    		}
    		if(price[i] > 2 && design[i] > 2){
    			pdSum += overallRating[i] * price[i] + overallRating[i] * design[i];
    		}
    		if(price[i] > 2 && color[i] > 2){
    			pcSum += overallRating[i] * price[i] + overallRating[i] * color[i];
    		}

    		if(time[i] > 2 && userInterface[i] > 2){
    			tuSum += overallRating[i] * time[i] + overallRating[i] * userInterface[i];
    		}
    		if(time[i] > 2 && design[i] > 2){
    			tdSum += overallRating[i] * time[i] + overallRating[i] * design[i];
    		}
    		if(time[i] > 2 && color[i] > 2){
    			tcSum += overallRating[i] * time[i] + overallRating[i] * color[i];
    		}

    		if(userInterface[i] > 2 && design[i] > 2){
    			udSum += overallRating[i] * userInterface[i] + overallRating[i] * design[i];
    		}
    		if(userInterface[i] > 2 && color[i] > 2){
    			ucSum += overallRating[i] * userInterface[i] + overallRating[i] * color[i];
    		}

    		if(design[i] > 2 && color[i] > 2){
    			dcSum += overallRating[i] * design[i] + overallRating[i] * color[i];
    		}
    	}
    }

    

    printf("Sum of Quality and Price: %d\n", qpSum);
    printf("Sum of Quality and Time: %d\n", qtSum);
    printf("Sum of Quality and User Interface: %d\n", quSum);
    printf("Sum of Quality and Design: %d\n", qdSum);
    printf("Sum of Quality and Color: %d\n", qcSum);

    printf("Sum of Price and Time: %d\n", ptSum);
    printf("Sum of Price and User Interface: %d\n", puSum);
    printf("Sum of Price and Design: %d\n", pdSum);
    printf("Sum of Price and Color: %d\n", pcSum);

    printf("Sum of Time and User Interface: %d\n",tuSum);
    printf("Sum of Time and Design: %d\n", tdSum);
    printf("Sum of Time and Color: %d\n", tcSum);

    printf("Sum of User Interface and Design: %d\n", udSum);
    printf("Sum of User Interface and Color: %d\n", ucSum);

    printf("Sum of Design and Color: %d\n", dcSum);

    return 0;
}