#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	float height, base, area;
	printf("Calculate the triangle's area\n");
	printf("Input triangle's Height : ");
	scanf("%f", &height);
	printf("Input triangle's Base : ");
	scanf("%f", &base);
	if (height <= 0 || base <= 0) {
		printf("ERROR");
	}
	else {
		area = height * base / 2;
		printf("Triangle's area is %.2f unit", area);
	}
	return 0;
}