#pragma once
#include <gtkmm.h>
class MyWindow : public Gtk::Window
{
public:
	MyWindow(void);
	virtual ~MyWindow(void);
private:
	void on_activate();
	Gtk::Entry m_entry;
};
