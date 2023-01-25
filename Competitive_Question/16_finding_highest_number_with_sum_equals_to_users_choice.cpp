// C++ program to generate largest n digit number possible
// with sum equal to user's input,sum.
#include <bits/stdc++.h>
using namespace std;

int findMaxNum(int a[], int n,int sum)
{
	// sort the given array in
	// descending order
	sort(a, a+n, greater<int>());      
	
	int num;

    for(int main=0;main<n-2;main++){
        
        num = a[main];           //placing the pointers to its positions
        int left = main+1;
        int right = n-1;
        
        bool ans;

        while(left < right){
            if((a[main]+a[left]+a[right]) == sum){
                num = num*100+a[left]*10+a[right];
                ans=true;
                break;

            }

            else if((a[main]+a[left]+a[right]) > sum){
                left++;
            }

            else{
                right++;
            }

            
        }

        if(ans==true){
            break;
        }

        
    }
	
	return num;
}

// 7 6 5 4 3 2 1 0  430

// Driver code
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 0};

    int digit;
    cout<<"Enter the no. of digits u want  to have"<<endl;
    cin>>digit;

    int sum;
    cout<<"Enter the sum of those digits u want to have"<<endl;
    cin>>sum;
	
	int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<sizeof(arr)<<endl;
    // cout<<arr[0]<<" "<<sizeof(arr[0])<<endl;
	
	cout<<findMaxNum(arr,n,sum);
	
	return 0;
}









