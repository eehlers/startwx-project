
#include "PanelC.hpp"
#include <iostream>

MyPanelC::MyPanelC(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, boost::shared_ptr<C> c_) :
    wxPanel(parent, id, pos, size),
    c(c_)
{
    std::cout << "MyPanelC::MyPanelC" << std::endl;
    wxStaticText *s = new wxStaticText(this, wxID_ANY, wxT("C"));
    std::cout << "ptr=" << c << std::endl;
}

MyPanelC::~MyPanelC() {
    std::cout << "MyPanelC::~MyPanelC" << std::endl;
}

void MyPanelC::f() {
    std::cout << "MyPanelC::f" << std::endl;
    std::cout << "ptr=" << c << std::endl;
    std::cout << "x=" << c->x << std::endl;
}

