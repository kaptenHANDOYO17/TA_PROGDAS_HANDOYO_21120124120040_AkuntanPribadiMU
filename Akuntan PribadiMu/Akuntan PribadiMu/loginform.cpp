#include "loginform.h"
namespace AkuntanPribadiMu {
	Login::Login(void) {
		InitializeComponent();
	}
	Login::~Login()
    {
    	if (components) 
        {

			delete components;
		}
	}

    void Login::InitializeComponent(void)
    {
        System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->label2 = (gcnew System::Windows::Forms::Label());
        this->textBox1 = (gcnew System::Windows::Forms::TextBox());
        this->label3 = (gcnew System::Windows::Forms::Label());
        this->textBox2 = (gcnew System::Windows::Forms::TextBox());
        this->button_login = (gcnew System::Windows::Forms::Button());
        this->button_exit = (gcnew System::Windows::Forms::Button());
        this->SuspendLayout();
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 21.75F));
        this->label1->Location = System::Drawing::Point(3, 32);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(496, 35);
        this->label1->TabIndex = 0;
        this->label1->Text = L"Selamat datang di Akuntan PribadiMU";
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
        this->label2->Location = System::Drawing::Point(80, 126);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(80, 19);
        this->label2->TabIndex = 1;
        this->label2->Text = L"Username";
        // 
        // textBox1
        // 
        this->textBox1->Location = System::Drawing::Point(80, 160);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(200, 20);
        this->textBox1->TabIndex = 2;
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
        this->label3->Location = System::Drawing::Point(80, 200);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(76, 19);
        this->label3->TabIndex = 3;
        this->label3->Text = L"Password";
        // 
        // textBox2
        // 
        this->textBox2->Location = System::Drawing::Point(80, 230);
        this->textBox2->Name = L"textBox2";
        this->textBox2->PasswordChar = '*';
        this->textBox2->Size = System::Drawing::Size(200, 20);
        this->textBox2->TabIndex = 4;
        // 
        // button_login
        // 
        this->button_login->BackColor = System::Drawing::SystemColors::ControlDark;
        this->button_login->Location = System::Drawing::Point(150, 270);
        this->button_login->Name = L"button_login";
        this->button_login->Size = System::Drawing::Size(75, 23);
        this->button_login->TabIndex = 5;
        this->button_login->Text = L"Login";
        this->button_login->UseVisualStyleBackColor = false;
        this->button_login->Click += gcnew System::EventHandler(this, &Login::button_login_Click);
        // 
        // button_exit
        // 
        this->button_exit->Location = System::Drawing::Point(259, 270);
        this->button_exit->Name = L"button_exit";
        this->button_exit->Size = System::Drawing::Size(63, 23);
        this->button_exit->TabIndex = 12;
        this->button_exit->Text = L"Exit";
        this->button_exit->UseVisualStyleBackColor = true;
        this->button_exit->Click += gcnew System::EventHandler(this, &Login::button_exit_Click);
        // 
        // Login
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::Color::OrangeRed;
        this->ClientSize = System::Drawing::Size(502, 350);
        this->Controls->Add(this->button_exit);
        this->Controls->Add(this->button_login);
        this->Controls->Add(this->textBox2);
        this->Controls->Add(this->label3);
        this->Controls->Add(this->textBox1);
        this->Controls->Add(this->label2);
        this->Controls->Add(this->label1);
        this->Name = L"Login";
        this->Text = L"Login";
        this->ResumeLayout(false);
        this->PerformLayout();

    }
#pragma endregion

    // Login button event
    void Login::button_login_Click(System::Object^ sender, System::EventArgs^ e)
    {
        String^ username = this->textBox1->Text;
        String^ password = this->textBox2->Text;

        // Hardcoded credentials for demonstration
        if (username == "admin" && password == "1234")
        {
            MessageBox::Show("Login successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
            Akuntan^ akuntan = gcnew Akuntan();
            akuntan->Show();
            this->Hide();
        }
        else
        {
            MessageBox::Show("Invalid username or password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    void Login::button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Exit();
}
};
