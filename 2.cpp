#include<iostream>
using namespace std;
int main () {
    int arr[100];
    int elements , value , positon , element;
    cout<<"Enter number of elements: ";
    cin>>elements;
    for(int i=0;i<elements;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>value;
        arr[i] = value;
    }
    cout<<"Enter position to insert element: ";
    cin>>positon;
    cout<<"enter your element to insert: ";
    cin>>element;
    for(int k=elements-1;k>=positon-1;k--){
        arr[k+1]=arr[k];

    }
    arr[positon-1]=element;
    cout<<"Array after insertion: ";
    for(int j=0;j<elements+1;j++){
        cout<<arr[j]<<" ";
    }
}
