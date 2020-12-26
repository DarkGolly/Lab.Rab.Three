#include "pch.h"

void windowsForm::init_pictures_animation()
{
    // 
    // pictureBox1
    // 
    this->pictureBox1->Location = Drawing::Point(750, 12);
    this->pictureBox1->Name = L"pictureBox1";
    this->pictureBox1->Size = Drawing::Size(398, 290);
    this->pictureBox1->SizeMode = Windows::Forms::PictureBoxSizeMode::Zoom;
    this->pictureBox1->Visible = false;
    this->pictureBox1->TabIndex = 6;
    this->pictureBox1->TabStop = false;

    System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(windowsForm::typeid));
    // 
    // animation
    // 
    this->animation->Tick += gcnew EventHandler(this, &windowsForm::animation_Tick);
    animation_repeats = 0;
    // 
    // pictures
    // 
    this->pictures_dance->ImageStream = (cli::safe_cast<ImageListStreamer^>(resources->GetObject(L"pictures.ImageStream")));
    this->pictures_dance->TransparentColor = Drawing::Color::Transparent;
    this->pictures_dance->ImageSize = Drawing::Size(256, 186);
    loadingImages("dance");

    this->pictures_run1->ImageStream = (cli::safe_cast<ImageListStreamer^>(resources->GetObject(L"pictures.ImageStream")));
    this->pictures_run1->TransparentColor = Drawing::Color::Transparent;
    this->pictures_run1->ImageSize = Drawing::Size(256, 186);
    loadingImages("run1");

    this->pictures_run2->ImageStream = (cli::safe_cast<ImageListStreamer^>(resources->GetObject(L"pictures.ImageStream")));
    this->pictures_run2->TransparentColor = Drawing::Color::Transparent;
    this->pictures_run2->ImageSize = Drawing::Size(256, 186);
    loadingImages("run2");
}