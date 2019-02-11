#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_BeeTimer.h"

class BeeTimer : public QMainWindow
{
	Q_OBJECT

public:
	BeeTimer(QWidget *parent = Q_NULLPTR);

private:
	Ui::BeeTimerClass ui;
};
