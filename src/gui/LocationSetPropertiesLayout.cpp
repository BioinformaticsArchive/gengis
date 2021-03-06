///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep  8 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "../core/Precompiled.hpp"

#include "LocationSetPropertiesLayout.h"

///////////////////////////////////////////////////////////////////////////
using namespace GenGIS;

LocationSetPropertiesLayout::LocationSetPropertiesLayout( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* m_sizerMain;
	m_sizerMain = new wxBoxSizer( wxVERTICAL );
	
	m_notebook = new wxNotebook( this, ID_NOTEBOOK, wxDefaultPosition, wxDefaultSize, wxNB_TOP, wxT("Location_Set") );
	m_pnlGeneral = new wxPanel( m_notebook, ID_PNL_GENERAL, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, wxT("General") );
	wxBoxSizer* m_sizerGeneral;
	m_sizerGeneral = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* m_sizerLayerName;
	m_sizerLayerName = new wxBoxSizer( wxHORIZONTAL );
	
	m_lblLayerName = new wxStaticText( m_pnlGeneral, ID_LBL_LAYER_NAME, wxT("Layer name:"), wxDefaultPosition, wxSize( 70,-1 ), 0 );
	m_lblLayerName->Wrap( -1 );
	m_sizerLayerName->Add( m_lblLayerName, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_txtLayerName = new wxTextCtrl( m_pnlGeneral, ID_TXT_LAYER_NAME, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_sizerLayerName->Add( m_txtLayerName, 100, wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 5 );
	
	m_sizerGeneral->Add( m_sizerLayerName, 0, wxEXPAND, 5 );
	
	wxBoxSizer* m_sizerDescription;
	m_sizerDescription = new wxBoxSizer( wxHORIZONTAL );
	
	m_lblLayerName1 = new wxStaticText( m_pnlGeneral, ID_LBL_LAYER_NAME, wxT("Description:"), wxDefaultPosition, wxSize( 70,-1 ), 0 );
	m_lblLayerName1->Wrap( -1 );
	m_sizerDescription->Add( m_lblLayerName1, 0, wxALL, 5 );
	
	m_txtLayerDescription = new wxTextCtrl( m_pnlGeneral, ID_TXT_LAYER_DESCRIPTION, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE );
	m_sizerDescription->Add( m_txtLayerDescription, 100, wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 5 );
	
	m_sizerGeneral->Add( m_sizerDescription, 1, wxEXPAND, 5 );
	
	wxBoxSizer* m_sizerAuthours;
	m_sizerAuthours = new wxBoxSizer( wxHORIZONTAL );
	
	m_lblAuthours = new wxStaticText( m_pnlGeneral, ID_LBL_AUTHORS, wxT("Authors:"), wxDefaultPosition, wxSize( 70,-1 ), 0 );
	m_lblAuthours->Wrap( -1 );
	m_sizerAuthours->Add( m_lblAuthours, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_txtAuthours = new wxTextCtrl( m_pnlGeneral, ID_TXT_AUTHOURS, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_sizerAuthours->Add( m_txtAuthours, 100, wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 5 );
	
	m_sizerGeneral->Add( m_sizerAuthours, 0, wxEXPAND, 5 );
	
	wxBoxSizer* m_sizerVisible;
	m_sizerVisible = new wxBoxSizer( wxHORIZONTAL );
	
	
	m_sizerVisible->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_sizerGeneral->Add( m_sizerVisible, 0, wxEXPAND, 5 );
	
	m_pnlGeneral->SetSizer( m_sizerGeneral );
	m_pnlGeneral->Layout();
	m_sizerGeneral->Fit( m_pnlGeneral );
	m_notebook->AddPage( m_pnlGeneral, wxT("General"), false );
	m_pnlLocations = new wxPanel( m_notebook, ID_PNL_LOCATIONS, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, wxT("Location_Set") );
	wxBoxSizer* m_sizerLocations;
	m_sizerLocations = new wxBoxSizer( wxVERTICAL );
	
	m_notebookLocationSet = new wxNotebook( m_pnlLocations, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_pnlLocationSetColour = new wxPanel( m_notebookLocationSet, ID_PANEL_LOCATION_SET_COLOUR, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, wxT("Colour") );
	wxBoxSizer* m_sizerColourVert;
	m_sizerColourVert = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* m_sizerLocationSetColour;
	m_sizerLocationSetColour = new wxStaticBoxSizer( new wxStaticBox( m_pnlLocationSetColour, ID_SIZER_LOCATION_SET_COLOUR, wxT("Colour Properties") ), wxVERTICAL );
	
	wxBoxSizer* m_sizerColourUniform;
	m_sizerColourUniform = new wxBoxSizer( wxHORIZONTAL );
	
	m_chkUniformColour = new wxCheckBox( m_pnlLocationSetColour, ID_CHK_UNIFORM_COLOUR, wxT("Uniform colour"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_chkUniformColour->SetValue(true); 
	m_sizerColourUniform->Add( m_chkUniformColour, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_colourUniform = new wxColourPickerCtrl( m_pnlLocationSetColour, ID_COLOUR_PICKER_UNIFORM_COLOUR, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	m_sizerColourUniform->Add( m_colourUniform, 0, wxALL, 5 );
	
	
	m_sizerColourUniform->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_sizerLocationSetColour->Add( m_sizerColourUniform, 0, wxEXPAND, 5 );
	
	m_staticline5 = new wxStaticLine( m_pnlLocationSetColour, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	m_sizerLocationSetColour->Add( m_staticline5, 0, wxEXPAND | wxALL, 5 );
	
	wxFlexGridSizer* m_sizerLocationSetColourProperties;
	m_sizerLocationSetColourProperties = new wxFlexGridSizer( 2, 2, 0, 0 );
	m_sizerLocationSetColourProperties->SetFlexibleDirection( wxBOTH );
	m_sizerLocationSetColourProperties->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_lblColourField = new wxStaticText( m_pnlLocationSetColour, ID_LBL_LABEL_COLOUR_FIELD, wxT("Field to chart:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblColourField->Wrap( -1 );
	m_lblColourField->SetMinSize( wxSize( 70,-1 ) );
	
	m_sizerLocationSetColourProperties->Add( m_lblColourField, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_cboColourField = new wxComboBox( m_pnlLocationSetColour, ID_CBO_COLOUR_FIELD, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY|wxCB_SORT ); 
	m_cboColourField->Enable( false );
	
	m_sizerLocationSetColourProperties->Add( m_cboColourField, 0, wxALL|wxEXPAND, 5 );
	
	m_lblColourMap = new wxStaticText( m_pnlLocationSetColour, ID_LBL_COLOUR_MAP, wxT("Colour map:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblColourMap->Wrap( -1 );
	m_sizerLocationSetColourProperties->Add( m_lblColourMap, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_cboColourMap = new wxComboBox( m_pnlLocationSetColour, ID_CBO_COLOUR_MAP, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY|wxCB_SORT ); 
	m_cboColourMap->Enable( false );
	
	m_sizerLocationSetColourProperties->Add( m_cboColourMap, 0, wxALL|wxEXPAND, 5 );
	
	m_sizerLocationSetColour->Add( m_sizerLocationSetColourProperties, 0, wxEXPAND, 5 );
	
	wxBoxSizer* m_sizerWindowColour;
	m_sizerWindowColour = new wxBoxSizer( wxHORIZONTAL );
	
	m_scrolledWindowColour = new wxScrolledWindow( m_pnlLocationSetColour, ID_SCROLLED_WINDOW_COLOUR, wxDefaultPosition, wxSize( -1,-1 ), wxHSCROLL|wxSTATIC_BORDER|wxVSCROLL );
	m_scrolledWindowColour->SetScrollRate( 5, 5 );
	m_scrolledWindowColour->Enable( false );
	m_scrolledWindowColour->SetMinSize( wxSize( -1,250 ) );
	
	m_sizerWindowColour->Add( m_scrolledWindowColour, 10, wxALL|wxEXPAND, 5 );
	
	m_sizerLocationSetColour->Add( m_sizerWindowColour, 1, wxEXPAND, 5 );
	
	m_sizerColourVert->Add( m_sizerLocationSetColour, 1, wxALL|wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer9;
	sbSizer9 = new wxStaticBoxSizer( new wxStaticBox( m_pnlLocationSetColour, wxID_ANY, wxT("Borders") ), wxVERTICAL );
	
	wxBoxSizer* m_sizerBorders;
	m_sizerBorders = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText28 = new wxStaticText( m_pnlLocationSetColour, wxID_ANY, wxT("Size:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText28->Wrap( -1 );
	m_sizerBorders->Add( m_staticText28, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_spinBorderSize = new wxSpinCtrl( m_pnlLocationSetColour, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100, 0 );
	m_sizerBorders->Add( m_spinBorderSize, 0, wxALL, 5 );
	
	m_colourBorders = new wxColourPickerCtrl( m_pnlLocationSetColour, ID_COLOUR_PICKER_BORDERS, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	m_sizerBorders->Add( m_colourBorders, 0, wxALL, 5 );
	
	sbSizer9->Add( m_sizerBorders, 0, wxEXPAND, 5 );
	
	m_sizerColourVert->Add( sbSizer9, 0, wxALL|wxEXPAND, 5 );
	
	m_pnlLocationSetColour->SetSizer( m_sizerColourVert );
	m_pnlLocationSetColour->Layout();
	m_sizerColourVert->Fit( m_pnlLocationSetColour );
	m_notebookLocationSet->AddPage( m_pnlLocationSetColour, wxT("Colour"), true );
	m_pnlLocationSetShape = new wxPanel( m_notebookLocationSet, ID_PANEL_LOCATION_SET_SHAPE, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, wxT("Shape") );
	wxBoxSizer* m_sizerShapeVert;
	m_sizerShapeVert = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* m_sizerLocationSetShape;
	m_sizerLocationSetShape = new wxStaticBoxSizer( new wxStaticBox( m_pnlLocationSetShape, ID_SIZER_LOCATION_SET_SHAPE, wxT("Shape Properties") ), wxVERTICAL );
	
	wxBoxSizer* m_sizerShapeUniform;
	m_sizerShapeUniform = new wxBoxSizer( wxHORIZONTAL );
	
	m_chkUniformShape = new wxCheckBox( m_pnlLocationSetShape, ID_CHK_UNIFORM_SHAPE, wxT("Uniform shape"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_chkUniformShape->SetValue(true); 
	m_sizerShapeUniform->Add( m_chkUniformShape, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_cboUniformShape = new wxComboBox( m_pnlLocationSetShape, ID_CBO_UNIFORM_SHAPE, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY|wxCB_SORT ); 
	m_sizerShapeUniform->Add( m_cboUniformShape, 0, wxALL, 5 );
	
	
	m_sizerShapeUniform->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_sizerLocationSetShape->Add( m_sizerShapeUniform, 0, wxEXPAND, 5 );
	
	m_staticline4 = new wxStaticLine( m_pnlLocationSetShape, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	m_sizerLocationSetShape->Add( m_staticline4, 0, wxEXPAND | wxALL, 5 );
	
	wxFlexGridSizer* m_sizerLocationSetShapeProperties;
	m_sizerLocationSetShapeProperties = new wxFlexGridSizer( 2, 2, 0, 0 );
	m_sizerLocationSetShapeProperties->SetFlexibleDirection( wxBOTH );
	m_sizerLocationSetShapeProperties->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_lblShapeField = new wxStaticText( m_pnlLocationSetShape, ID_LBL_LABEL_SHAPE_FIELD, wxT("Field to chart:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblShapeField->Wrap( -1 );
	m_sizerLocationSetShapeProperties->Add( m_lblShapeField, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_cboShapeField = new wxComboBox( m_pnlLocationSetShape, ID_CBO_SHAPE_FIELD, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY|wxCB_SORT ); 
	m_cboShapeField->Enable( false );
	
	m_sizerLocationSetShapeProperties->Add( m_cboShapeField, 0, wxALL|wxEXPAND, 5 );
	
	m_lblShapeMap = new wxStaticText( m_pnlLocationSetShape, ID_LBL_SHAPE_MAP, wxT("Shape map:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblShapeMap->Wrap( -1 );
	m_sizerLocationSetShapeProperties->Add( m_lblShapeMap, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_cboShapeMap = new wxComboBox( m_pnlLocationSetShape, ID_CBO_SHAPE_MAP, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY|wxCB_SORT ); 
	m_cboShapeMap->Enable( false );
	
	m_sizerLocationSetShapeProperties->Add( m_cboShapeMap, 0, wxALL|wxEXPAND, 5 );
	
	m_sizerLocationSetShape->Add( m_sizerLocationSetShapeProperties, 0, wxEXPAND, 5 );
	
	wxBoxSizer* m_sizerShapeWindow;
	m_sizerShapeWindow = new wxBoxSizer( wxHORIZONTAL );
	
	m_scrolledWindowShape = new wxScrolledWindow( m_pnlLocationSetShape, ID_SCROLLED_WINDOW_SHAPE, wxDefaultPosition, wxSize( -1,-1 ), wxHSCROLL|wxSTATIC_BORDER|wxVSCROLL );
	m_scrolledWindowShape->SetScrollRate( 5, 5 );
	m_scrolledWindowShape->Enable( false );
	
	m_sizerShapeWindow->Add( m_scrolledWindowShape, 10, wxALL|wxEXPAND, 5 );
	
	m_sizerLocationSetShape->Add( m_sizerShapeWindow, 1, wxEXPAND, 5 );
	
	m_sizerShapeVert->Add( m_sizerLocationSetShape, 1, wxALL|wxEXPAND, 5 );
	
	m_pnlLocationSetShape->SetSizer( m_sizerShapeVert );
	m_pnlLocationSetShape->Layout();
	m_sizerShapeVert->Fit( m_pnlLocationSetShape );
	m_notebookLocationSet->AddPage( m_pnlLocationSetShape, wxT("Shape"), false );
	m_pnlLocationSetSize = new wxPanel( m_notebookLocationSet, ID_PANEL_LOCATION_SET_SIZE, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, wxT("Size") );
	wxBoxSizer* m_sizerSizeVert;
	m_sizerSizeVert = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* m_sizerLocationSetSize;
	m_sizerLocationSetSize = new wxStaticBoxSizer( new wxStaticBox( m_pnlLocationSetSize, ID_SIZER_LOCATION_SET_SIZE, wxT("Size Properties") ), wxVERTICAL );
	
	wxBoxSizer* m_sizerSizetLabelField;
	m_sizerSizetLabelField = new wxBoxSizer( wxHORIZONTAL );
	
	m_lblSizeField = new wxStaticText( m_pnlLocationSetSize, ID_LBL_LABEL_SIZE_FIELD, wxT("Field to chart:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblSizeField->Wrap( -1 );
	m_sizerSizetLabelField->Add( m_lblSizeField, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_cboSizeField = new wxComboBox( m_pnlLocationSetSize, ID_CBO_SIZE_FIELD, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY|wxCB_SORT ); 
	m_sizerSizetLabelField->Add( m_cboSizeField, 0, wxALL|wxEXPAND, 5 );
	
	m_sizerLocationSetSize->Add( m_sizerSizetLabelField, 0, wxEXPAND, 5 );
	
	wxBoxSizer* m_sizerLocationSetColourMap11;
	m_sizerLocationSetColourMap11 = new wxBoxSizer( wxHORIZONTAL );
	
	
	m_sizerLocationSetColourMap11->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_lblMinLocationSize = new wxStaticText( m_pnlLocationSetSize, ID_LBL_MIN_SIZE, wxT("Min:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblMinLocationSize->Wrap( -1 );
	m_sizerLocationSetColourMap11->Add( m_lblMinLocationSize, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_txtMinLocationSize = new wxTextCtrl( m_pnlLocationSetSize, wxID_ANY, wxT("5"), wxDefaultPosition, wxDefaultSize, 0 );
	m_sizerLocationSetColourMap11->Add( m_txtMinLocationSize, 0, wxALL, 5 );
	
	m_lnlMaxLocationSize = new wxStaticText( m_pnlLocationSetSize, wxID_ANY, wxT("Max:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lnlMaxLocationSize->Wrap( -1 );
	m_sizerLocationSetColourMap11->Add( m_lnlMaxLocationSize, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_txtMaxLocationSize = new wxTextCtrl( m_pnlLocationSetSize, wxID_ANY, wxT("5"), wxDefaultPosition, wxDefaultSize, 0 );
	m_sizerLocationSetColourMap11->Add( m_txtMaxLocationSize, 0, wxALL, 5 );
	
	m_sizerLocationSetSize->Add( m_sizerLocationSetColourMap11, 0, wxEXPAND, 5 );
	
	m_sizerSizeVert->Add( m_sizerLocationSetSize, 0, wxALL|wxEXPAND, 5 );
	
	m_pnlLocationSetSize->SetSizer( m_sizerSizeVert );
	m_pnlLocationSetSize->Layout();
	m_sizerSizeVert->Fit( m_pnlLocationSetSize );
	m_notebookLocationSet->AddPage( m_pnlLocationSetSize, wxT("Size"), false );
	m_pnlLocationSetLabel = new wxPanel( m_notebookLocationSet, ID_PANEL_LOCATION_SET_LABEL, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, wxT("Label") );
	wxBoxSizer* m_sizerLabelVert;
	m_sizerLabelVert = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* m_sizerLabelProp;
	m_sizerLabelProp = new wxStaticBoxSizer( new wxStaticBox( m_pnlLocationSetLabel, wxID_ANY, wxT("Label Properties") ), wxVERTICAL );
	
	wxBoxSizer* m_sizerLabelColour;
	m_sizerLabelColour = new wxBoxSizer( wxVERTICAL );
	
	m_chkShowLabels = new wxCheckBox( m_pnlLocationSetLabel, ID_CHECK_SHOW_LABELS, wxT("Show labels"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_sizerLabelColour->Add( m_chkShowLabels, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_chkBindToCharts = new wxCheckBox( m_pnlLocationSetLabel, ID_CHECK_SHOW_LABELS, wxT("Bind labels to charts"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_sizerLabelColour->Add( m_chkBindToCharts, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_sizerLabelProp->Add( m_sizerLabelColour, 0, wxALIGN_RIGHT|wxEXPAND, 5 );
	
	m_staticline6 = new wxStaticLine( m_pnlLocationSetLabel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	m_sizerLabelProp->Add( m_staticline6, 0, wxEXPAND | wxALL, 5 );
	
	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 5, 2, 0, 0 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_lblLabelField = new wxStaticText( m_pnlLocationSetLabel, ID_LBL_LABEL_FIELD, wxT("Label field:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblLabelField->Wrap( -1 );
	fgSizer1->Add( m_lblLabelField, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_cboLabelField = new wxComboBox( m_pnlLocationSetLabel, ID_CBO_LABEL_FIELD, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY|wxCB_SORT ); 
	fgSizer1->Add( m_cboLabelField, 0, wxALL|wxEXPAND, 5 );
	
	m_lblFontSize = new wxStaticText( m_pnlLocationSetLabel, ID_LBL_FONT_SIZE, wxT("Label size:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblFontSize->Wrap( -1 );
	fgSizer1->Add( m_lblFontSize, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_spinFontSize = new wxSpinCtrl( m_pnlLocationSetLabel, ID_SPIN_FONT_SIZE, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, -1, 100, 10 );
	fgSizer1->Add( m_spinFontSize, 0, wxALL, 5 );
	
	m_lblFontPosition = new wxStaticText( m_pnlLocationSetLabel, ID_LBL_FONT_SIZE, wxT("Label position:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblFontPosition->Wrap( -1 );
	fgSizer1->Add( m_lblFontPosition, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_cboLabelPosition = new wxComboBox( m_pnlLocationSetLabel, wxID_ANY, wxT("Right"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY|wxCB_SORT );
	m_cboLabelPosition->Append( wxT("Right") );
	m_cboLabelPosition->Append( wxT("Left") );
	m_cboLabelPosition->Append( wxT("Top") );
	m_cboLabelPosition->Append( wxT("Bottom") );
	fgSizer1->Add( m_cboLabelPosition, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText27 = new wxStaticText( m_pnlLocationSetLabel, wxID_ANY, wxT("Label style:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	fgSizer1->Add( m_staticText27, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_cboLabelStyle = new wxComboBox( m_pnlLocationSetLabel, wxID_ANY, wxT("\"Billboard\""), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY );
	m_cboLabelStyle->Append( wxT("Billboard") );
	m_cboLabelStyle->Append( wxT("Dynamic") );
	fgSizer1->Add( m_cboLabelStyle, 0, wxALL, 5 );
	
	m_lblLabelColour = new wxStaticText( m_pnlLocationSetLabel, ID_LBL_LABEL_COLOUR, wxT("Label colour:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblLabelColour->Wrap( -1 );
	fgSizer1->Add( m_lblLabelColour, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_colourLabel = new wxColourPickerCtrl( m_pnlLocationSetLabel, ID_COLOUR_PICKER_LABEL_COLOUR, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	fgSizer1->Add( m_colourLabel, 0, wxALL, 5 );
	
	m_sizerLabelProp->Add( fgSizer1, 1, wxEXPAND, 5 );
	
	m_sizerLabelVert->Add( m_sizerLabelProp, 0, wxALL|wxEXPAND, 5 );
	
	m_pnlLocationSetLabel->SetSizer( m_sizerLabelVert );
	m_pnlLocationSetLabel->Layout();
	m_sizerLabelVert->Fit( m_pnlLocationSetLabel );
	m_notebookLocationSet->AddPage( m_pnlLocationSetLabel, wxT("Label"), false );
	
	m_sizerLocations->Add( m_notebookLocationSet, 1, wxEXPAND | wxALL, 5 );
	
	wxBoxSizer* m_sizerShowLocations;
	m_sizerShowLocations = new wxBoxSizer( wxHORIZONTAL );
	
	
	m_sizerShowLocations->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_sizerLocations->Add( m_sizerShowLocations, 0, wxEXPAND, 5 );
	
	m_pnlLocations->SetSizer( m_sizerLocations );
	m_pnlLocations->Layout();
	m_sizerLocations->Fit( m_pnlLocations );
	m_notebook->AddPage( m_pnlLocations, wxT("Location Set"), true );
	m_pnlChart = new wxPanel( m_notebook, ID_PNL_CHART, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, wxT("Charts") );
	wxBoxSizer* m_sizerLabels1;
	m_sizerLabels1 = new wxBoxSizer( wxVERTICAL );
	
	m_notebookChart = new wxNotebook( m_pnlChart, ID_NOTEBOOK_CHART, wxDefaultPosition, wxDefaultSize, 0 );
	m_pnlChartColourMap = new wxPanel( m_notebookChart, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, wxT("Colour_Map") );
	wxBoxSizer* m_sizerChartGeneral;
	m_sizerChartGeneral = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* m_sizerChartField;
	m_sizerChartField = new wxStaticBoxSizer( new wxStaticBox( m_pnlChartColourMap, wxID_ANY, wxT("Field Properties") ), wxVERTICAL );
	
	wxFlexGridSizer* m_sizerColourMapFields;
	m_sizerColourMapFields = new wxFlexGridSizer( 2, 2, 0, 0 );
	m_sizerColourMapFields->SetFlexibleDirection( wxBOTH );
	m_sizerColourMapFields->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_lblChartField = new wxStaticText( m_pnlChartColourMap, ID_LBL_LABEL_CHART_FIELD, wxT("Field to chart:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblChartField->Wrap( -1 );
	m_sizerColourMapFields->Add( m_lblChartField, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_cboChartField = new wxComboBox( m_pnlChartColourMap, ID_CBO_CHART_FIELD, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY|wxCB_SORT ); 
	m_sizerColourMapFields->Add( m_cboChartField, 0, wxALL|wxEXPAND, 5 );
	
	m_lblChartColourMap = new wxStaticText( m_pnlChartColourMap, ID_LBL_COLOUR_MAP, wxT("Colour map:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblChartColourMap->Wrap( -1 );
	m_sizerColourMapFields->Add( m_lblChartColourMap, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_cboChartColourMap = new wxComboBox( m_pnlChartColourMap, ID_CBO_CHART_COLOUR_MAP, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY|wxCB_SORT ); 
	m_sizerColourMapFields->Add( m_cboChartColourMap, 0, wxALL|wxEXPAND, 5 );
	
	m_sizerChartField->Add( m_sizerColourMapFields, 0, wxEXPAND, 5 );
	
	wxBoxSizer* m_sizerWedgeColour;
	m_sizerWedgeColour = new wxBoxSizer( wxHORIZONTAL );
	
	m_scrolledWindowChart = new wxScrolledWindow( m_pnlChartColourMap, ID_SCROLLED_WINDOW_CHART, wxDefaultPosition, wxSize( -1,-1 ), wxHSCROLL|wxSTATIC_BORDER|wxVSCROLL );
	m_scrolledWindowChart->SetScrollRate( 5, 5 );
	m_scrolledWindowChart->SetMinSize( wxSize( -1,250 ) );
	
	m_sizerWedgeColour->Add( m_scrolledWindowChart, 10, wxALL|wxEXPAND, 5 );
	
	m_sizerChartField->Add( m_sizerWedgeColour, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer45;
	bSizer45 = new wxBoxSizer( wxHORIZONTAL );
	
	m_chkQuantitative = new wxCheckBox( m_pnlChartColourMap, wxID_ANY, wxT("Create quantitative charts using count data in field:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer45->Add( m_chkQuantitative, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_cboQuantitativeField = new wxComboBox( m_pnlChartColourMap, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY|wxCB_SORT ); 
	bSizer45->Add( m_cboQuantitativeField, 0, wxALL, 5 );
	
	m_sizerChartField->Add( bSizer45, 0, wxEXPAND, 5 );
	
	m_sizerChartGeneral->Add( m_sizerChartField, 1, wxALL|wxEXPAND, 5 );
	
	m_pnlChartColourMap->SetSizer( m_sizerChartGeneral );
	m_pnlChartColourMap->Layout();
	m_sizerChartGeneral->Fit( m_pnlChartColourMap );
	m_notebookChart->AddPage( m_pnlChartColourMap, wxT("Colour Map"), true );
	m_pnlChartSymbology = new wxPanel( m_notebookChart, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, wxT("Symbology") );
	wxBoxSizer* m_sizerChartSymbology;
	m_sizerChartSymbology = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* m_sizerChartProperties;
	m_sizerChartProperties = new wxStaticBoxSizer( new wxStaticBox( m_pnlChartSymbology, wxID_ANY, wxT("Chart Properties") ), wxVERTICAL );
	
	wxBoxSizer* m_sizerChartType;
	m_sizerChartType = new wxBoxSizer( wxHORIZONTAL );
	
	m_lblChartType = new wxStaticText( m_pnlChartSymbology, ID_LBL_LABEL_COLOUR, wxT("Chart type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblChartType->Wrap( -1 );
	m_sizerChartType->Add( m_lblChartType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_cboChartType = new wxComboBox( m_pnlChartSymbology, ID_CBO_CHART_TYPE, wxT("3D Pie Chart"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY|wxCB_SORT );
	m_cboChartType->Append( wxT("Bar Chart") );
	m_cboChartType->Append( wxT("Pie Chart") );
	m_sizerChartType->Add( m_cboChartType, 0, wxALL, 4 );
	
	m_chkChart2D = new wxCheckBox( m_pnlChartSymbology, wxID_ANY, wxT("Display in 2D"), wxDefaultPosition, wxDefaultSize, 0 );
	m_sizerChartType->Add( m_chkChart2D, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_sizerChartProperties->Add( m_sizerChartType, 0, wxEXPAND, 5 );
	
	m_staticline2 = new wxStaticLine( m_pnlChartSymbology, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	m_sizerChartProperties->Add( m_staticline2, 0, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	wxBoxSizer* m_sizerChartSize;
	m_sizerChartSize = new wxBoxSizer( wxHORIZONTAL );
	
	m_lblChartWidth = new wxStaticText( m_pnlChartSymbology, wxID_ANY, wxT("Width:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblChartWidth->Wrap( -1 );
	m_sizerChartSize->Add( m_lblChartWidth, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_spinChartWidth = new wxSpinCtrl( m_pnlChartSymbology, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 100, 20 );
	m_sizerChartSize->Add( m_spinChartWidth, 0, wxALL, 4 );
	
	m_lblChartHeight = new wxStaticText( m_pnlChartSymbology, wxID_ANY, wxT("Height:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblChartHeight->Wrap( -1 );
	m_sizerChartSize->Add( m_lblChartHeight, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_spinChartHeight = new wxSpinCtrl( m_pnlChartSymbology, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 100, 20 );
	m_sizerChartSize->Add( m_spinChartHeight, 0, wxALL, 5 );
	
	m_sizerChartProperties->Add( m_sizerChartSize, 0, wxEXPAND, 5 );
	
	wxBoxSizer* m_sizerChartSizeBySeqCount;
	m_sizerChartSizeBySeqCount = new wxBoxSizer( wxVERTICAL );
	
	m_chkChartSizeBySeqCount = new wxCheckBox( m_pnlChartSymbology, ID_CHK_CHART_SIZE_BY_SEQ_COUNT, wxT("Set chart size proportional to number of sequences"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_sizerChartSizeBySeqCount->Add( m_chkChartSizeBySeqCount, 0, wxALL, 4 );
	
	m_sizerChartProperties->Add( m_sizerChartSizeBySeqCount, 0, wxEXPAND, 5 );
	
	wxBoxSizer* m_sizerChartSizeBounds;
	m_sizerChartSizeBounds = new wxBoxSizer( wxHORIZONTAL );
	
	m_chartMinSize = new wxStaticText( m_pnlChartSymbology, IDLBL_CHART_MIN_SIZE, wxT("Min Size:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_chartMinSize->Wrap( -1 );
	m_sizerChartSizeBounds->Add( m_chartMinSize, 0, wxALL|wxALIGN_CENTER_VERTICAL, 4 );
	
	m_txtChartMinSize = new wxTextCtrl( m_pnlChartSymbology, ID_TXT_CHART_MIN_SIZE, wxT("10"), wxDefaultPosition, wxDefaultSize, 0 );
	m_txtChartMinSize->Enable( false );
	
	m_sizerChartSizeBounds->Add( m_txtChartMinSize, 0, wxALL, 4 );
	
	m_lblChartMaxSize = new wxStaticText( m_pnlChartSymbology, wxID_ANY, wxT("Max Size:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblChartMaxSize->Wrap( -1 );
	m_sizerChartSizeBounds->Add( m_lblChartMaxSize, 0, wxALL|wxALIGN_CENTER_VERTICAL, 4 );
	
	m_txtChartMaxSize = new wxTextCtrl( m_pnlChartSymbology, ID_TXT_CHART_MAX_SIZE, wxT("30"), wxDefaultPosition, wxDefaultSize, 0 );
	m_txtChartMaxSize->Enable( false );
	
	m_sizerChartSizeBounds->Add( m_txtChartMaxSize, 0, wxALL, 4 );
	
	m_sizerChartProperties->Add( m_sizerChartSizeBounds, 0, wxEXPAND, 5 );
	
	m_staticline1 = new wxStaticLine( m_pnlChartSymbology, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	m_sizerChartProperties->Add( m_staticline1, 0, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	wxBoxSizer* m_sizerChartBorder;
	m_sizerChartBorder = new wxBoxSizer( wxHORIZONTAL );
	
	m_lblChartBorderSize = new wxStaticText( m_pnlChartSymbology, ID_LBL_CHART_BORDER_SIZE, wxT("Chart border size:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblChartBorderSize->Wrap( -1 );
	m_sizerChartBorder->Add( m_lblChartBorderSize, 0, wxALL|wxALIGN_CENTER_VERTICAL, 4 );
	
	m_spinChartBorderSize = new wxSpinCtrl( m_pnlChartSymbology, ID_SPIN_CHART_BORDER_SIZE, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 1000, 1 );
	m_sizerChartBorder->Add( m_spinChartBorderSize, 0, wxALIGN_CENTER_VERTICAL|wxALL, 4 );
	
	m_colourChartBorder = new wxColourPickerCtrl( m_pnlChartSymbology, ID_COLOUR_PICKER_CHART_BORDER, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	m_sizerChartBorder->Add( m_colourChartBorder, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_chkAssignLocationColour = new wxCheckBox( m_pnlChartSymbology, wxID_ANY, wxT("Assign location colour to border"), wxDefaultPosition, wxDefaultSize, 0 );
	m_sizerChartBorder->Add( m_chkAssignLocationColour, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_sizerChartProperties->Add( m_sizerChartBorder, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer43;
	bSizer43 = new wxBoxSizer( wxHORIZONTAL );
	
	m_chkBottomBorder = new wxCheckBox( m_pnlChartSymbology, wxID_ANY, wxT("Bottom border"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer43->Add( m_chkBottomBorder, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_chkLeftBorder = new wxCheckBox( m_pnlChartSymbology, wxID_ANY, wxT("Left border"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer43->Add( m_chkLeftBorder, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_chkTopBorder = new wxCheckBox( m_pnlChartSymbology, wxID_ANY, wxT("Top border"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer43->Add( m_chkTopBorder, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_chkRightBorder = new wxCheckBox( m_pnlChartSymbology, wxID_ANY, wxT("Right border"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer43->Add( m_chkRightBorder, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_sizerChartProperties->Add( bSizer43, 1, wxEXPAND, 5 );
	
	wxBoxSizer* m_sizerShowWedgeBorders;
	m_sizerShowWedgeBorders = new wxBoxSizer( wxHORIZONTAL );
	
	m_chkShowElementBorders = new wxCheckBox( m_pnlChartSymbology, wxID_ANY, wxT("Show individual element borders"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_sizerShowWedgeBorders->Add( m_chkShowElementBorders, 0, wxALIGN_CENTER_VERTICAL|wxALL, 4 );
	
	m_sizerChartProperties->Add( m_sizerShowWedgeBorders, 1, wxEXPAND, 5 );
	
	m_lineAssignTaxaToOther = new wxStaticLine( m_pnlChartSymbology, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	m_sizerChartProperties->Add( m_lineAssignTaxaToOther, 0, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	wxBoxSizer* m_sizerChartBorder1;
	m_sizerChartBorder1 = new wxBoxSizer( wxHORIZONTAL );
	
	m_lblChartAssignToOther = new wxStaticText( m_pnlChartSymbology, ID_LBL_CHART_ASSIGN_TO_OTHER, wxT("Assign taxa to other (percentage):"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblChartAssignToOther->Wrap( -1 );
	m_sizerChartBorder1->Add( m_lblChartAssignToOther, 0, wxALL|wxALIGN_CENTER_VERTICAL, 4 );
	
	m_spinChartFilterTaxaPercentage = new wxSpinCtrl( m_pnlChartSymbology, ID_SPIN_CHART_BORDER_SIZE, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100, 5 );
	m_sizerChartBorder1->Add( m_spinChartFilterTaxaPercentage, 0, wxALL, 4 );
	
	m_sizerChartProperties->Add( m_sizerChartBorder1, 1, wxEXPAND, 5 );
	
	m_lineColourChartBackground = new wxStaticLine( m_pnlChartSymbology, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	m_sizerChartProperties->Add( m_lineColourChartBackground, 0, wxEXPAND | wxALL, 5 );
	
	wxBoxSizer* bSizer42;
	bSizer42 = new wxBoxSizer( wxHORIZONTAL );
	
	m_lblChartBgColour = new wxStaticText( m_pnlChartSymbology, wxID_ANY, wxT("Background colour:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblChartBgColour->Wrap( -1 );
	bSizer42->Add( m_lblChartBgColour, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_colourChartBackground = new wxColourPickerCtrl( m_pnlChartSymbology, ID_COLOUR_PICKER_CHART_BACKGROUND, wxColour( 255, 255, 255 ), wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	bSizer42->Add( m_colourChartBackground, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_chkTransparentBackground = new wxCheckBox( m_pnlChartSymbology, wxID_ANY, wxT("Transparent"), wxDefaultPosition, wxDefaultSize, 0 );
	m_chkTransparentBackground->SetValue(true); 
	bSizer42->Add( m_chkTransparentBackground, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_sizerChartProperties->Add( bSizer42, 1, wxEXPAND, 5 );
	
	m_sizerChartSymbology->Add( m_sizerChartProperties, 0, wxALL|wxEXPAND, 5 );
	
	wxStaticBoxSizer* m_sizerChartDroplineProperties;
	m_sizerChartDroplineProperties = new wxStaticBoxSizer( new wxStaticBox( m_pnlChartSymbology, wxID_ANY, wxT("Dropline Properties") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer5;
	fgSizer5 = new wxFlexGridSizer( 2, 2, 0, 0 );
	fgSizer5->SetFlexibleDirection( wxBOTH );
	fgSizer5->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_lblChartDroplineStyle = new wxStaticText( m_pnlChartSymbology, ID_LBL_LABEL_CHART_FIELD, wxT("Line style:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblChartDroplineStyle->Wrap( -1 );
	fgSizer5->Add( m_lblChartDroplineStyle, 0, wxALL|wxALIGN_CENTER_VERTICAL, 4 );
	
	m_cboChartDropLineStyle = new wxComboBox( m_pnlChartSymbology, ID_CBO_DROPLINE_STYLE, wxT("Solid"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY|wxCB_SORT );
	m_cboChartDropLineStyle->Append( wxT("Solid") );
	m_cboChartDropLineStyle->Append( wxT("Short dash") );
	m_cboChartDropLineStyle->Append( wxT("Long dash") );
	m_cboChartDropLineStyle->Append( wxT("Hidden") );
	fgSizer5->Add( m_cboChartDropLineStyle, 0, wxALL|wxEXPAND, 4 );
	
	m_lblChartDroplineThickness = new wxStaticText( m_pnlChartSymbology, ID_LBL_DROPLINE_THICKNESS, wxT("Line thickness:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblChartDroplineThickness->Wrap( -1 );
	fgSizer5->Add( m_lblChartDroplineThickness, 0, wxALL|wxALIGN_CENTER_VERTICAL, 4 );
	
	wxBoxSizer* bSizer41;
	bSizer41 = new wxBoxSizer( wxHORIZONTAL );
	
	m_spinChartDropLineThickness = new wxSpinCtrl( m_pnlChartSymbology, ID_SPIN_DROPLINE_THICKNESS, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 100, 1 );
	bSizer41->Add( m_spinChartDropLineThickness, 0, wxALL, 4 );
	
	m_colourChartDropLine = new wxColourPickerCtrl( m_pnlChartSymbology, ID_COLOUR_PICKER_DROPLINE, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	bSizer41->Add( m_colourChartDropLine, 0, wxALL, 5 );
	
	fgSizer5->Add( bSizer41, 1, wxEXPAND, 5 );
	
	m_sizerChartDroplineProperties->Add( fgSizer5, 1, wxEXPAND, 5 );
	
	m_sizerChartSymbology->Add( m_sizerChartDroplineProperties, 0, wxALL|wxEXPAND, 5 );
	
	m_pnlChartSymbology->SetSizer( m_sizerChartSymbology );
	m_pnlChartSymbology->Layout();
	m_sizerChartSymbology->Fit( m_pnlChartSymbology );
	m_notebookChart->AddPage( m_pnlChartSymbology, wxT("Symbology"), false );
	
	m_sizerLabels1->Add( m_notebookChart, 1, wxEXPAND | wxALL, 5 );
	
	wxBoxSizer* m_sizerShowCharts;
	m_sizerShowCharts = new wxBoxSizer( wxHORIZONTAL );
	
	
	m_sizerShowCharts->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_chkShowCharts = new wxCheckBox( m_pnlChart, ID_CHECK_SHOW_CHART, wxT("Show charts"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_sizerShowCharts->Add( m_chkShowCharts, 0, wxALL, 5 );
	
	m_sizerLabels1->Add( m_sizerShowCharts, 0, wxEXPAND, 5 );
	
	m_pnlChart->SetSizer( m_sizerLabels1 );
	m_pnlChart->Layout();
	m_sizerLabels1->Fit( m_pnlChart );
	m_notebook->AddPage( m_pnlChart, wxT("Charts"), false );
	m_pnlMetadata = new wxPanel( m_notebook, ID_PNL_METADATA, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, wxT("Metadata") );
	wxBoxSizer* m_sizerMetadata;
	m_sizerMetadata = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* m_sizerLayerSource;
	m_sizerLayerSource = new wxBoxSizer( wxVERTICAL );
	
	m_lblLayerSource = new wxStaticText( m_pnlMetadata, ID_LBL_LAYER_SOURCE, wxT("Layer source:"), wxDefaultPosition, wxSize( 70,-1 ), 0 );
	m_lblLayerSource->Wrap( -1 );
	m_sizerLayerSource->Add( m_lblLayerSource, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT|wxTOP, 5 );
	
	m_txtLayerSource = new wxTextCtrl( m_pnlMetadata, ID_TXT_LAYER_SOURCE, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	m_sizerLayerSource->Add( m_txtLayerSource, 100, wxALL|wxEXPAND, 5 );
	
	m_sizerMetadata->Add( m_sizerLayerSource, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* m_sizerSourceData;
	m_sizerSourceData = new wxStaticBoxSizer( new wxStaticBox( m_pnlMetadata, wxID_ANY, wxT("Source Data") ), wxVERTICAL );
	
	m_txtMetaData = new wxRichTextCtrl( m_pnlMetadata, ID_TXT_METADATA, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxHSCROLL|wxVSCROLL|wxWANTS_CHARS );
	m_sizerSourceData->Add( m_txtMetaData, 1, wxEXPAND | wxALL, 5 );
	
	m_sizerMetadata->Add( m_sizerSourceData, 1, wxALL|wxEXPAND, 5 );
	
	m_pnlMetadata->SetSizer( m_sizerMetadata );
	m_pnlMetadata->Layout();
	m_sizerMetadata->Fit( m_pnlMetadata );
	m_notebook->AddPage( m_pnlMetadata, wxT("Metadata"), false );
	
	m_sizerMain->Add( m_notebook, 1, wxEXPAND | wxALL, 5 );
	
	wxBoxSizer* m_sizerButtons;
	m_sizerButtons = new wxBoxSizer( wxHORIZONTAL );
	
	m_btnHelp = new wxButton( this, wxID_ANY, wxT("?"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	m_btnHelp->SetToolTip( wxT("Help") );
	
	m_sizerButtons->Add( m_btnHelp, 0, wxALL, 5 );
	
	
	m_sizerButtons->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_btnOK = new wxButton( this, wxID_OK, wxT("OK"), wxDefaultPosition, wxDefaultSize, 0 );
	m_sizerButtons->Add( m_btnOK, 0, wxALL, 5 );
	
	m_btnApply = new wxButton( this, ID_BTN_APPLY, wxT("Apply"), wxDefaultPosition, wxDefaultSize, 0 );
	m_sizerButtons->Add( m_btnApply, 0, wxALL, 5 );
	
	m_btnCancel = new wxButton( this, wxID_CANCEL, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_sizerButtons->Add( m_btnCancel, 0, wxALL, 5 );
	
	m_sizerMain->Add( m_sizerButtons, 0, wxEXPAND, 5 );
	
	this->SetSizer( m_sizerMain );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( LocationSetPropertiesLayout::OnClose ) );
	m_notebook->Connect( wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED, wxNotebookEventHandler( LocationSetPropertiesLayout::OnPageChange ), NULL, this );
	m_chkUniformColour->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( LocationSetPropertiesLayout::OnUniformColour ), NULL, this );
	m_cboColourField->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( LocationSetPropertiesLayout::OnColourFieldChange ), NULL, this );
	m_cboColourMap->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( LocationSetPropertiesLayout::OnColourMapChange ), NULL, this );
	m_chkUniformShape->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( LocationSetPropertiesLayout::OnUniformShape ), NULL, this );
	m_cboShapeField->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( LocationSetPropertiesLayout::OnShapeFieldChange ), NULL, this );
	m_cboShapeMap->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( LocationSetPropertiesLayout::OnShapeMapChange ), NULL, this );
	m_cboSizeField->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( LocationSetPropertiesLayout::OnSizeFieldChange ), NULL, this );
	m_chkShowLabels->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( LocationSetPropertiesLayout::OnShowLabels ), NULL, this );
	m_cboChartField->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( LocationSetPropertiesLayout::OnChartFieldChange ), NULL, this );
	m_cboChartColourMap->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( LocationSetPropertiesLayout::OnChartColourMapChange ), NULL, this );
	m_chkQuantitative->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( LocationSetPropertiesLayout::OnQuantitative ), NULL, this );
	m_cboQuantitativeField->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( LocationSetPropertiesLayout::OnQuantitativeFieldChanged ), NULL, this );
	m_cboChartType->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( LocationSetPropertiesLayout::OnChartTypeChanged ), NULL, this );
	m_spinChartWidth->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( LocationSetPropertiesLayout::OnSpinChartSize ), NULL, this );
	m_chkChartSizeBySeqCount->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( LocationSetPropertiesLayout::OnProportionalChartSize ), NULL, this );
	m_spinChartBorderSize->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( LocationSetPropertiesLayout::OnSpinBorderSize ), NULL, this );
	m_spinChartFilterTaxaPercentage->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( LocationSetPropertiesLayout::OnSpinAssignTaxa ), NULL, this );
	m_cboChartDropLineStyle->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( LocationSetPropertiesLayout::OnCboFieldChange ), NULL, this );
	m_spinChartDropLineThickness->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( LocationSetPropertiesLayout::OnSpinLineThickness ), NULL, this );
	m_btnHelp->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LocationSetPropertiesLayout::OnHelp ), NULL, this );
	m_btnOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LocationSetPropertiesLayout::OnOK ), NULL, this );
	m_btnApply->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LocationSetPropertiesLayout::OnApply ), NULL, this );
	m_btnCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LocationSetPropertiesLayout::OnCancel ), NULL, this );
}

LocationSetPropertiesLayout::~LocationSetPropertiesLayout()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( LocationSetPropertiesLayout::OnClose ) );
	m_notebook->Disconnect( wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED, wxNotebookEventHandler( LocationSetPropertiesLayout::OnPageChange ), NULL, this );
	m_chkUniformColour->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( LocationSetPropertiesLayout::OnUniformColour ), NULL, this );
	m_cboColourField->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( LocationSetPropertiesLayout::OnColourFieldChange ), NULL, this );
	m_cboColourMap->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( LocationSetPropertiesLayout::OnColourMapChange ), NULL, this );
	m_chkUniformShape->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( LocationSetPropertiesLayout::OnUniformShape ), NULL, this );
	m_cboShapeField->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( LocationSetPropertiesLayout::OnShapeFieldChange ), NULL, this );
	m_cboShapeMap->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( LocationSetPropertiesLayout::OnShapeMapChange ), NULL, this );
	m_cboSizeField->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( LocationSetPropertiesLayout::OnSizeFieldChange ), NULL, this );
	m_chkShowLabels->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( LocationSetPropertiesLayout::OnShowLabels ), NULL, this );
	m_cboChartField->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( LocationSetPropertiesLayout::OnChartFieldChange ), NULL, this );
	m_cboChartColourMap->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( LocationSetPropertiesLayout::OnChartColourMapChange ), NULL, this );
	m_chkQuantitative->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( LocationSetPropertiesLayout::OnQuantitative ), NULL, this );
	m_cboQuantitativeField->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( LocationSetPropertiesLayout::OnQuantitativeFieldChanged ), NULL, this );
	m_cboChartType->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( LocationSetPropertiesLayout::OnChartTypeChanged ), NULL, this );
	m_spinChartWidth->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( LocationSetPropertiesLayout::OnSpinChartSize ), NULL, this );
	m_chkChartSizeBySeqCount->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( LocationSetPropertiesLayout::OnProportionalChartSize ), NULL, this );
	m_spinChartBorderSize->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( LocationSetPropertiesLayout::OnSpinBorderSize ), NULL, this );
	m_spinChartFilterTaxaPercentage->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( LocationSetPropertiesLayout::OnSpinAssignTaxa ), NULL, this );
	m_cboChartDropLineStyle->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( LocationSetPropertiesLayout::OnCboFieldChange ), NULL, this );
	m_spinChartDropLineThickness->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( LocationSetPropertiesLayout::OnSpinLineThickness ), NULL, this );
	m_btnHelp->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LocationSetPropertiesLayout::OnHelp ), NULL, this );
	m_btnOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LocationSetPropertiesLayout::OnOK ), NULL, this );
	m_btnApply->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LocationSetPropertiesLayout::OnApply ), NULL, this );
	m_btnCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LocationSetPropertiesLayout::OnCancel ), NULL, this );
	
}
