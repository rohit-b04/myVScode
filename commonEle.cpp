#include<iostream>
#include<vector>
using namespace std;
int binSearch(int c[], int k, int target) {
    int s = 0, e = k - 1;
    int mid = s + (e - s);
    while(s <= e) {
        if(c[mid] == target) {
            return c[mid];
        }
        else if(c[mid] > target) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return 0;
}
vector<int> common(int a[], int b[], int c[], int n, int m, int k) {

    int check = 0;
    vector<int> ans;
    int prev = INT_MIN;
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < m;j++) {
            if(a[i] == b[j]) {
                check = binSearch(c, k, b[j]);
            }
            if(check != 0 && prev != check) {
                prev = check;
                ans.push_back(check);
                check = 0;
            }
        }
    }
    return ans;

}
void inArray(int arr[], int size ) {

for(int i = 0;i < size;i++) {

    cin>>arr[i];

} 
}
int main() {

    int a[1000], b[1000], c[1000], n, m, k;
    cin>>n>>m>>k;
    cout<<"1st arr: ";
    inArray(a, n);
    cout<<"2nd arr: ";
    inArray(b, m);
    cout<<"3rd arr: ";
    inArray(c, k);
    vector<int> v = common(a, b, c, n, m, k);
    cout<<"Common elements are: "<<endl;
    for(int i = 0;i < v.size();i++) {
        cout<<v[i]<<" ";
    }

    return 0;
}