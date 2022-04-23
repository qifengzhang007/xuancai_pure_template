#pragma once
// 炫彩窗口必须的依赖
#include "../XC_DLL_X86/xcgui.h"
#pragma comment(lib, "../XC_DLL_X86/xcgui.lib")

class WinMainClass
{
public:
	HWINDOW m_hWindow; //窗口句柄
	HELE    m_hButton; //按钮句柄

	BOOL Create(); //创建窗口和按钮

	int OnEventBtnClick(BOOL* pbHandled); //按钮点击事件响应
};