#include "pch.h"

[STAThread]
int main()
{
	Application::EnableVisualStyles(); // включает визуальные стили
	Application::SetCompatibleTextRenderingDefault(false); // настройка совместимого отображения текста по умолчанию
	Application::Run(gcnew LabRabThree::windowsForm());
	return 0;
}