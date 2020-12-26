#include "pch.h"

void windowsForm::initInput()
{
    // 
    // textBox2
    // 
    this->textBox2->Font = (gcnew Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<Drawing::FontStyle>((Drawing::FontStyle::Bold | Drawing::FontStyle::Italic)),
        Drawing::GraphicsUnit::Point, static_cast<Byte>(204)));
    this->textBox2->Location = Drawing::Point(31, 150);
    this->textBox2->Name = L"textBox2";
    this->textBox2->Size = Drawing::Size(178, 27);
    this->textBox2->TabIndex = 3;
    // 
    // label_time
    // 
    this->label_time->AutoSize = true;
    this->label_time->Font = (gcnew Drawing::Font(L"Comic Sans MS", 12, Drawing::FontStyle::Regular, Drawing::GraphicsUnit::Point, static_cast<Byte>(204)));
    this->label_time->Location = Drawing::Point(6, 119);
    this->label_time->Name = L"label_time";
    this->label_time->Size = Drawing::Size(127, 28);
    this->label_time->TabIndex = 2;
    this->label_time->Text = L"Время (сек.)";
    // 
    // textBox1
    // 
    this->textBox1->Font = (gcnew Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<Drawing::FontStyle>((Drawing::FontStyle::Bold | Drawing::FontStyle::Italic)),
        Drawing::GraphicsUnit::Point, static_cast<Byte>(204)));
    this->textBox1->Location = Drawing::Point(31, 76);
    this->textBox1->Name = L"textBox1";
    this->textBox1->Size = Drawing::Size(178, 27);
    this->textBox1->TabIndex = 1;
    // 
    // groupBox1
    // 
    this->groupBox1->Controls->Add(this->label_distance);
    this->groupBox1->Controls->Add(this->button_calculate);
    this->groupBox1->Controls->Add(this->textBox2);
    this->groupBox1->Controls->Add(this->textBox1);
    this->groupBox1->Controls->Add(this->label_time);
    this->groupBox1->Font = (gcnew Drawing::Font(L"Comic Sans MS", 13.8F, static_cast<Drawing::FontStyle>((Drawing::FontStyle::Bold | Drawing::FontStyle::Italic)), 
        Drawing::GraphicsUnit::Point, static_cast<Byte>(204)));
    this->groupBox1->Location = Drawing::Point(12, 12);
    this->groupBox1->Name = L"groupBox1";
    this->groupBox1->Size = Drawing::Size(226, 229);
    this->groupBox1->TabIndex = 4;
    this->groupBox1->TabStop = false;
    this->groupBox1->Text = L"Входные данные";
    // 
    // label_distance
    // 
    this->label_distance->AutoSize = true;
    this->label_distance->Font = (gcnew Drawing::Font(L"Comic Sans MS", 12, Drawing::FontStyle::Regular, Drawing::GraphicsUnit::Point, static_cast<Byte>(204)));
    this->label_distance->Location = Drawing::Point(2, 45);
    this->label_distance->Name = L"label_distance";
    this->label_distance->Size = Drawing::Size(154, 28);
    this->label_distance->TabIndex = 6;
    this->label_distance->Text = L"Дистанция (м.)";
    // 
    // button_calculate
    // 
    this->button_calculate->BackColor = Drawing::Color::MediumTurquoise;
    this->button_calculate->FlatAppearance->BorderSize = 0;
    this->button_calculate->Font = (gcnew Drawing::Font(L"Comic Sans MS", 12, Drawing::FontStyle::Bold, Drawing::GraphicsUnit::Point, static_cast<Byte>(204)));
    this->button_calculate->Location = Drawing::Point(44, 183);
    this->button_calculate->Name = L"button_calculate";
    this->button_calculate->Size = Drawing::Size(145, 39);
    this->button_calculate->TabIndex = 5;
    this->button_calculate->Text = L"Рассчитать";
    this->button_calculate->UseVisualStyleBackColor = false;
    this->button_calculate->Click += gcnew EventHandler(this, &windowsForm::button_calculate_Click);
}