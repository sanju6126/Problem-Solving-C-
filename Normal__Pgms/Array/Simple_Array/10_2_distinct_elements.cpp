
//pgm to find the ALL DIFFERENT ELEMENTS that are present in the array


//A Simple Solution is to use two nested loops. The outer loop picks an element one by one starting from the leftmost element. 
//The inner loop checks if the element is present on left side of it. If present, then ignores the element, else prints the element.
// Following is the implementation of the simple algorithm. 



// C++ program to print all distinct elements in a given array
#include <bits/stdc++.h>
using namespace std;

void printDistinct(int arr[], int n)
{
	// Pick all elements one by one
	for (int i=0; i<n; i++)
	{
		// Check if the picked element is already printed
		int j;
		for (j=0; j<i; j++)
		if (arr[i] == arr[j])
			break;

		// If not printed earlier, then print it
		if (i == j)
		cout << arr[i] << " ";
	}
}

// Driver program to test above function
int main()
{
	int arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	printDistinct(arr, n);
	return 0;
}





//***********************************************************************

// Time Complexity of above solution is O(n2). We can Use Sorting to solve the problem in O(nLogn) time.
// The idea is simple, first sort the array so that all occurrences of every element become consecutive.
// Once the occurrences become consecutive, we can traverse the sorted array and print distinct elements in O(n) time. 
// Following is the implementation of the idea. 


// // C++ program to print all distinct elements in a given array
// #include <bits/stdc++.h>
// using namespace std;

// void printDistinct(int arr[], int n)
// {
// 	// First sort the array so that all occurrences become consecutive
// 	sort(arr, arr + n);

// 	// Traverse the sorted array
// 	for (int i=0; i<n; i++)
// 	{
// 	// Move the index ahead while there are duplicates
// 	while (i < n-1 && arr[i] == arr[i+1])
// 		i++;

// 	// print last occurrence of the current element
// 	cout << arr[i] << " ";
// 	}
// }

// // Driver program to test above function
// int main()
// {
// 	int arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10};
// 	int n = sizeof(arr)/sizeof(arr[0]);
// 	printDistinct(arr, n);
// 	return 0;
// }






// //****************************************************************


// // We can Use Hashing to solve this in O(n) time on average. 
// // The idea is to traverse the given array from left to right and keep track of visited elements in a hash table. 
// // Following is the implementation of the idea.


// /* CPP program to print all distinct elements
// of a given array */
// #include<bits/stdc++.h>
// using namespace std;

// // This function prints all distinct elements
// void printDistinct(int arr[],int n)
// {
// 	// Creates an empty hashset
// 	unordered_set<int> s;

// 	// Traverse the input array
// 	for (int i=0; i<n; i++)
// 	{
// 		// If not present, then put it in
// 		// hashtable and print it
// 		if (s.find(arr[i])==s.end())                 //if(!s.contains(arr[i])){}        //in java code
// 		{
// 			s.insert(arr[i]);
// 			cout << arr[i] << " ";
// 		}
// 	}
// }

// // Driver method to test above method
// int main ()
// {
// 	int arr[] = {10, 5, 3, 4, 3, 5, 6};
// 	int n=7;
// 	printDistinct(arr,n);
// 	return 0;
// }





// //***********************************************************


// // Another Approach:            //ni smjh aaaya
// // 1. Put all input integers to hashmap’s key 
// // 2. Print keySet outside the loop 


// // C++ approach
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// int ar[] = { 10, 5, 3, 4, 3, 5, 6 };
// map<int ,int> hm;
// for (int i = 0; i < sizeof(ar)/sizeof(ar[0]); i++) {
// 	hm.insert({ar[i], i});
// }
// cout <<"[";
// for (auto const &pair: hm) {
// 	cout << pair.first << ", ";
// }
// cout <<"]";
// }

// // This code is contributed by Shubham Singh



//*********************************************************
//*********************************************************
//*********************************************************



//unordered set////////count return a boolean value whether the number inside the paranthesis is present inside the set or not

#include<iostream>
using namespace std;

void print_distinct(int a[],int n){

	unordered_set<int> s;
	
	for(int i=0;i<n;i++){

		if(! s.count(a[i])){
			s.insert(a[i]);

			cout<<a[i];
		}
	}


}
	

int main(){
	int n = 7;
	int a[] = {10, 5, 3, 4, 3, 5, 6};

	print_distinct(a,n);

	return 0;
}