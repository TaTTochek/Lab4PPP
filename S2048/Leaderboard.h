#pragma once
#include "Data_.h"
#include "Main.h"
#include "ManualWrite.h"
#include <vector>
#include <msclr/marshal_cppstd.h>
#include <algorithm>

namespace S2048 {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// ������ ��� Leaderboard
	/// </summary>
	public ref class Leaderboard : public System::Windows::Forms::Form
	{
	private:
		std::vector<Data_>* listdata2;
		BindingList<ManagedData^>^ managedDataList;
	public:
		Leaderboard(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}
		Leaderboard(std::vector<Data_>* listdata) {
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			listdata2 = listdata;
			managedDataList = gcnew BindingList<ManagedData^>();
			for (auto& item : *listdata2)
			{
				managedDataList->Add(gcnew ManagedData(item.GetNick(), item.GetScore()));
			}
			dataGridView1->DataSource = managedDataList;
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Leaderboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;
		static bool CompareByNickname(const Data_& a, const Data_& b)
		{
			return a.GetNick() < b.GetNick();
		}
		static bool CompareByScore(const Data_& a, const Data_& b)
		{
			return a.GetScore() < b.GetScore();
		}

#pragma region Helper functions
		//bool CompareByNick(const Data_& a, const Data_& b) {
		//	return a.GetNick() < b.GetNick();
		//}
#pragma endregion

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��������������ToolStripMenuItem,
					this->�������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(691, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->�����������ToolStripMenuItem,
					this->������������ToolStripMenuItem, this->����������ToolStripMenuItem, this->���������������ToolStripMenuItem, this->����������ToolStripMenuItem
			});
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(109, 20);
			this->��������������ToolStripMenuItem->Text = L"��������������";
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->�����������ToolStripMenuItem->Text = L"������ �����";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &S2048::Leaderboard::ImportFile);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->������������ToolStripMenuItem->Text = L"������� �����";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &S2048::Leaderboard::ExportFile);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->����������ToolStripMenuItem->Text = L"������ ����";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &S2048::Leaderboard::ManualInput);
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->���������������ToolStripMenuItem->Text = L"��������� ������";
			this->���������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &S2048::Leaderboard::ChangeInput);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Leaderboard::CloseLeaderboard);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����������ToolStripMenuItem,
					this->�������ToolStripMenuItem
			});
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->����������ToolStripMenuItem->Text = L"����������";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->����������ToolStripMenuItem->Text = L"�� ��������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &S2048::Leaderboard::SortDataNickname);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->�������ToolStripMenuItem->Text = L"�� �����";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &S2048::Leaderboard::SortDataScore);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ScrollBar;
			this->dataGridView1->Location = System::Drawing::Point(12, 79);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(667, 260);
			this->dataGridView1->TabIndex = 1;
			//this->dataGridView1->DataSource = listdata2;
			// 
			// Leaderboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(691, 373);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Leaderboard";
			this->Text = L"Leaderboard";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CloseLeaderboard(Object^ sender, EventArgs^ e) {
		this->Close();
	}


		   // Sort Data
	private: System::Void SortDataNickname(System::Object^ sender, System::EventArgs^ e)
		   {
			   std::sort(listdata2->begin(), listdata2->end(), CompareByNickname);
			   managedDataList->Clear();
			   for (auto& item : *listdata2)
			   {
				   managedDataList->Add(gcnew ManagedData(item.GetNick(), item.GetScore()));
			   }
			   MessageBox::Show("Data sorted by nickname.", "Sort Data");
		   }
	private: System::Void SortDataScore(System::Object^ sender, System::EventArgs^ e)
		   {
			   std::sort(listdata2->begin(), listdata2->end(), CompareByScore);
			   managedDataList->Clear();
			   for (auto& item : *listdata2)
			   {
				   managedDataList->Add(gcnew ManagedData(item.GetNick(), item.GetScore()));
			   }
			   MessageBox::Show("Data sorted by score.", "Sort Data");
		   }

	private: System::Void ExportFile(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
		saveFileDialog1->Title = "Export Leaderboard";

		int nn = managedDataList->Count;
		int n = 0, counter = 0;
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			StreamWriter^ sw = gcnew StreamWriter(saveFileDialog1->FileName);
			while (counter <= nn) {

				if (counter == 0) {
					n = managedDataList->Count;
					sw->WriteLine(n);
				}
				else {
					sw->WriteLine(managedDataList[counter - 1]->Score);
					sw->WriteLine(managedDataList[counter - 1]->Nickname);
				}

				counter++;
			}// end while 
			sw->Close();
		}
	};
	private: System::Void ImportFile(System::Object ^ sender, System::EventArgs ^ e){
		String^ fileName;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Filter = "(*.txt)|*.txt";
		openFileDialog1->ShowDialog();
		fileName = openFileDialog1->FileName;

		

		String^ dataFrom;
		int n = 0, counter = 0;
		StreamReader^ reader = File::OpenText(fileName);
		dataFrom = reader->ReadLine();
		if (Convert::ToInt32(dataFrom) == 0) {
			MessageBox::Show("��� ���������� ��� �������");
			return;
		}
		listdata2->clear();
		managedDataList->Clear();
		for (int i = 0; i < Convert::ToInt32(dataFrom); i++) {
			int score = Convert::ToInt32(reader->ReadLine());
			std::string nickname = msclr::interop::marshal_as<std::string>(reader->ReadLine());

			listdata2->push_back(Data_(nickname, score));
			managedDataList->Add(gcnew ManagedData(nickname, score));
		}
		reader->Close();
		MessageBox::Show("Data imported successfully.", "Import File");
	};
	private: System::Void ManualInput(System::Object^ sender, System::EventArgs^ e)
	{
		ManualWrite^ formad = gcnew ManualWrite(listdata2, false, managedDataList);  // 
		//this->Hide();
		formad->ShowDialog();
		dataGridView1->DataSource = nullptr;
		dataGridView1->DataSource = managedDataList;
		this->Refresh();
	}
	private: System::Void ChangeInput(System::Object^ sender, System::EventArgs^ e) {
		ManualWrite^ formad = gcnew ManualWrite(listdata2, true, managedDataList);  // 
		formad->ShowDialog();
		dataGridView1->DataSource = nullptr;
		managedDataList->Clear();
		for (auto& item : *listdata2)
		{
			managedDataList->Add(gcnew ManagedData(item.GetNick(), item.GetScore()));
		}
		dataGridView1->DataSource = managedDataList;
		//this->Refresh();
		}
	};
}