#include <stdio.h>

/**
 *  CCC '14 J3 - Double Dice
 *  saucy
 *  6/14/2020
**/


struct stats{
	int roll;
	int score;
} antonia, david;

	


int main(){
	int x = 0;
	antonia.score = 100;
	david.score = 100;
	scanf("%d",&x);
	for (int i = 0; i < x; i++){
		scanf("%d %d",&antonia.roll,&david.roll);
		if (antonia.roll < david.roll){
			antonia.score -= david.roll;
		} 
		else if (antonia.roll > david.roll){
			david.score -= antonia.roll;
		}
	}
	printf("%d\n%d",antonia.score,david.score);
	return 0;
}