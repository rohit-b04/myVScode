#include<iostream>
#include<vector>
using namespace std;
void printArray(int arr[], int size) {

for(int i = 0;i < size;i++) {
    cout<<arr[i]<<" ";
}
cout << endl;
}
/*void inArray(vector<int> &arr) {


for(int i = 0;i < arr.size();i++) {

    cin>>arr[i];

} 
}*/

int main() {

    int arr[100] = {7, 4, 2, 9, 0};
    int size = 5;
    int i = 1, j = 0;
    while(i < size) {
        int temp = arr[i];
        j = i - 1;
        while(j >= 0) {
            if(arr[j] >= temp) {
                arr[j + 1] = arr[j];
            }
            j--;
        }
        arr[j + 1] = temp;
        i++;
    }
    printArray(arr, size);
    return 0;
}