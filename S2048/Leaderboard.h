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
	/// Ñâîäêà äëÿ Leaderboard
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
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}
		Leaderboard(std::vector<Data_>* listdata) {
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
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
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
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
	private: System::Windows::Forms::ToolStripMenuItem^ âçàèìîäåéñòâèÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ èìïîğòÔàéëàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ıêñïîğòÔàéëàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğó÷íîéÂâîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ èçìåíåíèåÄàííûõToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ çàêğûòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîğòèğîâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîÍèêíåéìóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîÎ÷êàìToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
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
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->âçàèìîäåéñòâèÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èìïîğòÔàéëàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ıêñïîğòÔàéëàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğó÷íîéÂâîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èçìåíåíèåÄàííûõToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàêğûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîğòèğîâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîÍèêíåéìóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîÎ÷êàìToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->âçàèìîäåéñòâèÿToolStripMenuItem,
					this->çàêğûòüToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(691, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// âçàèìîäåéñòâèÿToolStripMenuItem
			// 
			this->âçàèìîäåéñòâèÿToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->èìïîğòÔàéëàToolStripMenuItem,
					this->ıêñïîğòÔàéëàToolStripMenuItem, this->ğó÷íîéÂâîäToolStripMenuItem, this->èçìåíåíèåÄàííûõToolStripMenuItem, this->ñîğòèğîâêàToolStripMenuItem
			});
			this->âçàèìîäåéñòâèÿToolStripMenuItem->Name = L"âçàèìîäåéñòâèÿToolStripMenuItem";
			this->âçàèìîäåéñòâèÿToolStripMenuItem->Size = System::Drawing::Size(109, 20);
			this->âçàèìîäåéñòâèÿToolStripMenuItem->Text = L"Âçàèìîäåéñòâèÿ";
			// 
			// èìïîğòÔàéëàToolStripMenuItem
			// 
			this->èìïîğòÔàéëàToolStripMenuItem->Name = L"èìïîğòÔàéëàToolStripMenuItem";
			this->èìïîğòÔàéëàToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->èìïîğòÔàéëàToolStripMenuItem->Text = L"Èìïîğò ôàéëà";
			this->èìïîğòÔàéëàToolStripMenuItem->Click += gcnew System::EventHandler(this, &S2048::Leaderboard::ImportFile);
			// 
			// ıêñïîğòÔàéëàToolStripMenuItem
			// 
			this->ıêñïîğòÔàéëàToolStripMenuItem->Name = L"ıêñïîğòÔàéëàToolStripMenuItem";
			this->ıêñïîğòÔàéëàToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ıêñïîğòÔàéëàToolStripMenuItem->Text = L"İêñïîğò ôàéëà";
			this->ıêñïîğòÔàéëàToolStripMenuItem->Click += gcnew System::EventHandler(this, &S2048::Leaderboard::ExportFile);
			// 
			// ğó÷íîéÂâîäToolStripMenuItem
			// 
			this->ğó÷íîéÂâîäToolStripMenuItem->Name = L"ğó÷íîéÂâîäToolStripMenuItem";
			this->ğó÷íîéÂâîäToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ğó÷íîéÂâîäToolStripMenuItem->Text = L"Ğó÷íîé ââîä";
			this->ğó÷íîéÂâîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &S2048::Leaderboard::ManualInput);
			// 
			// èçìåíåíèåÄàííûõToolStripMenuItem
			// 
			this->èçìåíåíèåÄàííûõToolStripMenuItem->Name = L"èçìåíåíèåÄàííûõToolStripMenuItem";
			this->èçìåíåíèåÄàííûõToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->èçìåíåíèåÄàííûõToolStripMenuItem->Text = L"Èçìåíåíèå äàííûõ";
			this->èçìåíåíèåÄàííûõToolStripMenuItem->Click += gcnew System::EventHandler(this, &S2048::Leaderboard::ChangeInput);
			// 
			// çàêğûòüToolStripMenuItem
			// 
			this->çàêğûòüToolStripMenuItem->Name = L"çàêğûòüToolStripMenuItem";
			this->çàêğûòüToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->çàêğûòüToolStripMenuItem->Text = L"Çàêğûòü";
			this->çàêğûòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &Leaderboard::CloseLeaderboard);
			// 
			// ñîğòèğîâêàToolStripMenuItem
			// 
			this->ñîğòèğîâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ïîÍèêíåéìóToolStripMenuItem,
					this->ïîÎ÷êàìToolStripMenuItem
			});
			this->ñîğòèğîâêàToolStripMenuItem->Name = L"ñîğòèğîâêàToolStripMenuItem";
			this->ñîğòèğîâêàToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ñîğòèğîâêàToolStripMenuItem->Text = L"Ñîğòèğîâêà";
			// 
			// ïîÍèêíåéìóToolStripMenuItem
			// 
			this->ïîÍèêíåéìóToolStripMenuItem->Name = L"ïîÍèêíåéìóToolStripMenuItem";
			this->ïîÍèêíåéìóToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ïîÍèêíåéìóToolStripMenuItem->Text = L"Ïî íèêíåéìó";
			this->ïîÍèêíåéìóToolStripMenuItem->Click += gcnew System::EventHandler(this, &S2048::Leaderboard::SortDataNickname);
			// 
			// ïîÎ÷êàìToolStripMenuItem
			// 
			this->ïîÎ÷êàìToolStripMenuItem->Name = L"ïîÎ÷êàìToolStripMenuItem";
			this->ïîÎ÷êàìToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ïîÎ÷êàìToolStripMenuItem->Text = L"Ïî î÷êàì";
			this->ïîÎ÷êàìToolStripMenuItem->Click += gcnew System::EventHandler(this, &S2048::Leaderboard::SortDataScore);
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
			MessageBox::Show("Íåò èíôîğìàöèè äëÿ èìïîğòà");
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