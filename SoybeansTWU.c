#include <stdio.h>
#include <stdlib.h>
//Will normalize the array with values ranging from 0-102 based on the largest element in the array
void normalizeArray(double arr[]);

int main(int argc, char* argv[])
{
    FILE *myFile;
    myFile = fopen("soybean_data.txt", "r");

    int i = 0;
    double date[102];
    double plantStand[102];
    double precip[102];
    double temp[102];
    double hail[102];
    double cropHist[102];
    double areaDamaged[102];
    double severity[102];
    double seedTMT[102];
    double germination[102];
    double plantGrowth[102];
    double leaves[102];
    double leafspotHalo[102];
    double leafspotMarg[102];
    double leafspotSize[102];
    double leafShread[102];
    double leafMalf[102];
    double leafMild[102];
    double stem[102];
    double lodging[102];
    double stemCankers[102];
    double cankerLesion[102];
    double fruitingBodies[102];
    double externalDecay[102];
    double mycelium[102];
    double intDiscolor[102];
    double sclerotia[102];
    double fruitPods[102];
    double fruitSpots[102];
    double seed[102];
    double moldGrowth[102];
    double seedDiscolor[102];
    double seedSize[102];
    double shriveling[102];
    double roots[102];

    double totalWU[102];


    if (myFile == NULL)
    {
        printf("Error Reading File\n");
        exit (0);
    }
    //Scans in data from the file
    for (i = 0; i < 102; i++)
    {
        fscanf(myFile, " %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",
            &date[i], &plantStand[i], &precip[i], &temp[i], &hail[i], &cropHist[i], &areaDamaged[i], &severity[i],
             &seedTMT[i], &germination[i], &plantGrowth[i], &leaves[i], &leafspotHalo[i], &leafspotMarg[i],
              &leafspotSize[i], &leafShread[i], &leafMalf[i], &leafMild[i], &stem[i],
              &lodging[i], &stemCankers[i], &cankerLesion[i], &fruitingBodies[i], &externalDecay[i], &mycelium[i],
              &intDiscolor[i], &sclerotia[i], &fruitPods[i], &fruitSpots[i], &seed[i], &moldGrowth[i],
              &seedDiscolor[i], &seedSize[i], &shriveling[i], &roots[i]);

    }


    fclose(myFile);

    //Normalize all the arrays
    normalizeArray(date);
    normalizeArray(plantStand);
    normalizeArray(precip);
    normalizeArray(temp);
    normalizeArray(hail);
    normalizeArray(cropHist);
    normalizeArray(areaDamaged);
    normalizeArray(severity);
    normalizeArray(seedTMT);
    normalizeArray(germination);
    normalizeArray(plantGrowth);
    normalizeArray(leaves);
    normalizeArray(leafspotHalo);
    normalizeArray(leafspotMarg);
    normalizeArray(leafspotSize);
    normalizeArray(leafShread);
    normalizeArray(leafMalf);
    normalizeArray(leafMild);
    normalizeArray(stem);
    normalizeArray(lodging);
    normalizeArray(stemCankers);
    normalizeArray(cankerLesion);
    normalizeArray(fruitingBodies);
    normalizeArray(externalDecay);
    normalizeArray(mycelium);
    normalizeArray(intDiscolor);
    normalizeArray(sclerotia);
    normalizeArray(fruitPods);
    normalizeArray(fruitSpots);
    normalizeArray(seed);
    normalizeArray(moldGrowth);
    normalizeArray(seedDiscolor);
    normalizeArray(seedSize);
    normalizeArray(shriveling);
    normalizeArray(roots);



    //Calculate the Total weighted utility
    for(i=0;i<102;i++){
        totalWU[i] = date[i] *(plantStand[i] + precip[i] + temp[i] + hail[i] + cropHist[i] + areaDamaged[i] + severity[i] + 
            seedTMT[i] + germination[i] + plantGrowth[i] + leaves[i] + leafspotHalo[i] + leafspotMarg[i] + leafspotSize[i] + 
            leafShread[i] + leafMalf[i] + leafMild[i] + stem[i] + lodging[i] + stemCankers[i] + cankerLesion[i] + fruitingBodies[i] + 
            externalDecay[i] + mycelium[i] + intDiscolor[i] + sclerotia[i] + fruitPods[i] + fruitSpots[i] + seed[i] + 
            moldGrowth[i] + seedDiscolor[i] + seedSize[i] + shriveling[i] + roots[i]);
    }



    double plantStandWU = 0;
    double precipWU = 0;
    double tempWU = 0;
    double hailWU = 0;
    double cropHistWU = 0;
    double areaDamagedWU = 0;
    double severityWU = 0;
    double seedTMTWU = 0;
    double germinationWU = 0;
    double plantGrowthWU = 0;
    double leavesWU = 0;
    double leafspotHaloWU = 0;
    double leafspotMargWU = 0;
    double leafspotSizeWU = 0;
    double leafShreadWU = 0;
    double leafMalfWU = 0;
    double leafMildWU = 0;
    double stemWU = 0;
    double lodgingWU = 0;
    double stemCankersWU = 0;
    double cankerLesionWU = 0;
    double fruitingBodiesWU = 0;
    double externalDecayWU = 0;
    double myceliumWU = 0;
    double intDiscolorWU = 0;
    double sclerotiaWU = 0;
    double fruitPodsWU = 0;
    double fruitSpotsWU = 0;
    double seedWU = 0;
    double moldGrowthWU = 0;
    double seedDiscolorWU = 0;
    double seedSizeWU = 0;
    double shrivelingWU = 0;
    double rootsWU = 0;



    for(i=0; i<102; i++){
        
        if(plantStand[i] > 0){
            plantStandWU += totalWU[i];
        }
        if(precip[i] > 0){
            precipWU += totalWU[i];
        }
        if(temp[i] > 0){
            tempWU += totalWU[i];
        }
        if(hail[i] > 0){
            hailWU += totalWU[i];
        }
        if(cropHist[i] > 0){
            cropHistWU += totalWU[i];
        }
        if(areaDamaged[i] > 0){
            areaDamagedWU += totalWU[i];
        }
        if(severity[i] > 0){
            severityWU += totalWU[i];
        }
        if(seedTMT[i] > 0){
            seedTMTWU += totalWU[i];
        }
        if(germination[i] > 0){
            germinationWU += totalWU[i];
        }
        if(plantGrowth[i] > 0){
            plantGrowthWU += totalWU[i];
        }
        if(leaves[i] > 0){
            leavesWU += totalWU[i];
        }
        if(leafspotHalo[i] > 0){
            leafspotHaloWU += totalWU[i];
        }
        if(leafspotMarg[i] > 0){
            leafspotMargWU += totalWU[i];
        }
        if(leafspotSize[i] > 0){
            leafspotSizeWU += totalWU[i];
        }
        if(leafShread[i] > 0){
            leafShreadWU += totalWU[i];
        }
        if(leafMalf[i] > 0){
            leafMalfWU += totalWU[i];
        }
        if(leafMild[i] > 0){
            leafMildWU += totalWU[i];
        }
        if(stem[i] > 0){
            stemWU += totalWU[i];
        }
        if(lodging[i] > 0){
            lodgingWU += totalWU[i];
        }
        if(stemCankers[i] > 0){
            stemCankersWU += totalWU[i];
        }
        if(cankerLesion[i] > 0){
            cankerLesionWU += totalWU[i];
        }
        if(fruitingBodies[i] > 0){
            fruitingBodiesWU += totalWU[i];
        }
        if(externalDecay[i] > 0){
            externalDecayWU += totalWU[i];
        }
        if(mycelium[i] > 0){
            myceliumWU += totalWU[i];
        }
        if(intDiscolor[i] > 0){
            intDiscolorWU += totalWU[i];
        }
        if(sclerotia[i] > 0){
            sclerotiaWU += totalWU[i];
        }
        if(fruitPods[i] > 0){
            fruitPodsWU += totalWU[i];
        }
        if(fruitSpots[i] > 0){
            fruitSpotsWU += totalWU[i];
        }
        if(seed[i] > 0){
            seedWU += totalWU[i];
        }
        if(moldGrowth[i] > 0){
            moldGrowthWU += totalWU[i];
        }
        if(seedDiscolor[i] > 0){
            seedDiscolorWU += totalWU[i];
        }
        if(seedSize[i] > 0){
            seedSizeWU += totalWU[i];
        }
        if(shriveling[i] > 0){
            shrivelingWU += totalWU[i];
        }
        if(roots[i] > 0){
            rootsWU += totalWU[i];
        }

    }


    printf("\nSingles\n");

    printf("Plant Stand WU: \t%.2lf\n", plantStandWU);
    printf("Precipitation WU: \t%.2lf\n", precipWU);
    printf("Temperature WU: \t%.2lf\n", tempWU);
    printf("Hail WU: \t%.2lf\n", hailWU);
    printf("Crop History WU: \t%.2lf\n", cropHistWU);
    printf("Area-Damaged WU: \t%.2lf\n", areaDamagedWU);
    printf("Severity WU: \t%.2lf\n", severityWU);
    printf("Seed TMT WU: \t%.2lf\n", seedTMTWU);
    printf("Germination WU: \t%.2lf\n", germinationWU);
    printf("Plant Growth WU: \t%.2lf\n", plantGrowthWU);
    printf("Leaves WU: \t%.2lf\n", leavesWU);
    printf("Leafspot-Halo WU: \t%.2lf\n", leafspotHaloWU);
    printf("Leafspot-Marg WU: \t%.2lf\n", leafspotMargWU);
    printf("Leafspot-Size WU: \t%.2lf\n", leafspotSizeWU);
    printf("Leaf-Shread WU: \t%.2lf\n", leafShreadWU);
    printf("Leaf-Malf WU: \t%.2lf\n", leafMalfWU);
    printf("Leaf-Mild WU: \t%.2lf\n", leafMildWU);
    printf("Stem WU: \t%.2lf\n", stemWU);
    printf("Lodging WU: \t%.2lf\n", lodgingWU);
    printf("Stem Cankers WU: \t%.2lf\n", stemCankersWU);
    printf("Canker Lesions WU: \t%.2lf\n", cankerLesionWU);
    printf("Fruiting Bodies WU: \t%.2lf\n", fruitingBodiesWU);
    printf("External Decay WU: \t%.2lf\n", externalDecayWU);
    printf("Mycelium WU: \t%.2lf\n", myceliumWU);
    printf("Int-Discoloration WU: \t%.2lf\n", intDiscolorWU);
    printf("Sclerotia WU: \t%.2lf\n", sclerotiaWU);
    printf("Fruit Pods WU: \t%.2lf\n", fruitPodsWU);
    printf("Fruit Spots WU: \t%.2lf\n", fruitSpotsWU);
    printf("Seed WU: \t%.2lf\n", seedWU);
    printf("Mold Growth WU: \t%.2lf\n", moldGrowthWU);
    printf("Seed Discoloration WU: \t%.2lf\n", seedDiscolorWU);
    printf("Seed Size WU: \t%.2lf\n", seedSizeWU);
    printf("Shriveling WU: \t%.2lf\n", shrivelingWU);
    printf("Roots WU: \t%.2lf\n", rootsWU);

    printf("\nDoubles\n");
    //Taking the best 8
    // temp, crophist, areadamaged, severity, leaves, leafspot size, leafspot marg, stem
    //p t c a g l lS s

//Replace germination with severity

    double ptWU = 0;
    double pcWU = 0;
    double paWU= 0;
    double pgWU= 0;
    double plWU= 0;
    double plSWU= 0;
    double psWU= 0;

    double tcWU = 0;
    double taWU= 0;
    double tgWU= 0;
    double tlWU= 0;
    double tlSWU= 0;
    double tsWU= 0;

    double caWU= 0;
    double cgWU= 0;
    double clWU= 0;
    double clSWU= 0;
    double csWU= 0;

    double agWU= 0;
    double alWU= 0;
    double alSWU= 0;
    double asWU= 0;

    double glWU= 0;
    double glSWU= 0;
    double gsWU= 0;

    double llSWU= 0;
    double lsWU= 0;

    double lSsWU = 0;

    for(i=0; i<102; i++){
        if(leafspotMarg[i] > 0 && temp[i] > 0){
            ptWU += totalWU[i];
        }
        if(leafspotMarg[i] > 0 && cropHist[i] > 0){
            pcWU += totalWU[i];
        }
        if(leafspotMarg[i] > 0 && areaDamaged[i] > 0){
            paWU += totalWU[i];
        }
        if(leafspotMarg[i] > 0 && severity[i] > 0){
            pgWU += totalWU[i];
        }
        if(leafspotMarg[i] > 0 && leaves[i] > 0){
            plWU += totalWU[i];
        }
        if(leafspotMarg[i] > 0 && leafspotSize[i] > 0){
            plSWU += totalWU[i];
        }
        if(leafspotMarg[i] > 0 && stem[i] > 0){
            psWU += totalWU[i];
        }

        if(temp[i] > 0 && cropHist[i] > 0){
            tcWU += totalWU[i];
        }
        if(temp[i] > 0 && areaDamaged[i] > 0){
            taWU += totalWU[i];
        }
        if(temp[i] > 0 && severity[i] > 0){
            tgWU += totalWU[i];
        }
        if(temp[i] > 0 && leaves[i] > 0){
            tlWU += totalWU[i];
        }
        if(temp[i] > 0 && leafspotSize[i] > 0){
            tlSWU += totalWU[i];
        }
        if(temp[i] > 0 && stem[i] > 0){
            tsWU += totalWU[i];
        }

        if(cropHist[i] > 0 && areaDamaged[i] > 0){
            caWU += totalWU[i];
        }
        if(cropHist[i] > 0 && severity[i] > 0){
            cgWU += totalWU[i];
        }
        if(cropHist[i] > 0 && leaves[i] > 0){
            clWU += totalWU[i];
        }
        if(cropHist[i] > 0 && leafspotSize[i] > 0){
            clSWU += totalWU[i];
        }
        if(cropHist[i] > 0 && stem[i] > 0){
            csWU += totalWU[i];
        }

        if(areaDamaged[i] > 0 && severity[i] > 0){
            agWU += totalWU[i];
        }
        if(areaDamaged[i] > 0 && leaves[i] > 0){
            alWU += totalWU[i];
        }
        if(areaDamaged[i] > 0 && leafspotSize[i] > 0){
            alSWU += totalWU[i];
        }
        if(areaDamaged[i] > 0 && stem[i] > 0){
            asWU += totalWU[i];
        }

        if(severity[i] > 0 && leaves[i] > 0){
            glWU += totalWU[i];
        }
        if(severity[i] > 0 && leafspotSize[i] > 0){
            glSWU += totalWU[i];
        }
        if(severity[i] > 0 && stem[i] > 0){
            gsWU += totalWU[i];
        }

        if(leaves[i] > 0 && leafspotSize[i] > 0){
            llSWU += totalWU[i];
        }
        if(leaves[i] > 0 && stem[i] > 0){
            lsWU += totalWU[i];
        }

        if(leafspotSize[i] > 0 && stem[i] > 0){
            lSsWU += totalWU[i];
        }
        
    }

    printf("LeafspotMarg and Temperature: \t%.2lf\n", ptWU);
    printf("LeafspotMarg and Crop History: \t%.2lf\n", pcWU);
    printf("LeafspotMarg and Area-Damaged: \t%.2lf\n", paWU);
    printf("LeafspotMarg and Severity: \t%.2lf\n", pgWU);
    printf("LeafspotMarg and Leaves: \t%.2lf\n", plWU);
    printf("LeafspotMarg and Leafspot-Size: \t%.2lf\n", plSWU);
    printf("LeafspotMarg and Stem: \t%.2lf\n", psWU);

    printf("Temperature and Crop History: \t%.2lf\n", tcWU);
    printf("Temperature and Area-Damaged: \t%.2lf\n", taWU);
    printf("Temperature and Severity: \t%.2lf\n", tgWU);
    printf("Temperature and Leaves: \t%.2lf\n", tlWU);
    printf("Temperature and Leafspot-Size: \t%.2lf\n", tlSWU);
    printf("Temperature and Stem: \t%.2lf\n", tsWU);

    printf("Crop History and Area-Damaged: \t%.2lf\n", caWU);
    printf("Crop History and Severity: \t%.2lf\n", cgWU);
    printf("Crop History and Leaves: \t%.2lf\n", clWU);
    printf("Crop History and Leafspot-Size: \t%.2lf\n", clSWU);
    printf("Crop History and Stem: \t%.2lf\n", csWU);

    printf("Area-Damaged and Severity: \t%.2lf\n", agWU);
    printf("Area-Damaged and Leaves: \t%.2lf\n", alWU);
    printf("Area-Damaged and Leafspot-Size: \t%.2lf\n", alSWU);
    printf("Area-Damaged and Stem: \t%.2lf\n", asWU);

    printf("Severity and Leaves: \t%.2lf\n", glWU);
    printf("Severity and Leafspot-Size: \t%.2lf\n", glSWU);
    printf("Severity and Stem: \t%.2lf\n", gsWU);

    printf("Leaves and Leafspot-Size: \t%.2lf\n", llSWU);
    printf("Leaves and Stem: \t%.2lf\n", lsWU);

    printf("Leafspot-Size and Stem: \t%.2lf\n", lSsWU);

    //Taking top 6

    //lMlS, Cl, clS, Cs, llS, lSs
    //Leaf MArg, Leaf SpotSize, Crophist, leaves, stem, 

    //TC, Tl, TL, CA, Cl, CL
    //T C A l L PASS

    double tcaWU = 0;
    double tclWU = 0;
    double tclSWU = 0;
    double talWU = 0;
    double talSWU = 0;
    double tllSWU = 0;

    double calWU = 0;
    double calSWU = 0;
    double cllSWU = 0;

    double allSWU = 0;

    printf("\nTriples\n");

    for(i = 0; i < 102; i++){
        if(leafspotMarg[i] > 0 && cropHist[i] > 0 && stem[i] > 0){
            tcaWU += totalWU[i];
        }
        if(leafspotMarg[i] > 0 && cropHist[i] > 0 && leaves[i] > 0){
            tclWU += totalWU[i];
        }
        if(leafspotMarg[i] > 0 && cropHist[i] > 0 && leafspotSize[i] > 0){
            tclSWU += totalWU[i];
        }
        if(leafspotMarg[i] > 0 && stem[i] > 0 && leaves[i] > 0){
            talWU += totalWU[i];
        }
        if(leafspotMarg[i] > 0 && stem[i] > 0 && leafspotSize[i] > 0){
            talSWU += totalWU[i];
        }
        if(leafspotMarg[i] > 0 && leaves[i] > 0 && leafspotSize[i] > 0){
            tllSWU += totalWU[i];
        }

        if(cropHist[i] > 0 && stem[i] > 0 && leaves[i] > 0){
            calWU += totalWU[i];
        }
        if(cropHist[i] > 0 && stem[i] > 0 && leafspotSize[i] > 0){
            calSWU += totalWU[i];
        }
        if(cropHist[i] > 0 && leaves[i] > 0 && leafspotSize[i] > 0){
            cllSWU += totalWU[i];
        }
        if(stem[i] > 0 && leaves[i] > 0 && leafspotSize[i] > 0){
            allSWU += totalWU[i];
        }

    }
    printf("LeafspotMarg, Crop History, Stem: \t%.2lf\n", tcaWU);
    printf("LeafspotMarg, Crop History, Leaves: \t%.2lf\n", tclWU);
    printf("LeafspotMarg, Crop History, Leafspot-Size: \t%.2lf\n", tclSWU);
    printf("LeafspotMarg, Stem, Leaves: \t%.2lf\n", talWU);
    printf("LeafspotMarg, Stem, Leafspot-Size: \t%.2lf\n", talSWU);
    printf("LeafspotMarg, Leaves, Leafspot-Size: \t%.2lf\n", tllSWU);

    printf("Crop History, Stem, Leaves: \t%.2lf\n", calWU);
    printf("Crop History, Stem, Leafspot-Size: \t%.2lf\n", calSWU);
    printf("Crop History, Leaves, Leafspot-Size: \t%.2lf\n", cllSWU);

    printf("Stem, Leaves, Leafspot-Size: \t %.2lf\n", allSWU);

    //C L T Ls
    printf("\n4's\n");
    double tcllSWU = 0;

    for(i = 0; i < 102; i++){
        if(leafspotMarg[i] > 0 && cropHist[i] > 0 && leaves[i] > 0 && leafspotSize[i] > 0){
            tcllSWU += totalWU[i];
        }
    }

    printf("LeafspotMarg, Crop History, Leaves, Leafspot-Size: \t%.2lf\n", tcllSWU);

}

//Normalizes the array to have values from 0-102
void normalizeArray(double arr[]){
    int i = 0;
    double max = 1;
    for(i = 0; i < 102; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    for(i = 0; i < 102; i++){
        arr[i] = ((arr[i])/(max )) * 100;
    }

}