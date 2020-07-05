#pragma once
#include "BackEnd.h"   // Includes C_TicTacToe Class

namespace TicTacToe {

	// using system namespaces to access neccessary components/features
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		// Constructor
		MyForm(void)
		{
			TICTAC = new C_TicTacToe();  // Dynamic memory allocation
			GameMode = 0;   // 0 -> Not Set , 1 -> Solo , 2 -> Multiplayer
			InitializeComponent();   // Initializing Graphical Components
		}

	protected:
		
		// Destructor
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	// All Front End Members
	private: System::Windows::Forms::Button^ Box1;
	private: System::Windows::Forms::Button^ Box2;
	private: System::Windows::Forms::Button^ Box3;
	private: System::Windows::Forms::Button^ Box4;
	private: System::Windows::Forms::Button^ Box5;
	private: System::Windows::Forms::Button^ Box6;
	private: System::Windows::Forms::Button^ Box7;
	private: System::Windows::Forms::Button^ Box8;
	private: System::Windows::Forms::Button^ Box9;
	private: C_TicTacToe* TICTAC; // Pointer to C_TicTacToe Class
	private: int GameMode;  // Game Mode e.g Solo, Multiplayer
	private: System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^ DummyY;
	private: System::Windows::Forms::Button^ DummyX;
	private: System::Windows::Forms::Label^ DummyWhite;
	private: System::Windows::Forms::Button^ SoloButton;
	private: System::Windows::Forms::Button^ MutliplayerButton;
	private: System::Windows::Forms::Button^ QuitButton;
	private: System::Windows::Forms::PictureBox^ DisplayImage;
	private: System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
	private: System::Windows::Forms::PictureBox^ Sound;
	private: System::Windows::Forms::PictureBox^ SoundOFF;
	private: System::Media::SoundPlayer^ ThemePlayer = gcnew System::Media::SoundPlayer(); // Sound Player

#pragma region Windows Form Designer generated code
		
