#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    //Declaring and input array
    int arr[n];
    cout<<"Input the array elements: ";
    for (int &ele:arr){
        cin>>ele;
    }

    for (int i=0;i<n;i+=2){
        if (i+1 < n){      //purpose--> if (size = odd) last element will remain single and not swapped
            swap(arr[i],arr[i+1]);
        }
    }

    for(int j:arr){
        cout<<j<<" ";
    }
}