#include <iostream>

using namespace std;
void bubbleSorting(int arr[]){
    int n = 5;
    for(int i=0; i<n; i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]   = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int myArr[5];
    cout<<"Enter Elements of you array"<<endl;
    for(int i = 0; i< 5; i++){
        cin>>myArr[i];
    }

    cout<<"Displaying an array elements"<<endl;
    for(int i = 0; i< 5; i++){
        cout<<myArr[i]<<" ";
    }
    bubbleSorting(myArr);

    cout<<endl<<"After Sorting"<<endl;
    for(int i = 0; i< 5; i++){
        cout<<myArr[i]<<" ";
    }
    return 0;
}
