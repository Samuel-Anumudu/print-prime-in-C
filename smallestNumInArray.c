#include <stdio.h>
int min(int arr[], int sizeOfArr);
int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    int i;
    int smallest = 0;

    for ( i = 0; i < size; i++ ) {
        scanf("%d", &arr[i]);
    }
    smallest = min(arr, size);
    printf("smallest number is %d\n", smallest);

    return 0;

}

int min(int arr[], int sizeOfArr) {

    int minimum = 0;
    int i;
    for( i = 0; i < sizeOfArr; i++ ){
        if(arr[i] < arr[minimum]){
            minimum = i;
        }
    }
    minimum = arr[minimum];
    return minimum;
}