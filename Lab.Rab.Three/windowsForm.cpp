#include "pch.h"

using namespace System;

#include "windowsForm.h"

using namespace Windows::Forms;

[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles(); // �������� ���������� �����
	Application::SetCompatibleTextRenderingDefault(false); // ��������� ������������ ����������� ������ �� ���������

	Application::Run(gcnew LabRabThree::windowsForm());
}
