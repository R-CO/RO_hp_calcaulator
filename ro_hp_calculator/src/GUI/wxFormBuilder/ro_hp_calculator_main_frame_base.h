///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __RO_HP_CALCULATOR_MAIN_FRAME_BASE_H__
#define __RO_HP_CALCULATOR_MAIN_FRAME_BASE_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/choice.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

namespace rco
{
	///////////////////////////////////////////////////////////////////////////////
	/// Class RoHpCalculatorMainFrameBase
	///////////////////////////////////////////////////////////////////////////////
	class RoHpCalculatorMainFrameBase : public wxFrame 
	{
		private:
		
		protected:
			wxPanel* m_character_panel;
			wxChoice* m_character_choice;
			wxPanel* m_paint_panel;
			wxPanel* m_parameter_panel;
			wxStaticText* m_vit_static_text;
			wxChoice* m_vit_choice;
			wxStaticText* m_mhp_percentage_static_text;
			wxChoice* m_mhp_percentage_choice;
			wxStaticText* m_added_value_static_text;
			wxTextCtrl* m_extra_hp_text_ctrl;
			wxPanel* m_result_panel;
			wxStaticText* m_mhp_static_text;
			wxTextCtrl* m_final_mhp_text_ctrl;
			wxMenuBar* m_main_menubar;
			wxMenu* m_file_menu;
			wxMenu* m_help_menu;
			
			// Virtual event handlers, overide them in your derived class
			virtual void CharacterChoiceOnChoice( wxCommandEvent& event ) { event.Skip(); }
			virtual void PaintPanelOnLeftDClick( wxMouseEvent& event ) { event.Skip(); }
			virtual void PaintPanelOnMouseWheel( wxMouseEvent& event ) { event.Skip(); }
			virtual void VitChoiceOnChoice( wxCommandEvent& event ) { event.Skip(); }
			virtual void MhpPercentageChoiceOnChoice( wxCommandEvent& event ) { event.Skip(); }
			virtual void ExtraHpTextCtrlOnText( wxCommandEvent& event ) { event.Skip(); }
			virtual void ExtraHpTextCtrlOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
			virtual void ExtraHpTextCtrlOnTextMaxLen( wxCommandEvent& event ) { event.Skip(); }
			virtual void ExitMenuItemOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
			virtual void AboutMenuItemOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
			
		
		public:
			
			RoHpCalculatorMainFrameBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("RO hp calculator by R-CO"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 620,650 ), long style = wxCAPTION|wxCLOSE_BOX|wxMINIMIZE_BOX|wxSYSTEM_MENU|wxTAB_TRAVERSAL );
			
			~RoHpCalculatorMainFrameBase();
		
	};
	
} // namespace rco

#endif //__RO_HP_CALCULATOR_MAIN_FRAME_BASE_H__
