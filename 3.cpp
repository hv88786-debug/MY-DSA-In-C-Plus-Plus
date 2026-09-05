#include <iostream>
using namespace std;
int main() {
    int arr[100];
    int elements, value, position, element;
    cout << "Enter number of elements: ";
    cin >> elements;
    for (int i=0;i<elements;i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }
    cout <<"enter the position to delete element: ";    
    cin>>position;
    for(int k=position-1;k<elements-1;k++){
        arr[k]=arr[k+1];
    }
    cout<<"Array after deletion: ";
    for(int j=0;j<elements-1;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}
