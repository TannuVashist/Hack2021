#include <iostream>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int a[], int l,int h){
    int p= a[l];
    int i=l,j=h;
    do{
        while(a[i]<=p){i++;};
        while(a[j]>=p){j--;};
        if(i<j) swap(&a[i],&a[j]);
    }while(i<j);
    swap(&a[j],&a[l]);
    return j;
}
void quickSort(int a[],int l,int h){
    if(l<h){
        int p = partition(a,l,h);
        quickSort(a,l,p-1);
        quickSort(a,p+1,h);
    }
    return;
}
int main(){
    int a[] = {5,6,4,8,3,7};
    int n = sizeof(a)/sizeof(a[0]);
    // cout<<<<endl;
    quickSort(a,0,n-1);
    for(int i =0;i<n;i++) cout<<a[i]<<"\t";
    return 0;
}