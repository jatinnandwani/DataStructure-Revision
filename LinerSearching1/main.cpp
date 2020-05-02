#include <iostream>

using namespace std;

linearSearching(int a[],int k ){
     for(int i = 0; i< 4; i++){
            if(a[i]==k){
                     cout<<"Element found at position"<<i<<endl;
            }
     }

}

int main()
{
    int a[5];
    int n;
    cout<<"Please enter an array"<<endl;
        for(int i = 0; i<5; i++){
                cin>>a[i];
        }
    cout<<"Enter a number you want to searh for"<<endl;
    cin>>n;
    linearSearching(a,n);
    return 0;
}
