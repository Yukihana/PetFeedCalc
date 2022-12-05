#pragma once
#include "AbmForm.h"

namespace CsPfCalc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
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
	private: System::Windows::Forms::PictureBox^  csLogoPFcontrol;
	private: System::Windows::Forms::Panel^  mainGrip;
	private: System::Windows::Forms::PictureBox^  csPFgrphMinz;
	private: System::Windows::Forms::PictureBox^  csPFgrphExit;
	private: System::Windows::Forms::CheckBox^  AOTchkBox;
	private: System::Windows::Forms::Label^  abmLabel;
	private: System::Windows::Forms::PictureBox^  flyffLogo;
	private: System::Windows::Forms::Label^  madeForLabel;
	private: System::Windows::Forms::Label^  statMsg;
	private: System::Windows::Forms::Label^  PFcceLabel;
	private: System::Windows::Forms::ComboBox^  cceClass;
	private: System::Windows::Forms::NumericUpDown^  cceExp;
	private: System::Windows::Forms::Label^  fceLab;
	private: System::Windows::Forms::ComboBox^  fceClass;
	private: System::Windows::Forms::NumericUpDown^  fceExp;
	private: System::Windows::Forms::Label^  fmtLab;
	private: System::Windows::Forms::NumericUpDown^  fmtBox;
	private: System::Windows::Forms::Label^  excLab;
	private: System::Windows::Forms::NumericUpDown^  excBox;
	private: System::Windows::Forms::Label^  ftLab;
	private: System::Windows::Forms::Label^  ftFormat2Lab;
	private: System::Windows::Forms::NumericUpDown^  ftHrs;
	private: System::Windows::Forms::NumericUpDown^  ftMin;
	private: System::Windows::Forms::NumericUpDown^  ftSec;
	private: System::Windows::Forms::Label^  remSheader;
	private: System::Windows::Forms::Label^  remSfeedLab;
	private: System::Windows::Forms::Label^  remSfeed;
	private: System::Windows::Forms::Label^  remStimeLab;
	private: System::Windows::Forms::Label^  remStime;
	private: System::Windows::Forms::Label^  remStim2;
	private: System::Windows::Forms::Label^  RemainingTNLlab;
	private: System::Windows::Forms::Label^  RemainingTNL;
	private: System::Windows::Forms::Label^  remNfeedLab;
	private: System::Windows::Forms::Label^  remNfeed;
	private: System::Windows::Forms::Label^  remNtimeLab;
	private: System::Windows::Forms::Label^  remNtime;
	private: System::Windows::Forms::Label^  remNtim2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  SysTD;
	private: System::Windows::Forms::Label^  ftSecLab;
	private: System::Windows::Forms::Label^  ftMinLab;
	private: System::Windows::Forms::Label^  ftHrsLab;
	private: System::Windows::Forms::ContextMenuStrip^  shellMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  sMmin;
	private: System::Windows::Forms::ToolStripSeparator^  sMsep1;
	private: System::Windows::Forms::ToolStripMenuItem^  sMexit;


	private: System::ComponentModel::IContainer^  components;

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->csLogoPFcontrol = (gcnew System::Windows::Forms::PictureBox());
			this->csPFgrphMinz = (gcnew System::Windows::Forms::PictureBox());
			this->csPFgrphExit = (gcnew System::Windows::Forms::PictureBox());
			this->mainGrip = (gcnew System::Windows::Forms::Panel());
			this->AOTchkBox = (gcnew System::Windows::Forms::CheckBox());
			this->abmLabel = (gcnew System::Windows::Forms::Label());
			this->flyffLogo = (gcnew System::Windows::Forms::PictureBox());
			this->cceClass = (gcnew System::Windows::Forms::ComboBox());
			this->cceExp = (gcnew System::Windows::Forms::NumericUpDown());
			this->PFcceLabel = (gcnew System::Windows::Forms::Label());
			this->madeForLabel = (gcnew System::Windows::Forms::Label());
			this->remSheader = (gcnew System::Windows::Forms::Label());
			this->remStimeLab = (gcnew System::Windows::Forms::Label());
			this->remSfeedLab = (gcnew System::Windows::Forms::Label());
			this->statMsg = (gcnew System::Windows::Forms::Label());
			this->remSfeed = (gcnew System::Windows::Forms::Label());
			this->remStime = (gcnew System::Windows::Forms::Label());
			this->remStim2 = (gcnew System::Windows::Forms::Label());
			this->RemainingTNLlab = (gcnew System::Windows::Forms::Label());
			this->RemainingTNL = (gcnew System::Windows::Forms::Label());
			this->remNfeedLab = (gcnew System::Windows::Forms::Label());
			this->remNtimeLab = (gcnew System::Windows::Forms::Label());
			this->remNfeed = (gcnew System::Windows::Forms::Label());
			this->remNtime = (gcnew System::Windows::Forms::Label());
			this->remNtim2 = (gcnew System::Windows::Forms::Label());
			this->fceLab = (gcnew System::Windows::Forms::Label());
			this->fceClass = (gcnew System::Windows::Forms::ComboBox());
			this->fceExp = (gcnew System::Windows::Forms::NumericUpDown());
			this->fmtLab = (gcnew System::Windows::Forms::Label());
			this->ftLab = (gcnew System::Windows::Forms::Label());
			this->excLab = (gcnew System::Windows::Forms::Label());
			this->ftHrs = (gcnew System::Windows::Forms::NumericUpDown());
			this->excBox = (gcnew System::Windows::Forms::NumericUpDown());
			this->fmtBox = (gcnew System::Windows::Forms::NumericUpDown());
			this->ftMin = (gcnew System::Windows::Forms::NumericUpDown());
			this->ftSec = (gcnew System::Windows::Forms::NumericUpDown());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SysTD = (gcnew System::Windows::Forms::Label());
			this->ftFormat2Lab = (gcnew System::Windows::Forms::Label());
			this->ftSecLab = (gcnew System::Windows::Forms::Label());
			this->ftMinLab = (gcnew System::Windows::Forms::Label());
			this->ftHrsLab = (gcnew System::Windows::Forms::Label());
			this->shellMenu = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->sMmin = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sMexit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sMsep1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->csLogoPFcontrol))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->csPFgrphMinz))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->csPFgrphExit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->flyffLogo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->cceExp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fceExp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ftHrs))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->excBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fmtBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ftMin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ftSec))->BeginInit();
			this->shellMenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// csLogoPFcontrol
			// 
			this->csLogoPFcontrol->AccessibleDescription = L"PlatinumX Logo Control Box";
			this->csLogoPFcontrol->AccessibleName = L"PlatinumX Logo";
			this->csLogoPFcontrol->AccessibleRole = System::Windows::Forms::AccessibleRole::Graphic;
			this->csLogoPFcontrol->BackColor = System::Drawing::Color::Transparent;
			this->csLogoPFcontrol->ContextMenuStrip = this->shellMenu;
			this->csLogoPFcontrol->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"csLogoPFcontrol.Image")));
			this->csLogoPFcontrol->Location = System::Drawing::Point(12, 12);
			this->csLogoPFcontrol->Name = L"csLogoPFcontrol";
			this->csLogoPFcontrol->Size = System::Drawing::Size(48, 48);
			this->csLogoPFcontrol->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->csLogoPFcontrol->TabIndex = 0;
			this->csLogoPFcontrol->TabStop = false;
			this->csLogoPFcontrol->DoubleClick += gcnew System::EventHandler(this, &Form1::csPFcalcExit);
			this->csLogoPFcontrol->MouseLeave += gcnew System::EventHandler(this, &Form1::staMessRest);
			this->csLogoPFcontrol->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::GripMove);
			this->csLogoPFcontrol->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::GripDown);
			this->csLogoPFcontrol->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::GripUp);
			this->csLogoPFcontrol->MouseEnter += gcnew System::EventHandler(this, &Form1::csLogoPFcontrol_MouseEnter);
			// 
			// csPFgrphMinz
			// 
			this->csPFgrphMinz->AccessibleDescription = L"Minimize FlyFF Ped Feed Calculator";
			this->csPFgrphMinz->AccessibleName = L"Minimize";
			this->csPFgrphMinz->AccessibleRole = System::Windows::Forms::AccessibleRole::PushButton;
			this->csPFgrphMinz->BackColor = System::Drawing::Color::Transparent;
			this->csPFgrphMinz->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"csPFgrphMinz.Image")));
			this->csPFgrphMinz->Location = System::Drawing::Point(418, 12);
			this->csPFgrphMinz->Name = L"csPFgrphMinz";
			this->csPFgrphMinz->Size = System::Drawing::Size(32, 32);
			this->csPFgrphMinz->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->csPFgrphMinz->TabIndex = 1;
			this->csPFgrphMinz->TabStop = false;
			this->csPFgrphMinz->MouseLeave += gcnew System::EventHandler(this, &Form1::csPFgrphMinz_MouseLeave);
			this->csPFgrphMinz->Click += gcnew System::EventHandler(this, &Form1::csPFcalcMinz);
			this->csPFgrphMinz->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::csPFgrphMinz_MouseDown);
			this->csPFgrphMinz->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::csPFgrphMinz_MouseUp);
			this->csPFgrphMinz->MouseEnter += gcnew System::EventHandler(this, &Form1::csPFgrphMinz_MouseEnter);
			// 
			// csPFgrphExit
			// 
			this->csPFgrphExit->AccessibleDescription = L"Exit FlyFF Pet Feed Calculator";
			this->csPFgrphExit->AccessibleName = L"Exit";
			this->csPFgrphExit->AccessibleRole = System::Windows::Forms::AccessibleRole::PushButton;
			this->csPFgrphExit->BackColor = System::Drawing::Color::Transparent;
			this->csPFgrphExit->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"csPFgrphExit.Image")));
			this->csPFgrphExit->Location = System::Drawing::Point(456, 12);
			this->csPFgrphExit->Name = L"csPFgrphExit";
			this->csPFgrphExit->Size = System::Drawing::Size(32, 32);
			this->csPFgrphExit->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->csPFgrphExit->TabIndex = 2;
			this->csPFgrphExit->TabStop = false;
			this->csPFgrphExit->MouseLeave += gcnew System::EventHandler(this, &Form1::csPFgrphExit_MouseLeave);
			this->csPFgrphExit->Click += gcnew System::EventHandler(this, &Form1::csPFcalcExit);
			this->csPFgrphExit->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::csPFgrphExit_MouseDown);
			this->csPFgrphExit->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::csPFgrphExit_MouseUp);
			this->csPFgrphExit->MouseEnter += gcnew System::EventHandler(this, &Form1::csPFgrphExit_MouseEnter);
			// 
			// mainGrip
			// 
			this->mainGrip->AccessibleDescription = L"Window Title Bar grip";
			this->mainGrip->AccessibleName = L"Window Title Bar grip";
			this->mainGrip->AccessibleRole = System::Windows::Forms::AccessibleRole::Grip;
			this->mainGrip->BackColor = System::Drawing::Color::Transparent;
			this->mainGrip->ContextMenuStrip = this->shellMenu;
			this->mainGrip->Location = System::Drawing::Point(66, 12);
			this->mainGrip->Name = L"mainGrip";
			this->mainGrip->Size = System::Drawing::Size(346, 48);
			this->mainGrip->TabIndex = 0;
			this->mainGrip->DoubleClick += gcnew System::EventHandler(this, &Form1::csPFcalcMinz);
			this->mainGrip->MouseLeave += gcnew System::EventHandler(this, &Form1::staMessRest);
			this->mainGrip->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::GripMove);
			this->mainGrip->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::GripDown);
			this->mainGrip->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::GripUp);
			this->mainGrip->MouseEnter += gcnew System::EventHandler(this, &Form1::mainGrip_MouseEnter);
			// 
			// AOTchkBox
			// 
			this->AOTchkBox->AccessibleDescription = L"Always On Top Mode";
			this->AOTchkBox->AccessibleName = L"Always On Top Mode";
			this->AOTchkBox->AccessibleRole = System::Windows::Forms::AccessibleRole::CheckButton;
			this->AOTchkBox->AutoSize = true;
			this->AOTchkBox->BackColor = System::Drawing::Color::Transparent;
			this->AOTchkBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AOTchkBox->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->AOTchkBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AOTchkBox->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->AOTchkBox->ForeColor = System::Drawing::SystemColors::Highlight;
			this->AOTchkBox->Location = System::Drawing::Point(12, 271);
			this->AOTchkBox->Name = L"AOTchkBox";
			this->AOTchkBox->Size = System::Drawing::Size(166, 17);
			this->AOTchkBox->TabIndex = 14;
			this->AOTchkBox->Text = L"Keep This Window On Top";
			this->AOTchkBox->UseVisualStyleBackColor = false;
			this->AOTchkBox->MouseLeave += gcnew System::EventHandler(this, &Form1::staMessRest);
			this->AOTchkBox->MouseEnter += gcnew System::EventHandler(this, &Form1::AOTchkBox_MouseEnter);
			this->AOTchkBox->CheckedChanged += gcnew System::EventHandler(this, &Form1::AOTchkBox_CheckedChanged);
			// 
			// abmLabel
			// 
			this->abmLabel->AccessibleDescription = L"About this PetFeed Calculator";
			this->abmLabel->AccessibleName = L"About this PetFeed Calculator";
			this->abmLabel->AccessibleRole = System::Windows::Forms::AccessibleRole::Link;
			this->abmLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->abmLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->abmLabel->ForeColor = System::Drawing::SystemColors::Highlight;
			this->abmLabel->Location = System::Drawing::Point(204, 273);
			this->abmLabel->Name = L"abmLabel";
			this->abmLabel->Size = System::Drawing::Size(117, 13);
			this->abmLabel->TabIndex = 15;
			this->abmLabel->Text = L"About this Program";
			this->abmLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->abmLabel->MouseLeave += gcnew System::EventHandler(this, &Form1::abmLabel_MouseLeave);
			this->abmLabel->Click += gcnew System::EventHandler(this, &Form1::abmLabel_Click);
			this->abmLabel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::abmLabel_MouseDown);
			this->abmLabel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::abmLabel_MouseUp);
			this->abmLabel->MouseEnter += gcnew System::EventHandler(this, &Form1::abmLabel_MouseEnter);
			// 
			// flyffLogo
			// 
			this->flyffLogo->AccessibleDescription = L"FlyFF Logo";
			this->flyffLogo->AccessibleName = L"FlyFF Logo";
			this->flyffLogo->AccessibleRole = System::Windows::Forms::AccessibleRole::Graphic;
			this->flyffLogo->BackColor = System::Drawing::Color::Transparent;
			this->flyffLogo->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"flyffLogo.Image")));
			this->flyffLogo->Location = System::Drawing::Point(424, 243);
			this->flyffLogo->Name = L"flyffLogo";
			this->flyffLogo->Size = System::Drawing::Size(64, 45);
			this->flyffLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->flyffLogo->TabIndex = 4;
			this->flyffLogo->TabStop = false;
			this->flyffLogo->MouseLeave += gcnew System::EventHandler(this, &Form1::staMessRest);
			this->flyffLogo->MouseEnter += gcnew System::EventHandler(this, &Form1::flyffLogo_MouseEnter);
			// 
			// cceClass
			// 
			this->cceClass->AccessibleDescription = L"Current Class of Pet";
			this->cceClass->AccessibleName = L"Current Class";
			this->cceClass->AccessibleRole = System::Windows::Forms::AccessibleRole::ComboBox;
			this->cceClass->BackColor = System::Drawing::Color::LightCyan;
			this->cceClass->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cceClass->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cceClass->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->cceClass->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"D", L"C", L"B", L"A", L"S"});
			this->cceClass->Location = System::Drawing::Point(54, 82);
			this->cceClass->Name = L"cceClass";
			this->cceClass->Size = System::Drawing::Size(42, 21);
			this->cceClass->TabIndex = 1;
			this->cceClass->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::cce_Alter);
			this->cceClass->Enter += gcnew System::EventHandler(this, &Form1::pce_Enter);
			// 
			// cceExp
			// 
			this->cceExp->AccessibleDescription = L"Current Exp% of the Pet";
			this->cceExp->AccessibleName = L"Current Exp";
			this->cceExp->AccessibleRole = System::Windows::Forms::AccessibleRole::Cell;
			this->cceExp->BackColor = System::Drawing::Color::LightCyan;
			this->cceExp->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->cceExp->DecimalPlaces = 2;
			this->cceExp->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cceExp->ForeColor = System::Drawing::SystemColors::Highlight;
			this->cceExp->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {25, 0, 0, 131072});
			this->cceExp->Location = System::Drawing::Point(102, 82);
			this->cceExp->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9999, 0, 0, 131072});
			this->cceExp->Name = L"cceExp";
			this->cceExp->Size = System::Drawing::Size(59, 21);
			this->cceExp->TabIndex = 2;
			this->cceExp->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->cceExp->ValueChanged += gcnew System::EventHandler(this, &Form1::cce_Alter);
			this->cceExp->Enter += gcnew System::EventHandler(this, &Form1::pce_Enter);
			// 
			// PFcceLabel
			// 
			this->PFcceLabel->AccessibleDescription = L"Current Class and Exp";
			this->PFcceLabel->AccessibleName = L"Current Class and Exp";
			this->PFcceLabel->AccessibleRole = System::Windows::Forms::AccessibleRole::StaticText;
			this->PFcceLabel->BackColor = System::Drawing::Color::Transparent;
			this->PFcceLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->PFcceLabel->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->PFcceLabel->Location = System::Drawing::Point(12, 63);
			this->PFcceLabel->Name = L"PFcceLabel";
			this->PFcceLabel->Size = System::Drawing::Size(149, 16);
			this->PFcceLabel->TabIndex = 0;
			this->PFcceLabel->Text = L"Current Class and Exp";
			this->PFcceLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->PFcceLabel->MouseLeave += gcnew System::EventHandler(this, &Form1::staMessRest);
			this->PFcceLabel->MouseEnter += gcnew System::EventHandler(this, &Form1::cceExp_Enter);
			// 
			// madeForLabel
			// 
			this->madeForLabel->AccessibleDescription = L"Made For Label";
			this->madeForLabel->AccessibleName = L"Made For Label";
			this->madeForLabel->AccessibleRole = System::Windows::Forms::AccessibleRole::StaticText;
			this->madeForLabel->BackColor = System::Drawing::Color::Transparent;
			this->madeForLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->madeForLabel->ForeColor = System::Drawing::Color::LightSkyBlue;
			this->madeForLabel->Location = System::Drawing::Point(353, 273);
			this->madeForLabel->Name = L"madeForLabel";
			this->madeForLabel->Size = System::Drawing::Size(65, 13);
			this->madeForLabel->TabIndex = 10;
			this->madeForLabel->Text = L"Made For :";
			this->madeForLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->madeForLabel->MouseLeave += gcnew System::EventHandler(this, &Form1::staMessRest);
			this->madeForLabel->MouseEnter += gcnew System::EventHandler(this, &Form1::flyffLogo_MouseEnter);
			// 
			// remSheader
			// 
			this->remSheader->AccessibleDescription = L"Remaining";
			this->remSheader->AccessibleName = L"Remaining";
			this->remSheader->AccessibleRole = System::Windows::Forms::AccessibleRole::StaticText;
			this->remSheader->BackColor = System::Drawing::Color::Transparent;
			this->remSheader->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->remSheader->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->remSheader->Location = System::Drawing::Point(309, 63);
			this->remSheader->Name = L"remSheader";
			this->remSheader->Size = System::Drawing::Size(179, 16);
			this->remSheader->TabIndex = 11;
			this->remSheader->Text = L"Amount needed till Class S";
			this->remSheader->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// remStimeLab
			// 
			this->remStimeLab->AccessibleDescription = L"Time Needed till Class S";
			this->remStimeLab->AccessibleName = L"Time";
			this->remStimeLab->AccessibleRole = System::Windows::Forms::AccessibleRole::StaticText;
			this->remStimeLab->BackColor = System::Drawing::Color::Transparent;
			this->remStimeLab->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->remStimeLab->ForeColor = System::Drawing::SystemColors::ControlText;
			this->remStimeLab->Location = System::Drawing::Point(347, 92);
			this->remStimeLab->Name = L"remStimeLab";
			this->remStimeLab->Size = System::Drawing::Size(41, 13);
			this->remStimeLab->TabIndex = 12;
			this->remStimeLab->Text = L"Time :";
			this->remStimeLab->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// remSfeedLab
			// 
			this->remSfeedLab->AccessibleDescription = L"Feed Needed till Class S";
			this->remSfeedLab->AccessibleName = L"Feed";
			this->remSfeedLab->AccessibleRole = System::Windows::Forms::AccessibleRole::StaticText;
			this->remSfeedLab->BackColor = System::Drawing::Color::Transparent;
			this->remSfeedLab->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->remSfeedLab->ForeColor = System::Drawing::SystemColors::ControlText;
			this->remSfeedLab->Location = System::Drawing::Point(348, 79);
			this->remSfeedLab->Name = L"remSfeedLab";
			this->remSfeedLab->Size = System::Drawing::Size(40, 13);
			this->remSfeedLab->TabIndex = 14;
			this->remSfeedLab->Text = L"Feed :";
			this->remSfeedLab->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// statMsg
			// 
			this->statMsg->AccessibleDescription = L"Displays descriptions and messages";
			this->statMsg->AccessibleName = L"ToolTip Messages";
			this->statMsg->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			this->statMsg->BackColor = System::Drawing::Color::Transparent;
			this->statMsg->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->statMsg->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->statMsg->Location = System::Drawing::Point(9, 251);
			this->statMsg->Name = L"statMsg";
			this->statMsg->Size = System::Drawing::Size(408, 13);
			this->statMsg->TabIndex = 16;
			this->statMsg->Text = L"Welcome to CherrySoft PlatinumX: FLYFF PetFeed Calculator";
			this->statMsg->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->statMsg->MouseLeave += gcnew System::EventHandler(this, &Form1::staMessRest);
			this->statMsg->MouseEnter += gcnew System::EventHandler(this, &Form1::statMsg_MouseEnter);
			// 
			// remSfeed
			// 
			this->remSfeed->AccessibleDescription = L"Feed amount needed to Class S";
			this->remSfeed->AccessibleName = L"Feed";
			this->remSfeed->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			this->remSfeed->BackColor = System::Drawing::Color::Transparent;
			this->remSfeed->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->remSfeed->Location = System::Drawing::Point(436, 79);
			this->remSfeed->Name = L"remSfeed";
			this->remSfeed->Size = System::Drawing::Size(52, 13);
			this->remSfeed->TabIndex = 17;
			this->remSfeed->Text = L"236,990";
			this->remSfeed->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// remStime
			// 
			this->remStime->AccessibleDescription = L"Time needed till Class S";
			this->remStime->AccessibleName = L"Time";
			this->remStime->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			this->remStime->BackColor = System::Drawing::Color::Transparent;
			this->remStime->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->remStime->ForeColor = System::Drawing::SystemColors::ControlText;
			this->remStime->Location = System::Drawing::Point(404, 92);
			this->remStime->Name = L"remStime";
			this->remStime->Size = System::Drawing::Size(84, 13);
			this->remStime->TabIndex = 18;
			this->remStime->Text = L"4d 07h 53m";
			this->remStime->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->remStime->MouseLeave += gcnew System::EventHandler(this, &Form1::rcMouseLeave);
			this->remStime->MouseEnter += gcnew System::EventHandler(this, &Form1::rcMouseEnter);
			// 
			// remStim2
			// 
			this->remStim2->AccessibleDescription = L"Hours and Minutes format for Time to Class S";
			this->remStim2->AccessibleName = L"Time";
			this->remStim2->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			this->remStim2->BackColor = System::Drawing::Color::Transparent;
			this->remStim2->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->remStim2->Location = System::Drawing::Point(404, 105);
			this->remStim2->Name = L"remStim2";
			this->remStim2->Size = System::Drawing::Size(84, 13);
			this->remStim2->TabIndex = 19;
			this->remStim2->Text = L"99999999min";
			this->remStim2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->remStim2->MouseLeave += gcnew System::EventHandler(this, &Form1::rcMouseLeave);
			this->remStim2->MouseEnter += gcnew System::EventHandler(this, &Form1::rcMouseEnter);
			// 
			// RemainingTNLlab
			// 
			this->RemainingTNLlab->AccessibleDescription = L"Remaining TNL";
			this->RemainingTNLlab->AccessibleName = L"RemainingTNL";
			this->RemainingTNLlab->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			this->RemainingTNLlab->BackColor = System::Drawing::Color::Transparent;
			this->RemainingTNLlab->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RemainingTNLlab->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->RemainingTNLlab->Location = System::Drawing::Point(312, 118);
			this->RemainingTNLlab->Name = L"RemainingTNLlab";
			this->RemainingTNLlab->Size = System::Drawing::Size(118, 14);
			this->RemainingTNLlab->TabIndex = 20;
			this->RemainingTNLlab->Text = L"Till Class C, Exp:";
			this->RemainingTNLlab->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// RemainingTNL
			// 
			this->RemainingTNL->AccessibleDescription = L"Remaining Experience Amount TNL";
			this->RemainingTNL->AccessibleName = L"Remaining Exp TNL";
			this->RemainingTNL->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			this->RemainingTNL->BackColor = System::Drawing::Color::Transparent;
			this->RemainingTNL->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RemainingTNL->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->RemainingTNL->Location = System::Drawing::Point(431, 118);
			this->RemainingTNL->Name = L"RemainingTNL";
			this->RemainingTNL->Size = System::Drawing::Size(57, 14);
			this->RemainingTNL->TabIndex = 21;
			this->RemainingTNL->Text = L"99.99%";
			this->RemainingTNL->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// remNfeedLab
			// 
			this->remNfeedLab->AccessibleDescription = L"Feed remaining till next Class";
			this->remNfeedLab->AccessibleName = L"Feed";
			this->remNfeedLab->AccessibleRole = System::Windows::Forms::AccessibleRole::StaticText;
			this->remNfeedLab->BackColor = System::Drawing::Color::Transparent;
			this->remNfeedLab->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->remNfeedLab->ForeColor = System::Drawing::SystemColors::ControlText;
			this->remNfeedLab->Location = System::Drawing::Point(348, 132);
			this->remNfeedLab->Name = L"remNfeedLab";
			this->remNfeedLab->Size = System::Drawing::Size(40, 13);
			this->remNfeedLab->TabIndex = 22;
			this->remNfeedLab->Text = L"Feed :";
			// 
			// remNtimeLab
			// 
			this->remNtimeLab->AccessibleDescription = L"Time remaining till next Class";
			this->remNtimeLab->AccessibleName = L"Time";
			this->remNtimeLab->AccessibleRole = System::Windows::Forms::AccessibleRole::StaticText;
			this->remNtimeLab->BackColor = System::Drawing::Color::Transparent;
			this->remNtimeLab->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->remNtimeLab->ForeColor = System::Drawing::SystemColors::ControlText;
			this->remNtimeLab->Location = System::Drawing::Point(347, 145);
			this->remNtimeLab->Name = L"remNtimeLab";
			this->remNtimeLab->Size = System::Drawing::Size(41, 13);
			this->remNtimeLab->TabIndex = 23;
			this->remNtimeLab->Text = L"Time :";
			// 
			// remNfeed
			// 
			this->remNfeed->AccessibleDescription = L"Feed amount remaining till next Class";
			this->remNfeed->AccessibleName = L"Feed";
			this->remNfeed->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			this->remNfeed->BackColor = System::Drawing::Color::Transparent;
			this->remNfeed->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->remNfeed->Location = System::Drawing::Point(436, 132);
			this->remNfeed->Name = L"remNfeed";
			this->remNfeed->Size = System::Drawing::Size(52, 13);
			this->remNfeed->TabIndex = 24;
			this->remNfeed->Text = L"12000";
			this->remNfeed->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// remNtime
			// 
			this->remNtime->AccessibleDescription = L"Amount of Time remaining till next Class";
			this->remNtime->AccessibleName = L"Time";
			this->remNtime->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			this->remNtime->BackColor = System::Drawing::Color::Transparent;
			this->remNtime->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->remNtime->ForeColor = System::Drawing::SystemColors::ControlText;
			this->remNtime->Location = System::Drawing::Point(404, 145);
			this->remNtime->Name = L"remNtime";
			this->remNtime->Size = System::Drawing::Size(84, 13);
			this->remNtime->TabIndex = 25;
			this->remNtime->Text = L"0d 06h 40m";
			this->remNtime->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->remNtime->MouseLeave += gcnew System::EventHandler(this, &Form1::rcMouseLeave);
			this->remNtime->MouseEnter += gcnew System::EventHandler(this, &Form1::rcMouseEnter);
			// 
			// remNtim2
			// 
			this->remNtim2->AccessibleDescription = L"Hours and Minutes format for Time to next Class";
			this->remNtim2->AccessibleName = L"Time";
			this->remNtim2->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			this->remNtim2->BackColor = System::Drawing::Color::Transparent;
			this->remNtim2->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->remNtim2->Location = System::Drawing::Point(404, 158);
			this->remNtim2->Name = L"remNtim2";
			this->remNtim2->Size = System::Drawing::Size(84, 13);
			this->remNtim2->TabIndex = 26;
			this->remNtim2->Text = L"99999999min";
			this->remNtim2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->remNtim2->MouseLeave += gcnew System::EventHandler(this, &Form1::rcMouseLeave);
			this->remNtim2->MouseEnter += gcnew System::EventHandler(this, &Form1::rcMouseEnter);
			// 
			// fceLab
			// 
			this->fceLab->AccessibleDescription = L"Final/Target Class and Exp of the Pet";
			this->fceLab->AccessibleName = L"Final/Target Class and Exp";
			this->fceLab->AccessibleRole = System::Windows::Forms::AccessibleRole::StaticText;
			this->fceLab->BackColor = System::Drawing::Color::Transparent;
			this->fceLab->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->fceLab->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->fceLab->Location = System::Drawing::Point(12, 106);
			this->fceLab->Name = L"fceLab";
			this->fceLab->Size = System::Drawing::Size(112, 13);
			this->fceLab->TabIndex = 0;
			this->fceLab->Text = L"Final Class and Exp";
			this->fceLab->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->fceLab->MouseLeave += gcnew System::EventHandler(this, &Form1::staMessRest);
			this->fceLab->MouseEnter += gcnew System::EventHandler(this, &Form1::fceLab_MouseEnter);
			// 
			// fceClass
			// 
			this->fceClass->AccessibleDescription = L"Final/Target Class of Pet";
			this->fceClass->AccessibleName = L"Final/Target Class";
			this->fceClass->AccessibleRole = System::Windows::Forms::AccessibleRole::ComboBox;
			this->fceClass->BackColor = System::Drawing::Color::LightCyan;
			this->fceClass->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->fceClass->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->fceClass->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->fceClass->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"D", L"C", L"B", L"A", L"S"});
			this->fceClass->Location = System::Drawing::Point(54, 122);
			this->fceClass->Name = L"fceClass";
			this->fceClass->Size = System::Drawing::Size(42, 21);
			this->fceClass->TabIndex = 3;
			this->fceClass->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::fce_Alter);
			this->fceClass->Enter += gcnew System::EventHandler(this, &Form1::pce_Enter);
			// 
			// fceExp
			// 
			this->fceExp->AccessibleDescription = L"Final/Target Exp% of Pet";
			this->fceExp->AccessibleName = L"Final Exp";
			this->fceExp->AccessibleRole = System::Windows::Forms::AccessibleRole::Cell;
			this->fceExp->BackColor = System::Drawing::Color::LightCyan;
			this->fceExp->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fceExp->Cursor = System::Windows::Forms::Cursors::Default;
			this->fceExp->DecimalPlaces = 2;
			this->fceExp->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->fceExp->ForeColor = System::Drawing::SystemColors::Highlight;
			this->fceExp->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {25, 0, 0, 131072});
			this->fceExp->Location = System::Drawing::Point(102, 122);
			this->fceExp->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9999, 0, 0, 131072});
			this->fceExp->Name = L"fceExp";
			this->fceExp->Size = System::Drawing::Size(59, 21);
			this->fceExp->TabIndex = 4;
			this->fceExp->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->fceExp->ValueChanged += gcnew System::EventHandler(this, &Form1::fce_Alter);
			this->fceExp->Enter += gcnew System::EventHandler(this, &Form1::pce_Enter);
			// 
			// fmtLab
			// 
			this->fmtLab->AccessibleDescription = L"Feed Amount";
			this->fmtLab->AccessibleName = L"Feed Amount";
			this->fmtLab->AccessibleRole = System::Windows::Forms::AccessibleRole::StaticText;
			this->fmtLab->AutoSize = true;
			this->fmtLab->BackColor = System::Drawing::Color::Transparent;
			this->fmtLab->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->fmtLab->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->fmtLab->Location = System::Drawing::Point(12, 151);
			this->fmtLab->Name = L"fmtLab";
			this->fmtLab->Size = System::Drawing::Size(67, 13);
			this->fmtLab->TabIndex = 30;
			this->fmtLab->Text = L"Feed Amt :";
			this->fmtLab->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->fmtLab->MouseLeave += gcnew System::EventHandler(this, &Form1::staMessRest);
			this->fmtLab->MouseEnter += gcnew System::EventHandler(this, &Form1::fmtLab_MouseEnter);
			// 
			// ftLab
			// 
			this->ftLab->AccessibleDescription = L"Feed Time";
			this->ftLab->AccessibleName = L"Feed Time";
			this->ftLab->AccessibleRole = System::Windows::Forms::AccessibleRole::StaticText;
			this->ftLab->AutoSize = true;
			this->ftLab->BackColor = System::Drawing::Color::Transparent;
			this->ftLab->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ftLab->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->ftLab->Location = System::Drawing::Point(12, 200);
			this->ftLab->Name = L"ftLab";
			this->ftLab->Size = System::Drawing::Size(68, 13);
			this->ftLab->TabIndex = 31;
			this->ftLab->Text = L"FeedTime :";
			this->ftLab->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ftLab->MouseLeave += gcnew System::EventHandler(this, &Form1::staMessRest);
			this->ftLab->MouseEnter += gcnew System::EventHandler(this, &Form1::ftLab_MouseEnter);
			// 
			// excLab
			// 
			this->excLab->AccessibleDescription = L"Final Exp";
			this->excLab->AccessibleName = L"Gainable or Target Exp";
			this->excLab->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			this->excLab->AutoSize = true;
			this->excLab->BackColor = System::Drawing::Color::Transparent;
			this->excLab->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->excLab->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->excLab->Location = System::Drawing::Point(12, 178);
			this->excLab->Name = L"excLab";
			this->excLab->Size = System::Drawing::Size(67, 13);
			this->excLab->TabIndex = 34;
			this->excLab->Text = L"Exp% (D) :";
			this->excLab->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->excLab->MouseLeave += gcnew System::EventHandler(this, &Form1::staMessRest);
			this->excLab->MouseEnter += gcnew System::EventHandler(this, &Form1::excLab_MouseEnter);
			// 
			// ftHrs
			// 
			this->ftHrs->AccessibleDescription = L"FeedTime Hours";
			this->ftHrs->AccessibleName = L"FeedTime Hours";
			this->ftHrs->AccessibleRole = System::Windows::Forms::AccessibleRole::Cell;
			this->ftHrs->BackColor = System::Drawing::Color::LightCyan;
			this->ftHrs->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ftHrs->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ftHrs->ForeColor = System::Drawing::SystemColors::Highlight;
			this->ftHrs->Location = System::Drawing::Point(15, 216);
			this->ftHrs->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {233, 0, 0, 0});
			this->ftHrs->Name = L"ftHrs";
			this->ftHrs->Size = System::Drawing::Size(58, 21);
			this->ftHrs->TabIndex = 10;
			this->ftHrs->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->ftHrs->ValueChanged += gcnew System::EventHandler(this, &Form1::fts_Alter);
			this->ftHrs->Enter += gcnew System::EventHandler(this, &Form1::fts_Enter);
			// 
			// excBox
			// 
			this->excBox->AccessibleDescription = L"Gainable or Target Exp";
			this->excBox->AccessibleName = L"Gainable or Target Exp";
			this->excBox->AccessibleRole = System::Windows::Forms::AccessibleRole::Cell;
			this->excBox->BackColor = System::Drawing::Color::LightCyan;
			this->excBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->excBox->DecimalPlaces = 2;
			this->excBox->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->excBox->ForeColor = System::Drawing::SystemColors::Highlight;
			this->excBox->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {25, 0, 0, 131072});
			this->excBox->Location = System::Drawing::Point(85, 176);
			this->excBox->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {349950, 0, 0, 131072});
			this->excBox->Name = L"excBox";
			this->excBox->Size = System::Drawing::Size(76, 21);
			this->excBox->TabIndex = 8;
			this->excBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->excBox->ValueChanged += gcnew System::EventHandler(this, &Form1::exs_Alter);
			this->excBox->Enter += gcnew System::EventHandler(this, &Form1::exs_Enter);
			// 
			// fmtBox
			// 
			this->fmtBox->AccessibleDescription = L"Type Feed Amount Here";
			this->fmtBox->AccessibleName = L"Feed Amount Box";
			this->fmtBox->AccessibleRole = System::Windows::Forms::AccessibleRole::Cell;
			this->fmtBox->BackColor = System::Drawing::Color::LightCyan;
			this->fmtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fmtBox->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->fmtBox->ForeColor = System::Drawing::SystemColors::Highlight;
			this->fmtBox->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->fmtBox->Location = System::Drawing::Point(85, 149);
			this->fmtBox->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {419958, 0, 0, 0});
			this->fmtBox->Name = L"fmtBox";
			this->fmtBox->Size = System::Drawing::Size(76, 21);
			this->fmtBox->TabIndex = 6;
			this->fmtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->fmtBox->ValueChanged += gcnew System::EventHandler(this, &Form1::fmt_Alter);
			this->fmtBox->Enter += gcnew System::EventHandler(this, &Form1::fmt_Enter);
			// 
			// ftMin
			// 
			this->ftMin->AccessibleDescription = L"Feed Time Minutes";
			this->ftMin->AccessibleName = L"Feed Time Minutes";
			this->ftMin->AccessibleRole = System::Windows::Forms::AccessibleRole::Cell;
			this->ftMin->BackColor = System::Drawing::Color::LightCyan;
			this->ftMin->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ftMin->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ftMin->ForeColor = System::Drawing::SystemColors::Highlight;
			this->ftMin->Location = System::Drawing::Point(79, 216);
			this->ftMin->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {59, 0, 0, 0});
			this->ftMin->Name = L"ftMin";
			this->ftMin->Size = System::Drawing::Size(38, 21);
			this->ftMin->TabIndex = 11;
			this->ftMin->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->ftMin->ValueChanged += gcnew System::EventHandler(this, &Form1::fts_Alter);
			this->ftMin->Enter += gcnew System::EventHandler(this, &Form1::fts_Enter);
			// 
			// ftSec
			// 
			this->ftSec->AccessibleDescription = L"Feed Time Seconds";
			this->ftSec->AccessibleName = L"Feed Time Seconds";
			this->ftSec->AccessibleRole = System::Windows::Forms::AccessibleRole::Cell;
			this->ftSec->BackColor = System::Drawing::Color::LightCyan;
			this->ftSec->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ftSec->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ftSec->ForeColor = System::Drawing::SystemColors::Highlight;
			this->ftSec->Location = System::Drawing::Point(123, 216);
			this->ftSec->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {59, 0, 0, 0});
			this->ftSec->Name = L"ftSec";
			this->ftSec->Size = System::Drawing::Size(38, 21);
			this->ftSec->TabIndex = 12;
			this->ftSec->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->ftSec->ValueChanged += gcnew System::EventHandler(this, &Form1::fts_Alter);
			this->ftSec->Enter += gcnew System::EventHandler(this, &Form1::fts_Enter);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// SysTD
			// 
			this->SysTD->AccessibleDescription = L"Displays Current Time and Date";
			this->SysTD->AccessibleName = L"System Time and Date";
			this->SysTD->AccessibleRole = System::Windows::Forms::AccessibleRole::Clock;
			this->SysTD->BackColor = System::Drawing::Color::Transparent;
			this->SysTD->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->SysTD->ForeColor = System::Drawing::SystemColors::Highlight;
			this->SysTD->Location = System::Drawing::Point(407, 221);
			this->SysTD->Name = L"SysTD";
			this->SysTD->Size = System::Drawing::Size(81, 19);
			this->SysTD->TabIndex = 47;
			this->SysTD->Text = L"HH:MM:SS";
			this->SysTD->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->SysTD->MouseLeave += gcnew System::EventHandler(this, &Form1::SysTD_MouseLeave);
			this->SysTD->MouseEnter += gcnew System::EventHandler(this, &Form1::SysTD_MouseEnter);
			// 
			// ftFormat2Lab
			// 
			this->ftFormat2Lab->AccessibleDescription = L"Feed Time";
			this->ftFormat2Lab->AccessibleName = L"Feed Time";
			this->ftFormat2Lab->AccessibleRole = System::Windows::Forms::AccessibleRole::StaticText;
			this->ftFormat2Lab->BackColor = System::Drawing::Color::Transparent;
			this->ftFormat2Lab->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ftFormat2Lab->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->ftFormat2Lab->Location = System::Drawing::Point(82, 200);
			this->ftFormat2Lab->Name = L"ftFormat2Lab";
			this->ftFormat2Lab->Size = System::Drawing::Size(119, 13);
			this->ftFormat2Lab->TabIndex = 48;
			this->ftFormat2Lab->Text = L"0 sec";
			this->ftFormat2Lab->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ftSecLab
			// 
			this->ftSecLab->AccessibleDescription = L"Feed Time";
			this->ftSecLab->AccessibleName = L"Feed Time";
			this->ftSecLab->AccessibleRole = System::Windows::Forms::AccessibleRole::StaticText;
			this->ftSecLab->AutoSize = true;
			this->ftSecLab->BackColor = System::Drawing::Color::Transparent;
			this->ftSecLab->Font = (gcnew System::Drawing::Font(L"Arial", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ftSecLab->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->ftSecLab->Location = System::Drawing::Point(121, 240);
			this->ftSecLab->Name = L"ftSecLab";
			this->ftSecLab->Size = System::Drawing::Size(18, 10);
			this->ftSecLab->TabIndex = 49;
			this->ftSecLab->Text = L"Sec";
			this->ftSecLab->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ftMinLab
			// 
			this->ftMinLab->AccessibleDescription = L"Feed Time";
			this->ftMinLab->AccessibleName = L"Feed Time";
			this->ftMinLab->AccessibleRole = System::Windows::Forms::AccessibleRole::StaticText;
			this->ftMinLab->AutoSize = true;
			this->ftMinLab->BackColor = System::Drawing::Color::Transparent;
			this->ftMinLab->Font = (gcnew System::Drawing::Font(L"Arial", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ftMinLab->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->ftMinLab->Location = System::Drawing::Point(77, 240);
			this->ftMinLab->Name = L"ftMinLab";
			this->ftMinLab->Size = System::Drawing::Size(18, 10);
			this->ftMinLab->TabIndex = 50;
			this->ftMinLab->Text = L"Min";
			this->ftMinLab->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ftHrsLab
			// 
			this->ftHrsLab->AccessibleDescription = L"Feed Time";
			this->ftHrsLab->AccessibleName = L"Feed Time";
			this->ftHrsLab->AccessibleRole = System::Windows::Forms::AccessibleRole::StaticText;
			this->ftHrsLab->AutoSize = true;
			this->ftHrsLab->BackColor = System::Drawing::Color::Transparent;
			this->ftHrsLab->Font = (gcnew System::Drawing::Font(L"Arial", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ftHrsLab->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->ftHrsLab->Location = System::Drawing::Point(10, 240);
			this->ftHrsLab->Name = L"ftHrsLab";
			this->ftHrsLab->Size = System::Drawing::Size(22, 10);
			this->ftHrsLab->TabIndex = 51;
			this->ftHrsLab->Text = L"Hour";
			this->ftHrsLab->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// shellMenu
			// 
			this->shellMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->sMmin, this->sMsep1, 
				this->sMexit});
			this->shellMenu->Name = L"shellMenu";
			this->shellMenu->ShowImageMargin = false;
			this->shellMenu->Size = System::Drawing::Size(89, 54);
			// 
			// sMmin
			// 
			this->sMmin->Name = L"sMmin";
			this->sMmin->Size = System::Drawing::Size(88, 22);
			this->sMmin->Text = L"Minimize";
			this->sMmin->Click += gcnew System::EventHandler(this, &Form1::csPFcalcMinz);
			// 
			// sMexit
			// 
			this->sMexit->Name = L"sMexit";
			this->sMexit->Size = System::Drawing::Size(88, 22);
			this->sMexit->Text = L"Exit";
			this->sMexit->Click += gcnew System::EventHandler(this, &Form1::csPFcalcExit);
			// 
			// sMsep1
			// 
			this->sMsep1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->sMsep1->Name = L"sMsep1";
			this->sMsep1->Size = System::Drawing::Size(85, 6);
			// 
			// Form1
			// 
			this->AccessibleDescription = L"FlyFF Petfeed Calculator";
			this->AccessibleName = L"PetFeed Calculator";
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::Window;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(500, 300);
			this->Controls->Add(this->ftHrsLab);
			this->Controls->Add(this->ftMinLab);
			this->Controls->Add(this->ftSecLab);
			this->Controls->Add(this->ftFormat2Lab);
			this->Controls->Add(this->SysTD);
			this->Controls->Add(this->ftSec);
			this->Controls->Add(this->ftMin);
			this->Controls->Add(this->fmtBox);
			this->Controls->Add(this->excBox);
			this->Controls->Add(this->ftHrs);
			this->Controls->Add(this->excLab);
			this->Controls->Add(this->ftLab);
			this->Controls->Add(this->fmtLab);
			this->Controls->Add(this->fceExp);
			this->Controls->Add(this->fceClass);
			this->Controls->Add(this->fceLab);
			this->Controls->Add(this->remNtim2);
			this->Controls->Add(this->remNtime);
			this->Controls->Add(this->remNfeed);
			this->Controls->Add(this->remNtimeLab);
			this->Controls->Add(this->remNfeedLab);
			this->Controls->Add(this->RemainingTNL);
			this->Controls->Add(this->RemainingTNLlab);
			this->Controls->Add(this->remStim2);
			this->Controls->Add(this->remStime);
			this->Controls->Add(this->remSfeed);
			this->Controls->Add(this->statMsg);
			this->Controls->Add(this->remSfeedLab);
			this->Controls->Add(this->remStimeLab);
			this->Controls->Add(this->remSheader);
			this->Controls->Add(this->madeForLabel);
			this->Controls->Add(this->PFcceLabel);
			this->Controls->Add(this->cceExp);
			this->Controls->Add(this->cceClass);
			this->Controls->Add(this->flyffLogo);
			this->Controls->Add(this->abmLabel);
			this->Controls->Add(this->AOTchkBox);
			this->Controls->Add(this->mainGrip);
			this->Controls->Add(this->csPFgrphExit);
			this->Controls->Add(this->csPFgrphMinz);
			this->Controls->Add(this->csLogoPFcontrol);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FLYFF PetFeed Calc";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::GripUp);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::GripDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::GripMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->csLogoPFcontrol))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->csPFgrphMinz))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->csPFgrphExit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->flyffLogo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->cceExp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fceExp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ftHrs))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->excBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fmtBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ftMin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ftSec))->EndInit();
			this->shellMenu->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//Declarations - Variable - General
	int iTime; bool mouseIsDown, timeMouseOver;	Point firstPoint;
//Declarations - Constant - Gameplay Record
	int fRecD, fRecC, fRecB, fRecA, tRecD, tRecC, tRecB, tRecA, eRecD, eRecC, eRecB, eRecA;
//Declarations - Variable - Class and Exp
	int ccINT, ceINT, csINT, fcINT, feINT, fsINT;	//States
	int ScF, NcF, ScT, NcT, NcE;					//From To Next/S level (For CCE)
//Declarations - Variable - Right Column Time
	int rcSD, rcSH, rcSM, rcSh, rcSm, rcND, rcNH, rcNM, rcNh, rcNm;
//Declarations - Variable - Controls
	int PFxFeed, PFxEXS, PFxFTS;
//Declarations - Variable - Loops and States 
	bool RCmouse; int pfLastEditIndex; int lastColor;


//Program onLoad
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e){
				//Edit Gameplay Record ( Actual Value DataBase )
				fRecD = 12000;	fRecC = 24990;	fRecB = 50010;	fRecA = 99990;	//feed
				tRecD = 400;		tRecC = 833;		tRecB = 1667;	tRecA = 3333;	//minutes
				eRecD = 25;		eRecC = 12;		eRecB = 6;		eRecA = 3;		//pet Exp % ( Per Min * 100 )
				//eRecD = 0.25;	eRecC = 0.125;	eRecB = 0.0625;	eRecA = 0.03125;	//theoretically supposed to be
				this->cceClass->SelectedItem = this->cceClass->Items[0];
				this->fceClass->SelectedItem = this->fceClass->Items[0];
				cceSave();
			//
				RCmouse=false;
			 }
//Minimize
	private: void csMinzFunct( int xMode ){
				System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
				switch(xMode){
					case 0:	{this->csPFgrphMinz->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"csPFgrphMinz.OverImage")));	this->statMsg->Text = L"Minimize Pet Feed Calculator";					break;}
					case 1:	{this->csPFgrphMinz->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"csPFgrphMinz.Image")));		statusReset();	break;}
					case 2:	{this->csPFgrphMinz->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"csPFgrphMinz.DownImage")));	break;}
					case 3:	{this->csPFgrphMinz->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"csPFgrphMinz.OverImage")));	break;}
					default:{}
				}delete resources;
			}
	private: System::Void csPFgrphMinz_MouseEnter(System::Object^  sender, System::EventArgs^  e)						{csMinzFunct(0);}
	private: System::Void csPFgrphMinz_MouseLeave(System::Object^  sender, System::EventArgs^  e)						{csMinzFunct(1);}
	private: System::Void csPFgrphMinz_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)	{csMinzFunct(2);}
	private: System::Void csPFgrphMinz_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)		{csMinzFunct(3);}
