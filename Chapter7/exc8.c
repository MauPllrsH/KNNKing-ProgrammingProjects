#include <stdio.h>
#include <ctype.h>

int main(void){
	int hour, minutes, totalMinutes, resultDepNum, min, diff;
        char pm_or_am;
	
	/* Store all Departure and Arrival Times */
	int dep1Hour = 8, dep1Min = 0, arr1Hour = 10, arr1Min = 16;
	int dep2Hour = 9, dep2Min = 43, arr2Hour = 11, arr2Min = 52;
	int dep3Hour = 11, dep3Min = 19, arr3Hour = 13, arr3Min = 31;
	int dep4Hour = 12, dep4Min = 47, arr4Hour = 15, arr4Min = 0;
	int dep5Hour = 14, dep5Min = 0, arr5Hour = 16, arr5Min = 8;
	int dep6Hour = 15, dep6Min = 45, arr6Hour = 17, arr6Min = 55;
	int dep7Hour = 19, dep7Min = 0, arr7Hour = 21, arr7Min = 20;
	int dep8Hour = 21, dep8Min = 45, arr8Hour = 23, arr8Min = 58;
	
	printf("Enter a 12-hour time: ");
	scanf("%d:%d %c", &hour, &minutes, &pm_or_am);

        pm_or_am = toupper(pm_or_am);
        if(pm_or_am == 'P'){
                hour += 12;
        }
	
	totalMinutes = (hour * 60) + minutes;

	/* I can calculate the smallest difference */
	resultDepNum = 0;
	min = 1000000;	

	diff = (dep1Hour * 60 + dep1Min) - totalMinutes;
	if (diff < 0) diff = -diff;
	if (min > diff){
		resultDepNum = 1;
		min = diff;
	}
	
        diff = (dep2Hour * 60 + dep2Min) - totalMinutes;
        if (diff < 0) diff = -diff;
        if (min > diff){
                resultDepNum = 2;
                min = diff;
        }

        diff = (dep3Hour * 60 + dep3Min) - totalMinutes;
        if (diff < 0) diff = -diff;
        if (min > diff){
                resultDepNum = 3;
                min = diff;
        }

        diff = (dep4Hour * 60 + dep4Min) - totalMinutes;
        if (diff < 0) diff = -diff;
        if (min > diff){
                resultDepNum = 4;
                min = diff; 
        }

        diff = (dep5Hour * 60 + dep5Min) - totalMinutes;
        if (diff < 0) diff = -diff;
        if (min > diff){
                resultDepNum = 5;
                min = diff;
        }

        diff = (dep6Hour * 60 + dep6Min) - totalMinutes;
        if (diff < 0) diff = -diff;
        if (min > diff){
                resultDepNum = 6;
                min = diff;
        }

        diff = (dep7Hour * 60 + dep7Min) - totalMinutes;
        if (diff < 0) diff = -diff;
        if (min > diff){
                resultDepNum = 7;
                min = diff;
        }

        diff = (dep8Hour * 60 + dep8Min) - totalMinutes;
        if (diff < 0) diff = -diff;
        if (min > diff){
                resultDepNum = 8;
                min = diff;
        }
	
	switch(resultDepNum){
		case 1: printf("Closest departure time is %d:%.2d a.m., arriving at %d:%.2d a.m.", dep1Hour, dep1Min, arr1Hour, arr1Min); break;
		case 2: printf("Closest departure time is %d:%.2d a.m., arriving at %d:%.2d a.m.", dep2Hour, dep2Min, arr2Hour, arr2Min); break;
		case 3: printf("Closest departure time is %d:%.2d a.m., arriving at %d:%.2d p.m.", dep3Hour, dep3Min, arr3Hour % 12, arr3Min); break;
		case 4: printf("Closest departure time is %d:%.2d p.m., arriving at %d:%.2d p.m.", dep4Hour, dep4Min, arr4Hour % 12, arr4Min); break;
		case 5: printf("Closest departure time is %d:%.2d p.m., arriving at %d:%.2d p.m.", dep5Hour % 12, dep5Min, arr5Hour % 12, arr5Min); break;
		case 6: printf("Closest departure time is %d:%.2d p.m., arriving at %d:%.2d p.m.", dep6Hour % 12, dep6Min, arr6Hour % 12, arr6Min); break;
		case 7: printf("Closest departure time is %d:%.2d p.m., arriving at %d:%.2d p.m.", dep7Hour % 12, dep7Min, arr7Hour % 12, arr7Min); break;
		case 8: printf("Closest departure time is %d:%.2d p.m., arriving at %d:%.2d p.m.", dep8Hour % 12, dep8Min, arr8Hour % 12, arr8Min); break;
	}

	return 0;
	
}