		// Automatic Code Generated
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
			this->DummyWhite = (gcnew System::Windows::Forms::Label());
			this->SoloButton = (gcnew System::Windows::Forms::Button());
			this->MutliplayerButton = (gcnew System::Windows::Forms::Button());
			this->QuitButton = (gcnew System::Windows::Forms::Button());
			this->DisplayImage = (gcnew System::Windows::Forms::PictureBox());
			this->Sound = (gcnew System::Windows::Forms::PictureBox());
			this->SoundOFF = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DisplayImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Sound))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SoundOFF))->BeginInit();
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
			this->Box1->Visible = false;
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
			this->Box2->Visible = false;
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
			this->Box3->Visible = false;
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
			this->Box4->Visible = false;
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
			this->Box5->Visible = false;
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
			this->Box6->Visible = false;
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
			this->Box7->Visible = false;
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
			this->Box8->Visible = false;
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
			this->Box9->Visible = false;
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
			// DummyWhite
			// 
			this->DummyWhite->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyWhite.Image")));
			this->DummyWhite->Location = System::Drawing::Point(-16, 31);
			this->DummyWhite->Name = L"DummyWhite";
			this->DummyWhite->Size = System::Drawing::Size(39, 23);
			this->DummyWhite->TabIndex = 11;
			this->DummyWhite->Visible = false;
			// 
			// SoloButton
			// 
			this->SoloButton->BackColor = System::Drawing::Color::White;
			this->SoloButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SoloButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SoloButton->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 20.29091F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SoloButton->Location = System::Drawing::Point(191, 316);
			this->SoloButton->Name = L"SoloButton";
			this->SoloButton->Size = System::Drawing::Size(200, 48);
			this->SoloButton->TabIndex = 12;
			this->SoloButton->Text = L"Solo";
			this->SoloButton->UseVisualStyleBackColor = false;
			this->SoloButton->Click += gcnew System::EventHandler(this, &MyForm::SoloButton_Click);
			// 
			// MutliplayerButton
			// 
			this->MutliplayerButton->BackColor = System::Drawing::Color::White;
			this->MutliplayerButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MutliplayerButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MutliplayerButton->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 20.29091F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MutliplayerButton->Location = System::Drawing::Point(191, 376);
			this->MutliplayerButton->Name = L"MutliplayerButton";
			this->MutliplayerButton->Size = System::Drawing::Size(200, 48);
			this->MutliplayerButton->TabIndex = 13;
			this->MutliplayerButton->Text = L"Multiplayer";
			this->MutliplayerButton->UseVisualStyleBackColor = false;
			this->MutliplayerButton->Click += gcnew System::EventHandler(this, &MyForm::MutliplayerButton_Click);
			// 
			// QuitButton
			// 
			this->QuitButton->BackColor = System::Drawing::Color::White;
			this->QuitButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->QuitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->QuitButton->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 20.29091F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QuitButton->Location = System::Drawing::Point(191, 436);
			this->QuitButton->Name = L"QuitButton";
			this->QuitButton->Size = System::Drawing::Size(200, 48);
			this->QuitButton->TabIndex = 14;
			this->QuitButton->Text = L"Quit";
			this->QuitButton->UseVisualStyleBackColor = false;
			this->QuitButton->Click += gcnew System::EventHandler(this, &MyForm::QuitButton_Click);
			// 
			// DisplayImage
			// 
			this->DisplayImage->BackColor = System::Drawing::Color::White;
			this->DisplayImage->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DisplayImage.Image")));
			this->DisplayImage->Location = System::Drawing::Point(142, 31);
			this->DisplayImage->Name = L"DisplayImage";
			this->DisplayImage->Size = System::Drawing::Size(300, 252);
			this->DisplayImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->DisplayImage->TabIndex = 15;
			this->DisplayImage->TabStop = false;
			// 
			// Sound
			// 
			this->Sound->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Sound->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Sound.Image")));
			this->Sound->Location = System::Drawing::Point(490, 31);
			this->Sound->Name = L"Sound";
			this->Sound->Size = System::Drawing::Size(46, 43);
			this->Sound->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Sound->TabIndex = 16;
			this->Sound->TabStop = false;
			this->Sound->Click += gcnew System::EventHandler(this, &MyForm::Sound_Click);
			// 
			// SoundOFF
			// 
			this->SoundOFF->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SoundOFF->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SoundOFF.Image")));
			this->SoundOFF->Location = System::Drawing::Point(490, 31);
			this->SoundOFF->Name = L"SoundOFF";
			this->SoundOFF->Size = System::Drawing::Size(46, 43);
			this->SoundOFF->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->SoundOFF->TabIndex = 17;
			this->SoundOFF->TabStop = false;
			this->SoundOFF->Visible = false;
			this->SoundOFF->Click += gcnew System::EventHandler(this, &MyForm::SoundOFF_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(582, 557);
			this->Controls->Add(this->SoundOFF);
			this->Controls->Add(this->Sound);
			this->Controls->Add(this->DisplayImage);
			this->Controls->Add(this->QuitButton);
			this->Controls->Add(this->MutliplayerButton);
			this->Controls->Add(this->SoloButton);
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
			this->Controls->Add(this->DummyWhite);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(600, 600);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(600, 600);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tic Tac Toe";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DisplayImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Sound))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SoundOFF))->EndInit();
			this->ResumeLayout(false);
			PlayTheme();  // Game Theme 
		}

		// Stop Theme
		void StopTheme()
		{
			ThemePlayer->Stop();
		}

		// Play Theme
		void PlayTheme()
		{
			ThemePlayer->SoundLocation = L"GameTheme.wav";
			ThemePlayer->Load();
			ThemePlayer->PlayLooping(); // Loop Music
		}

		// Sound Played When a Box is clicked
		void ClickSound()
		{
			System::Media::SoundPlayer^ ClickPlayer = gcnew System::Media::SoundPlayer();
			ClickPlayer->SoundLocation = L"Click.wav";
			ClickPlayer->Load();
			ClickPlayer->Play();
		}

		// Takes a number and fills that box with Computer's Mark 'O', DummyY is a PNG of 'O' character
		void FillComputerBox(int Number)
		{
			// If game is not finished
			if (TICTAC->FilledBoxes < 9 && TICTAC->GameFinished == 0)
			{
				if (Number == 0)
				{
					// Change Box Background to "O"
					this->Box1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyY.BackgroundImage")));
					TICTAC->FillBox(0, 'O');
				}
				else if (Number == 1)
				{
					this->Box2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyY.BackgroundImage")));
					TICTAC->FillBox(1, 'O');
				}
				else if (Number == 2)
				{
					this->Box3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyY.BackgroundImage")));
					TICTAC->FillBox(2, 'O');
				}
				else if (Number == 3)
				{
					this->Box4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyY.BackgroundImage")));
					TICTAC->FillBox(3, 'O');
				}
				else if (Number == 4)
				{
					this->Box5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyY.BackgroundImage")));
					TICTAC->FillBox(4, 'O');
				}
				else if (Number == 5)
				{
					this->Box6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyY.BackgroundImage")));
					TICTAC->FillBox(5, 'O');
				}
				else if (Number == 6)
				{
					this->Box7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyY.BackgroundImage")));
					TICTAC->FillBox(6, 'O');
				}
				else if (Number == 7)
				{
					this->Box8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyY.BackgroundImage")));
					TICTAC->FillBox(7, 'O');
				}
				else if (Number == 8)
				{
					this->Box9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyY.BackgroundImage")));
					TICTAC->FillBox(8, 'O');
				}
			}
		}

		// Incase if player wants to play again
		void Restart()
		{
			// Reset all box images back to white/empty
			this->Box1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box1.BackgroundImage")));
			this->Box2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box2.BackgroundImage")));
			this->Box3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box3.BackgroundImage")));
			this->Box4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box4.BackgroundImage")));
			this->Box5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box5.BackgroundImage")));
			this->Box6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box6.BackgroundImage")));
			this->Box7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box7.BackgroundImage")));
			this->Box8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box8.BackgroundImage")));
			this->Box9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box9.BackgroundImage")));
			
			// Reset Backend functionality
			TICTAC->Reset();
			
		}

		// Checks Game Status e.g Incase there is a winner or a draw
		void GameStatus()
		{
			// if Multiplayer mode
			if (GameMode == 2)
			{
				// if there is winner
				if (TICTAC->CheckGameFinished() == 1)
				{
					// Display Winner and Play Again Question?
					if (MessageBox::Show(" PLAYER " + TICTAC->GetWinner() + " WINS! \n DO YOU WANT TO PLAY AGAIN?",
						"TIC TAC TOE", MessageBoxButtons::YesNo, MessageBoxIcon::Question)
						== System::Windows::Forms::DialogResult::No)
					{
						// if No selected then exit game
						Application::Exit();
					}
					// if user selected the option to play again e.g Yes
					else 
					{
						// Restart Game
						Restart();
					}
				}

				// if there was a draw
				else if (TICTAC->CheckGameFinished() == 2)
				{
					// Display Match Drawn and Play Again Question? 
					if (MessageBox::Show(" IT'S A DRAW! \n DO YOU WANT TO PLAY AGAIN?",
						"TIC TAC TOE", MessageBoxButtons::YesNo, MessageBoxIcon::Question)
						== System::Windows::Forms::DialogResult::No)
					{
						// if No selected then exit game
						Application::Exit();
					}

					// if user selected the option to play again e.g Yes
					else
					{
						// Restart Game
						Restart();
					}
				}

				
			}
			
			// if Solo Mode
			else if (GameMode == 1)
			{
				// if there is a winner
				if (TICTAC->CheckGameFinished() == 1)
				{
					// if Player Won
					if (TICTAC->GetWinner() == 1)
					{
						// Display Message and Play Again Question?
						if (MessageBox::Show(" PLAYER WINS! \n DO YOU WANT TO PLAY AGAIN?",
							"TIC TAC TOE", MessageBoxButtons::YesNo, MessageBoxIcon::Question)
							== System::Windows::Forms::DialogResult::No)
						{
							// if No Selected then Exit Game
							Application::Exit();
						}

						// if user selected to Play Again e.g Yes
						else
						{
							// Restart Game
							Restart();
						}
					}

					// if Computer Won
					else
					{
						// Display Message and Play Again Question?
						if (MessageBox::Show(" COMPUTER WINS! \n DO YOU WANT TO PLAY AGAIN?",
							"TIC TAC TOE", MessageBoxButtons::YesNo, MessageBoxIcon::Question)
							== System::Windows::Forms::DialogResult::No)
						{
							// if No Selected then Exit Game
							Application::Exit();
						}

						// if user selected to Play Again e.g Yes
						else
						{
							// Restart Game
							Restart();
						}
					}
					
				}

				// if match drawn
				else if (TICTAC->CheckGameFinished() == 2)
				{
					// Display Message and Play Again Question?
					if (MessageBox::Show(" IT'S A DRAW! \n DO YOU WANT TO PLAY AGAIN?",
						"TIC TAC TOE", MessageBoxButtons::YesNo, MessageBoxIcon::Question)
						== System::Windows::Forms::DialogResult::No)
					{
						// if No Selected then Exit Game
						Application::Exit();
					}

					// if user selected to Play Again e.g Yes
					else
					{
						// Restart Game
						Restart();
					}
				
				}
			}
		}

		
