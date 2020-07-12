#include<iostream>
using namespace std;
int main(){
    // *************************HARRY SIR"S CODE************************************
    // What is a pointer? ----> Data type which holds the address of other data types
    // int a=3;
    // int* b;
    // b = &a;

    // // & ---> (Address of) Operator
    // cout<<"The address of a is "<<&a<<endl;
    // cout<<"The address of a is "<<b<<endl;

    // // * ---> (value at) Dereference operator
    // cout<<"The value at address b is "<<*b<<endl;

    // // Pointer to pointer
    // int** c = &b;
    // cout<<"The address of b is "<<&b<<endl;
    // cout<<"The address of b is "<<c<<endl; 
    // cout<<"The value at address c is "<<*c<<endl; 
    // cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;  
    // *************************HARRY SIR"S CODE************************************


    // ****************************~NIKHIL"S CODE**************************************
    int a = 8;
    int *ptra = &a;
    int **ptrptr = &ptra;
    
    cout<<"The address of var int-a is "<<&a<<"(using simple(&) method)"<<endl;
    cout<<"The address of var int-a is "<<ptra<<"(using pointers method)"<<endl;
    cout<<"The address of pointer-var int *ptr is "<<ptrptr<<"(using pointers method)"<<endl;
    cout<<"The address of pointer-var int *ptr is "<<&ptra<<" Using simple method "<<endl;
    cout<<"The value of a is "<<a<<" Using simple method"<<endl;
    cout<<"The value of a is "<<*ptra<<" Using pointer method"<<endl;
    cout<<"The value of a is "<<**ptrptr<<" Using pointer-pointer method"<<endl;
    // ****************************~NIKHIL"S CODE**************************************
    



    


    return 0;
}