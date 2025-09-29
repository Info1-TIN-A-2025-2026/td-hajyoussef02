#include <stdio.h>

int main(int argc, const char *argv[])
{
	int s,h,m,s1;
	printf("Number_OF_seconds:  ");
	scanf("%d", &s);
	if (s < 0){
				printf("error");}
	else if (s > 86400){
				printf("overflow");}
	else{
		h = s / 3600;
		m = (s % 3600) / 60;
		s1 = s % 60;
		printf("h: %0.2u min: %.2u s: %.2u ", h, m, s1);
	}

	return 0;
}