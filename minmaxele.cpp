#include<iostream>
using namespace std;

int min(int arr[], int size) {

int min = INT_MAX;
for(int i = 0;i < size;i++) {

    if(arr[i] < min) {
        min = arr[i];
    }

}
return min;
}

int max(int arr[], int size) {

int max = INT_MIN;
for(int i = 0;i < size;i++) {

    if(arr[i] > max) {
        max = arr[i];
    }

}
return max;
}

int main() {

int arr[10000],size;
cin>>size;
cout<<"Enter the elements:"<<endl;
for(int i = 0;i < size;i++) {

    cin>>arr[i];

}

int a = min(arr,size);
int b = max(arr,size);

cout<<"Max :"<<b<<" Min :"<<a<<endl;


return 0;

}