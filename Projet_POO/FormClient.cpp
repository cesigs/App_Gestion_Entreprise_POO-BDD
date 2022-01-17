#include "pch.h"
#include "FormClient.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main3(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    PrositFin::FormClient form;
}