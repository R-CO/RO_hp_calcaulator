#ifndef _RO_HP_PAINT_PANEL_H_
#define _RO_HP_PAINT_PANEL_H_

#include <wx/wx.h>
#include <wx/dcbuffer.h>
#include <wx/gdicmn.h>

namespace rco {

class RoHpPaintPanel : public wxPanel
{
public:
    RoHpPaintPanel(wxWindow *parent,
                   wxWindowID winid = wxID_ANY,
                   const wxPoint& pos = wxDefaultPosition,
                   const wxSize& size = wxDefaultSize,
                   long style = wxTAB_TRAVERSAL | wxNO_BORDER,
                   const wxString& name = wxPanelNameStr);

    void DrawBasicLines(wxAutoBufferedPaintDC& dc);
    void DrawBasicText(wxAutoBufferedPaintDC& dc);

private:
    wxPoint ConvertCordinate(const wxCoord& x, const wxCoord& y) const;
    wxPoint ConvertCordinate(const wxPoint& position) const;
}; // end of class "RoHpPaintPanel"

} // end of namespace "rco"

#endif
