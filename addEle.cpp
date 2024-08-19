#include<iostream>
using namespace std;

void inArray(int arr[], int size ) {

for(int i = 0;i < size;i++) {

    cin>>arr[i];

} 
}
int sumEle(int arr[] ,int size) {

int sum = 0;
for(int i = 0;i < size;i++) {

    sum = sum + arr[i];

}
return sum;
}

void printArray(int arr[], int size) {

for(int i = 0;i < size;i++) {
    cout<<arr[i]<<" ";
}
cout << endl;
}

int main() {

int arr[100],size;
cin>>size;
cout<<"Array ele:"<<endl;
inArray(arr,size);
int add = sumEle(arr,size);
cout<<add<<endl;
return 0;
}