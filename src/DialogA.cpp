
#include "DialogA.hpp"
#include <iostream>

BEGIN_EVENT_TABLE(MyDialogA, wxDialog)
    EVT_BUTTON(ID_BTN_GO, MyDialogA::OnButton)
END_EVENT_TABLE()

MyDialogA::MyDialogA(wxWindow *parent, wxWindowID id, const wxString &title) :
    wxDialog(parent, id, title, wxDefaultPosition, wxSize(700, 700))
{
    boost::shared_ptr<C> c = boost::shared_ptr<C>(new C(3));
    boost::shared_ptr<B> b = boost::shared_ptr<B>(new B(c, 2));
    a = boost::shared_ptr<A>(new A(b, 1));

    wxStaticText *s = new wxStaticText(this, wxID_ANY, wxT("A"), wxPoint(10, 10));
    wxButton *m_btn_go = new wxButton(this, ID_BTN_GO, _T("GO"), wxPoint(50, 10));
    m_panelB = new MyPanelB(this, wxID_ANY, wxPoint(100, 100), wxSize(200, 200), b);
    f();
}

MyDialogA::~MyDialogA() {
}

void MyDialogA::OnQuit(wxCommandEvent& WXUNUSED(event)) {
    Close();
}

void MyDialogA::f() {
    std::cout << "MyDialogA::f" << std::endl;
    std::cout << "ptr=" << a << std::endl;
    std::cout << "x=" << a->x << std::endl;
    m_panelB->f();
}

void MyDialogA::OnButton(wxCommandEvent &event) {
    switch(event.GetId()) {
        case ID_BTN_GO:
        {
            f();
            break;
        }
        default:
        {
            break;
        }
    }
}

