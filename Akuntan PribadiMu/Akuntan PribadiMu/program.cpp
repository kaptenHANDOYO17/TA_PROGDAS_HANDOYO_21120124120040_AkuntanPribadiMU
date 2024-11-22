#include "loginform.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace AkuntanPribadiMu;
[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AkuntanPribadiMu::Login^form = gcnew Login();
	Application::Run(form);
}