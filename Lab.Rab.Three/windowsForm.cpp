#include "pch.h"

[STAThread]
int main()
{
	Application::EnableVisualStyles(); // �������� ���������� �����
	Application::SetCompatibleTextRenderingDefault(false); // ��������� ������������ ����������� ������ �� ���������
	Application::Run(gcnew LabRabThree::windowsForm());
	return 0;
}