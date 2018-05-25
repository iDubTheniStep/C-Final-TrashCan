#pragma once



namespace TheTrashBaord {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	int quitting;

	/// <summary>
	/// Summary for QUITER
	/// </summary>
	public ref class QUITER : public System::Windows::Forms::Form
	{
	public:
		QUITER(void)
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
		~QUITER()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(QUITER::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(333, 273);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 26);
			this->button1->TabIndex = 0;
			this->button1->Text = L"YES";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &QUITER::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(214, 188);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(323, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ARE YOU SURE YOU WANT TO QUIT";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(262, 211);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(233, 23);
			this->label2->TabIndex = 3;
			this->label2->Text = L"THE 2018 TRASHBOARD\?";
			// 
			// QUITER
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(755, 488);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"QUITER";
			this->Text = L"QUITER";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
		{
					 Application::Exit();
		}
		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
		{
					 
		}

		}
	
		;}

