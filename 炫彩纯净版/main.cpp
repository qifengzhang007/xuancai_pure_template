#include "framework.h"
#include <iostream>
#include "WinMainClass.h"

using namespace std;


int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow) {
	XInitXCGUI(TRUE); //初始化

	WinMainClass  WinMain;
	if (WinMain.Create()) {
		XRunXCGUI(); //运行
	}
	XExitXCGUI(); //释放资源

	return 0;
}