//Exit
	private: void csExitFunct( int xMode )	{
				System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
				switch(xMode){
					case 0:	{this->csPFgrphExit->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"csPFgrphExit.OverImage")));	this->statMsg->Text = L"Exit Pet Feed Calculator";					break;}
					case 1:	{this->csPFgrphExit->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"csPFgrphExit.Image")));		statusReset();	break;}
					case 2:	{this->csPFgrphExit->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"csPFgrphExit.DownImage")));	break;}
					case 3:	{this->csPFgrphExit->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"csPFgrphExit.OverImage")));	break;}
					default:{}	
				}delete resources;
			}
	private: System::Void csPFgrphExit_MouseEnter(System::Object^  sender, System::EventArgs^  e)						{csExitFunct(0);}
	private: System::Void csPFgrphExit_MouseLeave(System::Object^  sender, System::EventArgs^  e)						{csExitFunct(1);}
	private: System::Void csPFgrphExit_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)	{csExitFunct(2);}
	private: System::Void csPFgrphExit_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)		{csExitFunct(3);}
//About
	private: void abmMouseFunct( int xMode )	{
				switch(xMode){
					case 0:	{this->abmLabel->Font = (gcnew System::Drawing::Font(L"Tahoma",	8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),	System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
							 this->abmLabel->ForeColor = System::Drawing::SystemColors::HotTrack; this->statMsg->Text = L"Show Credits"; break;}
					case 1:	{this->abmLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
							 this->abmLabel->ForeColor = System::Drawing::SystemColors::Highlight; statusReset(); break;}
					case 2:	{this->abmLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
							 this->abmLabel->ForeColor = System::Drawing::SystemColors::ControlText; break;}
					case 3:	{this->abmLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
							 this->abmLabel->ForeColor = System::Drawing::SystemColors::Highlight;break;}
					default:{}	
				}
			}
	private: System::Void abmLabel_MouseEnter(System::Object^  sender, System::EventArgs^  e)						{abmMouseFunct(0);}
	private: System::Void abmLabel_MouseLeave(System::Object^  sender, System::EventArgs^  e)						{abmMouseFunct(1);}
	private: System::Void abmLabel_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)	{abmMouseFunct(2);}
	private: System::Void abmLabel_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)		{abmMouseFunct(3);}
