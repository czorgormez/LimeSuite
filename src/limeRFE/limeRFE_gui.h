///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __LIMERFE_GUI_H__
#define __LIMERFE_GUI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/radiobut.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/statbox.h>
#include <wx/combobox.h>
#include <wx/button.h>
#include <wx/choice.h>
#include <wx/stattext.h>
#include <wx/checkbox.h>
#include <wx/radiobox.h>
#include <wx/tglbtn.h>
#include <wx/textctrl.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class limeRFE_view
///////////////////////////////////////////////////////////////////////////////
class limeRFE_view : public wxFrame 
{
	private:
	
	protected:
		wxMenuBar* mbar;
		wxMenu* mFile;
		wxMenu* mView;
		wxPanel* pnlMain;
		wxPanel* pnlComm;
		wxRadioButton* rbI2C;
		wxRadioButton* rbUSB;
		wxComboBox* cmbbPorts;
		wxButton* btnRefreshPorts;
		wxButton* btnOpenPort;
		wxButton* btnClosePort;
		wxButton* btnOpen;
		wxButton* btnSave;
		wxButton* btnReset;
		wxButton* btnBoard2GUI;
		wxPanel* pnlConfiguration;
		wxPanel* m_panel17;
		wxChoice* cTypeRX;
		wxChoice* cChannelRX;
		wxStaticText* m_staticText261;
		wxChoice* cPortRX;
		wxStaticText* m_staticText9;
		wxChoice* cAttenuation;
		wxCheckBox* cbNotch;
		wxPanel* m_panel171;
		wxCheckBox* cbTXasRX;
		wxChoice* cTypeTX;
		wxChoice* cChannelTX;
		wxStaticText* m_staticText26;
		wxChoice* cPortTX;
		wxPanel* pnlSWR;
		wxCheckBox* cbEnableSWR;
		wxRadioBox* rbSWRsource;
		wxPanel* pnlTXRX;
		wxToggleButton* tbtnTXRX;
		wxPanel* pnlTXRXEN;
		wxToggleButton* tbtnRX;
		wxToggleButton* tbtnTX;
		wxButton* btnConfigure;
		wxPanel* pnlTXRXMode;
		wxStaticText* txtTXRX;
		wxPanel* pnlTXRXModeEN;
		wxStaticText* txtTXRXEN;
		wxPanel* pnlPowerMeter;
		wxPanel* m_panel16;
		wxButton* btnReadADC;
		wxButton* btnCalibrate;
		wxPanel* pnlADC1;
		wxStaticText* m_staticText13;
		wxStaticText* txtADC1;
		wxStaticText* m_staticText10;
		wxStaticText* txtPFWD_dBm;
		wxStaticText* m_staticText12;
		wxStaticText* txtPFWD_W;
		wxStaticText* m_staticText16;
		wxStaticText* m_staticText1022;
		wxStaticText* m_staticText102;
		wxTextCtrl* tcPowerCalibrate;
		wxStaticText* m_staticText122;
		wxPanel* pnlADC2;
		wxStaticText* m_staticText131;
		wxStaticText* txtADC2;
		wxStaticText* m_staticText101;
		wxStaticText* txtRL_dB;
		wxStaticText* m_staticText121;
		wxStaticText* m_staticText31;
		wxStaticText* txtSWR;
		wxStaticText* m_staticText10221;
		wxStaticText* m_staticText1021;
		wxTextCtrl* tcRLCalibrate;
		wxStaticText* m_staticText1221;
		wxTextCtrl* txtMessageField;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnQuit( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnmiPowerMeter( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnrbI2CrbUSB( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnbtnRefreshPorts( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnbtnOpenPort( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnbtnClosePort( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnbtnOpen( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnbtnSave( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnbtnReset( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnbtnBoard2GUI( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnEraseBackground_pnlConfiguration( wxEraseEvent& event ) { event.Skip(); }
		virtual void OncTypeRX( wxCommandEvent& event ) { event.Skip(); }
		virtual void OncChannelRX( wxCommandEvent& event ) { event.Skip(); }
		virtual void OncPortRX( wxCommandEvent& event ) { event.Skip(); }
		virtual void OncAttenuation( wxCommandEvent& event ) { event.Skip(); }
		virtual void OncbNotch( wxCommandEvent& event ) { event.Skip(); }
		virtual void OncbTXasRX( wxCommandEvent& event ) { event.Skip(); }
		virtual void OncTypeTX( wxCommandEvent& event ) { event.Skip(); }
		virtual void OncChannelTX( wxCommandEvent& event ) { event.Skip(); }
		virtual void OncPortTX( wxCommandEvent& event ) { event.Skip(); }
		virtual void OncbEnableSWR( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnrbSWRsource( wxCommandEvent& event ) { event.Skip(); }
		virtual void OntbtnTXRX( wxCommandEvent& event ) { event.Skip(); }
		virtual void OntbtnRXEN( wxCommandEvent& event ) { event.Skip(); }
		virtual void OntbtnTXEN( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnbtnConfigure( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnbtnReadADC( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnbtnCalibrate( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		wxMenuItem* miPowerMeter;
		
		limeRFE_view( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("LimeRFE Control"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxCAPTION|wxCLOSE_BOX|wxMINIMIZE_BOX|wxSYSTEM_MENU|wxTAB_TRAVERSAL );
		
		~limeRFE_view();
	
};

#endif //__LIMERFE_GUI_H__
