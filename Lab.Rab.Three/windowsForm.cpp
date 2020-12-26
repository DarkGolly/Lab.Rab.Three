#include "pch.h"

using namespace System;

#include "windowsForm.h"

using namespace Windows::Forms;

[STAThread]
int main()
{
	Application::EnableVisualStyles(); // включает визуальные стили
	Application::SetCompatibleTextRenderingDefault(false); // настройка совместимого отображения текста по умолчанию

	Application::Run(gcnew LabRabThree::windowsForm());
	return 0;
}
