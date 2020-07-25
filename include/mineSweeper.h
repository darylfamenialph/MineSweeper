#ifndef MINESWEEPER_H
#define MINESWEEPER_H

#pragma once
#include "wx/wx.h"

class mineSweeper: public wxFrame
{
public:
    mineSweeper();
    ~mineSweeper();

public:
    int nFieldWidth = 10;
    int nFieldHeight = 10;
    wxButton **btn;
    int *nField = nullptr;
    bool bFirstClick = true;

    void OnButtonClicked(wxCommandEvent &evt);

    wxDECLARE_EVENT_TABLE();
private:

};
#endif