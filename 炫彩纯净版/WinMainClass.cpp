#include <windows.h>
#include "WinMainClass.h"



BOOL WinMainClass::Create() {
        m_hWindow = XWnd_Create(0, 0, 400, 300, L"炫彩界面库-窗口"); //创建窗口
        if (m_hWindow)
        {
            m_hButton = XBtn_Create(10, 60, 80, 25, L"按钮", m_hWindow); //创建按钮
            XEle_RegEventCPP(m_hButton, XE_BNCLICK, &WinMainClass::OnEventBtnClick); //注册按钮点击事件

            XWnd_AdjustLayout(m_hWindow); //调整布局,如果没有使用布局功能,可以不调用此函数
            XWnd_ShowWindow(m_hWindow, SW_SHOW); //显示窗口
            return TRUE;
        }
        return FALSE;
    }

int WinMainClass::OnEventBtnClick(BOOL* pbHandled)
{
    //弹出消息框
    MessageBox(XWnd_GetHWND(m_hWindow), L"你点击了按钮", L"提示", MB_OK);
    //*pbHandled = TRUE; //对该事件进行拦截,如果不需要拦截可以去掉该行代码
    return 0;    //事件的返回值
}