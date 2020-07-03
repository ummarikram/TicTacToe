#pragma once
#include "BackEnd.h"

namespace TicTacToe {

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
			TICTAC = new C_TicTacToe();
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
	private: System::Windows::Forms::Button^ Box1;
	private: System::Windows::Forms::Button^ Box2;
	private: System::Windows::Forms::Button^ Box3;
	private: System::Windows::Forms::Button^ Box4;
	private: System::Windows::Forms::Button^ Box5;
	private: System::Windows::Forms::Button^ Box6;
	private: System::Windows::Forms::Button^ Box7;
	private: System::Windows::Forms::Button^ Box8;
	private: System::Windows::Forms::Button^ Box9;
	private: C_TicTacToe* TICTAC;
	protected:
	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^ DummyY;

	private: System::Windows::Forms::Button^ DummyX;
	private: System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Box1 = (gcnew System::Windows::Forms::Button());
			this->Box2 = (gcnew System::Windows::Forms::Button());
			this->Box3 = (gcnew System::Windows::Forms::Button());
			this->Box4 = (gcnew System::Windows::Forms::Button());
			this->Box5 = (gcnew System::Windows::Forms::Button());
			this->Box6 = (gcnew System::Windows::Forms::Button());
			this->Box7 = (gcnew System::Windows::Forms::Button());
			this->Box8 = (gcnew System::Windows::Forms::Button());
			this->Box9 = (gcnew System::Windows::Forms::Button());
			this->DummyY = (gcnew System::Windows::Forms::Button());
			this->DummyX = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Box1
			// 
			this->Box1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box1.BackgroundImage")));
			this->Box1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Box1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Box1->Location = System::Drawing::Point(13, 3);
			this->Box1->Name = L"Box1";
			this->Box1->Size = System::Drawing::Size(180, 178);
			this->Box1->TabIndex = 0;
			this->Box1->UseVisualStyleBackColor = true;
			this->Box1->Click += gcnew System::EventHandler(this, &MyForm::Box1_Click);
			// 
			// Box2
			// 
			this->Box2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box2.BackgroundImage")));
			this->Box2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Box2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Box2->Location = System::Drawing::Point(199, 3);
			this->Box2->Name = L"Box2";
			this->Box2->Size = System::Drawing::Size(180, 178);
			this->Box2->TabIndex = 1;
			this->Box2->UseVisualStyleBackColor = true;
			this->Box2->Click += gcnew System::EventHandler(this, &MyForm::Box2_Click);
			// 
			// Box3
			// 
			this->Box3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box3.BackgroundImage")));
			this->Box3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Box3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Box3->Location = System::Drawing::Point(390, 3);
			this->Box3->Name = L"Box3";
			this->Box3->Size = System::Drawing::Size(180, 178);
			this->Box3->TabIndex = 2;
			this->Box3->UseVisualStyleBackColor = true;
			this->Box3->Click += gcnew System::EventHandler(this, &MyForm::Box3_Click);
			// 
			// Box4
			// 
			this->Box4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box4.BackgroundImage")));
			this->Box4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Box4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Box4->Location = System::Drawing::Point(13, 187);
			this->Box4->Name = L"Box4";
			this->Box4->Size = System::Drawing::Size(180, 178);
			this->Box4->TabIndex = 3;
			this->Box4->UseVisualStyleBackColor = true;
			this->Box4->Click += gcnew System::EventHandler(this, &MyForm::Box4_Click);
			// 
			// Box5
			// 
			this->Box5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box5.BackgroundImage")));
			this->Box5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Box5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Box5->Location = System::Drawing::Point(201, 189);
			this->Box5->Name = L"Box5";
			this->Box5->Size = System::Drawing::Size(180, 178);
			this->Box5->TabIndex = 4;
			this->Box5->UseVisualStyleBackColor = true;
			this->Box5->Click += gcnew System::EventHandler(this, &MyForm::Box5_Click);
			// 
			// Box6
			// 
			this->Box6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box6.BackgroundImage")));
			this->Box6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Box6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Box6->Location = System::Drawing::Point(390, 189);
			this->Box6->Name = L"Box6";
			this->Box6->Size = System::Drawing::Size(180, 178);
			this->Box6->TabIndex = 5;
			this->Box6->UseVisualStyleBackColor = true;
			this->Box6->Click += gcnew System::EventHandler(this, &MyForm::Box6_Click);
			// 
			// Box7
			// 
			this->Box7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box7.BackgroundImage")));
			this->Box7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Box7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Box7->Location = System::Drawing::Point(13, 373);
			this->Box7->Name = L"Box7";
			this->Box7->Size = System::Drawing::Size(180, 178);
			this->Box7->TabIndex = 6;
			this->Box7->UseVisualStyleBackColor = true;
			this->Box7->Click += gcnew System::EventHandler(this, &MyForm::Box7_Click);
			// 
			// Box8
			// 
			this->Box8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box8.BackgroundImage")));
			this->Box8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Box8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Box8->Location = System::Drawing::Point(201, 373);
			this->Box8->Name = L"Box8";
			this->Box8->Size = System::Drawing::Size(180, 178);
			this->Box8->TabIndex = 7;
			this->Box8->UseVisualStyleBackColor = true;
			this->Box8->Click += gcnew System::EventHandler(this, &MyForm::Box8_Click);
			// 
			// Box9
			// 
			this->Box9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box9.BackgroundImage")));
			this->Box9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Box9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Box9->Location = System::Drawing::Point(390, 373);
			this->Box9->Name = L"Box9";
			this->Box9->Size = System::Drawing::Size(180, 178);
			this->Box9->TabIndex = 8;
			this->Box9->UseVisualStyleBackColor = true;
			this->Box9->Click += gcnew System::EventHandler(this, &MyForm::Box9_Click);
			// 
			// DummyY
			// 
			this->DummyY->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyY.BackgroundImage")));
			this->DummyY->Location = System::Drawing::Point(470, 61);
			this->DummyY->Name = L"DummyY";
			this->DummyY->Size = System::Drawing::Size(75, 23);
			this->DummyY->TabIndex = 9;
			this->DummyY->UseVisualStyleBackColor = true;
			this->DummyY->Visible = false;
			// 
			// DummyX
			// 
			this->DummyX->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyX.BackgroundImage")));
			this->DummyX->Location = System::Drawing::Point(266, 60);
			this->DummyX->Name = L"DummyX";
			this->DummyX->Size = System::Drawing::Size(75, 23);
			this->DummyX->TabIndex = 10;
			this->DummyX->UseVisualStyleBackColor = true;
			this->DummyX->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(582, 557);
			this->Controls->Add(this->Box9);
			this->Controls->Add(this->Box8);
			this->Controls->Add(this->Box7);
			this->Controls->Add(this->Box6);
			this->Controls->Add(this->Box5);
			this->Controls->Add(this->Box4);
			this->Controls->Add(this->Box3);
			this->Controls->Add(this->Box2);
			this->Controls->Add(this->Box1);
			this->Controls->Add(this->DummyX);
			this->Controls->Add(this->DummyY);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->ShowInTaskbar = false;
			this->Text = L"Tic Tac Toe";
			this->ResumeLayout(false);

		}

		void ClickSound()
		{
			System::Media::SoundPlayer^ Player = gcnew System::Media::SoundPlayer();
			Player->SoundLocation = L"Click.wav";
			Player->Load();
			Player->Play();
		}