//General Functions
	private: System::Void csPFcalcExit(System::Object^  sender, System::EventArgs^  e)	{Application::Exit();}
	private: System::Void csPFcalcMinz(System::Object^  sender, System::EventArgs^  e)	{this->WindowState = FormWindowState::Minimized;}
	private: System::Void AOTchkBox_CheckedChanged(System::Object^  sender, System::EventArgs^  e)	{if ( this->AOTchkBox->Checked == true )this->TopMost = true; else this->TopMost = false;}
	private: System::Void abmLabel_Click(System::Object^  sender, System::EventArgs^  e)	{AbmForm^ aboutme = gcnew AbmForm();
				if ( this->AOTchkBox->Checked == true )	aboutme->TopMost = true;	aboutme->ShowDialog();	delete aboutme;}
//Window Motion Gripping
	private: System::Void GripDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)	{this->Cursor = System::Windows::Forms::Cursors::SizeAll;firstPoint = e->Location; mouseIsDown = true;}
	private: System::Void GripUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)	{this->Cursor = System::Windows::Forms::Cursors::Default;mouseIsDown = false;}
	private: System::Void GripMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)	{
				if ( mouseIsDown == true )	{
					int xDiff = firstPoint.X - e->Location.X; int yDiff = firstPoint.Y - e->Location.Y; // Get the difference between the two points
					int x = this->Location.X - xDiff; int y = this->Location.Y - yDiff; this->Location = Point(x, y); // Set the new point
			}	}
