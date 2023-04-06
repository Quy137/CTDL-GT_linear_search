// nguon tham khao: https://freetuts.net/thuat-toan-tim-kiem-tuyen-tinh-2630.html, https://codelearn.io/learning/data-structure-and-algorithms/819552
// cai dat
#include<stdio.h>
int search(int arr[], int n, int x){
	for (int i = 0; i < n; i++){
		if (arr[i] == x){
			return i;
		}
	}
	return -1;
}
int main () {
    int arr[] = {8, 6 , 5 , 3 ,-9 , 4};
    int x = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    int kq = search(arr, n, x);
    if (kq == -1) {
		printf("\nKhong co trong mang :");
	} else {
		printf("\nVi tri: %d ", kq);
	}
}
