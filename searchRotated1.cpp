#include<iostream>
using namespace std;

int binSearch(int *arr, int n, int target) {
    int low = 0, high = n - 1;
    int mid = 0;
    while(low <= high) {
        mid = low + (high - low)/2;
        if(arr[mid] == target) return mid;
        if(arr[mid] > high) {
            if(arr[low] <= target && arr[mid] >= target) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        else {
            if(arr[mid] <= target && arr[high] >= target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main() {


    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the array elements: " << endl;
    int *arr = new int[n];
    for(int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the key to be searched: ";
    cin >> target;
    int ans = binSearch(arr, n, target);
    cout << target << " is present at: " << ans << endl;
    delete arr;
    return 0;
}






/* 
int getPivot(int* arr, int n) {
    long long int s = 0, e = n - 1;
    long long int mid = s + (e - s)/2;
    if(arr[e] < arr[e-1]) {
        return e;
    }
   
   
    while(s < e) {
        
        if(arr[mid] >= arr[0]) {
            s = mid + 1;
        }
        else {//arr[mid]>=arr[mid-1]
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    return e;
}

int binSearch(int* arr, int n, int key, int pivot) {

    long long int s = 0, e = pivot-1;
    long long int mid = s + (e-s)/2;
    while(s <= e) {
        if(arr[mid] == key) {
            return mid;
        }
        else if(arr[mid] < key) {
            s = mid+1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    
    s = pivot, e = n-1;
    mid = s + (e-s)/2;
    while(s <= e) {
        if(arr[mid] == key) {
            return mid;
        }
        else if(arr[mid] < key) {
            s = mid+1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return -1;


} 
void inArray(int arr[], int size ) {

for(int i = 0;i < size;i++) {

    cin>>arr[i];

}

}
int main() {
    // Write your code here.
    int arr[1000], size;
    int key;
    cin>>size;
    inArray(arr, size);
   
    int pivot = getPivot(arr, size);
    cout<<"Pivot is:"<<pivot<<endl;
    cin>>key;
    cout<<"The key is present at index :"<<binSearch(arr,size,key,pivot)<<endl;
} */