//Time
	private: System::Void SysTD_MouseEnter(System::Object^  sender, System::EventArgs^  e) {timeMouseOver = true;  this->statMsg->Text = L"Displays current Time and Date";}
	private: System::Void SysTD_MouseLeave(System::Object^  sender, System::EventArgs^  e) {timeMouseOver = false; statusReset();}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e)	{
			if ( Form1::WindowState == FormWindowState::Normal )	{
				System::DateTime csPFnow = System::DateTime::Now;
				if ( timeMouseOver == false ) this->SysTD->Text = csPFnow.ToLongTimeString();
				else this->SysTD->Text = csPFnow.ToShortDateString();
				delete csPFnow;	}
			}
//Status Message Management
	private: void statusReset()	{this->statMsg->Text = L"Welcome to CherrySoft PlatinumX: FLYFF PetFeed Calculator";}
	private: System::Void staMessRest(System::Object^  sender, System::EventArgs^  e)					{statusReset();}
	private: System::Void cceExp_Enter(System::Object^  sender, System::EventArgs^  e)					{this->statMsg->Text = L"Enter Your Pet's Current Class & Exp%";}
	private: System::Void fmtLab_MouseEnter(System::Object^  sender, System::EventArgs^  e)				{this->statMsg->Text = L"Enter desired Feed Amount";}
	private: System::Void ftLab_MouseEnter(System::Object^  sender, System::EventArgs^  e)				{this->statMsg->Text = L"Enter the desired Feed-Time";}
	private: System::Void excLab_MouseEnter(System::Object^  sender, System::EventArgs^  e)				{this->statMsg->Text = L"Exp gainable at current class regardless of Max. Exp";}
	private: System::Void fceLab_MouseEnter(System::Object^  sender, System::EventArgs^  e)				{this->statMsg->Text = L"Enter Target Class & Exp";}
	private: System::Void statMsg_MouseEnter(System::Object^  sender, System::EventArgs^  e)			{this->statMsg->Text = L"ToolTip Help and System Messages will be shown here...";}
	private: System::Void AOTchkBox_MouseEnter(System::Object^  sender, System::EventArgs^  e)			{this->statMsg->Text = L"Keep this window on top of all other windows";}
	private: System::Void mainGrip_MouseEnter(System::Object^  sender, System::EventArgs^  e)			{this->statMsg->Text = L"Drag to Move Window, Double-click to Minimize";}
	private: System::Void csLogoPFcontrol_MouseEnter(System::Object^  sender, System::EventArgs^  e)	{this->statMsg->Text = L"Drag to Move Window, Double-click to Exit";}
	private: System::Void flyffLogo_MouseEnter(System::Object^  sender, System::EventArgs^  e)			{this->statMsg->Text = L"This utility was made for the game: FLY FOR FUN";}
