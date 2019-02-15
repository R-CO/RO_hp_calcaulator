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

void rco::RoHpPaintPanel::DrawBasicLines(wxAutoBufferedPaintDC& dc)
{
    const wxPen& old_pen = dc.GetPen();
    dc.SetPen(*wxBLACK_PEN);

    const int kMaxX = 560;
    const int kMaxY = 410;
    dc.DrawLine(ConvertValueToCordinate(0, 0), ConvertValueToCordinate(0, 410)); // verticle basic line
    dc.DrawLine(ConvertValueToCordinate(0, 0), ConvertValueToCordinate(560, 0)); // horizontal basic line

    const int kSmallScale = 3;
    const int kBigScale = 6;
    const int kSmallGap = 5;
    const int kBigGap = 10;

    // draw X axis small scale
    for (int index = kSmallGap, multiple = 1; index <= kMaxX; multiple += 2) {
        dc.DrawLine(ConvertValueToCordinate(index, 0), ConvertValueToCordinate(index, kSmallScale));
        index = kSmallGap * multiple;
    }
    // draw X axis big scale
    for (int index = kBigGap, multiple = 1; index <= kMaxX; ++multiple) {
        dc.DrawLine(ConvertValueToCordinate(index, 0), ConvertValueToCordinate(index, kBigScale));
        index = kBigGap * multiple;
    }
    // draw Y axis small scale
    for (int index = kSmallGap, multiple = 1; index <= kMaxY; multiple += 2) {
        dc.DrawLine(ConvertValueToCordinate(0, index), ConvertValueToCordinate(kSmallScale, index));
        index = kSmallGap * multiple;
    }
    // draw Y axis big scale
    for (int index = kBigGap, multiple = 1; index <= kMaxY; ++multiple) {
        dc.DrawLine(ConvertValueToCordinate(0, index), ConvertValueToCordinate(kBigScale, index));
        index = kBigGap * multiple;
    }

    dc.SetPen(old_pen);
}

void rco::RoHpPaintPanel::DrawBasicText(wxAutoBufferedPaintDC & dc)
{
    const wxColour& old_text_foreground = dc.GetTextForeground();

    dc.SetTextForeground(*wxRED);
    dc.DrawText(wxS("MHP%"), ConvertValueToCordinate(-10, 425));
    dc.DrawText(wxS("Vit"), ConvertValueToCordinate(565, 10));

    const int kMaxX = 560;
    const int kMaxY = 410;
    const int kGap = 30;
    const int kX = -20;
    const int kY = 0;
    dc.SetTextForeground(*wxBLACK);
    for (int x = -10; x <= kMaxX; x += kGap) {
        dc.DrawText(wxString::Format(wxS("%d"), x + kGap - 20), ConvertValueToCordinate(x, kY));
    }

    for (int y = 30; y <= kMaxY; y += kGap) {
        dc.DrawText(wxString::Format(wxS("%d"), y + kGap - 30), ConvertValueToCordinate(kX, y + 8));
    }

    dc.SetTextForeground(old_text_foreground);
}

wxPoint rco::RoHpPaintPanel::ConvertValueToCordinate(const int& vit, const int& mhp_percentage) const
{
    return wxPoint(vit + 20, 430 - mhp_percentage);
}

int rco::RoHpPaintPanel::ConvertCordinateXToValue(const wxCoord &x) const
{
    return (x - 20);
}

int rco::RoHpPaintPanel::ConvertCordinateYToValue(const wxCoord& y) const
{
    return (y + 430);
}
