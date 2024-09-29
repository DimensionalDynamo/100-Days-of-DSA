#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"What the sum you want to create from 2 elements of Array : ";
    cin>>key;

    bool found=false;
    int index1;
    int index2;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==key){
                index1=i;
                index2=j;
                found=true;
                break;
            }
        }
        if(found)
            break;
    }
    if(found)
        cout<<"The Sum can be created by "<<arr[index1]<<" & "
            <<arr[index2]<<" whose index are respectively "<<index1<<" & "<<index2;
    else
        cout << "No such pair found." << endl;
};