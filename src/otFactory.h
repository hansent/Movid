#ifndef OT_FACTORY_H
#define OT_FACTORY_H

#include "otModule.h"

class otFactory {
public:
	static otModule *create(const char *name);
};

#endif
