#include "pch.h"
#include "FormPersonnel.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main1(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    PrositFin::FormPersonnel form;
    //Application::Run(% form);
}