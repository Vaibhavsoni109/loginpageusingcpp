#pragma once
#include"HomePage.h"
namespace SecondGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxUserName;
	private: System::Windows::Forms::TextBox^ textBoxPassword;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ buttonLogin;

	



	private:
		String^ userName = "vaibhav";
		String^ password = "12345";
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxUserName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonLogin = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(23, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(722, 141);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(173, 195);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"User Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(173, 243);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password";
			this->label2->Click += gcnew System::EventHandler(this, &LoginForm::label2_Click);
			// 
			// textBoxUserName
			// 
			this->textBoxUserName->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxUserName->Location = System::Drawing::Point(311, 195);
			this->textBoxUserName->Name = L"textBoxUserName";
			this->textBoxUserName->Size = System::Drawing::Size(270, 31);
			this->textBoxUserName->TabIndex = 3;
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPassword->Location = System::Drawing::Point(311, 243);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->PasswordChar = '#';
			this->textBoxPassword->Size = System::Drawing::Size(270, 31);
			this->textBoxPassword->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Blue;
			this->label3->Location = System::Drawing::Point(463, 277);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 18);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Forget Password";
			// 
			// buttonLogin
			// 
			this->buttonLogin->BackColor = System::Drawing::Color::White;
			this->buttonLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonLogin->Location = System::Drawing::Point(311, 312);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(264, 69);
			this->buttonLogin->TabIndex = 6;
			this->buttonLogin->Text = L"Login";
			this->buttonLogin->UseVisualStyleBackColor = false;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &LoginForm::buttonLogin_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(776, 439);
			this->Controls->Add(this->buttonLogin);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->textBoxUserName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"LoginForm";
			this->Text = L" ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void buttonLogin_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBoxUserName->Text == userName && textBoxPassword->Text==password)
	{
		String^ name = textBoxUserName->Text;
		String^ psd = textBoxPassword->Text;
		MessageBox::Show("Login Successfull       user namee:"+ name +    "password"+ psd);
		HomePage obj;
		this->Hide();
		obj.ShowDialog();
	}
	else if (textBoxUserName->Text != userName || textBoxPassword->Text != password)
	{
		MessageBox::Show("Invalid user name or password");
	}

}
};
}
