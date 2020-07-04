
#include <iostream>
//inherit.cpp

class A{
private:
    int a;
public:
    A():a(0){std::cout<<"A() called\n";}
    A(int a_):a(a_){std::cout<<"A(int) called\n";}
    void print(){ std::cout<<"a="<<a<<" ";}
    ~A(){std::cout<<"~A() called\n";}
};

class B: public A{
private:
    int b;
public:
    B():b(0){std::cout<<"B() called\n";}
    B(int b_):b(b_),A(b_/2){std::cout<<"B(int) called\n";}
    void print(){ std::cout<<"b="<<b<<" ";}
    ~B(){std::cout<<"~B() called\n";}
};

class C: public B{
private:
    int c;
public:
    C():c(0){std::cout<<"C() called\n";}
    C(int c_):c(c_),B(c_/2){std::cout<<"C(int) called\n";}
    void print(){ std::cout<<"c="<<c<<" ";}
    ~C(){std::cout<<"~C() called\n";}
};

int main()
{
    C c1;
    C c2(100);

    return 0;
}