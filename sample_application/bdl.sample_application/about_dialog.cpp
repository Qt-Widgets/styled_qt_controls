/**************************************************************************************
**
** Copyright (C) 2016 Bernhard Steiner
**
** This file is part of the styled_qt_controls library
**
** This product is licensed under the GNU General Public License version 3.
** The license is as published by the Free Software Foundation published at
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** Alternatively, this product is licensed under the GNU Lesser General Public
** License version 3 for non-commercial use. The license is as published by the
** Free Software Foundation published at https://www.gnu.org/licenses/lgpl-3.0.html.
**
** Feel free to contact us if you have any questions about licensing or want
** to use the library in a commercial closed source product.
**
**************************************************************************************/

#include "about_dialog.q.hpp"

using namespace bdl::sample_application;
using namespace bdl::styled_qt_controls;

about_dialog::about_dialog(styled_window* parent) : styled_dialog("About", parent, -1, window_flags::hittest_visible | window_flags::show_on_taskbar)
{
	util::style_loader loader(":/about_dialog.qss");
	this->client_widget()->setStyleSheet(loader.style_string());

	this->add_button("Close", 0, button_flags::abort_button);
	this->add_button("Love it!", 1, button_flags::default_button);

	QGridLayout* layout = new QGridLayout();
	layout->setSpacing(35);
	layout->setContentsMargins(15,0,15,0);
	layout->setColumnStretch(1, 1);
	layout->setRowStretch(0, 1);

	QWidget* widget = new QWidget();
	widget->setFixedSize(270, 203);
	widget->setObjectName("part_abd_icon");
	layout->addWidget(widget, 0, 0, Qt::AlignVCenter | Qt::AlignLeft);

	QLabel* l = new QLabel(
		"<style>"
		"a { color: #F2F2F2; text-decoration: none;}"
		"a:hover { text-decoration: underline; }"
		"</style>"
		"<font style='font-size: large;'>"
		"<b>Copyright (C) 2016 Bernhard Steiner</b><br />"
		"Contact"
		"<p style='margin-top: 0px; margin-left: 10px;'>"
		"<a href='https://github.com/b-steiner/styled_qt_controls'>https://github.com/b-steiner/styled_qt_controls</a><br />"
		"<a href='mailto:sqtc.dev@gmail.com'>sqtc.dev@gmail.com</a>"
		"</p>"
		"<p style='margin-top: 25px;' align='justify'>"
		"</font>"
		"This product is licensed under the GNU General Public License version 3. The license is as published by the Free Software Foundation published at "
		"<a href='https://www.gnu.org/licenses/gpl-3.0.html'>https://www.gnu.org/licenses/gpl-3.0.html</a>."
		"</p>"
		"<p align='justify'>"
		"Alternatively, this product is licensed under the GNU Lesser General Public License version 3 for non-commercial use. The license is as published by the Free Software Foundation published at "
		"<a href='https://www.gnu.org/licenses/lgpl-3.0.html'>https://www.gnu.org/licenses/lgpl-3.0.html</a>."
		"</p>"
		"<p align='justify'>"
		"Feel free to contact us if you have any questions about licensing or want to use the library in a commercial closed source product."
		"</p>"
		);
	l->setWordWrap(true);
	l->setOpenExternalLinks(true);
	l->setObjectName("part_copyright_line_1");
	layout->addWidget(l, 0, 1, Qt::AlignVCenter);

	this->client_widget()->setLayout(layout);

	this->adjust_size();
}
about_dialog::~about_dialog()
{
}