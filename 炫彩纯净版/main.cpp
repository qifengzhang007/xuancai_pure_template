#include "framework.h"
#include <iostream>
#include "WinMainClass.h"

using namespace std;


int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow) {
	XInitXCGUI(TRUE); //��ʼ��

	WinMainClass  WinMain;
	if (WinMain.Create()) {
		XRunXCGUI(); //����
	}
	XExitXCGUI(); //�ͷ���Դ

	return 0;
}
