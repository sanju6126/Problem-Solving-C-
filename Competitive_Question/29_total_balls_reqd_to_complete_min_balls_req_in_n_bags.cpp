
#include<iostream>
using namespace std;

int main(){

    int N;
    cin>>N;     //number of bags

    int M;
    cin>>M;     //minimum number of balls u want to place in each bag

    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }

    int balls_reqd = 0;
    for(int i=0;i<N;i++){
        if(A[i] > M){
            continue;
        }
        if(A[i] < M){
            balls_reqd = balls_reqd + (M - A[i]);
        }
    }
    cout<< balls_reqd;


    return 0;
}