#include <iostream>
using namespace std;

int sum_array(int* a, int size){
    int suma = 0;
    for(int* p = a; p < a + size; p++){
        suma += *p;
    }
    return suma;
}

int main(){
    int tab[5] = {1,2,3,4,5};
    int size = 5;
    cout << sum_array(tab,size);
    return 0;
}