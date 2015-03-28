
#include "DialogA.hpp"
#include <iostream>

BEGIN_EVENT_TABLE(MyDialogA, wxDialog)
    EVT_BUTTON(ID_BTN_GO, MyDialogA::OnButton)
END_EVENT_TABLE()

MyDialogA::MyDialogA(wxWindow *parent, wxWindowID id, const wxString &title) :
    wxDialog(parent, id, title, wxDefaultPosition, wxSize(700, 700))
{
    wxStaticText *s = new wxStaticText(this, wxID_ANY, wxT("A"), wxPoint(10, 10));
    wxButton *m_btn_go = new wxButton(this, ID_BTN_GO, _T("GO"), wxPoint(50, 10));
}

MyDialogA::~MyDialogA() {
}

void MyDialogA::OnQuit(wxCommandEvent& WXUNUSED(event)) {
    Close();
}

void MyDialogA::OnButton(wxCommandEvent &event) {
    switch(event.GetId()) {
        case ID_BTN_GO:
        {
            std::cout << "go" << std::endl;
            break;
        }
        default:
        {
            break;
        }
    }
}

