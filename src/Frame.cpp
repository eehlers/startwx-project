
#include "Frame.hpp"
#include <wx/textdlg.h>

BEGIN_EVENT_TABLE(MyFrame, wxFrame)
    EVT_BUTTON(SOME_ID, MyFrame::OnButton)
END_EVENT_TABLE()

MyFrame::MyFrame(wxFrame *frame, const wxString& title)
    : wxFrame(frame, -1, title)
{
    this->SetSizeHints(wxDefaultSize, wxDefaultSize);

    wxBoxSizer* boxSizer = new wxBoxSizer( wxVERTICAL );
    m_panel = new wxPanel(this, wxID_ANY, wxPoint(0, 0), wxSize(600, 600));
    boxSizer->Add(m_panel, 1, wxALL | wxEXPAND, 5);
    this->SetSizer( boxSizer );
    this->Layout();
    this->SetSize(300, 150);
}

MyFrame::~MyFrame(void)
{
}

void MyFrame::OnButton(wxCommandEvent &event)
{
    switch(event.GetId())
    {
        case SOME_ID:
        {
            break;
        }
        default:
        {
            // unknown id
            break;
        }
    }
    return;
}

