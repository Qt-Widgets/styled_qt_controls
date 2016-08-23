#pragma once

#include <bdl.styled_qt_controls\styled_qt_controls.hpp>

namespace bdl
{
	namespace sample_application
	{
		class main_window : public styled_qt_controls::styled_window
		{
			Q_OBJECT;

			PROPERTY0(QStandardItemModel*, model);

		public:
			main_window();
			virtual ~main_window();

		private:			
			void load_fs_model();
			QStandardItem* load_fs_item(QFileInfo file, int depth = 0);
			styled_qt_controls::styled_list_view* m_list_view;
			styled_qt_controls::styled_collapse_widget* m_scw;

			QWidget* create_simple_control_widget();
			QWidget* create_item_control_widget();
			QWidget* create_item_editor_widget();
			QWidget* create_combined_control_widget();

		private slots:
			void size_btn_1_clicked(bool checked);
			void size_btn_2_clicked(bool checked);
			void size_btn_3_clicked(bool checked);
			void size_btn_4_clicked(bool checked);
			void state_btn_1_clicked(bool checked);
			void state_btn_2_clicked(bool checked);
			void state_btn_3_clicked(bool checked);
			void state_btn_4_clicked(bool checked);

			void exit_action_triggered(bool checked);
			void about_action_triggered(bool checked);
		};
	}
}