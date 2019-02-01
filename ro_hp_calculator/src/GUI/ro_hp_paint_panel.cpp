#include "ro_hp_paint_panel.h"

#include <wx/wx.h>
#include <wx/dcbuffer.h>

rco::RoHpPaintPanel::RoHpPaintPanel(wxWindow *parent,
                                    wxWindowID winid,
                                    const wxPoint& pos,
                                    const wxSize& size,
                                    long style,
                                    const wxString& name)
    : wxPanel(parent, winid, pos, size, style, name)
{
    this->SetBackgroundStyle(wxBG_STYLE_PAINT );
}
