#include "pch.h"

void windowsForm::loadingImages(String^ name)
{
	if (name == "dance")
	{
		for (int i = 0; i < 12; i++)
			pictures_dance->Images->Add(Image::FromFile("images/dance/" + i + ".jpg"));
		return;
	}
	if (name == "run1")
	{
		for (int i = 0; i < 49; i++)
			pictures_run1->Images->Add(Image::FromFile("images/run1/" + i + ".jpg"));
		return;
	}
	if (name == "run2")
	{
		for (int i = 0; i < 15; i++)
			pictures_run2->Images->Add(Image::FromFile("images/run2/" + i + ".jpg"));
		return;
	}
}