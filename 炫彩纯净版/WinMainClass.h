#pragma once
// �Ųʴ��ڱ��������
#include "../XC_DLL_X86/xcgui.h"
#pragma comment(lib, "../XC_DLL_X86/xcgui.lib")

class WinMainClass
{
public:
	HWINDOW m_hWindow; //���ھ��
	HELE    m_hButton; //��ť���

	BOOL Create(); //�������ںͰ�ť

	int OnEventBtnClick(BOOL* pbHandled); //��ť����¼���Ӧ
};