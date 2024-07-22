#pragma once
#include <cmath>
#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Bitmap^ bmp;

		int columns;
		int rows;
		float** data;
		float** pixarr;
		float** discarray;
		float** shuffarr;
		float** discarray2;
		float** arr;
		float** arr2;
		float** pixarr2;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	public:
		System::Media::SoundPlayer^ plr;
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ openFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ matrixProcessToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ correlationMatrixToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ discreatizeMatrixToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ displayBitmapToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ blackAndWhiteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ greenToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ shuffleDataToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ processMatrixToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ correlationMatrixToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ discretizeMatrixToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ displayBitmapToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ blackAndWhiteToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ greenToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ signatureSortToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ soundToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ oNToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ oFFToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->openFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->matrixProcessToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->correlationMatrixToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->discreatizeMatrixToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->displayBitmapToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->blackAndWhiteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->greenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->shuffleDataToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->processMatrixToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->correlationMatrixToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->discretizeMatrixToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->displayBitmapToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->blackAndWhiteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->greenToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->signatureSortToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->soundToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oNToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oFFToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(11, 172);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(28, 29);
			this->button2->TabIndex = 8;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(11, 110);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(28, 29);
			this->button1->TabIndex = 7;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(49, 74);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(213, 210);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(608, 74);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(513, 277);
			this->listBox1->TabIndex = 5;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->openFileToolStripMenuItem,
					this->matrixProcessToolStripMenuItem, this->displayBitmapToolStripMenuItem, this->shuffleDataToolStripMenuItem, this->processMatrixToolStripMenuItem,
					this->displayBitmapToolStripMenuItem1, this->signatureSortToolStripMenuItem, this->soundToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1028, 24);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// openFileToolStripMenuItem
			// 
			this->openFileToolStripMenuItem->Name = L"openFileToolStripMenuItem";
			this->openFileToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->openFileToolStripMenuItem->Text = L"Open File";
			this->openFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openFileToolStripMenuItem_Click);
			// 
			// matrixProcessToolStripMenuItem
			// 
			this->matrixProcessToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->correlationMatrixToolStripMenuItem,
					this->discreatizeMatrixToolStripMenuItem
			});
			this->matrixProcessToolStripMenuItem->Name = L"matrixProcessToolStripMenuItem";
			this->matrixProcessToolStripMenuItem->Size = System::Drawing::Size(96, 20);
			this->matrixProcessToolStripMenuItem->Text = L"Matrix Process";
			// 
			// correlationMatrixToolStripMenuItem
			// 
			this->correlationMatrixToolStripMenuItem->Name = L"correlationMatrixToolStripMenuItem";
			this->correlationMatrixToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->correlationMatrixToolStripMenuItem->Text = L"Correlation Matrix";
			this->correlationMatrixToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::correlationMatrixToolStripMenuItem_Click);
			// 
			// discreatizeMatrixToolStripMenuItem
			// 
			this->discreatizeMatrixToolStripMenuItem->Name = L"discreatizeMatrixToolStripMenuItem";
			this->discreatizeMatrixToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->discreatizeMatrixToolStripMenuItem->Text = L"Discreatize Matrix";
			this->discreatizeMatrixToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::discreatizeMatrixToolStripMenuItem_Click);
			// 
			// displayBitmapToolStripMenuItem
			// 
			this->displayBitmapToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->blackAndWhiteToolStripMenuItem,
					this->greenToolStripMenuItem
			});
			this->displayBitmapToolStripMenuItem->Name = L"displayBitmapToolStripMenuItem";
			this->displayBitmapToolStripMenuItem->Size = System::Drawing::Size(98, 20);
			this->displayBitmapToolStripMenuItem->Text = L"Display Bitmap";
			// 
			// blackAndWhiteToolStripMenuItem
			// 
			this->blackAndWhiteToolStripMenuItem->Name = L"blackAndWhiteToolStripMenuItem";
			this->blackAndWhiteToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->blackAndWhiteToolStripMenuItem->Text = L"Black And White";
			this->blackAndWhiteToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::blackAndWhiteToolStripMenuItem_Click);
			// 
			// greenToolStripMenuItem
			// 
			this->greenToolStripMenuItem->Name = L"greenToolStripMenuItem";
			this->greenToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->greenToolStripMenuItem->Text = L"Green";
			this->greenToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::greenToolStripMenuItem_Click);
			// 
			// shuffleDataToolStripMenuItem
			// 
			this->shuffleDataToolStripMenuItem->Name = L"shuffleDataToolStripMenuItem";
			this->shuffleDataToolStripMenuItem->Size = System::Drawing::Size(83, 20);
			this->shuffleDataToolStripMenuItem->Text = L"Shuffle Data";
			this->shuffleDataToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::shuffleDataToolStripMenuItem_Click);
			// 
			// processMatrixToolStripMenuItem
			// 
			this->processMatrixToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->correlationMatrixToolStripMenuItem1,
					this->discretizeMatrixToolStripMenuItem
			});
			this->processMatrixToolStripMenuItem->Name = L"processMatrixToolStripMenuItem";
			this->processMatrixToolStripMenuItem->Size = System::Drawing::Size(96, 20);
			this->processMatrixToolStripMenuItem->Text = L"Process Matrix";
			// 
			// correlationMatrixToolStripMenuItem1
			// 
			this->correlationMatrixToolStripMenuItem1->Name = L"correlationMatrixToolStripMenuItem1";
			this->correlationMatrixToolStripMenuItem1->Size = System::Drawing::Size(170, 22);
			this->correlationMatrixToolStripMenuItem1->Text = L"Correlation Matrix";
			this->correlationMatrixToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::correlationMatrixToolStripMenuItem1_Click);
			// 
			// discretizeMatrixToolStripMenuItem
			// 
			this->discretizeMatrixToolStripMenuItem->Name = L"discretizeMatrixToolStripMenuItem";
			this->discretizeMatrixToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->discretizeMatrixToolStripMenuItem->Text = L"Discretize Matrix";
			this->discretizeMatrixToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::discretizeMatrixToolStripMenuItem_Click);
			// 
			// displayBitmapToolStripMenuItem1
			// 
			this->displayBitmapToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->blackAndWhiteToolStripMenuItem1,
					this->greenToolStripMenuItem1
			});
			this->displayBitmapToolStripMenuItem1->Name = L"displayBitmapToolStripMenuItem1";
			this->displayBitmapToolStripMenuItem1->Size = System::Drawing::Size(98, 20);
			this->displayBitmapToolStripMenuItem1->Text = L"Display Bitmap";
			// 
			// blackAndWhiteToolStripMenuItem1
			// 
			this->blackAndWhiteToolStripMenuItem1->Name = L"blackAndWhiteToolStripMenuItem1";
			this->blackAndWhiteToolStripMenuItem1->Size = System::Drawing::Size(161, 22);
			this->blackAndWhiteToolStripMenuItem1->Text = L"Black And White";
			this->blackAndWhiteToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::blackAndWhiteToolStripMenuItem1_Click);
			// 
			// greenToolStripMenuItem1
			// 
			this->greenToolStripMenuItem1->Name = L"greenToolStripMenuItem1";
			this->greenToolStripMenuItem1->Size = System::Drawing::Size(161, 22);
			this->greenToolStripMenuItem1->Text = L"Green";
			this->greenToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::greenToolStripMenuItem1_Click);
			// 
			// signatureSortToolStripMenuItem
			// 
			this->signatureSortToolStripMenuItem->Name = L"signatureSortToolStripMenuItem";
			this->signatureSortToolStripMenuItem->Size = System::Drawing::Size(93, 20);
			this->signatureSortToolStripMenuItem->Text = L"Signature Sort";
			this->signatureSortToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::signatureSortToolStripMenuItem_Click);
			// 
			// soundToolStripMenuItem
			// 
			this->soundToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->oNToolStripMenuItem,
					this->oFFToolStripMenuItem
			});
			this->soundToolStripMenuItem->Name = L"soundToolStripMenuItem";
			this->soundToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->soundToolStripMenuItem->Text = L"Sound";
			// 
			// oNToolStripMenuItem
			// 
			this->oNToolStripMenuItem->Name = L"oNToolStripMenuItem";
			this->oNToolStripMenuItem->Size = System::Drawing::Size(95, 22);
			this->oNToolStripMenuItem->Text = L"ON";
			this->oNToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::oNToolStripMenuItem_Click);
			// 
			// oFFToolStripMenuItem
			// 
			this->oFFToolStripMenuItem->Name = L"oFFToolStripMenuItem";
			this->oFFToolStripMenuItem->Size = System::Drawing::Size(95, 22);
			this->oFFToolStripMenuItem->Text = L"OFF";
			this->oFFToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::oFFToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"(*.txt)|*.txt";
			this->openFileDialog1->FilterIndex = 2;
			this->openFileDialog1->InitialDirectory = L"C:\\Users\\DELL\\OneDrive - Higher Education Commission\\Desktop\\GIKI\\2nd Semester\\CS"
				L"112\\2023330_ 2023640_Prj";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1028, 438);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void openFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			
		String^ str;
		String^ str1;
		StreamReader^ reader;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			reader = File::OpenText(openFileDialog1->FileName);
			str = reader->ReadLine();
			str1 = reader->ReadLine();
			//MessageBox::Show("The Rows are: " + str + " \n and the Columns are: " + str1);
		}

		//StreamWriter^ ouput = File::CreateText("result.txt"); //Creating an output stream for writing the data into a file
		//ouput->WriteLine("Equations : " + str.ToString()); //writing data
		//ouput->WriteLine("Variables : " + str1.ToString());

		rows = int::Parse(str);
		columns = int::Parse(str1);
		data = new float* [rows];
		for (int i = 0; i < rows; i++)
		{
			data[i] = new float[columns];
		}


		for (int i = 0; i < rows; i++)
		{
			str = reader->ReadLine();

			if (str != nullptr)
			{
				listBox1->Items->Add(str);
				float x;
				array<String^>^ digitline = str->Split('\t');
				for (int j = 0; j < columns; j++)
				{
					if (j < digitline->Length && float::TryParse(digitline[j], x))
					{
						// Parsing succeeded, assign the parsed value to data[i][j]
						data[i][j] = x;
					}
				}
			}
		}
		reader->Close();
		//Control.Add(data);
	}
	private: System::Void correlationMatrixToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		float sumr1 = 0;
		float sumr2 = 0;
		float meanr1 = 0;
		float meanr2 = 0;
		float meansumr1 = 0;
		float sqsumr1 = 0;
		float sqsumr2 = 0;
		float corr = 0;
		arr = new float* [rows];
		for (int i = 0; i < rows; i++)
		{
			arr[i] = new float[rows];
		}
		//float* temp = new float[columns];
		for (int i = 0; i < rows; i++)
		{
			//	temp = data[i];
			for (int x = 0; x < rows; x++)
			{
				for (int j = 0; j < columns; j++)
				{
					sumr1 = sumr1 + data[i][j];
					sumr2 = sumr2 + data[x][j];
				}
				meanr1 = sumr1 / columns;
				meanr2 = sumr2 / columns;
				for (int j = 0; j < columns; j++) {
					meansumr1 += (data[i][j] - meanr1) * (data[x][j] - meanr2);
					sqsumr1 = sqsumr1 + ((data[i][j] - meanr1) * (data[i][j] - meanr1));
					sqsumr2 = sqsumr2 + ((data[x][j] - meanr2) * (data[x][j] - meanr2));
				}

				corr = (float)(meansumr1 / (sqrt(sqsumr1 * sqsumr2)));
				arr[i][x] = corr;
				sumr1 = 0;
				sumr2 = 0;
				meansumr1 = 0;
				sqsumr1 = 0;
				sqsumr2 = 0;
				meanr1 = 0;
				meanr2 = 0;
				corr = 0;
			}

		}
		listBox1->Items->Clear();
		for (int i = 1; i < rows; i++) {
			String^ rowString;
			for (int j = 1; j < rows; j++) {
				rowString += arr[i][j].ToString() + "\t"; // Assuming you want to separate columns with tabs
			}
			listBox1->Items->Add(rowString);
		}
	}
	private: System::Void discreatizeMatrixToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		float colmean = 0;
		float sumcol = 0;

		discarray = new float* [rows];
		for (int i = 0; i < rows; i++)
		{
			discarray[i] = new float[rows];
		}
		for (int i = 1; i < rows; i++) {
			for (int j = 1; j < rows; j++) {
				sumcol = sumcol + arr[j][i];
				colmean = sumcol / rows;
			}

			for (int j = 1; j < rows; j++) {
				if (arr[j][i] > colmean) {
					discarray[j][i] = 1;
				}
				else {
					discarray[j][i] = 0;
				}
			}
			colmean = 0;
			sumcol = 0;
		}

		listBox1->Items->Clear();
		for (int i = 1; i < rows; i++) {
			String^ rowString = "";
			for (int j = 1; j < rows; j++) {
				rowString += discarray[i][j].ToString() + "\t"; // Assuming you want to separate columns with tabs
			}
			listBox1->Items->Add(rowString);
		}
	}
	private: System::Void blackAndWhiteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		bmp = gcnew Bitmap(rows, rows);


		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < rows; j++)
			{
				if (discarray[i][j] == 0)
				{
					bmp->SetPixel(i, j, Color::White);

				}
				if (discarray[i][j] == 1)
				{
					bmp->SetPixel(i, j, Color::Black);

				}
			}
			for (int j = 0; j < rows; j++)
			{
				if (discarray[i][j] == 0)
				{
					bmp->SetPixel(j, i, Color::White);

				}
				if (discarray[i][j] == 1)
				{
					bmp->SetPixel(j, i, Color::Black);

				}

			}
			pictureBox1->Invalidate();
			pictureBox1->Image = bmp;
			pictureBox1->Refresh();
		}
	}
	private: System::Void greenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		bmp = gcnew Bitmap(rows, rows);
		pixarr = new float* [rows];
		for (int i = 0; i < rows; i++)
		{
			pixarr[i] = new float[rows];
		}
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < rows; j++)
			{
				pixarr[i][j] = arr[i][j];
			}
		}

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < rows; j++)
			{
				pixarr[i][j] = pixarr[i][j] * 255;
			}
		}

		Color c;

		for (int i = 1; i < rows; i++)
		{
			for (int j = 1; j < rows; j++)
			{
				c = Color::FromArgb(0, pixarr[i][j], 0);
				bmp->SetPixel(i, j, c);
			}
			pictureBox1->Invalidate();
			pictureBox1->Image = bmp;
			pictureBox1->Refresh();
		}
	}
	private: System::Void shuffleDataToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		shuffarr = new float* [rows];
		for (int i = 0; i < rows; i++)
		{
			shuffarr[i] = new float[columns];
		}

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				shuffarr[i][j] = data[i][j];
			}
		}

		float* temp = new float[columns];
		int random;
		int random1;
		srand(time(0));
		random1 = rand() % 1500;
		for (int i = 0; i < rows; i++)
		{
			srand(i + random1);
			random = rand() % 150;

			for (int j = 0; j < columns; j++)
			{
				temp[j] = shuffarr[random][j];
				shuffarr[random][j] = shuffarr[i][j];
				shuffarr[i][j] = temp[j];
			}
		}
		listBox1->Items->Clear();
		for (int i = 0; i < rows; i++)
		{
			String^ rowString = "";
			for (int j = 0; j < columns; j++)
			{
				rowString += shuffarr[i][j].ToString() + "\t";
			}
			listBox1->Items->Add(rowString);
		}
	}
	private: System::Void correlationMatrixToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		float sumr1 = 0;
		float sumr2 = 0;
		float meanr1 = 0;
		float meanr2 = 0;
		float meansumr1 = 0;
		float sqsumr1 = 0;
		float sqsumr2 = 0;
		float corr = 0;
		arr2 = new float* [rows];
		for (int i = 0; i < rows; i++)
		{
			arr2[i] = new float[rows];
		}
		//float* temp = new float[columns];
		for (int i = 0; i < rows; i++)
		{
			//	temp = data[i];
			for (int x = 0; x < rows; x++)
			{
				for (int j = 0; j < columns; j++)
				{
					sumr1 = sumr1 + shuffarr[i][j];
					sumr2 = sumr2 + shuffarr[x][j];
				}
				meanr1 = sumr1 / columns;
				meanr2 = sumr2 / columns;
				for (int j = 0; j < columns; j++) {
					meansumr1 += (shuffarr[i][j] - meanr1) * (shuffarr[x][j] - meanr2);
					sqsumr1 = sqsumr1 + ((shuffarr[i][j] - meanr1) * (shuffarr[i][j] - meanr1));
					sqsumr2 = sqsumr2 + ((shuffarr[x][j] - meanr2) * (shuffarr[x][j] - meanr2));
				}

				corr = (float)(meansumr1 / (sqrt(sqsumr1 * sqsumr2)));
				arr2[i][x] = corr;
				sumr1 = 0;
				sumr2 = 0;
				meansumr1 = 0;
				sqsumr1 = 0;
				sqsumr2 = 0;
				meanr1 = 0;
				meanr2 = 0;
				corr = 0;
			}

		}
		listBox1->Items->Clear();
		for (int i = 1; i < rows; i++) {
			String^ rowString;
			for (int j = 1; j < rows; j++) {
				rowString += arr2[i][j].ToString() + "\t"; // Assuming you want to separate columns with tabs
			}
			listBox1->Items->Add(rowString);
		}
	}
	private: System::Void discretizeMatrixToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		float colmean = 0;
		float sumcol = 0;

		discarray2 = new float* [rows];
		for (int i = 0; i < rows; i++)
		{
			discarray2[i] = new float[rows];
		}
		for (int i = 1; i < rows; i++) {
			for (int j = 1; j < rows; j++) {
				sumcol = sumcol + arr2[j][i];
				colmean = sumcol / rows;
			}

			for (int j = 1; j < rows; j++) {
				if (arr2[j][i] > colmean) {
					discarray2[j][i] = 1;
				}
				else {
					discarray2[j][i] = 0;
				}
			}
			colmean = 0;
			sumcol = 0;
		}

		listBox1->Items->Clear();
		for (int i = 1; i < rows; i++) {
			String^ rowString = "";
			for (int j = 1; j < rows; j++) {
				rowString += discarray2[i][j].ToString() + "\t"; // Assuming you want to separate columns with tabs
			}
			listBox1->Items->Add(rowString);
		}
	}
	private: System::Void blackAndWhiteToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		bmp = gcnew Bitmap(rows, rows);

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < rows; j++)
			{
				if (discarray2[i][j] == 0)
				{
					bmp->SetPixel(i, j, Color::White);

				}
				if (discarray2[i][j] == 1)
				{
					bmp->SetPixel(i, j, Color::Black);

				}
			}
			for (int j = 0; j < rows; j++)
			{
				if (discarray2[i][j] == 0)
				{
					bmp->SetPixel(j, i, Color::White);

				}
				if (discarray2[i][j] == 1)
				{
					bmp->SetPixel(j, i, Color::Black);

				}

			}
			pictureBox1->Invalidate();
			pictureBox1->Image = bmp;
			pictureBox1->Refresh();
		}
	}
	private: System::Void greenToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		bmp = gcnew Bitmap(rows, rows);
		pixarr2 = new float* [rows];
		for (int i = 0; i < rows; i++)
		{
			pixarr2[i] = new float[rows];
		}
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < rows; j++)
			{
				pixarr2[i][j] = arr2[i][j];
			}
		}

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < rows; j++)
			{
				pixarr2[i][j] = pixarr2[i][j] * 255;
			}
		}

		Color c;

		for (int i = 1; i < rows; i++)
		{
			for (int j = 1; j < rows; j++)
			{
				c = Color::FromArgb(0, pixarr2[i][j], 0);
				bmp->SetPixel(i, j, c);
			}
			pictureBox1->Invalidate();
			pictureBox1->Image = bmp;
			pictureBox1->Refresh();
		}
	}
	private: System::Void signatureSortToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		float row_sum = 0;
		float row_mean = 0;
		float* rank = new float[rows];
		//firstly i need to take sum of all values in the row
		//then I need to calculate the mean of the row
		//then I need to Multiply sum with mean 
		//then we sort the matrix
		for (int i = 0; i < rows; i++) {
			row_sum = 0;
			for (int j = 0; j < columns; j++) {
				row_sum += shuffarr[i][j];
			}
			row_mean = row_sum / columns;
			rank[i] = row_sum * row_mean;
		}

		for (int i = 0; i < rows - 1; i++) {
			for (int j = i + 1; j < rows; j++) {
				if (rank[i] > rank[j]) {
					// Swap entire rows of shuffarr
					float* tempRow = shuffarr[i];
					shuffarr[i] = shuffarr[j];
					shuffarr[j] = tempRow;

					// Swap corresponding ranks
					float tempRank = rank[i];
					rank[i] = rank[j];
					rank[j] = tempRank;
				}
			}
		}



		delete[] rank;
		listBox1->Items->Clear();
		for (int i = 0; i < rows; i++)
		{
			float* temp = new float[columns];
			String^ rowString = "";
			for (int j = 0; j < columns; j++)
			{
				rowString += shuffarr[i][j].ToString() + "\t"; // Assuming you want to separate columns with tabs
			}
			listBox1->Items->Add(rowString);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->Width *= 2;
		pictureBox1->Height *= 2;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->Width /= 2;
		pictureBox1->Height /= 2;
	}
	private: System::Void oNToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		plr = gcnew System::Media::SoundPlayer("C:\\Users\\DELL\\OneDrive - Higher Education Commission\\Desktop\\GIKI\\2nd Semester\\CS112-L\\GUI\\Image Processing\\Play sound\\let_me_down_slowly.wav");
		plr->Play();
	}
private: System::Void oFFToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	plr->Stop();
}
};
}
