#include "pch.h"

void windowsForm::init_label_result()
{
    // 
    // label_result
    // 
    this->label_result->AutoSize = true;
    this->label_result->Font = (gcnew Drawing::Font(L"Comic Sans MS", 13.8F, Drawing::FontStyle::Bold, Drawing::GraphicsUnit::Point, static_cast<Byte>(204)));
    this->label_result->ImageAlign = Drawing::ContentAlignment::BottomRight;
    this->label_result->Location = Drawing::Point(13, 325);
    this->label_result->Name = L"label_result";
    this->label_result->Size = Drawing::Size(140, 40);
    this->label_result->TabIndex = 5;
    this->label_result->Text = L"Результат:";
}