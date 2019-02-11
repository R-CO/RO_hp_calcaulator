///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "../ro_hp_paint_panel.h"

#include "ro_hp_calculator_main_frame_base.h"

///////////////////////////////////////////////////////////////////////////
using namespace rco;

RoHpCalculatorMainFrameBase::RoHpCalculatorMainFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	m_character_panel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	wxArrayString m_character_choiceChoices;
	m_character_choice = new wxChoice( m_character_panel, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_character_choiceChoices, 0 );
	m_character_choice->SetSelection( 0 );
	m_character_choice->SetToolTip( _("Character JOB") );
	
	bSizer2->Add( m_character_choice, 0, wxALL|wxEXPAND, 5 );
	
	
	m_character_panel->SetSizer( bSizer2 );
	m_character_panel->Layout();
	bSizer2->Fit( m_character_panel );
	bSizer1->Add( m_character_panel, 0, wxEXPAND | wxALL, 0 );
	
	m_paint_panel = new rco::RoHpPaintPanel( this, wxID_ANY, wxDefaultPosition, wxSize( 620,450 ), wxTAB_TRAVERSAL );
	bSizer1->Add( m_paint_panel, 0, wxEXPAND | wxALL, 0 );
	
	m_parameter_panel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_vit_static_text = new wxStaticText( m_parameter_panel, wxID_ANY, _("Vit"), wxDefaultPosition, wxDefaultSize, 0 );
	m_vit_static_text->Wrap( -1 );
	bSizer3->Add( m_vit_static_text, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer3->Add( 10, 0, 0, wxEXPAND, 5 );
	
	wxArrayString m_vit_choiceChoices;
	m_vit_choice = new wxChoice( m_parameter_panel, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_vit_choiceChoices, 0 );
	m_vit_choice->SetSelection( 0 );
	bSizer3->Add( m_vit_choice, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_mhp_percentage_static_text = new wxStaticText( m_parameter_panel, wxID_ANY, _("MHP%"), wxDefaultPosition, wxDefaultSize, 0 );
	m_mhp_percentage_static_text->Wrap( -1 );
	bSizer3->Add( m_mhp_percentage_static_text, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer3->Add( 10, 0, 0, wxEXPAND, 5 );
	
	wxArrayString m_mhp_percentage_choiceChoices;
	m_mhp_percentage_choice = new wxChoice( m_parameter_panel, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_mhp_percentage_choiceChoices, 0 );
	m_mhp_percentage_choice->SetSelection( 0 );
	bSizer3->Add( m_mhp_percentage_choice, 1, wxALL, 5 );
	
	
	bSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_added_value_static_text = new wxStaticText( m_parameter_panel, wxID_ANY, _("Extra HP"), wxDefaultPosition, wxDefaultSize, 0 );
	m_added_value_static_text->Wrap( -1 );
	bSizer3->Add( m_added_value_static_text, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer3->Add( 10, 0, 0, wxEXPAND, 5 );
	
	m_extra_hp_text_ctrl = new wxTextCtrl( m_parameter_panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_RICH|wxTE_RICH2 );
	m_extra_hp_text_ctrl->SetMaxLength( 6 ); 
	bSizer3->Add( m_extra_hp_text_ctrl, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	m_parameter_panel->SetSizer( bSizer3 );
	m_parameter_panel->Layout();
	bSizer3->Fit( m_parameter_panel );
	bSizer1->Add( m_parameter_panel, 0, wxEXPAND | wxALL, 0 );
	
	m_result_panel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizer4->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_mhp_static_text = new wxStaticText( m_result_panel, wxID_ANY, _("Final MHP"), wxDefaultPosition, wxDefaultSize, 0 );
	m_mhp_static_text->Wrap( -1 );
	m_mhp_static_text->SetFont( wxFont( 16, 70, 90, 90, false, wxT("Comic Sans MS") ) );
	m_mhp_static_text->SetForegroundColour( wxColour( 0, 0, 0 ) );
	
	bSizer4->Add( m_mhp_static_text, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer4->Add( 20, 0, 0, wxEXPAND, 5 );
	
	m_final_mhp_text_ctrl = new wxTextCtrl( m_result_panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	m_final_mhp_text_ctrl->SetFont( wxFont( 16, 70, 90, 90, false, wxT("Comic Sans MS") ) );
	m_final_mhp_text_ctrl->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	
	bSizer4->Add( m_final_mhp_text_ctrl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer4->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	m_result_panel->SetSizer( bSizer4 );
	m_result_panel->Layout();
	bSizer4->Fit( m_result_panel );
	bSizer1->Add( m_result_panel, 1, wxEXPAND | wxALL, 0 );
	
	
	this->SetSizer( bSizer1 );
	this->Layout();
	m_main_menubar = new wxMenuBar( 0 );
	m_file_menu = new wxMenu();
	wxMenuItem* m_exit_menu_item;
	m_exit_menu_item = new wxMenuItem( m_file_menu, wxID_ANY, wxString( _("&Exit") ) + wxT('\t') + wxT("Alt+F4"), wxEmptyString, wxITEM_NORMAL );
	m_file_menu->Append( m_exit_menu_item );
	
	m_main_menubar->Append( m_file_menu, _("&File") ); 
	
	m_help_menu = new wxMenu();
	wxMenuItem* m_about_menu_item;
	m_about_menu_item = new wxMenuItem( m_help_menu, wxID_ANY, wxString( _("&About") ) + wxT('\t') + wxT("F1"), wxEmptyString, wxITEM_NORMAL );
	m_help_menu->Append( m_about_menu_item );
	
	m_main_menubar->Append( m_help_menu, _("&Help") ); 
	
	this->SetMenuBar( m_main_menubar );
	
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_character_choice->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( RoHpCalculatorMainFrameBase::CharacterChoiceOnChoice ), NULL, this );
	m_paint_panel->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( RoHpCalculatorMainFrameBase::RoHpPaintPanelOnLeftDClick ), NULL, this );
	m_paint_panel->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( RoHpCalculatorMainFrameBase::RoHpPaintPanelOnLeftDown ), NULL, this );
	m_paint_panel->Connect( wxEVT_PAINT, wxPaintEventHandler( RoHpCalculatorMainFrameBase::RoHpPaintPanelOnPaint ), NULL, this );
	m_vit_choice->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( RoHpCalculatorMainFrameBase::VitChoiceOnChoice ), NULL, this );
	m_mhp_percentage_choice->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( RoHpCalculatorMainFrameBase::MhpPercentageChoiceOnChoice ), NULL, this );
	m_extra_hp_text_ctrl->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( RoHpCalculatorMainFrameBase::ExtraHpTextCtrlOnText ), NULL, this );
	m_extra_hp_text_ctrl->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( RoHpCalculatorMainFrameBase::ExtraHpTextCtrlOnTextEnter ), NULL, this );
	m_extra_hp_text_ctrl->Connect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( RoHpCalculatorMainFrameBase::ExtraHpTextCtrlOnTextMaxLen ), NULL, this );
	this->Connect( m_exit_menu_item->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( RoHpCalculatorMainFrameBase::ExitMenuItemOnMenuSelection ) );
	this->Connect( m_about_menu_item->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( RoHpCalculatorMainFrameBase::AboutMenuItemOnMenuSelection ) );
}

