#include <stdio.h>

int main(){
		int x = 10;
		int y = 20;

		printf("Before Swapping\n");
		printf("X : %d\nY: %d\n",x,y);
		int temp=x;
		x=y;
		y=temp;
		printf("After Swapping\n");
		printf("X : %d\nY: %d\n",x,y);
}
