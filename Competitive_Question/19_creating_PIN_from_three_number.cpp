 #include<iostream>
 #include<climits>
 using namespace std;
 int main(){

 
 int num1,num2,num3;

    cout<<"Enter 3 3 digit number: ";
    cin>>num1>>num2>>num3;

    int a[9]={0};int i=0;
    while(num1 != 0){
        int rem = num1%10;
        a[i] = rem;
        num1 = num1/10;
        i++;
    }   
     while(num2 != 0){
        int rem = num2%10;
        a[i] = rem;
        num2 = num2/10;
        i++;
    }   
     while(num3 != 0){
        int rem = num3%10;
        a[i] = rem;
        num3 = num3/10;
        i++;
    }   

    int num = INT_MIN;
    for(int i=0;i<9;i++){
        num = max(num,a[i]);
    }
    
    int ones = INT_MAX;
    for(int i=0;i<9;i=i+3){
        ones = min(ones,a[i]);
    }
    int tens = INT_MAX;
    for(int i=1;i<9;i=i+3){
        tens = min(tens,a[i]);
    }
    int hund = INT_MAX;
    for(int i=2;i<9;i=i+3){
        hund = min(hund,a[i]);
    }

    cout<<num*1000+hund*100+tens*10+ones;

    return 0;
 }

    
