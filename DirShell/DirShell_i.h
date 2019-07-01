

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Mon Jul 01 22:28:18 2019
 */
/* Compiler settings for DirShell.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __DirShell_i_h__
#define __DirShell_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IOpenWithDirMenu_FWD_DEFINED__
#define __IOpenWithDirMenu_FWD_DEFINED__
typedef interface IOpenWithDirMenu IOpenWithDirMenu;
#endif 	/* __IOpenWithDirMenu_FWD_DEFINED__ */


#ifndef __OpenWithDirMenu_FWD_DEFINED__
#define __OpenWithDirMenu_FWD_DEFINED__

#ifdef __cplusplus
typedef class OpenWithDirMenu OpenWithDirMenu;
#else
typedef struct OpenWithDirMenu OpenWithDirMenu;
#endif /* __cplusplus */

#endif 	/* __OpenWithDirMenu_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IOpenWithDirMenu_INTERFACE_DEFINED__
#define __IOpenWithDirMenu_INTERFACE_DEFINED__

/* interface IOpenWithDirMenu */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IOpenWithDirMenu;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("378B5FDE-1E19-4105-96E6-B7828411DCF7")
    IOpenWithDirMenu : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IOpenWithDirMenuVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOpenWithDirMenu * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOpenWithDirMenu * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOpenWithDirMenu * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOpenWithDirMenu * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOpenWithDirMenu * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOpenWithDirMenu * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOpenWithDirMenu * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IOpenWithDirMenuVtbl;

    interface IOpenWithDirMenu
    {
        CONST_VTBL struct IOpenWithDirMenuVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOpenWithDirMenu_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOpenWithDirMenu_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOpenWithDirMenu_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOpenWithDirMenu_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOpenWithDirMenu_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOpenWithDirMenu_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOpenWithDirMenu_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOpenWithDirMenu_INTERFACE_DEFINED__ */



#ifndef __DirShellLib_LIBRARY_DEFINED__
#define __DirShellLib_LIBRARY_DEFINED__

/* library DirShellLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_DirShellLib;

EXTERN_C const CLSID CLSID_OpenWithDirMenu;

#ifdef __cplusplus

class DECLSPEC_UUID("C867A5DD-5B4D-40A9-8C3F-E858E213B573")
OpenWithDirMenu;
#endif
#endif /* __DirShellLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


