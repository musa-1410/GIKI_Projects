#pragma once
#include <chrono>
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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::ListBox^ listBox1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->button1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button1->Location = System::Drawing::Point(162, 393);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(281, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Import Values";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(140, 65);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(397, 104);
			this->listBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Location = System::Drawing::Point(57, 111);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"DATA";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(57, 196);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"RESULT";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox2->Location = System::Drawing::Point(141, 230);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(143, 26);
			this->textBox2->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(57, 231);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Run time";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox3->Location = System::Drawing::Point(182, 268);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(68, 26);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox4->Location = System::Drawing::Point(253, 304);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(83, 26);
			this->textBox4->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(57, 269);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 20);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Data Structure";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(57, 306);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(178, 20);
			this->label5->TabIndex = 12;
			this->label5->Text = L"No. Of Non-Zero Values";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Control;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(154, 24);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(232, 24);
			this->label6->TabIndex = 13;
			this->label6->Text = L"2023330- Musa Ali CS-H";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox1->Location = System::Drawing::Point(138, 196);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(399, 26);
			this->textBox1->TabIndex = 14;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(637, 487);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();  //Creating an instance of OpenFileDiaolg
		openFileDialog1->InitialDirectory = "D:\CS112_Assignment6_2023330\CS112_Assignment6_2023330\CS112_2023330";     //Defining the initial directory of openfiledialog1
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";   //sorting out all txt files
		openFileDialog1->FilterIndex = 2; //setting filter index to 2 to view all files
		openFileDialog1->RestoreDirectory = true;  //restoring the current directory as default directory
		String^ item;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)  //checks whether the user clicked OK button after opening the filedialog
		{
			StreamReader^ input = File::OpenText(openFileDialog1->FileName);   //Creating an input stream for reading data from the file
			item = input->ReadLine();        //reading the data into the string variable and storing it in the listbox
			while (item != nullptr)
			{
				listBox1->Items->Add(item);
				item = input->ReadLine();
			}
			input->Close();         //closing the input file
		};

		StreamReader^ inpu = File::OpenText(openFileDialog1->FileName);      //creating another instance of input stream to read the data from a file and store it in a 2D array
		int eq = int::Parse(inpu->ReadLine());  //reading the first value (No. of Equations)
		int var = int::Parse(inpu->ReadLine());  //reading number of variables

		StreamWriter^ ouput = File::CreateText("result.txt"); //Creating an output stream for writing the data into a file
		ouput->WriteLine("Equations : " + eq.ToString()); //writing data
		ouput->WriteLine("Variables : " + var.ToString());
		// Creating the dynamic 2D array
		array<array<int>^>^ arr = gcnew array<array<int>^>(eq);
		for (int i = 0; i < eq; ++i)
			arr[i] = gcnew array<int>(var);

		// Reading the data into the 2D array
		String^ lineo;
		int nzvals = 0;   //non-zero values varible
		for (int row = 0; row < eq; ++row)
		{
			lineo = inpu->ReadLine();
			if (lineo != nullptr) // Checking if line is not null before splitting
			{
				array<String^>^ numbers = lineo->Split('\t');
				for (int col = 0; col < var; ++col)
				{
					arr[row][col] = int::Parse(numbers[col]);
					if (arr[row][col] != 0)   //checking non-zero values
						nzvals++;
				}
			}
		}
		inpu->Close();   //closing input file
		textBox4->Text = nzvals.ToString();  //storing non-zero values in textbox
		int* result = new int[var];   //creaing a dynamic array for storing result
		textBox3->Text = arr->GetType()->Name;   //checking type of the data structure
		for (int i = 0; i < var; i++)
		{
			result[i] = 0;  //intializing result array to zero
		}

		using namespace std::chrono;

		// Starting timer for calculating time
		auto start = high_resolution_clock::now();

		for (int j = 0; j < var; j++)
		{
			for (int k = 0; k < eq; k++)
			{
				result[j] += arr[k][j];
			}
		}

		// Stopping timer
		auto end = high_resolution_clock::now();

		// Calculating duration
		auto duration = duration_cast<microseconds>(end - start);
		int time = duration.count();
		// Updating the textbox on the form with the duration
		textBox2->Text = time.ToString() + " microseconds";

		String^ final = "";  //string variable to store the final result
		for (int l = 0; l < var; l++)      //loop to store final result in output file
		{
			final = final + result[l] + "x^" + (var - l);
			if (l != var - 1)
				final = final + "   +   ";
		}
		ouput->WriteLine(final);
		textBox1->Text = final;
		inpu->Close();
		ouput->Close();
	}
	};
}
