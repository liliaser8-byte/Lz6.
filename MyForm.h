#pragma once

namespace Lz6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Вимірювання 1:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Вимірювання 2:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Вимірювання 3:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(28, 216);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Вимірювання 4:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 272);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Вимірювання 5:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(161, 63);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(161, 110);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(161, 158);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(161, 213);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(161, 266);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(359, 110);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(352, 97);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Проаналізувати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(355, 269);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 18);
			this->label6->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(860, 496);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// 1. Оголошення змінних та масиву для збереження введених даних
		double arr[5];

		// 2. Перевірка введених даних (валідація)
		if (!System::Double::TryParse(textBox1->Text, arr[0]) ||
			!System::Double::TryParse(textBox2->Text, arr[1]) ||
			!System::Double::TryParse(textBox3->Text, arr[2]) ||
			!System::Double::TryParse(textBox4->Text, arr[3]) ||
			!System::Double::TryParse(textBox5->Text, arr[4]))
		{
			System::Windows::Forms::MessageBox::Show(
				"Будь ласка, введіть коректні числові значення в усі поля (у см)!",
				"Помилка введення"
			);
			return; // Вихід з методу в разі помилки (дозволяє виправити дані та спробувати знову)
		}

		// 3. Створення та використання щонайменше двох звичайних вказівників C++
		double* ptr = arr;              // Перший вказівник: на початок масиву
		double* start_ptr = &arr[0];     // Другий вказівник: на перше (початкове) вимірювання
		double* end_ptr = &arr[4];       // Третій вказівник: на останнє (кінцеве) вимірювання

		// 4. Отримання початкового та кінцевого рівнів (розіменуванням вказівників)
		double initial_level = *start_ptr;
		double final_level = *end_ptr;

		// 5. Пошук максимального та мінімального рівнів
		double max_level = *ptr;
		double min_level = *ptr;
		for (int i = 1; i < 5; i++) {
			double current = *(ptr + i); // Розіменування вказівника зі зсувом
			if (current > max_level) {
				max_level = current;
			}
			if (current < min_level) {
				min_level = current;
			}
		}

		// 6. Обчислення середнього рівня
		double sum = 0;
		for (int i = 0; i < 5; i++) {
			sum += *(ptr + i); // Накопичення суми через розіменування
		}
		double average_level = sum / 5.0;

		// 7. Визначення кількості збільшень рівня порівняно з попереднім
		int increase_count = 0;
		for (int i = 1; i < 5; i++) {
			// Порівняння поточного значення з попереднім через арифметику вказівників
			if (*(ptr + i) > *(ptr + i - 1)) {
				increase_count++;
			}
		}

		// 8. Пошук найбільшої зміни за абсолютною величиною між сусідніми вимірюваннями
		double max_change = 0;
		for (int i = 1; i < 5; i++) {
			// Обчислення різниці між сусідніми елементами
			double diff = *(ptr + i) - *(ptr + i - 1);
			if (diff < 0) {
				diff = -diff; // Отримання абсолютної величини (модуля)
			}

			if (diff > max_change) {
				max_change = diff;
			}
		}

		// 9. Виведення результатів та пояснення розрахунків у Label
		label6->Text =
			"Результати аналізу:\n" +
			"• Початковий рівень: " + initial_level.ToString("F1") + " см, " +
			"Кінцевий рівень: " + final_level.ToString("F1") + " см\n" +
			"• Максимальний рівень: " + max_level.ToString("F1") + " см, " +
			"Мінімальний рівень: " + min_level.ToString("F1") + " см\n" +
			"• Середній рівень: " + average_level.ToString("F1") + " см\n" +
			"• Рівень води збільшувався порівняно з попереднім: " + increase_count.ToString() + " раз(и)\n" +
			"• Найбільша зміна між сусідніми вимірюваннями: " + max_change.ToString("F1") + " см";
	}
};
}
