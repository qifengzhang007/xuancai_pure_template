#include <windows.h>
#include "WinMainClass.h"



BOOL WinMainClass::Create() {
        m_hWindow = XWnd_Create(0, 0, 400, 300, L"�Ųʽ����-����"); //��������
        if (m_hWindow)
        {
            m_hButton = XBtn_Create(10, 60, 80, 25, L"��ť", m_hWindow); //������ť
            XEle_RegEventCPP(m_hButton, XE_BNCLICK, &WinMainClass::OnEventBtnClick); //ע�ᰴť����¼�

            XWnd_AdjustLayout(m_hWindow); //��������,���û��ʹ�ò��ֹ���,���Բ����ô˺���
            XWnd_ShowWindow(m_hWindow, SW_SHOW); //��ʾ����
            return TRUE;
        }
        return FALSE;
    }

int WinMainClass::OnEventBtnClick(BOOL* pbHandled)
{
    //������Ϣ��
    MessageBox(XWnd_GetHWND(m_hWindow), L"�����˰�ť", L"��ʾ", MB_OK);
    //*pbHandled = TRUE; //�Ը��¼���������,�������Ҫ���ؿ���ȥ�����д���
    return 0;    //�¼��ķ���ֵ
}