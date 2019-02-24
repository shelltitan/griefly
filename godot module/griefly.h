/* griefly.h */
#ifndef GRIEFLY_H
#define GRIEFLY_H

#include "reference.h"

class Griefly : public Reference {
	GDCLASS(Griefly, Reference);

protected:
	static void _bind_methods();

public:
	void start_game();
	void start_map_editor();
	bool logs = true;

	Griefly();
};

#endif