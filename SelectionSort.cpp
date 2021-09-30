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
    for(int i=0;i<n;i++){
        int s = i;
        for(int j=i;j<n;j++){
            if(a[s]>a[j]){
                s = j;
            }
        }
        swap(a[s],a[i]);
    }

    for(int i =0;i<n;i++) cout<<a[i]<<"\t";
    return 0;
}


