


#ifndef _MODULEINT
#define _MODULEINT

#include "Module.h"
#include "SDL_image\include\SDL_image.h"

struct _Mix_Music;
struct Mix_Chunk;

class  ModuleInt : public Module {
public:

	ModuleInt();
	~ModuleInt();
	bool Start();
	update_status Update();
	bool CleanUp();


private:
	SDL_Texture* background = nullptr;
	_Mix_Music* music = nullptr;
};
#endif