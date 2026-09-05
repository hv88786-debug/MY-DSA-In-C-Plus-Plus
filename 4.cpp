//LINERAR SEARCH 
#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int elements , value ,efound, found=0;
    cout<<"enter the number of elements:";
    cin>>elements;
    for( int i=0;i<elements;i++){
        cout<<"enter the element "<<i+1<<"::";
        cin>>value;
        arr[i]=value;
    }
    cout<<"enter the element to search:";
    cin>>efound;
    int position=0;
    for(int j=0;j<elements;j++){
        if(arr[j]==efound){
            found=1;
            position=1+j;
            break;
        }
    }
    if(found==1){
        cout<<"element found at "<<position<<"  position";
    }
    else{
        cout<<"element not found";
    }
}