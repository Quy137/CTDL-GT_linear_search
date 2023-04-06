// nguon tham khao: https://freetuts.net/thuat-toan-tim-kiem-tuyen-tinh-2630.html, https://codelearn.io/learning/data-structure-and-algorithms/819552
// vi du

int search(int a[], int n, int x){
	for (int i = 0; i < n; i++){
		if (a[i] == x){
			return i;
		}
	}
	return -1;
}

int main () {
    int arr[] = {8, 6 , 5 , 3 ,-9 , 4};
    int x = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    int kq = linearSearch(arr, n, x);
    if (kq == -1) {
		printf("Khong tim thay :" , x , " trong mang");
	} else {
		printf("Vi tri : " , kq );
	}
}
