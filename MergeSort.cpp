#include <bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void merge(int a[], int l,int m,int h){
    int n1 = m-l+1;
    int n2 = h-m;
    int i=0,j=0,k=l;
    int a1[n1],a2[n2];
    for(i=0;i<n1;i++) a1[i] = a[l+i];
    for(j=0;j<n2;j++) a2[j] = a[m+1+j];
    i=0;
    j=0;
    while(i<=n1-1&&j<=n2-1){
        if(a1[i]<=a2[j]){
            a[k] = a1[i];
            i++;
            k++;
        }else{
            a[k] = a2[j];
            j++;
            k++;
        }
    }
    if(i!=n1){
        for(;i<n1;i++){
            a[k]=a1[i];
            k++;
        }
    }
    if(j!=n2){
        for(;j<n2;j++){
            a[k]=a2[j];
            k++;
        }
    }

}
void mergeSort(int a[], int l , int h){
    if(l<h){
        int m = (h+l)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,h);
        merge(a,l,m,h);
    }
}
int main(){   
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    
    int *a=new int[n];
    
    for(int i=0;i<n;i++)
          cin>>a[i];
    
    mergeSort(a,0,n-1);
    
    cout<<"Sorted array is : ";
    for(int i =0;i<n;i++) {
        cout<<a[i]<<"\t";
    }
    return 0;
}
