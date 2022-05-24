#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include <math.h>
#include <map>
#include <string>
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Kursovaya::MyForm form;
	Application::Run(% form);
}


