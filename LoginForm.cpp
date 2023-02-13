#include "LoginForm.h"
#include<Windows.h>
using namespace SecondGUI;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew LoginForm());
	return 0;
}