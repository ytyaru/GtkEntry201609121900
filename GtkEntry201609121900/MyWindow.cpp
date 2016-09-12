#include <glibmm.h>
#include "MyWindow.h"
MyWindow::MyWindow(void)
{
	m_entry.set_text(Glib::locale_to_utf8("Gtk::Entry テキストボックス"));
	m_entry.signal_activate().connect(sigc::mem_fun( *this, &MyWindow::on_activate ) );
	add( m_entry );
	show_all_children();
}
MyWindow::~MyWindow(void)
{
}
void MyWindow::on_activate()
{
	Gtk::MessageDialog( m_entry.get_text() ).run();
}
