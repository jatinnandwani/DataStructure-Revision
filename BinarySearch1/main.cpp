#include <iostream>

using namespace std;
int binarySearch(int a[], int k, int left, int right){

    while(left <= right){
        int medium = left + (right-left)/2;
        if(medium == k){
            return medium;
        }else if(medium < k){
            left = medium + 1;
        }else{
            right = medium - 1;
        }

    }

    return -1;

}
int main()
{
    int num;
    int myarr[10];
    int output;
    cout<<"Enter 10 integer in order"<<endl;
    for(int i; i< 10; i++){
        cin>>myarr[i];
    }
    cout<<"Enter a number to search"<<endl;
    cin>>num;
    output = binarySearch(myarr, num,0, 9);
    if(output == -1){
        cout<<"NOT FOUND"<<endl;
    }else{
        cout<<"FOUND"<<endl;
    }
    return 0;
}
