#include "Main.h"
#include "Windows.h"

using namespace System::IO;

using namespace System;
using namespace System::Windows::Forms;

[System::STAThread]

void main(cli::array<System::String^>^ args) {
	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);

	S2048::Main form;
	System::Windows::Forms::Application::Run(% form);

}