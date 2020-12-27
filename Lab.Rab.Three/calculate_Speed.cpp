#include "pch.h"

Void windowsForm::button_calculate_Click(System::Object^ sender, System::EventArgs^ e)//высчитывание скорости
{
	double distance, time, speed;
	if (!Double::TryParse(textBox1->Text, distance))
		MessageBox::Show("Некорректный формат данных для дистанции! Введите значение в метрах!");
	else if (!Double::TryParse(textBox2->Text, time))
		MessageBox::Show("Некорректный формат данных для времени! Введите значение в секундах!");
	else if (distance == 0.0)
		MessageBox::Show("Спортсмен стоит на месте целых " + time + " секунд!");
	else if (time == 0.0)
		MessageBox::Show("Невозможно бежать " + distance + " метров за 0 секунд!");
	else if (time < 0.0)
		MessageBox::Show("Спортсмен не может пробежать " + distance + " метров до того как стартовал!");
	else if (distance < 0.0)
		MessageBox::Show("Спортсмен не должен бегать назад, он должен бегать только вперед!");
	else
	{
		speed = distance / time;
		speed_const = static_cast<int>(speed);
		if (speed > 10)
			MessageBox::Show("Спортсмен слишком быстрый для человека! Программа не может показать его скорость!");
		else if (speed < 0.05)
			MessageBox::Show("Спортсмен слишком медленный!");
		else
		{
			label_result->Text = "Результат: " + speed.ToString() + " м/с";
			animation->Start();
		}
	}
}