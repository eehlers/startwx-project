
#ifndef MAIN_H
#define MAIN_H

#include <wx/wx.h>
//#include <wx/button.h>
//#include <wx/textctrl.h>
//#include <wx/notebook.h>
//#include <wx/aboutdlg.h>
//#include <wx/config.h>

class MyFrame: public wxFrame
{
        enum wxIDs
        {
            ID_ABOUT = wxID_HIGHEST
                        , SOME_ID
        };

    public:

        MyFrame(wxFrame *frame, const wxString& title);
        virtual ~MyFrame();

    private:

        void OnButton (wxCommandEvent& );

        DECLARE_EVENT_TABLE()
};

#endif // MAIN_H

