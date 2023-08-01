#include<stdio.h>

void rotate(int arr[], int n, int k) {
    if (k == 0) {
        return;
    }


    int temp = arr[n-1];
int i;
    for (i = n-1; i>0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;


    rotate(arr, n, k-1);
}


int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 1;

    rotate(arr, n, k);
    int j;
    for ( j= 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}
