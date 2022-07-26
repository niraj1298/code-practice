#include <iostream>
using namespace std;

int biSch(int arr[], int l, int r, int x){
    while(l<=r){
        int mid = l+(r-l)/2;
        if (arr[mid]==x){
            return mid;
        } else if (arr[mid] < x ){
            l=mid+1;
        }else{
            r = mid-1;
        }
    }
    return -1;
}

int main() {
    int ar[10];
    int val;
    int res;


    cout <<" Please enter in 10 values "<<endl;
    for(int i =0; i < 10;i++) {
        cin >> ar[i];
    }

    cout <<" Enter a value to find in the array" << endl;
    cin >> val;
    res = biSch(ar,0,9,val);
    if(res == -1){
        cout<<"There was no match found"<<endl;
    }else{
        cout<<"Your value was found at position: "<< res << endl;
    }
    return 0;
}
