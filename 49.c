#include <stdio.h>

int main() {
	float height = 180.7;
	float weight = 84.5;
	float bmi = 0;
	height = height * 0.01;
	bmi = weight / (height * height);
	printf("당신의 BMI : %.2f\n", bmi);
		return 0;
}