#pragma endregion

// Event Functions such as "Click"

// if Box 1 Clicked
private: System::Void Box1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	// if Multiplayer
		if (GameMode == 2)
		{
			// if this box is not filled 
			if (!TICTAC->CheckFill(0))
			{
				// if Player 1's turn
				if (TICTAC->GetPlayerTurn() == 1)
				{
					// Fill the Box with X
					ClickSound(); // Play Sound

					// Change White Background to X
					this->Box1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyX.BackgroundImage")));
					TICTAC->FillBox(0, 'X');
				}

				// if Player 2 turn
				else
				{
					// Fill the Box with O
					ClickSound(); // Play Sound

					// Change White Background to O
					this->Box1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyY.BackgroundImage")));
					TICTAC->FillBox(0, 'O');
				}
			}
		}

		// if Solo Mode
		else if (GameMode == 1)
		{
			// if this box is not filled 
			if (!TICTAC->CheckFill(0))
			{
				ClickSound(); // Play Sound

				// Change White Background to X
				this->Box1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyX.BackgroundImage")));
				TICTAC->FillBox(0, 'X');
				
				// Fill Computer's Box 
				FillComputerBox(TICTAC->GetEmptyBox());

			}

		}

		// Check Game Status
		GameStatus();

	}

// Same Working/Concept as Box1_Click for all other Boxes

