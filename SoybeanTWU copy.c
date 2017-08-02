#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	FILE *myFile;
	myFile = fopen("soybean_data.txt", "r");

	int i = 0;
	double date[307];
	double plantStand[307];
	double precip[307];
	double temp[307];
	double hail[307];
	double cropHist[307];
	double areaDamaged[307];
	double severity[307];
	double seedTMT[307];
	double germination[307];
	double plantGrowth[307];
	double leaves[307];
	double leafspotHalo[307];
	double leafspotMarg[307];
	double leafspotSize[307];
	double leafShread[307];
	double leafMalf[307];
	double leafMild[307];
	double stem[307];
	double lodging[307];
	double stemCankers[307];
	double cankerLesion[307];
	double fruitingBodies[307];
	double externalDecay[307];
	double mycelium[307];
	double intDiscolor[307];
	double sclerotia[307];
	double fruitPods[307];
	double fruitSpots[307];
	double seed[307];
	double moldGrowth[307];
	double seedDiscolor[307];
	double seedSize[307];
	double shriveling[307];
	double roots[307];


	if (myFile == NULL)
    {
        printf("Error Reading File\n");
        exit (0);
    }
    for (i = 0; i < 307; i++)
    {
        fscanf(myFile, " %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
        	&date[i], &plantStand[i], &precip[i], &temp[i], &hail[i], &cropHist[i], &areaDamaged[i], &severity[i],
        	 &seedTMT[i], &germination[i], &plantGrowth[i], &leaves[i], &leafspotHalo[i], &leafspotMarg[i],
        	  &leafspotSize[i], &leafShread[i], &leafMalf[i], &leafMild[i], &stem[i],
        	  &lodging[i], &stemCankers[i], &cankerLesion[i], &fruitingBodies[i], &externalDecay[i], &mycelium[i],
        	  &intDiscolor[i], &sclerotia[i], &fruitPods[i], &fruitSpots[i], &seed[i], &moldGrowth[i],
        	  &seedDiscolor[i], &seedSize[i], &shriveling[i], &roots[i]);

    }
    
}