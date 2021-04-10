#include<stdio.h>
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
}
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
int partition (int arr[], int low, int high)  
{
    int q1, q2, j, x;
    x = arr[high - 1];
    q1 = low;
    q2 = high - 1;
    j = low;
    while(j <= q2){
        if(arr[j] < x){
            swap(&arr[j], &arr[q1]);
            q1++;
            j++;
        }
        else if(arr[j] > x){
            swap(&arr[j], &arr[q2]);
            q2--;
        }
        else{
            j++;
        }
    }
    return q1, q2;
}

int main(){
    int A[6]={2, 1, 2, 3, 4, 2};
    int n = sizeof(A)/sizeof(A[0]);
    int q1, q2;
    q1, q2=partition(A, 0, n-1);
    printf("%d\n%d\n", q1, q2);
    printArray(A, n);
    return 0;
}
