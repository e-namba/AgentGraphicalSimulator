
// AgentGraphicalSimulator.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです。
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'stdafx.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CAgentGraphicalSimulatorApp:
// このクラスの実装については、AgentGraphicalSimulator.cpp を参照してください。
//

class CAgentGraphicalSimulatorApp : public CWinApp
{
public:
	CAgentGraphicalSimulatorApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CAgentGraphicalSimulatorApp theApp;