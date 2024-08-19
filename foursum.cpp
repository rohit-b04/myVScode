#include<iostream>
using namespace std;

int binSearch(int arr[], int size, int dif) {

    int s = 0;
    int e = size - 1;
    int mid = s + (e - s)/2;
    while(e >= s) {
        if(arr[mid] == dif) {
            return 1;
        }
        else if(arr[mid] > dif) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    } 
    return 0;

}

void printArray(int arr[], int size) {

for(int i = 0;i < size;i++) {
    cout<<arr[i]<<" ";
}
cout << endl;
}

void inArray(int arr[], int size ) {

for(int i = 0;i < size;i++) {

    cin>>arr[i];

} 

}

int main() {

    int size, arr[1000];
    cout<<"Enter size :"<<endl;
    cin>>size;
    inArray(arr, size);
    cout<<"Entered array is :"<<endl;
    printArray(arr, size);
    cout<<"Enter target ";
    int target;
    cin>>target;
    
    int i = 0, j = 0, k = 0, check = 0, sum = 0;
    while(i < size) {
        j = i + 1;
        k = size - i;
        
        while(j < k) {
            
            while(k > j) {
            sum = arr[i];
            sum = sum + arr[j];
            sum = sum + arr[k];
           
            int dif = target - sum;
            check = binSearch(arr, size, dif);
            if(check == 1) {
                cout<<"Yes"<<endl;
                return 0;
            }
            k--;
            }
            k = size - i;
            j++;
        }
        i++;
    }
    cout<<"No"<<endl;

    return 0;
}