#include<stdio.h>
# define MAX 100 
void swap (int *a , int *b) {
    int temp = *a ;
    *a = *b ;
    *b = temp ;
}
void printArray(int arr[] , int size) {
    printf("The sorted array is \n") ;
    for (int i = 0; i < size ; i++) 
        printf("%d  ", arr[i]) ;
    printf("\n");
}
void SelectionSort (int arr[] , int size) {
    int i , j , min ;
    for ( i = 0 ; i < size - 1 ; i++ ) {
        min = i ;
        for ( j = i + 1 ; j < size ; j++ ) 
            if (arr[j] < arr[min])
                min = j ;
        if(min != i)
            swap(&arr[i] , &arr[min]) ;
    }
}
int main()
{
int size ;
int arr[MAX] ;
printf("Enter the size of the array \n") ;
scanf("%d" , &size);
for(int i = 0 ; i < size ; i++) {
    printf("Enter the element for the %d index \n" , i+1);
    scanf("%d" , &arr[i]) ;
}
SelectionSort(arr , size);
printArray(arr , size);
return 0;
}