
#ifndef abc_hpp
#define abc_hpp

#include <iostream>

#include <boost/shared_ptr.hpp>

struct C {
    int x;
    C(int x_) : x(x_) {}
    void f() {
        std::cout << "C::f()" << std::endl;
        std::cout << "C::f() " << x << std::endl;
    }
};

struct B {
    int x;
    boost::shared_ptr<C> c;
    B(boost::shared_ptr<C> c_, int x_) :
    c(c_), x(x_) { }
    void f() {
        std::cout << "B::f()" << std::endl;
        std::cout << "B::f() " << x << std::endl;
        c->f();
    }
};

struct A {
    int x;
    boost::shared_ptr<B> b;
    A(boost::shared_ptr<B> b_, int x_) :
    b(b_), x(x_) { }
    void f() {
        std::cout << "A::f()" << std::endl;
        std::cout << "A::f() " << x << std::endl;
        b->f();
    }
};

#endif
