// OpenWithDirMenu.h : COpenWithDirMenu 的声明

#pragma once
#include "resource.h"       // 主符号



#include "DirShell_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
#endif

using namespace ATL;


// COpenWithDirMenu

class ATL_NO_VTABLE COpenWithDirMenu :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<COpenWithDirMenu, &CLSID_OpenWithDirMenu>,
	public IDispatchImpl<IOpenWithDirMenu, &IID_IOpenWithDirMenu, &LIBID_DirShellLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public IShellExtInit,
	public IContextMenu
{
public:
	COpenWithDirMenu()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_OPENWITHDIRMENU)


BEGIN_COM_MAP(COpenWithDirMenu)
	COM_INTERFACE_ENTRY(IOpenWithDirMenu)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IShellExtInit)
	COM_INTERFACE_ENTRY(IContextMenu)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:
	virtual HRESULT STDMETHODCALLTYPE Initialize( 
		/* [annotation][unique][in] */ 
		__in_opt  PCIDLIST_ABSOLUTE pidlFolder,
		/* [annotation][unique][in] */ 
		__in_opt  IDataObject *pdtobj,
		/* [annotation][unique][in] */ 
		__in_opt  HKEY hkeyProgID);

	virtual HRESULT STDMETHODCALLTYPE QueryContextMenu( 
		/* [annotation][in] */ 
		__in  HMENU hmenu,
		/* [annotation][in] */ 
		__in  UINT indexMenu,
		/* [annotation][in] */ 
		__in  UINT idCmdFirst,
		/* [annotation][in] */ 
		__in  UINT idCmdLast,
		/* [annotation][in] */ 
		__in  UINT uFlags);

	virtual HRESULT STDMETHODCALLTYPE InvokeCommand( 
		/* [annotation][in] */ 
		__in  CMINVOKECOMMANDINFO *pici);

	virtual HRESULT STDMETHODCALLTYPE GetCommandString( 
		/* [annotation][in] */ 
		__in  UINT_PTR idCmd,
		/* [annotation][in] */ 
		__in  UINT uType,
		/* [annotation][in] */ 
		__reserved  UINT *pReserved,
		/* [annotation][out] */ 
		__out_awcount(!(uType & GCS_UNICODE), cchMax)  LPSTR pszName,
		/* [annotation][in] */ 
		__in  UINT cchMax);


};

OBJECT_ENTRY_AUTO(__uuidof(OpenWithDirMenu), COpenWithDirMenu)
