#include "pch.h"

#pragma region Windows Form Designer generated code
/// <summary>
/// Требуемый метод для поддержки конструктора — не изменяйте 
/// содержимое этого метода с помощью редактора кода.
/// </summary>
void LabRabThree::windowsForm::InitializeComponent(void)
{
    this->components = (gcnew System::ComponentModel::Container());
    System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
    System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
    System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
    System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(windowsForm::typeid));
    this->textBox2 = (gcnew System::Windows::Forms::TextBox());
    this->label_time = (gcnew System::Windows::Forms::Label());
    this->textBox1 = (gcnew System::Windows::Forms::TextBox());
    this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
    this->label_distance = (gcnew System::Windows::Forms::Label());
    this->button_calculate = (gcnew System::Windows::Forms::Button());
    this->label_result = (gcnew System::Windows::Forms::Label());
    this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
    this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
    this->panel_chart = (gcnew Windows::Forms::Panel());
    this->button_plot = (gcnew System::Windows::Forms::Button());
    this->animation = (gcnew System::Windows::Forms::Timer(this->components));
    this->pictures = (gcnew System::Windows::Forms::ImageList(this->components));
    this->groupBox1->SuspendLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
    this->panel_chart->SuspendLayout();
    this->SuspendLayout();
    // 
    // textBox2
    // 
    this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
    this->textBox2->Location = System::Drawing::Point(31, 150);
    this->textBox2->Name = L"textBox2";
    this->textBox2->Size = System::Drawing::Size(178, 27);
    this->textBox2->TabIndex = 3;
    this->textBox2->TextChanged += gcnew System::EventHandler(this, &windowsForm::textBox2_TextChanged);
    // 
    // label_time
    // 
    this->label_time->AutoSize = true;
    this->label_time->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    this->label_time->Location = System::Drawing::Point(6, 119);
    this->label_time->Name = L"label_time";
    this->label_time->Size = System::Drawing::Size(127, 28);
    this->label_time->TabIndex = 2;
    this->label_time->Text = L"Время (сек.)";
    // 
    // textBox1
    // 
    this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
    this->textBox1->Location = System::Drawing::Point(31, 76);
    this->textBox1->Name = L"textBox1";
    this->textBox1->Size = System::Drawing::Size(178, 27);
    this->textBox1->TabIndex = 1;
    this->textBox1->TextChanged += gcnew System::EventHandler(this, &windowsForm::textBox1_TextChanged);
    // 
    // groupBox1
    // 
    this->groupBox1->Controls->Add(this->label_distance);
    this->groupBox1->Controls->Add(this->button_calculate);
    this->groupBox1->Controls->Add(this->textBox2);
    this->groupBox1->Controls->Add(this->textBox1);
    this->groupBox1->Controls->Add(this->label_time);
    this->groupBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
    this->groupBox1->Location = System::Drawing::Point(12, 12);
    this->groupBox1->Name = L"groupBox1";
    this->groupBox1->Size = System::Drawing::Size(226, 229);
    this->groupBox1->TabIndex = 4;
    this->groupBox1->TabStop = false;
    this->groupBox1->Text = L"Входные данные";
    // 
    // label_distance
    // 
    this->label_distance->AutoSize = true;
    this->label_distance->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    this->label_distance->Location = System::Drawing::Point(2, 45);
    this->label_distance->Name = L"label_distance";
    this->label_distance->Size = System::Drawing::Size(154, 28);
    this->label_distance->TabIndex = 6;
    this->label_distance->Text = L"Дистанция (м.)";
    // 
    // button_calculate
    // 
    this->button_calculate->BackColor = System::Drawing::Color::MediumTurquoise;
    this->button_calculate->FlatAppearance->BorderSize = 0;
    this->button_calculate->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    this->button_calculate->Location = System::Drawing::Point(44, 183);
    this->button_calculate->Name = L"button_calculate";
    this->button_calculate->Size = System::Drawing::Size(145, 39);
    this->button_calculate->TabIndex = 5;
    this->button_calculate->Text = L"Рассчитать";
    this->button_calculate->UseVisualStyleBackColor = false;
    this->button_calculate->Click += gcnew System::EventHandler(this, &windowsForm::button_calculate_Click);
    // 
    // label_result
    // 
    this->label_result->AutoSize = true;
    this->label_result->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    this->label_result->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
    this->label_result->Location = System::Drawing::Point(13, 325);
    this->label_result->Name = L"label_result";
    this->label_result->Size = System::Drawing::Size(138, 35);
    this->label_result->TabIndex = 5;
    this->label_result->Text = L"Результат:";
    // 
    // pictureBox1
    // 
    this->pictureBox1->Location = System::Drawing::Point(750, 12);
    this->pictureBox1->Name = L"pictureBox1";
    this->pictureBox1->Size = System::Drawing::Size(500, 281);
    this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
    this->pictureBox1->TabIndex = 6;
    this->pictureBox1->TabStop = false;
    this->pictureBox1->Click += gcnew System::EventHandler(this, &windowsForm::pictureBox1_Click);
    // 
    // chart
    // 
    chart->ChartAreas->Add(chartArea1);
    legend1->BackColor = Color::WhiteSmoke;
    chart->Legends->Add(legend1);
    chart->Location = Point(750, 300);
    series1->ChartType = Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
    series1->Name = L"f(x)";
    series1->LabelBackColor = Color::WhiteSmoke;
    series1->BorderWidth = 4;
    chart->Series->Add(series1);
    chart->Size = Drawing::Size(313, 209);

    chart->ChartAreas[0]->Position->Height = 100;
    chart->ChartAreas[0]->Position->Width = 100;
    chart->ChartAreas[0]->Position->X = 10;
    chart->ChartAreas[0]->Position->Y = 10;

    chart->BackColor = Color::WhiteSmoke;
    chart->ChartAreas[0]->BackColor = Color::WhiteSmoke;


    /*this->chart1->BackColor = System::Drawing::SystemColors::ActiveCaption;
    chartArea1->Name = L"ChartArea1";
    this->chart1->ChartAreas->Add(chartArea1);
    legend1->Name = L"Legend1";
    this->chart1->Legends->Add(legend1);
    this->chart1->Location = System::Drawing::Point(750, 325);
    this->chart1->Name = L"chart1";
    series1->BorderWidth = 4;
    series1->ChartArea = L"ChartArea1";
    series1->Legend = L"Legend1";
    series1->Name = L"f(x)";
    this->chart1->Series->Add(series1);
    this->chart1->Size = System::Drawing::Size(500, 336);
    this->chart1->TabIndex = 10;
    this->chart1->Text = L"chart1";*/
    
    this->chart->Click += gcnew System::EventHandler(this, &windowsForm::chart1_Click);

    this->panel_chart->Controls->Add(button_plot);
    this->panel_chart->Controls->Add(chart);
    this->panel_chart->Location = Point(750, 300);
    this->panel_chart->Size = Drawing::Size(457, 224);
    this->panel_chart->BackColor = Color::WhiteSmoke;
    // 
    // button_plot
    // 
    this->button_plot->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    this->button_plot->Location = System::Drawing::Point(598, 445);
    this->button_plot->Name = L"button_plot";
    this->button_plot->Size = System::Drawing::Size(129, 72);
    this->button_plot->TabIndex = 8;
    this->button_plot->Text = L"Построить график";
    this->button_plot->UseVisualStyleBackColor = true;
    this->button_plot->Click += gcnew EventHandler(this, &windowsForm::button_plot_Click);
    // 
    // animation
    // 
    this->animation->Tick += gcnew System::EventHandler(this, &windowsForm::animation_Tick);
    animation_repeats = 0;
    // 
    // pictures
    // 
    this->pictures->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"pictures.ImageStream")));
    this->pictures->TransparentColor = System::Drawing::Color::Transparent;
    this->pictures->ImageSize = Drawing::Size(256, 186);
    //const int FRAMES_COUNT = 10;
    for (int i = 0; i < 12; i++)
        pictures->Images->Add(Image::FromFile("images/dance/" + i + ".jpg"));
    //this->pictures->Images->SetKeyName(0, L"0.jpg");
    // 
    // windowsForm
    // 
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
    this->BackColor = System::Drawing::SystemColors::ActiveCaption;
    this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
    this->ClientSize = System::Drawing::Size(1262, 673);
    this->Controls->Add(this->button_plot);
    this->Controls->Add(this->chart);
    this->Controls->Add(this->panel_chart);
    this->Controls->Add(this->pictureBox1);
    this->Controls->Add(this->label_result);
    this->Controls->Add(this->groupBox1);
    this->Cursor = System::Windows::Forms::Cursors::Default;
    this->MaximizeBox = false;
    this->Name = L"windowsForm";
    this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
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