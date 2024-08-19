#include<iostream>
using namespace std;

int  firstOccurance (int arr[], int size, int k) {

    int f = -1;
    int s = 0, e = size - 1;
    int mid = s + (e - s)/2;
    
    while(s <= e) {

        if(arr[mid] == k) {
            f = mid;
            e = mid - 1;
        }
        else if(arr[mid] < k) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e - s)/2;

    }

return f;
}

int pivot(int arr[], int size) {

int s = 0,e = size - 1;
int mid = s + (e - s)/2;

while(s < e) {
    
    if(arr[mid] < arr[mid - 1]) {
        e = mid;
    }
    else {
        s = mid + 1;
    }
    mid = s + (e - s)/2;
}
return e;

}

int peak(int arr[], int size) {

  
    int s = 0, e = size - 1;
    int mid = s + (e - s)/2;
    while(s < e) {

        if(arr[mid] < arr[mid + 1]) {
            s = mid + 1;
        }
        else {
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    return s;

}

void inArray(int arr[], int size ) {

for(int i = 0;i < size;i++) {

    cin>>arr[i];

}

}

int main() {

int arr[5000], size;
cin>>size;
inArray(arr, size);
//int k;
//cin>>k;
//int fo = firstOccurance(arr, size, k);
//cout<<"First occurance of element is :"<<k<<endl;
int p = peak(arr, size);
cout<<"Peak index :"<<p<<endl;
int pivo = pivot(arr, size);
cout << "Pivot index is :" << pivo << endl;
return 0;

}