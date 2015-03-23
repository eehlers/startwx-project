
#ifndef MAIN_H
#define MAIN_H

#include <wx/wx.h>
#include "abc.hpp"

class MyFrame: public wxFrame
{
        enum wxIDs {
            ID_ABOUT = wxID_HIGHEST, ID_BTN_GO
        };

    public:

        MyFrame(wxFrame *frame, const wxString& title);
        virtual ~MyFrame();

    private:

        void OnButton (wxCommandEvent&);
        void f();

        boost::shared_ptr<A> a;

        DECLARE_EVENT_TABLE()
};

#endif // MAIN_H

