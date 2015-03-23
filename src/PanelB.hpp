
#ifndef my_panel_b_hpp
#define my_panel_b_hpp

#include <wx/wx.h>
#include "abc.hpp"
#include "PanelC.hpp"

class MyPanelB : public wxPanel {

    public:

        MyPanelB(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, boost::shared_ptr<B> b_);
        virtual ~MyPanelB();
        void f();

    private:

        MyPanelC *m_panelC;
        boost::shared_ptr<B> b;
};

#endif // my_panel_b_hpp

