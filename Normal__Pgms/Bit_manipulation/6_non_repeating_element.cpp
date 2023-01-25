#include<iostream>
using namespace std;

void NonRepeatingElement(int a[],int n){
    int b[10]={0};
    for(int i=0;i<n;i++){
        
            b[a[i]]++;
        
    }

    for(int i=0;i<10;i++){
        if(b[i]==1){
            cout<<i<<" ";
        }
    }
}


int main(){
    int a[] = {2,4,6,3,4,6,7};
    int n= sizeof(a)/sizeof(a[0]);

    NonRepeatingElement(a,n);

return 0;
}







//using HASHING


// Efficient CPP program to find non-
// repeating element.
#include <bits/stdc++.h>
using namespace std;

void NonRepeating(int arr[], int n)
{
	// Insert all array elements in hash
	// table
	unordered_map<int, int> mp;
	for (int i = 0; i < n; i++)
		mp[arr[i]]++;

	// Traverse array again and return
	// element with count 1.
	for (int i = 0; i < n; i++)
		if (mp[arr[i]] == 1)
			cout<< arr[i]<<" ";
	
}

// Driver code
int main()
{
	int arr[] = { 9, 4, 9, 6, 7, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	NonRepeating(arr, n);
	return 0;
}
