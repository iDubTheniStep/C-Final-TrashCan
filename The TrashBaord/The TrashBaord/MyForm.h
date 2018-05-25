#pragma once
#include "QUITER.h"
#include <iostream>
#include <random>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>




namespace TheTrashBaord {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>


	
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		MyForm(void)
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

		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	

	private: System::Windows::Forms::Button^  button1; // makes form button
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::Button^  button44;
	private: System::Windows::Forms::Button^  button45;
	private: System::Windows::Forms::Button^  button46;
	private: System::Windows::Forms::Button^  button47;
	private: System::Windows::Forms::Button^  button48;



	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button()); //initilize form button
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12); //button location
			this->button1->Name = L"button1"; //what to call button in code
			this->button1->Size = System::Drawing::Size(84, 69); //button size
			this->button1->TabIndex = 0; //sets button number
			this->button1->Text = L"NOoOoOoO"; //text that is displayed on button
			this->button1->UseVisualStyleBackColor = true; //background color
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click); //handles when button is clicked
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(102, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 69);
			this->button2->TabIndex = 1;
			this->button2->Text = L"FO";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(192, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(84, 69);
			this->button3->TabIndex = 2;
			this->button3->Text = L"9000";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(294, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(84, 69);
			this->button4->TabIndex = 3;
			this->button4->Text = L"BOS";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(384, 12);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(84, 69);
			this->button5->TabIndex = 4;
			this->button5->Text = L"BRUH";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(476, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(84, 69);
			this->button6->TabIndex = 5;
			this->button6->Text = L"combo";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 87);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(84, 69);
			this->button7->TabIndex = 6;
			this->button7->Text = L"DOH";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(102, 87);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(84, 69);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Finish him";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(192, 87);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(84, 69);
			this->button9->TabIndex = 8;
			this->button9->Text = L"THE ULTIMATE TEST";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(384, 87);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(84, 69);
			this->button11->TabIndex = 10;
			this->button11->Text = L"The Nuke";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(476, 87);
			this->button12->Name = L"OYD";
			this->button12->Size = System::Drawing::Size(84, 69);
			this->button12->TabIndex = 11;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(12, 162);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(84, 69);
			this->button13->TabIndex = 12;
			this->button13->Text = L"snoopy snoop";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(102, 162);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(84, 69);
			this->button14->TabIndex = 13;
			this->button14->Text = L"SMASH";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(192, 162);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(84, 69);
			this->button15->TabIndex = 14;
			this->button15->Text = L"Look At MEEEE";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(384, 162);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(84, 69);
			this->button17->TabIndex = 16;
			this->button17->Text = L"LUVu";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(474, 162);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(84, 69);
			this->button18->TabIndex = 17;
			this->button18->Text = L"JC";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(12, 237);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(84, 69);
			this->button19->TabIndex = 18;
			this->button19->Text = L"SPARTA";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(102, 237);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(84, 69);
			this->button20->TabIndex = 19;
			this->button20->Text = L"SS";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(192, 237);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(84, 69);
			this->button21->TabIndex = 20;
			this->button21->Text = L"SRKN";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(294, 237);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(84, 69);
			this->button22->TabIndex = 21;
			this->button22->Text = L"OH BABY";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(295, 87);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(84, 69);
			this->button10->TabIndex = 22;
			this->button10->Text = L"FP";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(295, 162);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(84, 69);
			this->button16->TabIndex = 23;
			this->button16->Text = L"LISTEN";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(384, 237);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(84, 69);
			this->button23->TabIndex = 24;
			this->button23->Text = L"TROLL";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(474, 237);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(84, 69);
			this->button24->TabIndex = 25;
			this->button24->Text = L"GC";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(12, 320);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(84, 69);
			this->button25->TabIndex = 26;
			this->button25->Text = L"66";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(102, 320);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(84, 69);
			this->button26->TabIndex = 27;
			this->button26->Text = L"dont play while door open";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(192, 320);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(84, 69);
			this->button27->TabIndex = 28;
			this->button27->Text = L"Falco1e";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(295, 320);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(84, 69);
			this->button28->TabIndex = 29;
			this->button28->Text = L"scream";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(384, 320);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(84, 69);
			this->button29->TabIndex = 30;
			this->button29->Text = L"DOUCHE";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(474, 320);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(84, 69);
			this->button30->TabIndex = 31;
			this->button30->Text = L"LI";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(12, 395);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(84, 69);
			this->button31->TabIndex = 32;
			this->button31->Text = L"victory";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(102, 395);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(84, 69);
			this->button32->TabIndex = 33;
			this->button32->Text = L"waka";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(192, 395);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(84, 69);
			this->button33->TabIndex = 34;
			this->button33->Text = L"wombo combo";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(294, 395);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(84, 69);
			this->button34->TabIndex = 35;
			this->button34->Text = L"yeahboiii";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(385, 395);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(84, 69);
			this->button35->TabIndex = 36;
			this->button35->Text = L"erro";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(474, 395);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(84, 69);
			this->button36->TabIndex = 37;
			this->button36->Text = L"jolly";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(12, 470);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(84, 69);
			this->button37->TabIndex = 38;
			this->button37->Text = L"GOD";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(102, 470);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(84, 69);
			this->button38->TabIndex = 39;
			this->button38->Text = L"HALO";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(192, 470);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(84, 69);
			this->button39->TabIndex = 40;
			this->button39->Text = L"Loud";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(294, 470);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(84, 69);
			this->button40->TabIndex = 41;
			this->button40->Text = L"eric";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(385, 470);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(84, 69);
			this->button41->TabIndex = 42;
			this->button41->Text = L"nani";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(475, 470);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(84, 69);
			this->button42->TabIndex = 43;
			this->button42->Text = L"khaaaaan";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::button42_Click);
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(12, 545);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(84, 69);
			this->button43->TabIndex = 44;
			this->button43->Text = L"pikachu";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::button43_Click);
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(102, 545);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(84, 69);
			this->button44->TabIndex = 45;
			this->button44->Text = L"barrelroll";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::button44_Click);
			// 
			// button45
			// 
			this->button45->Location = System::Drawing::Point(192, 545);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(84, 69);
			this->button45->TabIndex = 46;
			this->button45->Text = L"wtfboom";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &MyForm::button45_Click);
			// 
			// button46
			// 
			this->button46->Location = System::Drawing::Point(295, 545);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(83, 69);
			this->button46->TabIndex = 47;
			this->button46->Text = L"rumble";
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &MyForm::button46_Click);
			// 
			// button47
			// 
			this->button47->Location = System::Drawing::Point(384, 545);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(84, 69);
			this->button47->TabIndex = 48;
			this->button47->Text = L"RANDOM";
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &MyForm::button47_Click);
			// 
			// button48
			// 
			this->button48->Location = System::Drawing::Point(474, 545);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(84, 69);
			this->button48->TabIndex = 49;
			this->button48->Text = L"QUIT";
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &MyForm::button48_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(572, 633); //form size
			this->Controls->Add(this->button48); //adds button to form
			this->Controls->Add(this->button47);
			this->Controls->Add(this->button46);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::Color::Black;
			this->Name = L"MyForm";//name of form
			this->Text = L"The Trash Board"; //text that shows at the top of form
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
#pragma comment(lib, "winmm.lib") //adds winmm libary

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) //handles when button is clicked
	{
				 PlaySound(TEXT("nooo.swf.wav"), NULL, SND_SYNC); //finds sound file source



	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("fuckoff.wav"), NULL, SND_SYNC);


	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("9000.wav"), NULL, SND_SYNC);

	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("BOS.wav"), NULL, SND_SYNC);

	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("BRUH.wav"), NULL, SND_SYNC);

	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("combo.wav"), NULL, SND_SYNC);

	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("doh.wav"), NULL, SND_SYNC);

	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("finish.wav"), NULL, SND_SYNC);

	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("fitness.wav"), NULL, SND_SYNC);

	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("FP.wav"), NULL, SND_SYNC);

	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("nuke.wav"), NULL, SND_SYNC);

	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("oyd.wav"), NULL, SND_SYNC);

	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("snoop.wav"), NULL, SND_SYNC);

	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("smash.wav"), NULL, SND_SYNC);

	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("mr.wav"), NULL, SND_SYNC);

	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("listen.wav"), NULL, SND_SYNC);

	}
	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("luvu.wav"), NULL, SND_SYNC);

	}
	private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("jc.wav"), NULL, SND_SYNC);

	}
	private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("sparta.wav"), NULL, SND_SYNC);

	}
	private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("SS.wav"), NULL, SND_SYNC);

	}
	private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("srkn.wav"), NULL, SND_SYNC);

	}
	private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("triple.wav"), NULL, SND_SYNC);

	}
	private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("troll.wav"), NULL, SND_SYNC);

	}
	private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("gc.wav"), NULL, SND_SYNC);

	}
	private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("order.wav"), NULL, SND_SYNC);

	}
	private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("retard-alert.wav"), NULL, SND_SYNC);

	}

	private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("falco1e.wav"), NULL, SND_SYNC);

	}
	private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("roblox-screaming-kid-140.wav"), NULL, SND_SYNC);

	}
	private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("the-biggest-douche-in-the-universe3_1.wav"), NULL, SND_SYNC);

	}
	private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("the-lonely-island-jizz-in-my-pants_cut.wav"), NULL, SND_SYNC);

	}
	private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("victoryff.swf.wav"), NULL, SND_SYNC);

	}
	private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("wakawaka.swf.wav"), NULL, SND_SYNC);

	}
	private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("wombo-combo.wav"), NULL, SND_SYNC);

	}
	private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("yeahboi.wav"), NULL, SND_SYNC);

	}
	private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("erro.wav"), NULL, SND_SYNC);

	}
	private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("jolly.wav"), NULL, SND_SYNC);

	}
	private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("god.wav"), NULL, SND_SYNC);

	}
	private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("Halo.wav"), NULL, SND_SYNC);

	}
	private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("loud.wav"), NULL, SND_SYNC);

	}
	private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("eric.wav"), NULL, SND_SYNC);

	}
	private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("nani.wav"), NULL, SND_SYNC);

	}
	private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("wtf_boom.wav"), NULL, SND_SYNC);

	}
	private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("pikachu.wav"), NULL, SND_SYNC);

	}
	private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("barrelroll.swf.wav"), NULL, SND_SYNC);

	}
	private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("khaaan.swf.wav"), NULL, SND_SYNC);

	}
	private: System::Void button46_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("rumble.wav"), NULL, SND_SYNC);

	}
	private: System::Void button47_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button48_Click(System::Object^  sender, System::EventArgs^  e) {
				 QUITER ^ form = gcnew QUITER; // creates quitter form
				 form->ShowDialog(); //opens quiter form


	}
	}

	; }
	