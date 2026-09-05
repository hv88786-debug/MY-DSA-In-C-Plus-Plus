// binary search 
#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int elements , value ,efound, found=0, hight , low=0, mid ;
    cout<<"enter the number of elements:";
    cin>>elements;
    for( int i=0;i<elements;i++){
        cout<<"enter the SORTED element "<<i+1<<"::";
        cin>>value;
        arr[i]=value;
    }
    cout<<"enter the element to search:";
    cin>>efound; 
    hight=elements-1;
    while(low<=hight){
        mid=(low+hight)/2;
        if(arr[mid]==efound){
            found=1;
            break;
        }
        else if(arr[mid]<efound){
            low=mid+1;
        }
        else{
            hight=mid-1;
        }
    }
    if(found==1){
        cout<<"element found by binary search at "<<mid+1<<"  position";
    }
    else{
        cout<<"element not found by binary search";
    }
}