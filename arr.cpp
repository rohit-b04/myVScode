#include<iostream>
using namespace std;
/*void sort012(int arr[], int size)
{
    int i = 0,j = size - 1;
    
   while(i < j) {

      while(arr[i] == 0 && i < j) {
         i++;
      }
      while(arr[j] == 2 && i < j) {
         j--;
      }
      while(arr[i] == 1 && arr[j] == 1 && i < j) {
         if(arr[j] < arr[j - 1]) {
            swap(arr[j], arr[j - 1]);
            j--;
         }
         else if(arr[j] > arr[j - 1]) {
            swap(arr[i],arr[j - 1]);
            i++;
         }
         else {
            i++;
         }
      }
      while(arr[i] == 2 && i < j) {
         swap(arr[j] ,arr[i]);
         j--;
      }
      while(arr[j] == 0 && i < j) {
         swap(arr[j], arr[i]);
         i++;
      }

   }
  
}*/
/*
int findDuplicate(int arr[], int size) {
    int ans = 0;
    for(int i = 0;i < size;i++) {

        ans = ans ^ arr[i];

    }
    cout<<"ans"<<ans<<endl;
    for(int i = 0;i < size - 1;i++) {

        ans = ans ^ i;

    }
    cout<<"ans :"<<ans<<endl;

return ans;
}*/
void reverseArray(int arr[], int m, int size) {
   
	int i = m + 1;
	int end;
    end = size - 1;
	
    while (i <= end) {
        swap(arr[end], arr[i]);
        i++;
        end--;
    }
    
}
void tripletSum(int arr[], int size) {

    int s;
    cin>>s;
    cout<<" entered!"<<endl;   
    for(int i = 0;i < size;i++) {
        for(int j = i + 1;j < size - i;j++) {
            for(int k = j + 1;k < size - j;k++) {
                int sum = arr[i]+arr[j]+arr[k];
                if(sum == s) {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" ";
                }
            }
        }
        cout<<endl; 
    }

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
    int arr[100],size;
    cin>>size;
    int m,s;
//  cin>>s;
//  cin>>m;
    inArray(arr, size);
    printArray(arr, size);
   
    tripletSum(arr,size);
//  sort012(arr,size);
//  reverseArray(arr , m, size);
//  printArray(arr, size);
//  int d = findDuplicate(arr,size);
// cout<<" Duplicate :"<<d<<endl;
return 0;
}