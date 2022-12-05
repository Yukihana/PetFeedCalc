#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace CsPfCalc {

	/// <summary>
	/// Summary for AbmForm
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class AbmForm : public System::Windows::Forms::Form
	{
	public:
		AbmForm(void)
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
		~AbmForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  abmConf;
	private: System::Windows::Forms::LinkLabel^  abmLink;

	private: System::Windows::Forms::Label^  abmBanner;
	private: System::Windows::Forms::Label^  abmText;



	protected: 

	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AbmForm::typeid));
			this->abmConf = (gcnew System::Windows::Forms::PictureBox());
			this->abmLink = (gcnew System::Windows::Forms::LinkLabel());
			this->abmBanner = (gcnew System::Windows::Forms::Label());
			this->abmText = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->abmConf))->BeginInit();
			this->SuspendLayout();
			// 
			// abmConf
			// 
			this->abmConf->BackColor = System::Drawing::Color::Transparent;
			this->abmConf->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"abmConf.Image")));
			this->abmConf->Location = System::Drawing::Point(288, 138);
			this->abmConf->Name = L"abmConf";
			this->abmConf->Size = System::Drawing::Size(50, 50);
			this->abmConf->TabIndex = 0;
			this->abmConf->TabStop = false;
			this->abmConf->MouseLeave += gcnew System::EventHandler(this, &AbmForm::abmConf_MouseLeave);
			this->abmConf->Click += gcnew System::EventHandler(this, &AbmForm::abmClose);
			this->abmConf->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AbmForm::abmConf_MouseDown);
			this->abmConf->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AbmForm::abmConf_MouseUp);
			this->abmConf->MouseEnter += gcnew System::EventHandler(this, &AbmForm::abmConf_MouseEnter);
			// 
			// abmLink
			// 
			this->abmLink->AccessibleDescription = L"About Me Link";
			this->abmLink->AccessibleName = L"About Me Link";
			this->abmLink->AccessibleRole = System::Windows::Forms::AccessibleRole::Link;
			this->abmLink->AutoSize = true;
			this->abmLink->BackColor = System::Drawing::Color::Transparent;
			this->abmLink->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->abmLink->LinkColor = System::Drawing::SystemColors::HotTrack;
			this->abmLink->Location = System::Drawing::Point(12, 172);
			this->abmLink->Name = L"abmLink";
			this->abmLink->Size = System::Drawing::Size(250, 16);
			this->abmLink->TabIndex = 1;
			this->abmLink->TabStop = true;
			this->abmLink->Text = L"http://www.facebook.com/lilyflowerangel/";
			this->abmLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AbmForm::abmLink_LinkClicked);
			this->abmLink->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AbmForm::GripMove);
			this->abmLink->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AbmForm::GripDown);
			this->abmLink->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AbmForm::GripUp);
			// 
			// abmBanner
			// 
			this->abmBanner->AccessibleDescription = L"About CS Header";
			this->abmBanner->AccessibleName = L"About Header";
			this->abmBanner->AccessibleRole = System::Windows::Forms::AccessibleRole::StaticText;
			this->abmBanner->BackColor = System::Drawing::Color::Transparent;
			this->abmBanner->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->abmBanner->ForeColor = System::Drawing::SystemColors::Highlight;
			this->abmBanner->Location = System::Drawing::Point(12, 9);
			this->abmBanner->Name = L"abmBanner";
			this->abmBanner->Size = System::Drawing::Size(326, 23);
			this->abmBanner->TabIndex = 2;
			this->abmBanner->Text = L"PlatinumX PetFeed Calculator";
			this->abmBanner->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->abmBanner->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AbmForm::GripMove);
			this->abmBanner->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AbmForm::GripDown);
			this->abmBanner->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AbmForm::GripUp);
			// 
			// abmText
			// 
			this->abmText->AutoSize = true;
			this->abmText->BackColor = System::Drawing::Color::Transparent;
			this->abmText->Font = (gcnew System::Drawing::Font(L"Tahoma", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->abmText->Location = System::Drawing::Point(12, 32);
			this->abmText->Name = L"abmText";
			this->abmText->Size = System::Drawing::Size(334, 99);
			this->abmText->TabIndex = 3;
			this->abmText->Text = resources->GetString(L"abmText.Text");
			this->abmText->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AbmForm::GripMove);
			this->abmText->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AbmForm::GripDown);
			this->abmText->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AbmForm::GripUp);
			// 
			// AbmForm
			// 
			this->AccessibleDescription = L"About this Program Dialog";
			this->AccessibleName = L"About this Program Dialog";
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::Dialog;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(350, 200);
			this->Controls->Add(this->abmText);
			this->Controls->Add(this->abmBanner);
			this->Controls->Add(this->abmLink);
			this->Controls->Add(this->abmConf);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AbmForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AbmForm";
			this->Deactivate += gcnew System::EventHandler(this, &AbmForm::AbmForm_Deactivate);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AbmForm::GripUp);
			this->Activated += gcnew System::EventHandler(this, &AbmForm::AbmForm_Activated);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AbmForm::GripDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AbmForm::GripMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->abmConf))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	bool mouseIsDown; Point firstPoint;
	private: System::Void abmClose(System::Object^  sender, System::EventArgs^  e) { this->Close(); }
	private: System::Void abmConf_MouseEnter(System::Object^  sender, System::EventArgs^  e) {abmResMG(0);}
	private: System::Void abmConf_MouseLeave(System::Object^  sender, System::EventArgs^  e) {abmResMG(1);}
	private: System::Void abmConf_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {abmResMG(2);}
	private: System::Void abmConf_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)   {abmResMG(3);}
	private: void abmResMG( int xMode )	{
				System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AbmForm::typeid));
				switch(xMode){
					case 0:	{this->abmConf->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"abmConf.OverImage")));	break;}
					case 1:	{this->abmConf->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"abmConf.Image")));		break;}
					case 2:	{this->abmConf->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"abmConf.DownImage")));	break;}
					case 3:	{this->abmConf->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"abmConf.OverImage")));	break;}
					case 4: {this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));break;}
					case 5: {this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"abmBGoff.Image")));break;}
					default:{}	
				}delete resources;
			}
	private: System::Void AbmForm_Activated(System::Object^  sender, System::EventArgs^  e)	 {abmResMG(4);}
	private: System::Void AbmForm_Deactivate(System::Object^  sender, System::EventArgs^  e) {abmResMG(5);}
	private: System::Void GripDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)	{this->Cursor = System::Windows::Forms::Cursors::SizeAll;firstPoint = e->Location; mouseIsDown = true;}
	private: System::Void GripUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)	{this->Cursor = System::Windows::Forms::Cursors::Default;mouseIsDown = false;}
	private: System::Void GripMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)	{
				if ( mouseIsDown == true )	{
					int xDiff = firstPoint.X - e->Location.X; int yDiff = firstPoint.Y - e->Location.Y; // Get the difference between the two points
					int x = this->Location.X - xDiff; int y = this->Location.Y - yDiff; this->Location = Point(x, y); // Set the new point
				}
			}
	private: System::Void abmLink_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e){
			System::Diagnostics::Process::Start("http://www.facebook.com/lilyflowerangel/");}
};
}
