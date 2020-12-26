#include "pch.h"

using namespace LabRabThree;

Void windowsForm::button_calculate_Click(System::Object^ sender, System::EventArgs^ e)//������������ ��������
{
	double distance, time, speed;
	if (!Double::TryParse(textBox1->Text, distance))
		MessageBox::Show("������������ ������ ������ ��� ���������! ������� �������� � ������!");
	else if (!Double::TryParse(textBox2->Text, time))
		MessageBox::Show("������������ ������ ������ ��� �������! ������� �������� � ��������!");
	else if (distance == 0.0)
		MessageBox::Show("��������� ����� �� ����� ����� " + time + " ������!");
	else if (time == 0.0)
		MessageBox::Show("��������� �� ����� ����������������� �� " + distance + " ������! �� ������ �� ����� �����������������!");
	else if (time < 0.0)
		MessageBox::Show("��������� �� ����� �������������� �� �������!");
	else if (distance < 0.0)
		MessageBox::Show("��������� �� ����� ������ ������ ������!");
	else
	{
		speed = distance / time;
		speed_const = static_cast<int>(speed);
		if (speed > 10)
			MessageBox::Show("���� ��������� ������� �������! �� �� ����� �������� ��� ��������!");
		else if (speed < 0.05)
			MessageBox::Show("���� ��������� ������� ���������! �� ����� ����� �� �����!");
		else
		{
			//animation->Interval = interval;
			label_result->Text = "���������: " + speed.ToString() + " �/�";
			

			animation->Start();
			//this->animation->Interval = 500; // ������������� �������� ������� � 50 �����������
			//this->animation->Enabled = true; // ��������� ������
			//rectangle = rectangle_animation->CreateGraphics();
			//rectangle->Clear(Color::WhiteSmoke);
			//rectangle->TranslateTransform(110, 110);
			//animation->Start();
		}
	}
}