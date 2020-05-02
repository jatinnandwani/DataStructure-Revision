#include <iostream>

using namespace std;

insertionSorting(int arr[]){
    int j=0;
    int key;

    for(int i=1;i<5;i++){
        key = arr[i];
        j = i-1;
        while(j >=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j-1;
        }

        arr[j+1] = key;

    }



}

int main()
{
    int myArr[5];
    cout<<"Enter 5 Elements of an array"<<endl;
    for(int i;i<5;i++){
         cin>>myArr[i];
    }

    cout<<"Entered Array"<<endl;
    for(int i =0; i<5; i++){
         cout<<myArr[i]<<" ";

    }

    insertionSorting(myArr);
    cout<<"Sorted Array"<<endl;
    for(int i =0; i<5; i++){
         cout<<myArr[i]<<" ";

    }
    return 0;
}
