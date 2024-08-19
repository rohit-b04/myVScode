#include<iostream>
using namespace std;
int main() {

    int n;
    cout<<"Enter the value of n:";
    cin>>n;
   /* Box pattern: 
   for(int i = 0;i < n;i++) {

        for(int j = 0;j < n;j++) {
            cout<<"* ";
        }
        cout<<endl;

    }*/
    /*
    for(int i = 0;i < n;i++) {
        for(int j = i;j < n;j++) {
            cout<<"* ";
        }
        cout<<endl;
    }*/
    /*
    for(int i = 0;i < n;i++) {
        for(int j = 0;j <= i;j++) {
            cout<<"* ";
        }
        cout<<endl;
    }*/
    /*int i = 1;
    while(i <= n) {
        int j = 1;
        while(j <= i) {
            cout<<i<<" ";
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }*/
    /*
    int row = 1;
    while(row <= n) {
        int col = 1;
        
        while(col <= row) {
            
            cout<< row+col-1 <<" ";
            
            col = col + 1;

        }
        cout<<endl;
        row = row + 1;
    }

    cout<<endl;
    row = 1;
    while(row <= n) {
        int col = 1;
        int value = row;
        while(col <= row) {
            cout<<col + row - 1<<" ";
            value = value + 1;
            col = col+1;
        }
        cout<<endl;
        row = row + 1;
    } 
        */
    /*
    int row = 1;
    while(row <= n) {

        int col = 1;
        char ch = 'A';
        while (col <= row) {
        
            cout<< ch <<" ";
            ch = ch + 1;
            col = col + 1;
            
        }
        cout<< endl;
        row = row + 1;
        
    } */
    /*
    int row = 1;
    // char ch = 'a';
    while(row <= n) {
        int col = 1;
        char ascii = 96;
        char ch = ascii + row; 
        while(col <= row) {
            cout<<ch<<" ";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
        // ch = ch + 1;
    } */
    /*
    int row = 1;
    int p = n;
    while(row <= n) {
        int fc = 1;
        while(fc <= row) {

            cout<<"  ";
            fc = fc + 1;

        }

        int sc = n;
        int v = row;
        
        while(sc >= (n - (v-1)) && v <= n) {

            cout<<" "<<p;
            v = v + 1;
            
            sc = sc - 1;
          

        }
       
        cout<<endl;
        p = p - 1;
        row = row + 1;
        

    } */
    /*
    int row = 1;
    char ch = 'a';
    while(row <= n) {
        int col = 1;
       
        while(col <= n) {

            cout<<ch<<" ";
            ch = ch + 1;
            col = col + 1;

        }
        cout<<endl;
        row = row + 1;
    } */
    /*
    int row = 1;
    while(row <= n) {
        int col = 1;
        char ch = 'A' + row - 1;
        while(col <= n) {

            cout<<ch<<" ";
            ch = ch + 1;
            col = col + 1;

        }
        cout<<endl;
        row = row + 1;
    } */
    /*
    int row = 1;
    char ch = 'A';
    while(row <= n) {
        int col = 1;
        
        while(col <= row) {
            
            cout<<ch<<" ";
            ch = ch + 1;
            col = col + 1;

        }
        cout<<endl;
        row = row + 1;
    }*/
    /*
    int row = 1;
    while(row <= n) {

        int col = 1;
        char ch = 'A' + row - 1;
        while(col <= row ) {

            cout<<ch<<" ";
            ch = ch + 1;
            col = col + 1;

        }
        cout<<endl;
        row = row + 1;

    } */
    /*
    int row = 1;
    while(row <= n) {

        int col = 1;
        char ch = 'A' + n - row ;
        while(col <= row) {

            cout<<ch<<" " ;
            ch = ch + 1;
            col = col + 1;
            
        }
        cout<<endl;
        row = row + 1;

    } */
    /*
    int row = 1;
    while(row <= n) {

        char space;
        space = n - row;
        while(space) {
                
            cout<<"  ";
            space = space - 1;

        }
        int col = 1;
        while(col <= row) {

            cout<<"* ";
            col = col + 1;

        }
        cout<<endl;
        row = row + 1;
    } */
    /*
    int row = 1;
    while(row <= n) {
        int col = 1;
        while(col <= (n + 1 - row)) {

            cout<<"* ";
            col = col + 1;

        }
        cout<<endl;
        row = row + 1;

    } */
    /*
    int row = 1;
    while(row <= n) {
        
        int space = row - 1;
        while(space) {
            
            cout<<"  ";
            space = space - 1;

        }

        int col = 1;
        while(col <= (n + 1 - row)) {

            cout<<"* ";
            col = col + 1;

        } 

        cout<<endl;
        row = row + 1;

    } */
    /*
    int row = 1;
    while(row <= n) {

        int space = row - 1;
        while(space) {
            
            cout<<" ";
            space = space - 1;

        }
        int col = 1;
        while(col <= (n + 1 - row)) {
            
            cout<<row;
            col = col + 1;

        }
        cout<<endl;
        row = row + 1; 

    } */
    /*
    int row = 1;
    while(row <= n) {
        int space = n - row; 

        while(space) {

            cout<<" ";
            space = space - 1;

        }

        int col = 1;
        while(col <= row) {

            cout<< row ;
            col = col + 1;

        }
        
        cout<<endl;
        row = row + 1;

    } */
    /*
    int row = 1;
    while(row <= n) {

        int space = row - 1;
        while(space) {

            cout<<" ";
            space = space - 1;

        }

        int col = 1;
        int no = row;
        while(col <= (n + 1 - row)) {

        
            cout<< no ;
            no = no + 1;
            col = col + 1;

        }
        cout<< endl;
        row = row + 1;

    } */
    /*
    int row = 1;
    int count = 1;
    while(row <= n) {

        int space = n - row;
        while(space) {

            cout<< " ";
            space = space - 1;
 
        }
        int col = 1;
        

        while(col <= row) {

            cout<< count;
            count = count + 1;
            col = col + 1;

        } 

        cout<< endl;
        row = row + 1;

    } */
    /*
    int row = 1;
    while(row <= n) {

        int space = n - row;
        while(space) {

            cout<<"  " ;
            space = space - 1;

        }
        int tri1 = 1;

        while(tri1 <= row) {

            cout<< tri1 << " ";
            tri1 = tri1 + 1;

        }


        int tri2 = 1;
        int count = row;
        while( tri2 <= (row - 1) && row >= 2) {

            cout<<count - 1<< " ";
            count = count - 1;
            tri2 = tri2 + 1;

        } 
        cout<<endl;
        row = row + 1;

    } */

    int row = 1;
    while(row <= n) {

        int col = 1;
        while(col <= n + 1 - row) {

            cout<<col<<" ";
            col = col + 1;

        }
        int star = 1;
        while(star <= 2 * (row - 1) && row >= 2) {

            cout<<"* ";
            star = star + 1;

        }
        int tri = 1;
        int value = n + 1 - row;
        while(tri <= (n + 1 - row)) {

            cout<<value<<" ";
            value = value - 1;
            tri = tri + 1;

        }

        cout<<endl;
        row = row + 1;
        
    }



    return 0;
}