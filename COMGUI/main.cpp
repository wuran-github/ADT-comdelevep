#include "COMGUI.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	COMGUI w;
	w.show();
	return a.exec();
}
