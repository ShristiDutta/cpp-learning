//Merge Sort is a divide and conquers algorithm, it divides the given array into equal parts and then merges the 2 sorted parts. 
//There are 2 main functions :
//merge(): This function is used to merge the 2 halves of the array. It assumes that both parts of the array are sorted and merges both of them.
//mergeSort(): This function divides the array into 2 parts. low to mid and mid+1 to high where,
 //low = leftmost index of the array
 //high = rightmost index of the array
 //mid = Middle index of the array 
 #include<bits/stdc++.h>
 using namespace std;
void merge(vector<int> &arr,int low,int mid,int high){
    vector<int> temp;  //temporary array
    int left =low; //starting index of left half of array
    int right =mid+1; //starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while (left<=mid && right <=high) {
        if (arr[left] <=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    //if elements on the left half are still left 
    while(left <=mid) {
        temp.push_back(arr[left]);
        left++;
    }
    //  if elements on the right half are still left //

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }
    // transfering all elements from temporary to arr //

    for (int i=low;i<=high;i++) {
        arr[i]=temp[i-low];
    }
}
void mergesort(vector<int> &arr,int low,int high) {
    if(low>=high) return;
    int mid =(low+high)/2;
    mergesort(arr,low,mid); //left half
    mergesort(arr,mid+1,high); //right half
    merge(arr,low,mid,high); //merging sorted halves
}
int main() {
    vector<int> arr = {9,4,7,6,3,1,5};
    int n=7;
    cout << "before sorting array: " << endl;
    for (int i=0;i<n;i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
    mergesort(arr, 0, n - 1);
    cout <<"after sorting array: " << endl;
    for (int i=0; i<n; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl;
    return 0;
}





