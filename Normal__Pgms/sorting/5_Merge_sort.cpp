#include<iostream>
using namespace std;

void merge(int *arr, int s, int e) {
    

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }



    //khud me ek problem hai ye ...2 array diya hua hoga usko sort karna hai ek me

    //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }   


    //maan ke chalo...ek taraf(index1) jo hai end tak ni aaya....and index2 ke taraf sara value display karwane wala array me dal gaya hai(original array me)..
    //..to us time jo index1 wala array hai uska sara bacha hua element ko daal do original array me jo ki display karwana hai.
    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    //upper wala reason ....usi tarah agar index2 ke sath hua to
    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;

}

void mergeSort(int *arr, int s, int e) {

    //base case
    if(s >= e) {
        return;
    }
    
    int mid = (s+e)/2;

    //left part sort karna h 
    
    cout<<"0"; mergeSort(arr, s, mid);
    
    //right part sort karna h 
    
    cout<<"1";
    mergeSort(arr, mid+1, e);

    //merge
    cout<<"2";merge(arr, s, e);

}

int main() {

    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    mergeSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}