//Fixed Functional - Conversion Managers
	private: int FTrawToSec( int inHrs, int inMin, int inSec ){ return inHrs*3600 + inMin*60 + inSec; }
	private: int PSrawToINT( int inPC, int inPE ){ return (inPC*10000+inPE); }
	private: int PErawToINT( double inPE ){ return Convert::ToInt32(inPE*100);}
	private: int PCrawToINT( String^ inPC ){ String^ pClassRec=L"DCBAS"; int i=0;
				for ( i = 0 ; i <=4 ; i++ )
					if ( inPC == pClassRec->Substring(i,1) ) break;
				return i; delete inPC;}
//Invoke Methods
	private: System::Void pce_Enter(System::Object^  sender, System::EventArgs^  e)	{pfLastEditIndex=0;}
	private: System::Void fmt_Enter(System::Object^  sender, System::EventArgs^  e)	{pfLastEditIndex=1;}
	private: System::Void exs_Enter(System::Object^  sender, System::EventArgs^  e)	{pfLastEditIndex=2;}
	private: System::Void fts_Enter(System::Object^  sender, System::EventArgs^  e)	{pfLastEditIndex=3;}
	private: System::Void cce_Alter(System::Object^  sender, System::EventArgs^  e)	{cceSave(); calcDeploy();}
	private: System::Void fce_Alter(System::Object^  sender, System::EventArgs^  e)	{fceSave(); calcDeploy();}
	private: System::Void fmt_Alter(System::Object^  sender, System::EventArgs^  e)	{fmtSave(); calcDeploy();}
	private: System::Void exs_Alter(System::Object^  sender, System::EventArgs^  e)	{exsSave(); calcDeploy();}
	private: System::Void fts_Alter(System::Object^  sender, System::EventArgs^  e)	{ftsSave(); calcDeploy();}
