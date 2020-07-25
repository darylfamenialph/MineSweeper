#include <wx/wxprec.h>
#include "..\include\mineSweeper.h"
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif
class MyApp : public wxApp
{
public:
    virtual bool OnInit();
};
wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    mineSweeper *sweeper = new mineSweeper();
    sweeper->Show(true);
    return true;
}
