
#include "DialogA.hpp"
#include <iostream>

BEGIN_EVENT_TABLE(MyDialogA, wxDialog)
    EVT_BUTTON(ID_BTN_GO, MyDialogA::OnButton)
END_EVENT_TABLE()

MyDialogA::MyDialogA(wxWindow *parent, wxWindowID id, const wxString &title) :
    wxDialog(parent, id, title, wxDefaultPosition, wxSize(300, 200))
{
    wxBoxSizer *s = new wxBoxSizer(wxVERTICAL);
    s->Add(new wxButton(this, wxID_ANY, _T("b0")));
    s->AddStretchSpacer();
    s->Add(new wxButton(this, wxID_ANY, _T("b1")));

    wxFlexGridSizer *g = new wxFlexGridSizer(2, 0, 0);
    g->AddGrowableCol(0, 1);
    g->AddGrowableRow(0, 1);
    g->Add(new wxPanel(this, wxID_ANY, wxPoint(0, 0), wxSize(200, 200)), wxSizerFlags().Expand());
    g->Add(s, wxSizerFlags().Expand());

    g->SetSizeHints(this);
    this->SetSizer(g);
    this->Layout();
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