//Value Save - CCE & Right Column
	private: void ccePrepare(){fcSetMin();
					 if (ccINT != 4 ){ this->excLab->Text = L"Exp% ("+this->cceClass->SelectedItem->ToString()+L") :";
					 this->RemainingTNLlab->Text = L"Till Class "+this->cceClass->Items[ccINT+1]->ToString()+L", Exp:";
				}	}
	private: void cceSav2(){ ScF = 0; ScT=0; NcE = 9999 - ceINT; int i=0;
				 int fRec[4] = { fRecD,fRecC,fRecB,fRecA}, tRec[4] = {tRecD,tRecC,tRecB,tRecA}, eRec[4] = {eRecD,eRecC,eRecB,eRecA};
				 for ( i = 3; i >= ccINT ; i-- ){
					if ( i > ccINT ){ScF += fRec[i]; ScT += tRec[i]*60;}
					else{ NcF = feedFromExp(10000-ceINT, ccINT); NcT = timeFromFeed( NcF );
					ScF += NcF; ScT += NcT;}}
				 rcSh = ScT / 3600;		rcSm = ScT / 60;	rcSD = ScT / 86400;
				 rcNh = NcT / 3600;		rcNm = NcT / 60;	rcND = NcT / 86400;
				 rcSH = ( ScT - rcSD*86400 )/3600; rcSM = ( ScT - rcSD*86400 - rcSH*3600 )/60;
				 rcNH = ( NcT - rcND*86400 )/3600; rcNM = ( NcT - rcND*86400 - rcNH*3600 )/60;			 
			 }
	private: void RCsetVal(){setRemTime();this->RemainingTNL->Text = (NcE/100).ToString() + L"." + (NcE%100).ToString() + L"%";
				this->remSfeed->Text = ScF.ToString(); this->remNfeed->Text = NcF.ToString();}
	private: void setRemTime(){	if( RCmouse == true ){
					this->remStim2->Text = ScT.ToString() + L"sec";
					this->remNtim2->Text = NcT.ToString() + L"sec";
					this->remStime->Text = rcSh.ToString() + L"h " + rcSM.ToString() + L"m";
					this->remNtime->Text = rcNh.ToString() + L"h " + rcNM.ToString() + L"m";
				}else{
					this->remStim2->Text = rcSm.ToString() + L"min";
					this->remNtim2->Text = rcNm.ToString() + L"min";
					this->remStime->Text = rcSD.ToString() + L"d " + rcSH.ToString() + L"h " + rcSM.ToString() + L"m";
					this->remNtime->Text = rcND.ToString() + L"d " + rcNH.ToString() + L"h " + rcNM.ToString() + L"m";
			}	}
	private: System::Void rcMouseEnter(System::Object^  sender, System::EventArgs^  e) { RCmouse=true; setRemTime();}
	private: System::Void rcMouseLeave(System::Object^  sender, System::EventArgs^  e) { RCmouse=false;setRemTime();}
	private: void cceSave(){
				 ccINT = PCrawToINT(this->cceClass->SelectedItem->ToString()); ccModeS();
				 if ( ccINT != 4 ){
				 ceINT = PErawToINT(Convert::ToDouble(this->cceExp->Value));
				 if ( ceINT == 9999 ){ ceINT = 0; ccINT++; ccModeS(); }
				 csINT = PSrawToINT(ccINT, ceINT); cceSav2();
				 RCsetVal(); ccePrepare(); fceSave(); NUDset();}
			 }
