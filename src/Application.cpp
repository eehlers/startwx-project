
#include "Application.hpp"
#include "Frame.hpp"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit(void)
{
    MyFrame* const pFrame = new MyFrame(0L, _("wxWidgets::wxTemplate"));
    pFrame->Show();
    return true;
}