#pragma endregion
	private: System::Void Box1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!TICTAC->CheckFill(0))
		{
			if (TICTAC->GetPlayerTurn() == 1)
			{
				ClickSound();
				this->Box1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyX.BackgroundImage")));
				TICTAC->FillBox(0, 'X');
			}
			else
			{
				ClickSound();
				this->Box1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyY.BackgroundImage")));
				TICTAC->FillBox(0, 'O');
			}
		}

		if (TICTAC->CheckGameFinished() == 1)
		{
			MessageBox::Show(" PLAYER " + TICTAC->GetWinner() + " WINS! ");
			Application::Exit();
		}
		else if (TICTAC->CheckGameFinished() == 2)
		{
			MessageBox::Show("IT'S A DRAW");
			Application::Exit();
		}
	}
private: System::Void Box2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!TICTAC->CheckFill(1))
	{
		if (TICTAC->GetPlayerTurn() == 1)
		{
			ClickSound();
			this->Box2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyX.BackgroundImage")));
			TICTAC->FillBox(1, 'X');
		}
		else
		{
			ClickSound();
			this->Box2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyY.BackgroundImage")));
			TICTAC->FillBox(1, 'O');
		}
	}
	if (TICTAC->CheckGameFinished() == 1)
	{
		MessageBox::Show(" PLAYER " + TICTAC->GetWinner() + " WINS! ");
		Application::Exit();
	}
	else if (TICTAC->CheckGameFinished() == 2)
	{
		MessageBox::Show("IT'S A DRAW");
		Application::Exit();
	}
}
private: System::Void Box3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!TICTAC->CheckFill(2))
	{
		if (TICTAC->GetPlayerTurn() == 1)
		{
			ClickSound();
			this->Box3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyX.BackgroundImage")));
			TICTAC->FillBox(2, 'X');
		}
		else
		{
			ClickSound();
			this->Box3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyY.BackgroundImage")));
			TICTAC->FillBox(2, 'O');
		}
	}

	if (TICTAC->CheckGameFinished() == 1)
	{
		MessageBox::Show(" PLAYER " + TICTAC->GetWinner() + " WINS! ");
		Application::Exit();
	}
	else if (TICTAC->CheckGameFinished() == 2)
	{
		MessageBox::Show("IT'S A DRAW");
		Application::Exit();
	}
}
private: System::Void Box4_Click(System::Object^ sender, System::EventArgs^ e) {

	if (!TICTAC->CheckFill(3))
	{
		if (TICTAC->GetPlayerTurn() == 1)
		{
			ClickSound();
			this->Box4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyX.BackgroundImage")));
			TICTAC->FillBox(3, 'X');
		}
		else
		{
			ClickSound();
			this->Box4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyY.BackgroundImage")));
			TICTAC->FillBox(3, 'O');
		}
	}

	if (TICTAC->CheckGameFinished() == 1)
	{
		MessageBox::Show(" PLAYER " + TICTAC->GetWinner() + " WINS! ");
		Application::Exit();
	}
	else if (TICTAC->CheckGameFinished() == 2)
	{
		MessageBox::Show("IT'S A DRAW");
		Application::Exit();
	}
}
private: System::Void Box5_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (!TICTAC->CheckFill(4))
	{
		if (TICTAC->GetPlayerTurn() == 1)
		{
			ClickSound();
			this->Box5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyX.BackgroundImage")));
			TICTAC->FillBox(4, 'X');
		}
		else
		{
			ClickSound();
			this->Box5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyY.BackgroundImage")));
			TICTAC->FillBox(4, 'O');
		}
	}
	if (TICTAC->CheckGameFinished() == 1)
	{
		MessageBox::Show(" PLAYER " + TICTAC->GetWinner() + " WINS! ");
		Application::Exit();
	}
	else if (TICTAC->CheckGameFinished() == 2)
	{
		MessageBox::Show("IT'S A DRAW");
		Application::Exit();
	}

}
private: System::Void Box6_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (!TICTAC->CheckFill(5))
	{
		if (TICTAC->GetPlayerTurn() == 1)
		{
			ClickSound();
			this->Box6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyX.BackgroundImage")));
			TICTAC->FillBox(5, 'X');
		}
		else
		{
			ClickSound();
			this->Box6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyY.BackgroundImage")));
			TICTAC->FillBox(5, 'O');
		}
	}

	if (TICTAC->CheckGameFinished() == 1)
	{
		MessageBox::Show(" PLAYER " + TICTAC->GetWinner() + " WINS! ");
		Application::Exit();
	}
	else if (TICTAC->CheckGameFinished() == 2)
	{
		MessageBox::Show("IT'S A DRAW");
		Application::Exit();
	}
}
private: System::Void Box7_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (!TICTAC->CheckFill(6))
	{
		if (TICTAC->GetPlayerTurn() == 1)
		{
			ClickSound();
			this->Box7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyX.BackgroundImage")));
			TICTAC->FillBox(6, 'X');
		}
		else
		{
			ClickSound();
			this->Box7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyY.BackgroundImage")));
			TICTAC->FillBox(6, 'O');
		}
	}
	if (TICTAC->CheckGameFinished() == 1)
	{
		MessageBox::Show(" PLAYER " + TICTAC->GetWinner() + " WINS! ");
		Application::Exit();
	}
	else if (TICTAC->CheckGameFinished() == 2)
	{
		MessageBox::Show("IT'S A DRAW");
		Application::Exit();
	}
}
private: System::Void Box8_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (!TICTAC->CheckFill(7))
	{
		if (TICTAC->GetPlayerTurn() == 1)
		{
			ClickSound();
			this->Box8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyX.BackgroundImage")));
			TICTAC->FillBox(7, 'X');
		}
		else
		{
			ClickSound();
			this->Box8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyY.BackgroundImage")));
			TICTAC->FillBox(7, 'O');
		}
	}

	if (TICTAC->CheckGameFinished() == 1)
	{
		MessageBox::Show(" PLAYER " + TICTAC->GetWinner() + " WINS! ");
		Application::Exit();
	}
	else if (TICTAC->CheckGameFinished() == 2)
	{
		MessageBox::Show("IT'S A DRAW");
		Application::Exit();
	}
}
private: System::Void Box9_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (!TICTAC->CheckFill(8))
	{
		if (TICTAC->GetPlayerTurn() == 1)
		{
			ClickSound();
			this->Box9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyX.BackgroundImage")));
			TICTAC->FillBox(8, 'X');
		}
		else
		{
			ClickSound();
			this->Box9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyY.BackgroundImage")));
			TICTAC->FillBox(8, 'O');
		}
	}
	
	if (TICTAC->CheckGameFinished() == 1)
	{
		MessageBox::Show(" PLAYER " + TICTAC->GetWinner() + " WINS! ");
		Application::Exit();
	}
	else if (TICTAC->CheckGameFinished() == 2)
	{
		MessageBox::Show("IT'S A DRAW");
		Application::Exit();
	}
}
};
}
