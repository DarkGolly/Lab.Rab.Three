#include "pch.h"

using namespace LabRabThree;

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
		MessageBox::Show("Спортсмен не может телепортироваться на " + distance + " метров! Он вообще не умеет телепортироваться!");
	else if (time < 0.0)
		MessageBox::Show("Спортсмен не может путешествовать во времени!");
	else if (distance < 0.0)
		MessageBox::Show("Спортсмен не любит бегать спиной вперед!");
	else
	{
		speed = distance / time;
		speed_const = static_cast<int>(speed);
		if (speed > 10)
			MessageBox::Show("Этот спортсмен слишком быстрый! Мы не можем показать его скорость!");
		else if (speed < 0.05)
			MessageBox::Show("Этот спортсмен слишком медленный! Он почти стоит на месте!");
		else
		{
			//animation->Interval = interval;
			label_result->Text = "Результат: " + speed.ToString() + " м/с";
			

			animation->Start();
			//this->animation->Interval = 500; // устанавливаем интервал таймера в 50 миллисекунд
			//this->animation->Enabled = true; // запускаем таймер
			//rectangle = rectangle_animation->CreateGraphics();
			//rectangle->Clear(Color::WhiteSmoke);
			//rectangle->TranslateTransform(110, 110);
			//animation->Start();
		}
	}
}