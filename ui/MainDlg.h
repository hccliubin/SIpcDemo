// MainDlg.h : interface of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////
#pragma once
#include "PageHandlerBase.h"

class CMainDlg : public SHostWnd
	, public ILog4zManager::IOutputListener
	, public TAutoEventMapReg<CMainDlg>
{
public:
	CMainDlg(bool isServer);
	~CMainDlg();

	void OnClose();
	void OnMaximize();
	void OnRestore();
	void OnMinimize();
	void OnSize(UINT nType, CSize size);

	// 通过 IOutputListener 继承
	virtual void onOutputLog(int level, const char * filter, const char * log, int nLogLen, unsigned __int64 time_) override;
protected:
	void OnLog(EventArgs *e);
	//soui消息
	EVENT_MAP_BEGIN()
		EVENT_NAME_COMMAND(L"btn_close", OnClose)
		EVENT_NAME_COMMAND(L"btn_min", OnMinimize)
		EVENT_NAME_COMMAND(L"btn_max", OnMaximize)
		EVENT_NAME_COMMAND(L"btn_restore", OnRestore)
		EVENT_HANDLER(EventOutputLog::EventID,OnLog)
		if(m_pPageHandle) CHAIN_EVENT_MAP_MEMBER((*m_pPageHandle))
	EVENT_MAP_END()
		

protected:
	BOOL OnInitDialog(HWND wndFocus, LPARAM lInitParam);
	void OnDestroy();
	//HostWnd真实窗口消息处理
	BEGIN_MSG_MAP_EX(CMainDlg)
		MSG_WM_CREATE(OnCreate)
		MSG_WM_INITDIALOG(OnInitDialog)
		MSG_WM_DESTROY(OnDestroy)
		MSG_WM_CLOSE(OnClose)
		MSG_WM_SIZE(OnSize)
		if(m_pPageHandle) CHAIN_MSG_MAP_MEMBER((*m_pPageHandle))
		CHAIN_MSG_MAP(SHostWnd)
		REFLECT_NOTIFICATIONS_EX()
	END_MSG_MAP()
private:

	CPageHandlerBase * m_pPageHandle;
	bool m_isServer;
};
