﻿// MTEPlugIn.h

#pragma once

#include "pch.h"
#include "framework.h"
#include "resource.h"
#include <EuroScopePlugIn.h>
#include <string>
#include <list>
#include "MetricAlt.h"
#include "ReCat.hpp"
#include "SimilarCallsign.h"

using namespace EuroScopePlugIn;

class CMTEPlugIn :
	public CPlugIn
{
public:
	CMTEPlugIn(void);
	~CMTEPlugIn(void);
	virtual void OnGetTagItem(CFlightPlan FlightPlan, CRadarTarget RadarTarget, int ItemCode, int TagMemData,
		char sItemString[16], int* pColorCode, COLORREF* pRGB, double* pFontSize);
	virtual void OnFunctionCall(int FunctionId, const char* sItemString, POINT Pt, RECT Area);
	virtual void OnTimer(int Counter);
	virtual bool OnCompileCommand(const char* sCommandLine);

private:
	StrMark m_similarMarker;
	StrMark m_communMarker;
	void SetCustomCursor(void);
	void CancelCustomCursor(void);
};