private: System::Void Box2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (GameMode == 2)
	{
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
	}

	else if (GameMode == 1)
	{
		if (!TICTAC->CheckFill(1))
		{
			ClickSound();
			this->Box2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyX.BackgroundImage")));
			TICTAC->FillBox(1, 'X');
			
			FillComputerBox(TICTAC->GetEmptyBox());

		}

	}
	
	GameStatus();
}
private: System::Void Box3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (GameMode == 2)
	{
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
	}

	else if (GameMode == 1)
	{
		if (!TICTAC->CheckFill(2))
		{
			ClickSound();
			this->Box3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyX.BackgroundImage")));
			TICTAC->FillBox(2, 'X');
			
			FillComputerBox(TICTAC->GetEmptyBox());

		}

	}

	GameStatus();
}
private: System::Void Box4_Click(System::Object^ sender, System::EventArgs^ e) {

	if (GameMode == 2)
	{
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
	}

	else if (GameMode == 1)
	{
		if (!TICTAC->CheckFill(3))
		{
			ClickSound();
			this->Box4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyX.BackgroundImage")));
			TICTAC->FillBox(3, 'X');
		

			FillComputerBox(TICTAC->GetEmptyBox());

		}

	}

	GameStatus();
}
private: System::Void Box5_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (GameMode == 2)
	{
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
	}

	else if (GameMode == 1)
	{
		if (!TICTAC->CheckFill(4))
		{
			ClickSound();
			this->Box5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyX.BackgroundImage")));
			TICTAC->FillBox(4, 'X');
			

			FillComputerBox(TICTAC->GetEmptyBox());

		}

	}

	GameStatus();

}
private: System::Void Box6_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (GameMode == 2)
	{
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
	}

	else if (GameMode == 1)
	{
		if (!TICTAC->CheckFill(5))
		{
			ClickSound();
			this->Box6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyX.BackgroundImage")));
			TICTAC->FillBox(5, 'X');
			

			FillComputerBox(TICTAC->GetEmptyBox());

		}

	}
	
	GameStatus();
}
private: System::Void Box7_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (GameMode == 2)
	{
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
	}

	else if (GameMode == 1)
	{
		if (!TICTAC->CheckFill(6))
		{
			ClickSound();
			this->Box7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyX.BackgroundImage")));
			TICTAC->FillBox(6, 'X');
			
			
			FillComputerBox(TICTAC->GetEmptyBox());

		}

	}

	GameStatus();
}
private: System::Void Box8_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (GameMode == 2)
	{
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
	}

	else if (GameMode == 1)
	{
		if (!TICTAC->CheckFill(7))
		{
			ClickSound();
			this->Box8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyX.BackgroundImage")));
			TICTAC->FillBox(7, 'X');
			

			FillComputerBox(TICTAC->GetEmptyBox());

		}

	}
	
	GameStatus();
}
private: System::Void Box9_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (GameMode == 2)
	{
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
	}
	
	else if (GameMode == 1)
	{
		if (!TICTAC->CheckFill(8))
		{
			ClickSound();
			this->Box9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyX.BackgroundImage")));
			TICTAC->FillBox(8, 'X');
		
			
			FillComputerBox(TICTAC->GetEmptyBox());
			
		}

	}
	
	GameStatus();
}

