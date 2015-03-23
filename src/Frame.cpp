
#include "Frame.hpp"
//#include <wx/textdlg.h>
#include "PanelB.hpp"

BEGIN_EVENT_TABLE(MyFrame, wxFrame)
    EVT_BUTTON(SOME_ID, MyFrame::OnButton)
END_EVENT_TABLE()

MyFrame::MyFrame(wxFrame *frame, const wxString& title)
    : wxFrame(frame, -1, title, wxDefaultPosition, wxSize(600, 600))
{
//    this->SetSizeHints(wxDefaultSize, wxDefaultSize);
//
//    wxBoxSizer* boxSizer = new wxBoxSizer( wxVERTICAL );
    wxStaticText *s = new wxStaticText(this, wxID_ANY, wxT("A"));
    MyPanelB *m_panelB = new MyPanelB(this, wxID_ANY, wxPoint(100, 100), wxSize(200, 200));
//    boxSizer->Add(m_panel, 1, wxALL | wxEXPAND, 5);
//    this->SetSizer( boxSizer );
//    this->Layout();
//    this->SetSize(300, 150);
}

MyFrame::~MyFrame(void)
{
}

void MyFrame::OnButton(wxCommandEvent &event)
{
    switch(event.GetId()) {
        case SOME_ID:
        {
            break;
        }
        default:
        {
            break;
        }
    }
}

