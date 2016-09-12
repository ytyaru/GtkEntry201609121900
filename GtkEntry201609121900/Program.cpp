#include "MyWindow.h"
#include <gtkmm.h>
#pragma comment(lib, "shlwapi.lib")
int main(int argc, char* argv[])
{
	Gtk::Main kit( argc, argv );
	MyWindow window;
	Gtk::Main::run( window );
	return 0;
}
