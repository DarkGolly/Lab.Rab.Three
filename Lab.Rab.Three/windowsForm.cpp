#include "pch.h"

using namespace System;

#include "windowsForm.h"

using namespace Windows::Forms;

[STAThread]
int main()
{
	Application::EnableVisualStyles(); // �������� ���������� �����
	Application::SetCompatibleTextRenderingDefault(false); // ��������� ������������ ����������� ������ �� ���������

	Application::Run(gcnew LabRabThree::windowsForm());
	return 0;
}
