#include "ro_hp_calculator_main_frame.h"

#include <wx/dialog.h>

#include "../ro_hp_calculator.h"

rco::RoHpCalculatorMainFrame::RoHpCalculatorMainFrame(wxWindow* parent)
    :
    RoHpCalculatorMainFrameBase(parent)
{
    PrepareCharacterJobChoice();
    PrepareVitChoice();
    PreareMhpPercentageChoice();
    m_extra_hp_text_ctrl->SetValue(wxS("0"));
}

void rco::RoHpCalculatorMainFrame::PrepareCharacterJobChoice()
{
    m_character_choice->Append(_("Rune Knight"));
    m_character_choice->Append(_("Warlock"));
    m_character_choice->Append(_("Arch Bishop"));
    m_character_choice->Append(_("Guillotine Cross"));
    m_character_choice->Append(_("Mechanic"));
    m_character_choice->Append(_("Ranger"));
    m_character_choice->Append(_("Royal Guard"));
    m_character_choice->Append(_("Sorcerer"));
    m_character_choice->Append(_("Sura"));
    m_character_choice->Append(_("Shadow Chaser"));
    m_character_choice->Append(_("Genetic"));
    m_character_choice->Append(_("Minstrel"));
    m_character_choice->Append(_("Wanderer"));
}

void rco::RoHpCalculatorMainFrame::PrepareVitChoice()
{
    const int kMaxVit = 500;
    for (int vit = 0; vit <= kMaxVit; ++vit) {
        m_vit_choice->Append(wxString::Format(wxS("%d"), vit));
    }
    m_vit_choice->SetSelection(0);
}

void rco::RoHpCalculatorMainFrame::PreareMhpPercentageChoice()
{
    const int kMaxMhpPercentage = 380;
    for (int mhp_percentage = 0; mhp_percentage <= kMaxMhpPercentage; ++mhp_percentage) {
        m_mhp_percentage_choice->Append(wxString::Format(wxS("%d"), mhp_percentage));
    }
    m_mhp_percentage_choice->SetSelection(0);
}

void rco::RoHpCalculatorMainFrame::SetExtraHpTextCtrl(wxString& input_value)
{
    if (!input_value.IsNumber()) {
        return;
    }
    m_extra_hp_text_ctrl->SetValue(input_value);
}

void rco::RoHpCalculatorMainFrame::CalculateAndSetMaxHp()
{
    long extra_hp = 0;
    if (!m_extra_hp_text_ctrl->GetValue().ToLong(&extra_hp)) {
        return;
    }
    const int kMaxHp = ro_hp_calculator_.CalculateMaxHp(static_cast<CharacterJob>(m_character_choice->GetSelection() + 1),
                                                        m_vit_choice->GetSelection(),
                                                        m_mhp_percentage_choice->GetSelection(),
                                                        extra_hp);
    m_final_mhp_text_ctrl->SetValue(wxString::Format(wxS("%d"), kMaxHp));
}

void rco::RoHpCalculatorMainFrame::CharacterChoiceOnChoice(wxCommandEvent& WXUNUSED(event))
{
    CalculateAndSetMaxHp();
}

void rco::RoHpCalculatorMainFrame::PaintPanelOnLeftDClick(wxMouseEvent& event)
{
    // TODO: Implement PaintPanelOnLeftDClick
}

void rco::RoHpCalculatorMainFrame::PaintPanelOnMouseWheel(wxMouseEvent& event)
{
    // TODO: Implement PaintPanelOnMouseWheel
}

void rco::RoHpCalculatorMainFrame::VitChoiceOnChoice(wxCommandEvent& WXUNUSED(event))
{
    // TODO: Implement VitChoiceOnChoice
    CalculateAndSetMaxHp();
}

void rco::RoHpCalculatorMainFrame::MhpPercentageChoiceOnChoice(wxCommandEvent& WXUNUSED(event))
{
    // TODO: Implement MhpPercentageChoiceOnChoice
    CalculateAndSetMaxHp();
}

void rco::RoHpCalculatorMainFrame::ExtraHpTextCtrlOnText(wxCommandEvent& event)
{
    // TODO: Implement ExtraHpTextCtrlOnText
    if (!event.GetString().IsNumber()) {
        return;
    }
    CalculateAndSetMaxHp();
}

void rco::RoHpCalculatorMainFrame::ExtraHpTextCtrlOnTextEnter(wxCommandEvent& event)
{
    // TODO: Implement ExtraHpTextCtrlOnTextEnter
    if (!event.GetString().IsNumber()) {
        return;
    }
    CalculateAndSetMaxHp();
}

void rco::RoHpCalculatorMainFrame::ExtraHpTextCtrlOnTextMaxLen(wxCommandEvent& event)
{
    // TODO: Implement ExtraHpTextCtrlOnTextMaxLen
}

void rco::RoHpCalculatorMainFrame::ExitMenuItemOnMenuSelection(wxCommandEvent& WXUNUSED(event))
{
    this->Close();
}

void rco::RoHpCalculatorMainFrame::AboutMenuItemOnMenuSelection(wxCommandEvent& WXUNUSED(event))
{
    // TODO: Implement AboutMenuItemOnMenuSelection
    wxDialog about_dialog(this, wxID_ANY, _("About RO hp calculator by R-CO"));

    about_dialog.ShowModal();
}
