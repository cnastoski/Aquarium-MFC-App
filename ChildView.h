
/**
 * \file ChildView.h
 *
 * \author Chris Nastoski
 *
 * Class that implements the child window our program draws in.
 *
 * The window is a child of the main frame, which holds this
 * window, the menu bar, and the status bar.
 */

#pragma once

#include "Aquarium.h"
// CChildView window


/**
 * Class that implements the child window our program draws in.
 */
class CChildView : public CWnd
{
// Construction
public:
	CChildView();

// Attributes
public:

// Operations
public:

// Overrides
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Implementation
public:
	virtual ~CChildView();

	// Generated message map functions
protected:
	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP()

private:
	/// An object that describes our aquarium
	CAquarium  mAquarium;

	/// Any item we are currently dragging
	std::shared_ptr<CItem> mGrabbedItem;

	/// True until the first time we draw
	bool mFirstDraw = true;

	long long mLastTime;    ///< Last time we read the timer
	double mTimeFreq;       ///< Rate the timer updates

public:
	afx_msg void OnAddfishBetafish();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnAddfishAngelfish();
	afx_msg void OnAddfishMagikarp();
	afx_msg void OnAddfishStinky();
	afx_msg void OnAddfishCastledecor();
	afx_msg void OnFileSaveas();
	afx_msg void OnFileOpen32777();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

