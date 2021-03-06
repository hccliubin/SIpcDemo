//stamp:0afcce8f315a0192
/*<------------------------------------------------------------------------------------------------->*/
/*该文件由uiresbuilder生成，请不要手动修改*/
/*<------------------------------------------------------------------------------------------------->*/
#pragma once
#include <res.mgr/snamedvalue.h>
#define ROBJ_IN_CPP \
namespace SOUI \
{\
    const _R R;\
    const _UIRES UIRES;\
}
namespace SOUI
{
	class _UIRES{
		public:
		class _UIDEF{
			public:
			_UIDEF(){
				XML_INIT = _T("UIDEF:XML_INIT");
			}
			const TCHAR * XML_INIT;
		}UIDEF;
		class _LAYOUT{
			public:
			_LAYOUT(){
				XML_MAINWND = _T("LAYOUT:XML_MAINWND");
				page_client = _T("LAYOUT:page_client");
				page_server = _T("LAYOUT:page_server");
			}
			const TCHAR * XML_MAINWND;
			const TCHAR * page_client;
			const TCHAR * page_server;
		}LAYOUT;
		class _values{
			public:
			_values(){
				string = _T("values:string");
				color = _T("values:color");
				skin = _T("values:skin");
			}
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
		}values;
		class _IMG{
			public:
			_IMG(){
			}
		}IMG;
		class _ICON{
			public:
			_ICON(){
				ICON_LOGO = _T("ICON:ICON_LOGO");
			}
			const TCHAR * ICON_LOGO;
		}ICON;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"_name_start",65535},
		{L"btn_add_int",65547},
		{L"btn_add_str",65550},
		{L"btn_close",65537},
		{L"btn_connect",65545},
		{L"btn_copy_id",65555},
		{L"btn_disconnect",65546},
		{L"btn_hello",65556},
		{L"btn_max",65538},
		{L"btn_min",65540},
		{L"btn_restore",65539},
		{L"edit_int_a",65548},
		{L"edit_int_b",65549},
		{L"edit_str_a",65551},
		{L"edit_str_b",65552},
		{L"edit_svr_id",65544},
		{L"log_client",65553},
		{L"log_svr",65557},
		{L"page_client",65542},
		{L"page_server",65543},
		{L"tab_mode",65541},
		{L"txt_svr_id",65554},
		{L"txt_title",65536}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			_name_start = namedXmlID[0].strName;
			btn_add_int = namedXmlID[1].strName;
			btn_add_str = namedXmlID[2].strName;
			btn_close = namedXmlID[3].strName;
			btn_connect = namedXmlID[4].strName;
			btn_copy_id = namedXmlID[5].strName;
			btn_disconnect = namedXmlID[6].strName;
			btn_hello = namedXmlID[7].strName;
			btn_max = namedXmlID[8].strName;
			btn_min = namedXmlID[9].strName;
			btn_restore = namedXmlID[10].strName;
			edit_int_a = namedXmlID[11].strName;
			edit_int_b = namedXmlID[12].strName;
			edit_str_a = namedXmlID[13].strName;
			edit_str_b = namedXmlID[14].strName;
			edit_svr_id = namedXmlID[15].strName;
			log_client = namedXmlID[16].strName;
			log_svr = namedXmlID[17].strName;
			page_client = namedXmlID[18].strName;
			page_server = namedXmlID[19].strName;
			tab_mode = namedXmlID[20].strName;
			txt_svr_id = namedXmlID[21].strName;
			txt_title = namedXmlID[22].strName;
		}
		 const wchar_t * _name_start;
		 const wchar_t * btn_add_int;
		 const wchar_t * btn_add_str;
		 const wchar_t * btn_close;
		 const wchar_t * btn_connect;
		 const wchar_t * btn_copy_id;
		 const wchar_t * btn_disconnect;
		 const wchar_t * btn_hello;
		 const wchar_t * btn_max;
		 const wchar_t * btn_min;
		 const wchar_t * btn_restore;
		 const wchar_t * edit_int_a;
		 const wchar_t * edit_int_b;
		 const wchar_t * edit_str_a;
		 const wchar_t * edit_str_b;
		 const wchar_t * edit_svr_id;
		 const wchar_t * log_client;
		 const wchar_t * log_svr;
		 const wchar_t * page_client;
		 const wchar_t * page_server;
		 const wchar_t * tab_mode;
		 const wchar_t * txt_svr_id;
		 const wchar_t * txt_title;
		}name;

		class _id{
		public:
		const static int _name_start	=	65535;
		const static int btn_add_int	=	65547;
		const static int btn_add_str	=	65550;
		const static int btn_close	=	65537;
		const static int btn_connect	=	65545;
		const static int btn_copy_id	=	65555;
		const static int btn_disconnect	=	65546;
		const static int btn_hello	=	65556;
		const static int btn_max	=	65538;
		const static int btn_min	=	65540;
		const static int btn_restore	=	65539;
		const static int edit_int_a	=	65548;
		const static int edit_int_b	=	65549;
		const static int edit_str_a	=	65551;
		const static int edit_str_b	=	65552;
		const static int edit_svr_id	=	65544;
		const static int log_client	=	65553;
		const static int log_svr	=	65557;
		const static int page_client	=	65542;
		const static int page_server	=	65543;
		const static int tab_mode	=	65541;
		const static int txt_svr_id	=	65554;
		const static int txt_title	=	65536;
		}id;

		class _string{
		public:
		const static int title	=	0;
		const static int ver	=	1;
		}string;

		class _color{
		public:
		const static int blue	=	0;
		const static int gray	=	1;
		const static int green	=	2;
		const static int red	=	3;
		const static int white	=	4;
		}color;

	};

#ifdef R_IN_CPP
	 extern const _R R;
	 extern const _UIRES UIRES;
#else
	 extern const __declspec(selectany) _R & R = _R();
	 extern const __declspec(selectany) _UIRES & UIRES = _UIRES();
#endif//R_IN_CPP
}
