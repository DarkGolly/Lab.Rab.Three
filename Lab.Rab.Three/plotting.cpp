#include "pch.h"

Void windowsForm::button_plot_Click(Object^ sender, EventArgs^ e)
{
	Random^ rnd = gcnew Random();
	chart->Series[0]->Points->Clear();
	chart->Series[0]->Color = Color::FromArgb(
		rnd->Next(0, 255),
		rnd->Next(0, 255),
		rnd->Next(0, 255));
	for (int i = 0; i < 12; i++)
		chart->Series[0]->Points->AddXY(i, rnd->Next(0, 12));
	chart->Refresh();
}