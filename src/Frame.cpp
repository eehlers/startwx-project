
#include "Frame.hpp"
#include "DialogA.hpp"

MyFrame::MyFrame(wxFrame *frame, const wxString& title)
    : wxFrame(frame, -1, title, wxDefaultPosition, wxSize(600, 600))
{
    MyDialogA *dlg2 = new MyDialogA(this, wxID_ANY, wxT("A"));
    if (dlg2->ShowModal() == wxID_OK) {
    }
    Close();
}

MyFrame::~MyFrame(void)
{
}

