
#include "Frame.hpp"
#include "PanelB.hpp"

BEGIN_EVENT_TABLE(MyFrame, wxFrame)
    EVT_BUTTON(ID_BTN_GO, MyFrame::OnButton)
END_EVENT_TABLE()

MyFrame::MyFrame(wxFrame *frame, const wxString& title)
    : wxFrame(frame, -1, title, wxDefaultPosition, wxSize(600, 600))
{
    boost::shared_ptr<C> c = boost::shared_ptr<C>(new C(3));
    boost::shared_ptr<B> b = boost::shared_ptr<B>(new B(c, 2));
    a = boost::shared_ptr<A>(new A(b, 1));

    wxStaticText *s = new wxStaticText(this, wxID_ANY, wxT("A"), wxPoint(10, 10));
    wxButton *m_btn_go = new wxButton(this, ID_BTN_GO, _T("GO"), wxPoint(50, 10));
    m_panelB = new MyPanelB(this, wxID_ANY, wxPoint(100, 100), wxSize(200, 200), b);
}

MyFrame::~MyFrame(void)
{
}

void MyFrame::f() {
    std::cout << "MyFrame::f" << std::endl;
    std::cout << "ptr=" << a << std::endl;
    std::cout << "x=" << a->x << std::endl;
    //a->f();
    m_panelB->f();
}

void MyFrame::OnButton(wxCommandEvent &event)
{
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