//Value Save - Others
	private: void fceSave (){ if( pfLastEditIndex == 0 ){
			 	 fcINT = PCrawToINT(this->fceClass->SelectedItem->ToString()); feSetMin();
				 feINT = PErawToINT(Convert::ToDouble(this->fceExp->Value));
				 fsINT = PSrawToINT(fcINT, feINT);
				 if ( ccINT != 4 ) PFxFeed = feedFromState(fsINT); else PFxFeed=0;}	}
	private: void fmtSave (){ if( pfLastEditIndex == 1 ) PFxFeed = Convert::ToInt32(this->fmtBox->Value); }
	private: void exsSave (){ if( pfLastEditIndex == 2 ) { PFxEXS = Convert::ToInt32(Convert::ToDouble(this->excBox->Value)*100);
				 PFxFeed = feedFromExp(PFxEXS, ccINT);}}
	private: void ftsSave (){ ftSetMin(); if( pfLastEditIndex == 3 ){ PFxFTS = FTrawToSec( Convert::ToInt32(this->ftHrs->Value),
				 Convert::ToInt32(this->ftMin->Value),Convert::ToInt32(this->ftSec->Value));
				 PFxFeed = feedFromTime( PFxFTS );}
			 }
// MAIN
	private: void calcDeploy(){ NUDset(); colorSet(); setSEC();
			 if ( pfLastEditIndex != 0 && ccINT != 4 )	setFCE();
			 if ( pfLastEditIndex != 1 )				setFMT();
			 if ( pfLastEditIndex != 2 && ccINT != 4 )	setEXS();
			 if ( pfLastEditIndex != 3 )				setFTS();
			 }
