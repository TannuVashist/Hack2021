#include <iostream>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a[] = {5,6,4,8,3,7};
    int n = sizeof(a)/sizeof(a[0]);
    int maxe = a[0];
    for(int i =0;i<n;i++){
        maxe = max(maxe, a[i]);
    }
    int h[maxe+1] = {0};
    for(int j =0;j<n;j++){
        h[a[j]]++;
    }
    for(int k=0;k<=maxe;k++){
        while(h[k]>0){
            cout<<k<<"\t";
            h[k]--;
        }
    }
    return 0;
}