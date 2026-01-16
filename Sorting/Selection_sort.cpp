/*  selection_sort:
____________________
It is a comparison-based sorting algorithm that repeatedly selects the smallest (or largest) element from the unsorted part of the array 
and swaps it with the first unsorted element.
This process continues until the array is fully sorted.

---------------------------------------------------------------------------
We start by finding the smallest element and swap it with the first element,
Then we find the next smallest element among the remaining and swap it with the second element. 
This continues until all elements are placed in their correct positions.
*/

#include<iostream>
#include<vector>
using namespace std;
void selection_sort(vector<int>&arr, int n){
    for(int i=0; i<n-1; i++){
        int min_idx=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min_idx]){
            min_idx=j;
        }
    }
    swap(arr[i], arr[min_idx]);
}
}

int main(){
       vector<int> arr = {64, 25, 12, 22, 11};
    selection_sort(arr,5);

    for (int &val : arr) {
        cout << val << " ";
    }
    return 0;
}

