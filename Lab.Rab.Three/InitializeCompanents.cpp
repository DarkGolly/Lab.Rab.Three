#include "pch.h"

#pragma region Windows Form Designer generated code

void LabRabThree::windowsForm::InitializeComponent(void)
{
    createCompanent();
    
    this->groupBox1->SuspendLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
    this->SuspendLayout();
   
    initInput();
    
    init_label_result();
    
    creating_plot();
    
    init_pictures_animation();
    // 
    // windowsForm
    // 
    this->AutoScaleMode = Windows::Forms::AutoScaleMode::Inherit;
    this->BackColor = Drawing::SystemColors::ActiveCaption;
    this->ClientSize = Drawing::Size(1148, 595);
    BackgroundImage = Image::FromFile("images/background.jpg");
    this->Controls->Add(this->button_plot);
    this->Controls->Add(this->chart);
    this->Controls->Add(this->pictureBox1);
    this->Controls->Add(this->label_result);
    this->Controls->Add(this->groupBox1);
    this->Cursor = Cursors::Default;
    this->MaximizeBox = false;
    this->Name = L"windowsForm";
    this->StartPosition = FormStartPosition::CenterScreen;
    this->Text = L"Speed calculator";
    this->groupBox1->ResumeLayout(false);
    this->groupBox1->PerformLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
    this->ResumeLayout(false);
    this->PerformLayout();
    Load += gcnew EventHandler(this, &windowsForm::onLoadForm1);
}
#pragma endregion