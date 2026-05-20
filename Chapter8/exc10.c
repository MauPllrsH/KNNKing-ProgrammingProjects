#include <stdio.h>

int main(void){
	int hour, minutes, totalMinutes, resultDepNum, min, diff, idx;
    int arrival[8] = {(10*60+16), (11*60+52), (13*60+31), (15*60), (16*60+8),(17*60+55), (21*60+20),(23*60)+58};
    int departure[8] = {(8*60),(9*60+43),(11*60+19),(12*60+47),(14*60),(15*60+45),(19*60),(21*60+45)};
	
	/* 
    OLD Store all Departure and Arrival Times 
	int dep1Hour = 8, dep1Min = 0, arr1Hour = 10, arr1Min = 16;
	int dep2Hour = 9, dep2Min = 43, arr2Hour = 11, arr2Min = 52;
	int dep3Hour = 11, dep3Min = 19, arr3Hour = 13, arr3Min = 31;
	int dep4Hour = 12, dep4Min = 47, arr4Hour = 15, arr4Min = 0;
	int dep5Hour = 14, dep5Min = 0, arr5Hour = 16, arr5Min = 8;
	int dep6Hour = 15, dep6Min = 45, arr6Hour = 17, arr6Min = 55;
	int dep7Hour = 19, dep7Min = 0, arr7Hour = 21, arr7Min = 20;
	int dep8Hour = 21, dep8Min = 45, arr8Hour = 23, arr8Min = 58;
    */
	
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minutes);
	
	totalMinutes = (hour * 60) + minutes;

	/* I can calculate the smallest difference */
	resultDepNum = 0;
	min = 1000000;

    for(idx = 0; idx < 8; idx++){
        diff = departure[idx] - totalMinutes;
        if (diff < 0) diff = -diff;
        if (min > diff){
            resultDepNum = idx;
            min = diff;
        }
    }
	
    /* Could add AM PM checks with if statements but found it redundant since it's 24-hour format*/
	printf("Closest departure time is %d:%.2d, arriving at %d:%.2d\n", departure[resultDepNum] / 60, departure[resultDepNum] % 60, arrival[resultDepNum] / 60, arrival[resultDepNum] % 60);
	return 0;	
}
