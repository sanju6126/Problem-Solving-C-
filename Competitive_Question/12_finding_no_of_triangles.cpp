#include<iostream>                                      //this method is for finding the right angled triangle
// #include<climits>                                    //to check for normal triangles one method is to sort the array first and in that check for a+b>c,b+c>a,a+c>b...if all condition satisfy then count++
using namespace std;                                    //and another method is using this method....

int main(){

    int count=0;
    int mx,cx;
    int i,j,k;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int a[n];
    cout<<"Enter elements into the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }             
                                                    //  1 2 3 4 5 6
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                cx = max(a[i],a[j]);
                mx = max(cx,a[k]);
                if(mx == a[i]){
                    if(a[i]*a[i] == a[j]*a[j] + a[k]*a[k]){
                        count++;
                    }
                }
                if(mx == a[j]){
                    if(a[j]*a[j] == a[i]*a[i] + a[k]*a[k]){
                        count++;
                    }
                }
                if(mx == a[k]){
                    if(a[k]*a[k] == a[i]*a[i] + a[j]*a[j]){
                        count++;
                    }
                }
                else{
                    continue;
                }
                
            }
        }
    }

    cout<<"no. of triangles thta can be formed with given set of array is: "<<count;

    return 0;

}