// if Multiplayer option choosed
private: System::Void MutliplayerButton_Click(System::Object^ sender, System::EventArgs^ e) {
	StopTheme();  // Stop Game Theme
	GameMode = 2; // Set Game Mode = 2 for Multiplayer Functionality
	
	// Turn off Pictures, Buttons and Sound Icons
	this->Sound->Visible = false;  
	this->SoundOFF->Visible = false;
	this->DisplayImage->Visible = false;
	this->SoloButton->Visible = false;
	this->QuitButton->Visible = false;
	this->MutliplayerButton->Visible = false;

	// Turn ON Boxes for selection
	this->Box1->Visible = true;
	this->Box2->Visible = true;
	this->Box3->Visible = true;
	this->Box4->Visible = true;
	this->Box5->Visible = true;
	this->Box6->Visible = true;
	this->Box7->Visible = true;
	this->Box8->Visible = true;
	this->Box9->Visible = true;

	// Generate Game Grid for a 3x3 TicTacToe
	this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyWhite.Image")));
}

// if Quit Pressed
private: System::Void QuitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();  // Exit Application
}

// if Solo Mode Choosed
private: System::Void SoloButton_Click(System::Object^ sender, System::EventArgs^ e) {
	StopTheme();  // Stop Game Theme
	GameMode = 1;  // Set Game Mode = 1 for Solo Functionality
	
	// Turn off Pictures, Buttons and Sound Icons
	this->Sound->Visible = false;
	this->SoundOFF->Visible = false;
	this->DisplayImage->Visible = false;
	this->SoloButton->Visible = false;
	this->QuitButton->Visible = false;
	this->MutliplayerButton->Visible = false;

	// Generate Game Grid for a 3x3 TicTacToe
	this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DummyWhite.Image")));
	
	// Turn ON Boxes for selection
	this->Box1->Visible = true;
	this->Box2->Visible = true;
	this->Box3->Visible = true;
	this->Box4->Visible = true;
	this->Box5->Visible = true;
	this->Box6->Visible = true;
	this->Box7->Visible = true;
	this->Box8->Visible = true;
	this->Box9->Visible = true;
	
}

// if Sound ON Icon Clicked then turn OFF Music
private: System::Void Sound_Click(System::Object^ sender, System::EventArgs^ e) {
	
	// Switch Sound ON to Sound OFF
	this->Sound->Visible = false;  
	this->SoundOFF->Visible = true;
	StopTheme(); // Stop Theme
}

// if Sound OFF Icon Clicked then turn ON Music
private: System::Void SoundOFF_Click(System::Object^ sender, System::EventArgs^ e) {

	// Switch Sound OFF to Sound ON
	this->SoundOFF->Visible = false;
	this->Sound->Visible = true;
	PlayTheme(); // Play Theme
}
};
}
