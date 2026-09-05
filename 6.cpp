//LINERAR SEARCH 
#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int elements , value ,sum=0;
    cout<<"enter the number of elements:";
    cin>>elements;
    for( int i=0;i<elements;i++){
        cout<<"enter the element "<<i+1<<"::";
        cin>>value;
        arr[i]=value;
    }
    for(int i=0;i<elements;i++){
        sum=sum+arr[i];
    }
    cout<<"mean of the elements is::"<<sum/elements;
    if(elements%2==0){
        cout<<"\nmedian of the elements is::"<<(arr[elements/2]+arr[(elements/2)-1])/2;
    }
    else{
        cout<<"\nmedian of the elements is::"<<arr[elements/2];
    }
}