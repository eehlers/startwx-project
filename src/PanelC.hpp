
#ifndef my_panel_c_hpp
#define my_panel_c_hpp

#include <wx/wx.h>
#include "abc.hpp"

class MyPanelC : public wxPanel {

    public:

        MyPanelC(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, boost::shared_ptr<C> c_);
        virtual ~MyPanelC();
        void f();

    private:

        boost::shared_ptr<C> c;
};

#endif // my_panel_c_hpp

