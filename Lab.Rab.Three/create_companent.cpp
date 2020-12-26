#include "pch.h"

void LabRabThree::windowsForm::createCompanent()
{
    this->components = (gcnew System::ComponentModel::Container());
    this->textBox2 = (gcnew TextBox());
    this->label_time = (gcnew Label());
    this->textBox1 = (gcnew TextBox());
    this->groupBox1 = (gcnew GroupBox());
    this->label_distance = (gcnew Label());
    this->button_calculate = (gcnew Button());
    this->label_result = (gcnew Label());
    this->pictureBox1 = (gcnew PictureBox());
    this->chart = (gcnew DataVisualization::Charting::Chart());
    this->button_plot = (gcnew Button());
    this->animation = (gcnew Timer(this->components));
    this->pictures_dance = (gcnew ImageList(this->components));
    this->pictures_run1 = (gcnew ImageList(this->components));
    this->pictures_run2 = (gcnew ImageList(this->components));
}