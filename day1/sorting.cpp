#include <iostream>
using namespace std;
//bubble sort
void bubbleSort(int arr[] , int n){
    for(int i =0;i<n-1;i++){
        for(int j =0 ; j<n-i-1;j++){
            if(arr[j] > arr[j-1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}
// time complexity O(n^2)

// selection sort
void selectionSort(int arr[] , int n){
       for(int i =0;i<n-1;i++){
        int smallestIdx = i;
        for(int j =i+1;j<n;j++){
            if(arr[j] < arr[smallestIdx]){
                smallestIdx =j;
            }
        }
        swap(arr[i] , arr[smallestIdx]);
       }
}
// time complexity O(n^2)

// instertion sort 
void insertionSort(int arr[] , int n){
    for(int i =0; i<n;i++){
        int curr  = arr[1];
        int prev = i-1;
        while (prev >=0 && arr[prev] > curr){
           arr[prev+1] = arr[prev];
           prev--;
        }
        arr[prev+1] = arr[prev];
    }

}
// time complexity O(n^2)
