
#include <bits/stdc++.h>

using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y=temp;
}
void bubblesort(int arr[], int n){
    int i,j;
    for(i =0; i<n; i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j+1],&arr[j]);
            }
        }
    }
}
void display(int arr[], int n){
    for(int i =0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    
    int arr[5] = {2, 5, 1,8,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    display(arr,n);
    return 0;
}
