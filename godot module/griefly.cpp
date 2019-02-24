/* griefly.cpp */

#include "griefly.h"
#include "log.h"

void Griefly::start_game() {
	MainForm main_form;
	main_form.show();
	if (logs == 1) {
		initLogger("report_game.log", ldebug);
	}
}

void Griefly::start_map_editor() {
	MapEditorForm editor_form;
	editor_form.show();
	if (logs == 1){
		initLogger("report_editor.log", ldebug);
	}
}

void Griefly::_bind_methods() {

	ClassDB::bind_method(D_METHOD("start_game"), &Griefly::start_game);
	ClassDB::bind_method(D_METHOD("start_map_editor"), &Griefly::start_map_editor);
}

Griefly::Griefly() {
}