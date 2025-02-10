#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main() {
	int m, d, y;
	scanf("%d/%d/%d", &m, &d, &y);
	
	printf("%04d%02d%02d", y, m, d);
}
