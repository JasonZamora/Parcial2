#pragma once
#include"NodoNumero.h"
#include "Cola.h"
#include <exception>

namespace Parcial02LimayGirón {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;	
	
	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Cola* ColaDeNumeros = new Cola();// hacemos la instancia de la 
		Cola* ColaDeNumerosAuxiliar = new Cola();// hacemos la instancia de la cola
	private: System::Windows::Forms::Panel^ panel4;
	public:
	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::DataGridView^ dataGridView2;
	public:
		
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::TextBox^ txbAgregar;
	protected:

	protected:


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnOrdenar;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->txbAgregar = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnOrdenar = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnAgregar
			// 
			this->btnAgregar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->btnAgregar->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnAgregar->Location = System::Drawing::Point(24, 12);
			this->btnAgregar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(117, 65);
			this->btnAgregar->TabIndex = 0;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = false;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &MyForm::btnAgregar_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->btnEliminar->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnEliminar->Location = System::Drawing::Point(412, 12);
			this->btnEliminar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(145, 94);
			this->btnEliminar->TabIndex = 1;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = false;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &MyForm::btnEliminar_Click);
			// 
			// txbAgregar
			// 
			this->txbAgregar->Location = System::Drawing::Point(24, 82);
			this->txbAgregar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txbAgregar->Name = L"txbAgregar";
			this->txbAgregar->Size = System::Drawing::Size(119, 22);
			this->txbAgregar->TabIndex = 2;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SunkenHorizontal;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->Location = System::Drawing::Point(60, 53);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Consolas", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(145, 367);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->dataGridView2);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Location = System::Drawing::Point(24, 161);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(533, 455);
			this->panel1->TabIndex = 6;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SunkenHorizontal;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView2->Location = System::Drawing::Point(300, 55);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView2->Name = L"dataGridView2";
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Consolas", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(145, 367);
			this->dataGridView2->TabIndex = 8;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(85, 161);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(145, 50);
			this->panel2->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(36, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 29);
			this->label1->TabIndex = 6;
			this->label1->Text = L"COLA";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(149, 660);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(275, 29);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Jason Girón- 1135220";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(149, 631);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(275, 29);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Erwin Lima - 1158120";
			// 
			// btnOrdenar
			// 
			this->btnOrdenar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->btnOrdenar->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOrdenar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnOrdenar->Location = System::Drawing::Point(213, 12);
			this->btnOrdenar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnOrdenar->Name = L"btnOrdenar";
			this->btnOrdenar->Size = System::Drawing::Size(133, 94);
			this->btnOrdenar->TabIndex = 9;
			this->btnOrdenar->Text = L"Ordenar";
			this->btnOrdenar->UseVisualStyleBackColor = false;
			this->btnOrdenar->Click += gcnew System::EventHandler(this, &MyForm::btnOrdenar_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->label5);
			this->panel4->Location = System::Drawing::Point(271, 2);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(200, 50);
			this->panel4->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(36, 10);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(137, 29);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Quick Sort";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->ClientSize = System::Drawing::Size(589, 698);
			this->Controls->Add(this->btnOrdenar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->txbAgregar);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnAgregar);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		//Método de ordenamiento y de división
		int Divide(int i, int f,array<String^>^ vector) {
			/*Izq = posición mas a la izquierda
			//Der = posición más a la derecha
			//Piv = valor pivote tomado del inicio
			Temp = Variable temporal*/
			int Izq = i, Der = f, Piv = Convert::ToInt32(vector[i]);
			String^ temp;
			while (Izq < Der)
			{
				while (Convert::ToInt32(vector[Der]) > Piv)//Valores mayores al pivote
				{
					Der--;
				}
				while (Convert::ToInt32(vector[Izq]) <= Piv && Izq < Der)//Valores menores al pivote
				{
					Izq++;
				}
				if (Izq < Der)
				{
					temp = vector[i];
					vector[Izq] = vector[Der];
					vector[Der] = temp;
				}
			}
			temp = vector[i];
			vector[i] = vector[Der];
			vector[Der] = temp;
			return Der;
		}

		//Método quicksort
		void QuickSort(int i, int f, array<String^>^ vector) {// i = Inicio del arreglo; f = Final del arreglo
			int PosPivote;//Posicion del valor pivote
			if (i < f) {
				PosPivote = Divide(i, f,vector);
				QuickSort(i, PosPivote - 1,vector);//Números antes del pivote
				QuickSort(PosPivote + 1, f,vector);//Números después del pivote
			}
		}

		void LimpiarMatriz() {
			dataGridView2->Rows->Clear();
			dataGridView2->Columns->Clear();
		}
