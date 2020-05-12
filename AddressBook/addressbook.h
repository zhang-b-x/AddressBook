#pragma once
//#pragma execution_character_set("utf-8");
#include <QtWidgets/QWidget>
#include "ui_addressbook.h"

class AddressBook : public QWidget
{
	Q_OBJECT

public:
	AddressBook(QWidget *parent = Q_NULLPTR);

private slots:
	void on_addButton_clicked();

	void on_addressList_currentItemChanged();

	void on_deleteButton_clicked();

private:
	Ui::AddressBookClass ui;
};
