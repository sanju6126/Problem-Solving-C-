#include<iostream>
using namespace std;

void bubbleSort(int a[],int size){
    if(size==0 || size==1){
        return;               //agar array ka size 0 ya 1 hoga to wo allready sorted hoga....isiliye waha se return ho jayga
    }

    for(int i=0;i<size;i++){
        if(a[i] > a[i+1]){
            swap(a[i],a[i+1]);
        }
    }

    bubbleSort(a,size-1);    //size-1 isiliye because har baar ek number sort ho ke apna position paka lega
}

int main(){

    int a[] = {4,3,1,5,2};
    int size = sizeof(a)/sizeof(a[0]);

    bubbleSort(a,size);

    return 0;
}