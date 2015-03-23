
#include "PanelB.hpp"
#include <iostream>

MyPanelB::MyPanelB(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, boost::shared_ptr<B> b_) :
    wxPanel(parent, id, pos, size),
    b(b_)
{
    std::cout << "MyPanelB::MyPanelB" << std::endl;
    wxStaticText *s = new wxStaticText(this, wxID_ANY, wxT("B"));
    std::cout << "ptr=" << b << std::endl;
}

MyPanelB::~MyPanelB() {
    std::cout << "MyPanelB::~MyPanelB" << std::endl;
}

void MyPanelB::f() {
    std::cout << "MyPanelB::f" << std::endl;
    std::cout << "ptr=" << b << std::endl;
    std::cout << "x=" << b->x << std::endl;
}