RoHpCalculatorMainFrameBase::~RoHpCalculatorMainFrameBase()
{
	// Disconnect Events
	m_character_choice->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( RoHpCalculatorMainFrameBase::CharacterChoiceOnChoice ), NULL, this );
	m_paint_panel->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( RoHpCalculatorMainFrameBase::RoHpPaintPanelOnLeftDClick ), NULL, this );
	m_paint_panel->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( RoHpCalculatorMainFrameBase::RoHpPaintPanelOnLeftDown ), NULL, this );
	m_paint_panel->Disconnect( wxEVT_PAINT, wxPaintEventHandler( RoHpCalculatorMainFrameBase::RoHpPaintPanelOnPaint ), NULL, this );
	m_vit_choice->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( RoHpCalculatorMainFrameBase::VitChoiceOnChoice ), NULL, this );
	m_mhp_percentage_choice->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( RoHpCalculatorMainFrameBase::MhpPercentageChoiceOnChoice ), NULL, this );
	m_extra_hp_text_ctrl->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( RoHpCalculatorMainFrameBase::ExtraHpTextCtrlOnText ), NULL, this );
	m_extra_hp_text_ctrl->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( RoHpCalculatorMainFrameBase::ExtraHpTextCtrlOnTextEnter ), NULL, this );
	m_extra_hp_text_ctrl->Disconnect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( RoHpCalculatorMainFrameBase::ExtraHpTextCtrlOnTextMaxLen ), NULL, this );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( RoHpCalculatorMainFrameBase::ExitMenuItemOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( RoHpCalculatorMainFrameBase::AboutMenuItemOnMenuSelection ) );
	
}
