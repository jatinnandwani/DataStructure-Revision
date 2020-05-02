#include <iostream>
//90 21 32 42 44 421 45 9 6 7
using namespace std;

void selectionSorting(int arr[]){

    for(int i= 0; i<9; i++){
        int min = i;
        for(int j = i+1;j<10;j++){
          if(arr[j]<arr[min]){
            min = j;
          }
        }
        if(min!=i){
            int temp     = arr[min];
            arr[min]     = arr[i];
            arr[i]       = temp;
        }
    }
}

int main()
{
    int myArr[10];

    cout<<"Please enter 10 elements of an array"<<endl;
    for(int i=0; i<10; i++){
        cin>>myArr[i];
    }

    cout<<"Displaying an array"<<endl;
    for(int i=0;i<10;i++){
        cout<<myArr[i]<<" ";
    }

    selectionSorting(myArr);
    cout<<"Sorting Array"<<endl;
    for(int i=0;i<10;i++){
        cout<<myArr[i]<<" ";
    }
    return 0;
}
