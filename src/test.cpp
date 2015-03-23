
#include "abc.hpp"

int main() {

    std::cout << "hi" << std::endl;
    boost::shared_ptr<C> c = boost::shared_ptr<C>(new C(3));
    boost::shared_ptr<B> b = boost::shared_ptr<B>(new B(c, 2));
    boost::shared_ptr<A> a = boost::shared_ptr<A>(new A(b, 1));
    a->f();
    std::cout << "bye" << std::endl;
}

