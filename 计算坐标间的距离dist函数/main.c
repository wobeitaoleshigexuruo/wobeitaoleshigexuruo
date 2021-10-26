#include<stdio.h>
#include<math.h>

float dist(float x1,float y1,float x2,float y2){
	return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}
int main(){

    float x1,y1,x2,y2;

    printf("Input(x1,y1): ");
    scanf("%f %f",&x1,&y1);
    printf("\nInput(x2,y2): ");
	scanf("%f %f",&x2,&y2);
    printf("\ndistance=%.2f",dist(x1,y1,x2,y2));

}
