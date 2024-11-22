#include "akuntan.h"

namespace AkuntanPribadiMu {

    Akuntan::Akuntan(void) {
        InitializeComponent();
    }

    Akuntan::~Akuntan() {
        if (components) {
            delete components;
        }
    }

    void Akuntan::InitializeComponent(void) {
        this->button_submit_masukan = (gcnew System::Windows::Forms::Button());
        this->textBoxMasuk = (gcnew System::Windows::Forms::TextBox());
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->textBoxKeluar = (gcnew System::Windows::Forms::TextBox());
        this->label2 = (gcnew System::Windows::Forms::Label());
        this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
        this->Layout_Masukan = (gcnew System::Windows::Forms::FlowLayoutPanel());
        this->Layout_Keluaran = (gcnew System::Windows::Forms::FlowLayoutPanel());
        this->button_submit_keluaran = (gcnew System::Windows::Forms::Button());
        this->label_total_pemasukan = (gcnew System::Windows::Forms::Label());
        this->label_total_pengeluaran = (gcnew System::Windows::Forms::Label());
        this->button_exit = (gcnew System::Windows::Forms::Button());
        this->SuspendLayout();
        // 
        // button_submit_masukan
        // 
        this->button_submit_masukan->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
        this->button_submit_masukan->Location = System::Drawing::Point(202, 31);
        this->button_submit_masukan->Name = L"button_submit_masukan";
        this->button_submit_masukan->Size = System::Drawing::Size(75, 25);
        this->button_submit_masukan->TabIndex = 5;
        this->button_submit_masukan->Text = L"Submit";
        this->button_submit_masukan->UseVisualStyleBackColor = true;
        this->button_submit_masukan->Click += gcnew System::EventHandler(this, &Akuntan::button_submit_masukan_Click);
        // 
        // textBoxMasuk
        // 
        this->textBoxMasuk->Location = System::Drawing::Point(15, 34);
        this->textBoxMasuk->Name = L"textBoxMasuk";
        this->textBoxMasuk->Size = System::Drawing::Size(157, 20);
        this->textBoxMasuk->TabIndex = 1;
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Location = System::Drawing::Point(16, 18);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(66, 13);
        this->label1->TabIndex = 2;
        this->label1->Text = L"Pemasukan ";
        // 
        // textBoxKeluar
        // 
        this->textBoxKeluar->Location = System::Drawing::Point(535, 34);
        this->textBoxKeluar->Name = L"textBoxKeluar";
        this->textBoxKeluar->Size = System::Drawing::Size(145, 20);
        this->textBoxKeluar->TabIndex = 3;
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->Location = System::Drawing::Point(537, 18);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(70, 13);
        this->label2->TabIndex = 4;
        this->label2->Text = L"Pengeluaran ";
        // 
        // monthCalendar1
        // 
        this->monthCalendar1->Location = System::Drawing::Point(289, 18);
        this->monthCalendar1->Name = L"monthCalendar1";
        this->monthCalendar1->TabIndex = 6;
        // 
        // Layout_Masukan
        // 
        this->Layout_Masukan->AutoScroll = true;
        this->Layout_Masukan->Location = System::Drawing::Point(19, 60);
        this->Layout_Masukan->Name = L"Layout_Masukan";
        this->Layout_Masukan->Size = System::Drawing::Size(248, 317);
        this->Layout_Masukan->TabIndex = 7;
        // 
        // Layout_Keluaran
        // 
        this->Layout_Keluaran->AutoScroll = true;
        this->Layout_Keluaran->Location = System::Drawing::Point(521, 60);
        this->Layout_Keluaran->Name = L"Layout_Keluaran";
        this->Layout_Keluaran->Size = System::Drawing::Size(243, 317);
        this->Layout_Keluaran->TabIndex = 8;
        // 
        // button_submit_keluaran
        // 
        this->button_submit_keluaran->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
        this->button_submit_keluaran->Location = System::Drawing::Point(698, 29);
        this->button_submit_keluaran->Name = L"button_submit_keluaran";
        this->button_submit_keluaran->Size = System::Drawing::Size(75, 25);
        this->button_submit_keluaran->TabIndex = 9;
        this->button_submit_keluaran->Text = L"Submit";
        this->button_submit_keluaran->UseVisualStyleBackColor = true;
        this->button_submit_keluaran->Click += gcnew System::EventHandler(this, &Akuntan::button_submit_keluaran_Click);
        // 
        // label_total_pemasukan
        // 
        this->label_total_pemasukan->AutoSize = true;
        this->label_total_pemasukan->Location = System::Drawing::Point(16, 391);
        this->label_total_pemasukan->Name = L"label_total_pemasukan";
        this->label_total_pemasukan->Size = System::Drawing::Size(112, 13);
        this->label_total_pemasukan->TabIndex = 0;
        this->label_total_pemasukan->Text = L"TOTAL PEMASUKAN";
        // 
        // label_total_pengeluaran
        // 
        this->label_total_pengeluaran->AutoSize = true;
        this->label_total_pengeluaran->Location = System::Drawing::Point(532, 391);
        this->label_total_pengeluaran->Name = L"label_total_pengeluaran";
        this->label_total_pengeluaran->Size = System::Drawing::Size(126, 13);
        this->label_total_pengeluaran->TabIndex = 10;
        this->label_total_pengeluaran->Text = L"TOTAL PENGELUARAN";
        // 
        // button_exit
        // 
        this->button_exit->Location = System::Drawing::Point(342, 215);
        this->button_exit->Name = L"button_exit";
        this->button_exit->Size = System::Drawing::Size(75, 23);
        this->button_exit->TabIndex = 11;
        this->button_exit->Text = L"Exit";
        this->button_exit->UseVisualStyleBackColor = true;
        this->button_exit->Click += gcnew System::EventHandler(this, &Akuntan::button_exit_Click);
        // 
        // Akuntan
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::Color::OrangeRed;
        this->ClientSize = System::Drawing::Size(800, 450);
        this->Controls->Add(this->button_exit);
        this->Controls->Add(this->label_total_pengeluaran);
        this->Controls->Add(this->label_total_pemasukan);
        this->Controls->Add(this->button_submit_keluaran);
        this->Controls->Add(this->Layout_Keluaran);
        this->Controls->Add(this->Layout_Masukan);
        this->Controls->Add(this->monthCalendar1);
        this->Controls->Add(this->label2);
        this->Controls->Add(this->textBoxKeluar);
        this->Controls->Add(this->label1);
        this->Controls->Add(this->textBoxMasuk);
        this->Controls->Add(this->button_submit_masukan);
        this->Name = L"Akuntan";
        this->Text = L"Akuntan Pribadi";
        this->ResumeLayout(false);
        this->PerformLayout();

    }

