#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mainform.h"

class Mainform : public QMainWindow
{
	Q_OBJECT

public:
	Mainform(QWidget *parent = Q_NULLPTR);

private:
	Ui::MainformClass ui;
};
