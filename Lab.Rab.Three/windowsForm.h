#pragma once

namespace LabRabThree {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class windowsForm : public System::Windows::Forms::Form
	{
	public:
		windowsForm(void)
		{
			InitializeComponent();
		}
	protected:
		~windowsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		void InitializeComponent(void);
		void createCompanent();
		void initInput();
		void loadingImages(String^);
		int i = 0;
		System::Windows::Forms::PictureBox^ pictureBox1;
		System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
		Windows::Forms::Panel^ panel_chart;
		System::Windows::Forms::Button^ button_plot;
		System::Windows::Forms::Timer^ animation;
		int speed_const;
		int animation_repeats;
		System::Windows::Forms::ImageList^ pictures_dance;
		System::Windows::Forms::ImageList^ pictures_run1;
		System::Windows::Forms::ImageList^ pictures_run2;
		System::Windows::Forms::TextBox^ textBox2;
		System::Windows::Forms::Label^ label_distance;
		System::Windows::Forms::Label^ label_time;
		System::Windows::Forms::TextBox^ textBox1;
		System::Windows::Forms::GroupBox^ groupBox1;
		System::Windows::Forms::Button^ button_calculate;
		System::Windows::Forms::Label^ label_result;
		System::ComponentModel::IContainer^ components;

		


		   Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
		   {

		   }
		   Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) 
		   {

		   }
		   Void button_calculate_Click(System::Object^ sender, System::EventArgs^ e);//������������ ��������
		   Void button_plot_Click(Object^ sender, EventArgs^ e)
		   {
			   Random^ rnd = gcnew Random();
			   chart->Series[0]->Points->Clear();
			   chart->Series[0]->Color = Color::FromArgb(
				   rnd->Next(0, 255),
				   rnd->Next(0, 255),
				   rnd->Next(0, 255));
			   for (int i = 0; i < 10; i++)
				   chart->Series[0]->Points->AddXY(i, rnd->Next(0, 11));
			   chart->Refresh();
		   }
		   Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) 
		   {
		   
		   }
		   Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) 
		   {
		   
		   }
		   
		   Void label_distance_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   
		   }
		   Void onLoadForm1(System::Object^ sender, System::EventArgs^ e)
		   {
			   BackgroundImage = Image::FromFile("images/background.jpg");
			   button_plot_Click(nullptr, nullptr);
		   }
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void animation_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->pictureBox1->Visible = true;
		animation_repeats++;
		if (animation_repeats > 100)
		{
			animation->Stop();
			this->pictureBox1->Visible = false;
			animation_repeats = 0;
			//rectangle->~Graphics();
		}
		else
		{
			if (speed_const <= 2)
			{
				pictureBox1->Image = pictures_dance->Images[animation_repeats % 11];
			}
			else if (speed_const > 2 && speed_const < 8)
			{
				pictureBox1->Image = pictures_run1->Images[animation_repeats % 47];
			}
			else if (speed_const >= 8)
			{
				pictureBox1->Image = pictures_run2->Images[animation_repeats % 13];
			}
			
			
			//rectangle->RotateTransform(360.f / 100.f);
			//rectangle->FillRectangle(gcnew SolidBrush(Color::FromArgb(129, 124, 133)), Rectangle(-100, 100, 200, 2));
			//rectangle->FillRectangle(gcnew SolidBrush(Color::FromArgb(129, 124, 133)), Rectangle(0, 0, 2, 100));
		}
	}
	};
}
