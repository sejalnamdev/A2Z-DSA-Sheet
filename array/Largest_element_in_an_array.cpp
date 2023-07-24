#include <iostream>
using namespace std;

int main(){

    int array[]={2,5,9};
    int largest=array[0];

    for(int i=0;i<3;i++){
        if(array[i]>largest){
            largest=array[i];
            
        }
        
        
    }
    cout<<largest<<endl;
    return 0;
}