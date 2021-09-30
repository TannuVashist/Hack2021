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
    for(int i=1;i<n;i++){
        int k= a[i];
        int j = i-1;
        while (j>=0&&a[j]>k)
        {
            a[j+1] = a[j];
            j--;
        }
        
        a[j+1] = k;

    }

    for(int i =0;i<n;i++) cout<<a[i]<<"\t";
    return 0;
}