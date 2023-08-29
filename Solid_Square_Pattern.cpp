#include <iostream>
using namespace std;

int main(){

    int side;
    cout<<"enter size of side: ";
    cin>>side;

    // This is loop for row
    for(int i=0;i<side;i++){
        // This is loop for column
        for(int j=0;j<side;j++){
            cout<<"* ";
        }
        //Starting from new row
        cout<<endl;
    }
}