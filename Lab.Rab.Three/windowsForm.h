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
		void init_label_result();
		void creating_plot();
		void init_pictures_animation();
		int i = 0;
		PictureBox^ pictureBox1;
		DataVisualization::Charting::Chart^ chart;
		Button^ button_plot;
		Timer^ animation;
		int speed_const;
		int animation_repeats;
		ImageList^ pictures_dance;
		ImageList^ pictures_run1;
		ImageList^ pictures_run2;
		TextBox^ textBox2;
		Label^ label_distance;
		Label^ label_time;
		TextBox^ textBox1;
		GroupBox^ groupBox1;
		Button^ button_calculate;
		Label^ label_result;
		IContainer^ components;

		void loadingImages(String^);
		Void button_plot_Click(Object^ sender, EventArgs^ e);
		Void button_calculate_Click(System::Object^ sender, System::EventArgs^ e);
		Void onLoadForm1(System::Object^ sender, System::EventArgs^ e) { button_plot_Click(nullptr, nullptr); }
		Void animation_Tick(System::Object^ sender, System::EventArgs^ e);
	};
}
