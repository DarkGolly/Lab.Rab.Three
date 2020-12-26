#include "pch.h"

void windowsForm::creating_plot()
{
    DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew DataVisualization::Charting::ChartArea());
    DataVisualization::Charting::Legend^ legend1 = (gcnew DataVisualization::Charting::Legend());
    DataVisualization::Charting::Series^ series1 = (gcnew DataVisualization::Charting::Series());
    // 
    // chart
    // 
    chart->ChartAreas->Add(chartArea1);
    legend1->BackColor = Color::WhiteSmoke;
    chart->Legends->Add(legend1);
    chart->Location = Point(750, 305);
    series1->ChartType = DataVisualization::Charting::SeriesChartType::Spline;
    series1->Name = L"f(x)";
    series1->LabelBackColor = Color::WhiteSmoke;
    series1->BorderWidth = 4;
    chart->Series->Add(series1);
    chart->Size = Drawing::Size(398, 290);
    chart->ChartAreas[0]->Position->Height = 100;
    chart->ChartAreas[0]->Position->Width = 100;
    chart->ChartAreas[0]->Position->X = 12;
    chart->ChartAreas[0]->Position->Y = 12;
    chart->BackColor = Color::FromArgb(153, 180, 209);
    chart->ChartAreas[0]->BackColor = Color::WhiteSmoke;
    // 
    // button_plot
    // 
    this->button_plot->Font = (gcnew Drawing::Font(L"Comic Sans MS", 12, Drawing::FontStyle::Bold, Drawing::GraphicsUnit::Point, static_cast<Byte>(204)));
    this->button_plot->Location = Drawing::Point(598, 445);
    this->button_plot->Name = L"button_plot";
    this->button_plot->Size = Drawing::Size(129, 72);
    this->button_plot->TabIndex = 8;
    this->button_plot->Text = L"Построить график";
    this->button_plot->UseVisualStyleBackColor = true;
    this->button_plot->Click += gcnew EventHandler(this, &windowsForm::button_plot_Click);
}