// Recursion ka exit condition hoga.....when starting index(s) > (e)ending index
// 1 pehle pivot element nikalo....
// 2 uska asli position nikalo....jo ki aayga...kitna number usse chhota hai uska count rakhne se(count) + starting index
// 3 (pivot element ka asli position nikal gaya)....ab 2pointer lo jo starting index and last index ko point karega 
// ab uske left side me , sab element usse chhote hone chahiye, and , uske right side sab usse bade hona chahiy 
// agar ni hai to compare kar ke position swap kar do.......agar hai to bas aage badh jao...


#include<iostream>
using namespace std;


int partition(int b[],int s,int e){

    int pivot = b[s];         //assuming initial pivot element


    int count = 0;
    for(int i=s+1;i<=e;i++){
        if(pivot >= b[i]){
            count++;
        }
    }


    //placing pivot element at right position
    int pivotIndex = s+count;
    swap(b[pivotIndex],b[s]);      //pivot element placed at right position


    // now saara left wala pivot se chota and right wala pivot se bada hona chahiye
    int i = s,j = e;
    while(i < pivotIndex && j > pivotIndex){

        while(b[i] <= pivot){
            i++;                                            //6,2,5,4,8,7,1,3    pI=3
        }

        while(b[j] > pivot){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){      //kahi i++ ya j++ hote hote condition false na ho jaye...isiliye check karna pad rha hai
            swap(b[i++],b[j--]);
        }
        
    }



    return pivotIndex;

}


void QuickSort(int b[],int s,int e){

    if(s >= e){
        return;
    }
    
    int p = partition(b,s,e);      ///isme pivot element ka index aa jayga.....tabhi to humlog ko p-1 and p+1 pata chalega

    // left part sorting
    QuickSort(b,s,p-1);

    //right part sorting
    QuickSort(b,p+1,e);

}



int main(){

    int a[] = {4,2,5,6,8,7,1,3};
    int n = 8;

    QuickSort(a,0,n-1);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}