#pragma endregion
	private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
		int NumeroAgregar;
		try { NumeroAgregar = Convert::ToInt32(txbAgregar->Text); }
		catch (const std::exception&) { NumeroAgregar = 0; } 

		NodoNumero* Agregar = new NodoNumero(NumeroAgregar);	// creamos y agregamos el nuevo numero
		ColaDeNumeros->AgregarNumero(*Agregar);
		ColaDeNumerosAuxiliar->AgregarNumero(*Agregar);
		llenarDatagrid();	
	}

		   Void llenarDatagrid()
		   {
			   dataGridView1->ColumnCount = 1;
			   dataGridView1->RowCount = 1;
			   for (int i = 0; i < ColaDeNumerosAuxiliar->cantidad; i++)
			   {
				   dataGridView1->Rows->Add();
				   dataGridView1->Rows[i]->Cells[0]->Value = ColaDeNumerosAuxiliar->ObtenerNumero(i)->numero;
				   
			   }
		   }

private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (ColaDeNumeros->cantidad != 0)
		{
			//ColaDeNumeros->Eliminarnumero();
			ColaDeNumerosAuxiliar->Eliminarnumero();
			dataGridView1->Rows->RemoveAt(0);

			llenarDatagrid();
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("No se puede eliminar más"
			, "Error"
			, MessageBoxButtons::OK
			, MessageBoxIcon::Exclamation);
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void btnOrdenar_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAgregar->Enabled = false;
	btnEliminar->Enabled = false;
	int tamaño = ColaDeNumeros->cantidad;
	array<String^>^ vector = gcnew array<String^>(tamaño);
	try {
		LimpiarMatriz();
		if (ColaDeNumeros->cantidad != 0) {	//Se compara que la cola no este vacía
			for (int i = 0; i <= tamaño-1; i++)
			{
				vector[i] = Convert::ToString(ColaDeNumeros->ObtenerNumero(0)->numero);//Se envía el valor de la cabeza al array
				ColaDeNumeros->Eliminarnumero();//Se elimina el primer elemento de la cola
			}			
		}
		QuickSort(0, tamaño - 1,vector);//Se llama al Método Quicksort con inicio en 0 y final en la posición igual al tamaño de la cola menos 1
		for (int i = 0; i <= tamaño-1; i++)
		{
			NodoNumero* Agregar = new NodoNumero(Convert::ToInt32(vector[i]));
			ColaDeNumeros->AgregarNumero(*Agregar);
		}
		
	}
	catch (Exception^ e) {
		MessageBox::Show("Ha ocurrido un error"
			, "Error"
			, MessageBoxButtons::OK
			, MessageBoxIcon::Error);
	}

	
	llenarOrdenar();
}

	   Void llenarOrdenar()
	   {
		   dataGridView2->ColumnCount = 1;
		   dataGridView2->RowCount = 1;
		   for (int i = 0; i < ColaDeNumeros->cantidad; i++)
		   {
			   dataGridView2->Rows->Add();
			   dataGridView2->Rows[i]->Cells[0]->Value = ColaDeNumeros->ObtenerNumero(i)->numero;

		   }
	   }
};
}
