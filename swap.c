#include <stdio.h>

int main(){
		int x = 10;
		int y = 20;

		printf("Before Swapping\n");
		printf("X : %d\nY: %d\n",x,y);

		int temp;
		temp=x;
		y=x;
		x=temp;
		printf("Temp=%d",temp); 
}
