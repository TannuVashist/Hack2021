#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node * next;
};
int getMax(int a[], int n){
    int maxe = a[0];
    for(int i=0;i<n;i++){
        maxe = max(a[i],maxe);
    }
    return maxe;
}
void countSort(int arr[], int n, int exp) 
{ 
    int output[n]; // output array 
    int i, count[10] = { 0 }; 
    // Store count of occurrences in count[] 
    for (i = 0; i < n; i++) 
        count[(arr[i] / exp) % 10]++; 
    // Change count[i] so that count[i] now contains actual 
    //  position of this digit in output[] 
    for (i = 1; i < 10; i++) 
        count[i] += count[i - 1]; 
    // Build the output array 
    //Maintaining FIFO manner
    for (i = n - 1; i >= 0; i--) { 
        output[count[(arr[i] / exp) % 10] - 1] = arr[i]; 
        count[(arr[i] / exp) % 10]--; 
    } 
    
    // Copy the output array to arr[], so that arr[] now 
    // contains sorted numbers according to current digit 
    for (i = 0; i < n; i++) 
        arr[i] = output[i]; 
} 

void radixSort(int a[], int n){
    int maxe = getMax(a,n);
    for(int i=1;maxe>1;maxe/=10,i*=10){
        countSort(a,n,i);
    }
}
 
int main(){
    int a[] = {12,34,21,55,23,66,445,3,2};
    int n = sizeof(a)/sizeof(a[0]);
    radixSort(a,n);
    for(int i =0;i<n;i++) cout<<a[i]<<"\t";
    return 0;
}