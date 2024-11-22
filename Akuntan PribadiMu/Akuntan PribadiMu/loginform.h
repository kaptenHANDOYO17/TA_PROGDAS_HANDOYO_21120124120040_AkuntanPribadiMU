#pragma once
#include "akuntan.h"

namespace AkuntanPribadiMu {
    
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class Login : public System::Windows::Forms::Form
    {
    public:
        Login(void);
        ~Login();
       
   
       

    private:
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::TextBox^ textBox1; // Username textbox
        System::Windows::Forms::TextBox^ textBox2; // Password textbox
        System::Windows::Forms::Button^ button_login;
        System::Windows::Forms::Button^ button_exit;

    protected:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void);
       
#pragma endregion

        // Login button event
        void button_login_Click(System::Object^ sender, System::EventArgs^ e);
        
        void button_exit_Click(System::Object^ sender, System::EventArgs^ e);
};
}
