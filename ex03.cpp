#include <iostream>

using namespace std;

void min_max(int* arr,int size,int* min, int* max){
    *min=*max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>*max){
            *max=arr[i];
        }
        if(arr[i]<*min){
            *min=arr[i];
        }
    }
}

int main(){
int deb[5]={5,3,6,2,9};
int ahh[5]={2,3,5,1,6};
int min;
int max;
min_max(deb,5,&min,&max);
cout<<"min: "<<min<<endl;
cout<<"max: "<<max<<endl;
min_max(ahh,5,&min,&max);
cout<<"min: "<<min<<endl;
cout<<"max: "<<max<<endl;
return 0;
}