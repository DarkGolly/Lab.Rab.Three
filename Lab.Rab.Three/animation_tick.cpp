#include "pch.h"

Void windowsForm::animation_Tick(System::Object^ sender, System::EventArgs^ e)
{
	this->pictureBox1->Visible = true;
	animation_repeats++;
	if (animation_repeats > 100)
	{
		animation->Stop();
		this->pictureBox1->Visible = false;
		animation_repeats = 0;
	}
	else
	{
		if (speed_const <= 1.6)
		{
			pictureBox1->Image = pictures_dance->Images[animation_repeats % 11];
		}
		else if (speed_const > 1.6 && speed_const < 8)
		{
			pictureBox1->Image = pictures_run1->Images[animation_repeats % 47];
		}
		else if (speed_const >= 8)
		{
			pictureBox1->Image = pictures_run2->Images[animation_repeats % 13];
		}
	}
}