//Get
	private: void setSEC(){this->ftFormat2Lab->Text = timeFromFeed(PFxFeed) + L" sec";}
	private: void setFCE(){fsINT = stateFromFeed(PFxFeed); fcINT = fsINT/10000; feINT = fsINT%10000; 
			 this->fceClass->SelectedItem = this->fceClass->Items[fcINT-ccINT]; NUDset(); feSetMin();
			 this->fceExp->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {feINT, 0, 0, 131072});
			 }
	private: void setFMT(){ this->fmtBox->Value = PFxFeed;}
	private: void setEXS(){ PFxEXS = expFromFeed(PFxFeed, ccINT); this->excBox->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {PFxEXS, 0, 0, 131072});}
	private: void setFTS(){ PFxFTS = timeFromFeed(PFxFeed);
			 this->ftHrs->Value = Convert::ToInt32(PFxFTS/3600);
			 this->ftMin->Value = Convert::ToInt32((PFxFTS%3600)/60);
			 this->ftSec->Value = Convert::ToInt32(PFxFTS%60);
			 ftSetMin();
			 }
//Calculatory Functions
	private: int feedFromExp( int inExs, int inExR ){ int eRecArr[5] = { eRecD, eRecC, eRecB, eRecA };
			 return inExs/eRecArr[inExR]*30;}
	private: int expFromFeed( int inFeed, int inExR ){ int eRecArr[5] = { eRecD, eRecC, eRecB, eRecA };
			 return eRecArr[inExR]*inFeed/30;}
	private: int timeFromFeed( int inFeed){return inFeed*2;}
	private: int feedFromState( int inSt ){
			 if ( inSt < (ccINT+1)*10000 )	return feedFromExp( inSt - csINT, ccINT );
			 else{ int fRecArr[4] = { fRecD, fRecC, fRecB, fRecA }, retFeed=0, i=0; 
			  retFeed = feedFromExp( 10000 - ceINT, ccINT );
			 for ( i = ccINT+1; i<inSt/10000; i++ ) retFeed += fRecArr[i];
			  if ( inSt < 40000 ) retFeed += feedFromExp(inSt%10000, inSt/10000) ;
			 return retFeed;}}
	private: int stateFromFeed( int TxFeed ){ int i=ccINT, j=ceINT, fRecArr[4] = { fRecD, fRecC, fRecB, fRecA };
			 while ( TxFeed != 0 ){
				 if ( i == 4 ) { TxFeed = 0; j=0; break; }
				 else if ( TxFeed < feedFromExp( 10000-j, i )) { j += expFromFeed( TxFeed, i ); TxFeed = 0; }
				 else {	TxFeed -= fRecArr[i]; j=0; i++; }}
				 return i*10000+j; }
	private: int feedFromTime( int inTime){return inTime/2;}
//Ability and Range Save
	private: void fcSetMin(){String^ fceClsRec = L"DCBAS"; int i=0;
			 	int cPrepTemp1 = this->fceClass->Items->Count -1 - this->fceClass->SelectedIndex; this->fceClass->Items->Clear();	
				for ( i = ccINT; i<=4; i++ ) this->fceClass->Items->Add(fceClsRec->Substring(i,1));
				delete fceClsRec;
				if ( cPrepTemp1 <= this->fceClass->Items->Count -1 )	this->fceClass->SelectedItem = this->fceClass->Items[this->fceClass->Items->Count -1 -cPrepTemp1];
				else this->fceClass->SelectedItem = this->fceClass->Items[0]; feSetMin();
			 }
	private: void feSetMin(){if ( ccINT == 4 || fcINT == 4 ) {this->fceExp->Value = 0; this->fceExp->Enabled = false;} else {
					 this->fceExp->Enabled = true;
					 if ( fcINT == ccINT ){ this->fceExp->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {ceINT, 0, 0, 131072}) ;
					  if ( this->fceExp->Value < System::Decimal(gcnew cli::array< System::Int32 >(4) {ceINT, 0, 0, 131072}) && ccINT != 4 ) this->fceExp->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {ceINT, 0, 0, 131072});
					 }else{ this->fceExp->Minimum = 0; }
			 }	}
	private: void ccModeS(){		//S-Class Exeptional Disable Management
			if ( ccINT == 4 ){
				this->fceExp->Minimum = 0; this->cceExp->Value=0; this->fceExp->Value=0; ceINT=0; csINT=40000;
				this->fceClass->SelectedItem = this->fceClass->Items[this->fceClass->Items->Count-1];
				this->RemainingTNLlab->Text = L"Till Class S, Exp:"; this->RemainingTNL->Text = L"00.00%"; this->fceLab->Text = L"Exp% (S) :";
				this->remSfeed->Text = L"0"; this->remStime->Text = L"0d 0h 0m"; this->remStim2->Text = L"0000m";
				this->remNfeed->Text = L"0"; this->remNtime->Text = L"0d 0h 0m"; this->remNtim2->Text = L"0000m";
				this->cceExp->Enabled = false;	this->RemainingTNLlab->Enabled = false;	this->RemainingTNL->Enabled = false;
				this->fceLab->Enabled = false;	this->excLab->Enabled = false;	this->remSheader->Enabled = false;			
				this->remSfeedLab->Enabled = false;
				this->excBox->Enabled = false;	this->fceExp->Enabled = false;	this->remStimeLab->Enabled = false;
				this->fceClass->Enabled = false;this->remNfeedLab->Enabled = false; this->remNtimeLab->Enabled = false;
				this->remSfeed->Enabled = false; this->remStime->Enabled = false; this->remStim2->Enabled = false;
				this->remNfeed->Enabled = false; this->remNtime->Enabled = false; this->remNtim2->Enabled = false;
			}else{   this->remSfeedLab->Enabled = true; //Disable
				this->cceExp->Enabled = true;	this->RemainingTNLlab->Enabled = true;	this->RemainingTNL->Enabled = true;
				this->fceLab->Enabled = true;	this->excLab->Enabled = true;		this->remSheader->Enabled = true;			
				this->excBox->Enabled = true;	this->fceExp->Enabled = true;		this->remStimeLab->Enabled = true;
				this->fceClass->Enabled = true;	this->remNfeedLab->Enabled = true;	this->remNtimeLab->Enabled = true;
				this->remSfeed->Enabled = true; this->remStime->Enabled = true;		this->remStim2->Enabled = true;
				this->remNfeed->Enabled = true; this->remNtime->Enabled = true;		this->remNtim2->Enabled = true;
			}	}//Enable
	private: void NUDset(){int eRecArr[5] = { eRecD, eRecC, eRecB, eRecA, 0}; int sRec[4] = { 349965, 167983, 83992, 41996 };
			 this->excBox->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {sRec[ccINT], 0, 0, 131072});
			 this->excBox->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {eRecArr[ccINT], 0, 0, 131072});
			 this->cceExp->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {eRecArr[ccINT], 0, 0, 131072});
			 this->fceExp->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {eRecArr[fcINT], 0, 0, 131072});
			}
	private: void ftSetMin(){
				 if ( Convert::ToInt32(this->ftHrs->Value) == 233 ){
					 if ( Convert::ToInt32(this->ftMin->Value) > 18 ) this->ftMin->Value = 18;
					 this->ftMin->Maximum = 18;
					 if ( Convert::ToInt32(this->ftMin->Value) == 18 ){ 
						 if ( Convert::ToInt32(this->ftSec->Value) > 36 ) this->ftSec->Value = 36;
						 this->ftSec->Maximum =36;}
					 else this->ftSec->Maximum =59;
				 }else{this->ftMin->Maximum = 59;}
			 }
	private: void colorSet(){ int thisColor = 0;
				 if ( PFxFeed >= ScF ) thisColor = 2;
				 else if ( PFxFeed >= NcF ) thisColor = 1;
				 else thisColor = 0;
				 
				 if ( lastColor != thisColor ){ lastColor = thisColor; colorAlter();}
			 }
	private: void colorAlter(){ Color xColor;
				 switch(lastColor){
					 case 0:{ xColor = Color::LightCyan; break; }
					 case 1:{ xColor = Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(249)), 
										static_cast<System::Int32>(static_cast<System::Byte>(210))); break; }
					 case 2:{ xColor = Color::MistyRose; break; }
					 default:{}
				 }
				 this->ftHrs->BackColor = xColor;
				 this->ftMin->BackColor = xColor;
				 this->ftSec->BackColor = xColor;
				 this->excBox->BackColor = xColor;
				 this->fmtBox->BackColor = xColor;
			 }
				 
};
}