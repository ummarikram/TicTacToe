#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThread]

int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TicTacToe::MyForm form;
	Application::Run(% form);
}

