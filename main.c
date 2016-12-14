#include<stdio.h>


int multiple (int a, int b){
		return a * b;
}

int plus(int a, int b) {
	return a + b;
}




int main () {
	int n , m;
	scanf("%d%d", &n, &m);
	printf("%d\n", plus(n, m));
	printf("%d", multiple(n, m));
	return 0;
}