    void Akuntan::button_submit_masukan_Click(System::Object^ sender, System::EventArgs^ e) {       // Ambil nilai dari textbox
        double pemasukan = Convert::ToDouble(textBoxMasuk->Text);


        // Dapatkan tanggal dari kalender
        DateTime tanggal = monthCalendar1->SelectionRange->Start;

        // Jika ada pemasukan
        if (pemasukan > 0)
        {
            Label^ logPemasukan = gcnew Label();
            logPemasukan->Text = tanggal.ToString("dd/MM/yyyy") + " - Pemasukan: Rp " + pemasukan.ToString("N2");
            logPemasukan->AutoSize = true;
            // Tambahkan label ke Layout_Masukan
            Layout_Masukan->Controls->Add(logPemasukan);
            totalPemasukan += pemasukan;
            label_total_pemasukan->Text = "Total Pemasukan: Rp " + totalPemasukan.ToString("N2");
        }
        // Reset TextBox untuk input baru
        textBoxMasuk->Text = "";
    }

    void Akuntan::button_submit_keluaran_Click(System::Object^ sender, System::EventArgs^ e) {
            ///Ambil nilai dari textbox
            double pengeluaran = Convert::ToDouble(textBoxKeluar->Text);

            DateTime tanggal = monthCalendar1->SelectionRange->Start;

            // Jika ada pengeluaran
            if (pengeluaran > 0)
            {
                Label^ logPengeluaran = gcnew Label();
                logPengeluaran->Text = tanggal.ToString("dd/MM/yyyy") + " - Pengeluaran: Rp " + pengeluaran.ToString("N2");
                logPengeluaran->AutoSize = true;

                // Tambahkan label ke Layout_Keluaran
                Layout_Keluaran->Controls->Add(logPengeluaran);

                totalPengeluaran += pengeluaran;
                label_total_pengeluaran->Text = "Total Pengeluaran: Rp " + totalPengeluaran.ToString("N2");
            }
            // Reset TextBox untuk input baru
            textBoxKeluar->Text = "";
        }


    

    void Akuntan::button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
        Application::Exit();
    }

    
}
