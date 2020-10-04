#include <iostream>

class X final {
    public:
        X() { p = new int; }
        X(int n) { *p = n; }
        X& operator=(X&& x) { delete p, p = x.p; }
        virtual int& get() { return *p; }
    protected:
        int* p;
};

int main(){
    X final;
    return 0;
}