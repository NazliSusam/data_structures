#include<stdio.h>

void insertion(int a[], int n);

int main(void) {

	int a[] = { 2,7,3,14,8,0,22 };
	int n = 7;

	printf("original array:\n");
	for (int i = 0;i < n;i++) {
		printf("%d\n", a[i]);
	}

	printf("\n");

	insertion(a, n);

	printf("sorted array:\n");
	for (int i = 0;i < n;i++) {
		printf("%d\n", a[i]);
	}

	return 0;

}

void insertion(int a[], int n) {
	int i, key, k;
	for (i = 1;i < n;i++) {
		key = a[i];
		for (k = i - 1;(k >= 0) && (key < a[k]);k--){
			a[k + 1] = a[k];
    } 
		a[k + 1] = key;
	}
}
