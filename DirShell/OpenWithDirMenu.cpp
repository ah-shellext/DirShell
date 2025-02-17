// OpenWithDirMenu.cpp : COpenWithDirMenu 的实现

#include "stdafx.h"
#include "OpenWithDirMenu.h"


// COpenWithDirMenu

WINUSERAPI
	BOOL
	WINAPI
	InsertMenuW(
	__in HMENU hMenu,
	__in UINT uPosition,
	__in UINT uFlags,
	__in UINT_PTR uIDNewItem,
	__in_opt LPCWSTR lpNewItem);


HRESULT STDMETHODCALLTYPE COpenWithDirMenu::Initialize( 
	/* [annotation][unique][in] */ 
	__in_opt  PCIDLIST_ABSOLUTE pidlFolder,
	/* [annotation][unique][in] */ 
	__in_opt  IDataObject *pdtobj,
	/* [annotation][unique][in] */ 
	__in_opt  HKEY hkeyProgID) 
{
	return S_OK;
}

HRESULT STDMETHODCALLTYPE COpenWithDirMenu::QueryContextMenu( 
	/* [annotation][in] */ 
	__in  HMENU hmenu,
	/* [annotation][in] */ 
	__in  UINT indexMenu,
	/* [annotation][in] */ 
	__in  UINT idCmdFirst,
	/* [annotation][in] */ 
	__in  UINT idCmdLast,
	/* [annotation][in] */ 
	__in  UINT uFlags)
{
	InsertMenu(hmenu, indexMenu,   MF_SEPARATOR|MF_BYPOSITION,0,NULL);//分割线
	InsertMenu(hmenu, indexMenu+1, MF_STRING | MF_BYPOSITION, idCmdFirst + 102, _T("エクスプローラーを再起動(&R)"));
	//InsertMenu(hmenu, indexMenu+1, MF_STRING | MF_BYPOSITION, idCmdFirst + 103, _T("管理者として cmd をここに開く"));
	/*
	LPTSTR lptStr =MAKEINTRESOURCE( IDB_BITMAP1);
	HBITMAP hBitmap=LoadBitmapW(ghInstance,lptStr);//gHinstance 是一个HINSTANCE类型的全局变量，在dll入口函数(DllMain)中，将系统传进来的参数hInstance保存。
	SetMenuItemBitmaps(hmenu,indexMenu+1,MF_BYPOSITION,hBitmap,hBitmap);
	*/
	//InsertMenu(hmenu, indexMenu+2, MF_STRING | MF_BYPOSITION, idCmdFirst + 103, _T("Gir Bash Here"));
	//InsertMenu(hmenu, indexMenu+3, MF_STRING | MF_BYPOSITION, idCmdFirst + 104, _T("Open With Sublime"));
	//InsertMenu(hmenu, indexMenu-0, MF_SEPARATOR|MF_BYPOSITION,0,NULL);//分割线 
	return MAKE_HRESULT(SEVERITY_SUCCESS, 0, USHORT(102+1));
}


HRESULT STDMETHODCALLTYPE COpenWithDirMenu::InvokeCommand( 
	/* [annotation][in] */ 
	__in  CMINVOKECOMMANDINFO *pici)
{
	if(HIWORD(((CMINVOKECOMMANDINFOEX *) pici)->lpVerbW))
	{
		return S_OK;
	}
	else
	{
		if(LOWORD(pici->lpVerb)==102)
		{
			
			//ShellExecute(NULL,_T("open"),_T("taskkill /f /im explorer.exe & start explorer.exe"),NULL,NULL,SW_NORMAL);
			system("taskkill /f /im explorer.exe & start explorer.exe");
		}
		/*
		if(LOWORD(pici->lpVerb)==103)
		{
			//ShellExecute(NULL,_T("open"),_T("\"E:\\Program Files\\Git\\git-bash.exe\" \"--cd=%v.\""),NULL,NULL,SW_NORMAL);
			//WinExec("E:\\Program Files\\Git\\git-bash.exe" "--cd=%v.",SW_SHOW);
			system("cmd.exe /s /k pushd .");
		}
		*/
		/*
		if(LOWORD(pici->lpVerb)==104)
		{
			//ShellExecute(NULL,_T("open"),_T("\"E:\\Program Files\\Git\\git-bash.exe\" \"--cd=%v.\""),NULL,NULL,SW_NORMAL);
			//WinExec("E:\\Program Files\\Git\\git-bash.exe" "--cd=%v.",SW_SHOW);
			//system("E:\\Program Files\\Git\\git-bash.exe" "--cd=%v.");
		}
		*/
	}
	return S_OK;
}


HRESULT STDMETHODCALLTYPE COpenWithDirMenu::GetCommandString( 
	/* [annotation][in] */ 
	__in  UINT_PTR idCmd,
	/* [annotation][in] */ 
	__in  UINT uType,
	/* [annotation][in] */ 
	__reserved  UINT *pReserved,
	/* [annotation][out] */ 
	__out_awcount(!(uType & GCS_UNICODE), cchMax)  LPSTR pszName,
	/* [annotation][in] */ 
	__in  UINT cchMax)
{
	if ( (idCmd != 102) && (idCmd != 103))
	{
		return E_INVALIDARG;
	}
	lstrcpynA(pszName, "This is a test info", cchMax);
	return S_OK;
}

