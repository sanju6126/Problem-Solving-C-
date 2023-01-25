
//finding the REPEATING ELEMENTs in the array

/* CPP program to print all REPEATING elements
of a given array */
#include<bits/stdc++.h>
using namespace std;

// This function prints all REPEATING elements
void printDistinct(int arr[],int n)
{
	// Creates an empty hashset
	unordered_set<int> s;

	// Traverse the input array
	for (int i=0; i<n; i++)
	{
		// If not present, then put it in
		// hashtable . If present cout it.
      
      		//not present
		if (s.find(arr[i])==s.end())
		{	
			s.insert(arr[i]);//not present hai to insert kiya
			
		}
      else{ //present hai
        	cout<<arr[i]<<" ";
      }
	}
}


int main ()
{
	int arr[] = {10, 5, 3, 4, 3, 5, 6};
	int n=7;
	printDistinct(arr,n);
	return 0;
}






// ***********************************************************

// #include<iostream>
// #include<bits/stdc++.h>
// #include<string>
// using namespace std;
// int main(){
    
//     string s;
//     cout<<"Enter the string: ";
//     // cin>>s;
//     getline(cin,s);
//     char s1[] = "kgf";
//     char t[] = "sanju";
//     char *out = strstr(s1,t);
//     cout<<out;

   

//     int a[150] = {-1};
//     int b[150] = {0};
//     int k=0;
//     for(int i=0;i<s.length();i++){
//         if(a[int(s[i])] == -1){
//             a[int(s[i])] = s[i];
//         }
//         else{
//             b[k] = s[i];
//             k++;
//         }
//     }

//     for(int i = 0;i<150;i++){
//         if(b[i]!=0){
//             cout<<b[i];
//         }
        
//     }


// return 0;
// }




