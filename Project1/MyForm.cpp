#include "MyForm.h"
#include "code/systemclass.hpp"
#include "code/pinkLight.hpp"
#include "code/pinkData.hpp"
#include "code/pinkFredom.hpp"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(%form);
}