/*insertion sort: O(n^2) Time and O(1) Space
--------------------------------------------
 algorithm that builds the sorted array one element at a time.
 We start with the second element, assuming the first is already sorted. 
 If the second element is smaller, we shift the first element and insert the second in the correct position.
 Then we move to the third element and place it correctly among the first two. This process continues until the entire array is sorted.
 */

#include<iostream>
using namespace std;
void insertion_sort(int arr[], int n){
    for(int i=1; i<n; i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key ){
            arr[j+1]=arr[j]; //shifting
            j--;
        }
       /* When the while loop stops, one of two things has happened:
       j < 0 → we reached the beginning of the array
       arr[j] <= key → we found an element smaller than (or equal to) key
       In both cases, the correct position for key is j + 1.*/
        arr[j+1]=key;  
    }
}
int main(){
    int arr[]={12, 11, 13, 5, 6};
    insertion_sort(arr,5);
    for (int i = 0; i < 5; ++i)
        cout << arr[i] << " ";
    
    return 0;
}
*/
