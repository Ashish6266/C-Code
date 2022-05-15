#include <iostream>

int GetValue(){
    return 10; // returns a temporary r value
}

int SetValue(int value){
}

int main(){
    int i = 10; //lvalues set equal to a rvalue
    int a = i; //lvalue set equal to a lvalue
}