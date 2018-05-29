#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	// shows form bois

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	TheTrashBaord::MyForm form;
	Application::Run(%form);
}
