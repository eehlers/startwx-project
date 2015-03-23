
#ifndef my_dialog_a_hpp
#define my_dialog_a_hpp

#include <wx/wx.h>
#include "PanelB.hpp"
#include "abc.hpp"

class MyDialogA : public wxDialog {

        enum wxIDs {
            ID_ABOUT = wxID_HIGHEST, ID_BTN_GO
        };

    public:

        MyDialogA(wxWindow *parent, wxWindowID id, const wxString &title);
        virtual ~MyDialogA();
        void OnQuit   (wxCommandEvent& );

    private:

        void OnButton (wxCommandEvent& );
        void f();

        MyPanelB *m_panelB;

        boost::shared_ptr<A> a;

        DECLARE_EVENT_TABLE()
};

#endif // my_dialog_a_hpp

