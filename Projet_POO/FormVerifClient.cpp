#include "pch.h"
#include "FormVerifClient.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main9(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    PrositFin::FormVerifClient form;
}