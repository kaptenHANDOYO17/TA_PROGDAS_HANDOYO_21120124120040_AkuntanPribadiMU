#pragma once

namespace AkuntanPribadiMu {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class Akuntan : public System::Windows::Forms::Form
    {
    public:
        Akuntan(void);

    protected:
        ~Akuntan();

    private:
        System::Windows::Forms::Button^ button_submit_masukan;
        System::Windows::Forms::TextBox^ textBoxMasuk;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::TextBox^ textBoxKeluar;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::MonthCalendar^ monthCalendar1;
        System::Windows::Forms::FlowLayoutPanel^ Layout_Masukan;
        System::Windows::Forms::FlowLayoutPanel^ Layout_Keluaran;
        System::Windows::Forms::Button^ button_submit_keluaran;
        System::Windows::Forms::Label^ label_total_pemasukan;
        System::Windows::Forms::Label^ label_total_pengeluaran;
        System::Windows::Forms::Button^ button_exit;


        double saldo = 0;
        double totalPemasukan = 0;
        double totalPengeluaran = 0;

        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void);
#pragma endregion

    private: System::Void button_submit_masukan_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button_submit_keluaran_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e);
    };
}
