#pragma once
#ifndef vector
#include <vector>
#endif
#ifndef string
#include <string>
#endif
#ifndef Artist
#include "Artist.h"
#endif
#ifndef time
#include <time.h>
#endif
#ifndef Pathfinder
#include "Pathfinder.h"
#endif // !Pathfinder
//#ifndef Map
//#include "Map.h"
//#endif // !Map




class Character {
public:

	static struct character {
		std::string name;
		int x;
		int y;
		std::vector<std::vector<SDL_Texture*>> tex;
		int animation; //what animation we are in
		int animationStartTime; //what time we started the animation we are doing
		int team;
		bool exhausted; //if they took thier turn or not
		int moveDist;
		std::vector<std::vector<SDL_Point>> paths;
		std::vector<std::vector<bool>> visitable;
		SDL_Texture* pathGraphic;
		//std::vector<void (*)(entity* e)> updateList; //functions that the entity will run every tick of the game, need to populate this list after the ent is created

		character(float inX, float inY, std::string inName, std::vector<std::vector<SDL_Texture*>> inTex, int inTeam, int inMoveDist) // , std::vector<void (*)(entity* e)> upList)
		{
			name = inName;
			x = inX;
			y = inY;
			tex = inTex;
			team = inTeam;
			exhausted = false;
			moveDist = inMoveDist;

			animation = 0;
			animationStartTime = clock() + rand() % 1000;
		}

		character() = default;

		bool radiusCollisionDetect(SDL_Point p, float r)
		{
			r += 256 / 2;
			if (256 > 0 && r < 1)
			{
				r = 1;
			}
			return ((p.x - x) * (p.x - x) + (p.y - y) * (p.y - y) < r * r);
		}

		void draw(SDL_Point off, float angle = 0)
		{
			

			Artist artist;

			//move the ent up left by half its width and height to center it    Enable to center on pos
			//SDL_Point centering;
			//SDL_QueryTexture(tex, NULL, NULL, &centering.x, &centering.y);
			//centering.x /= 2;
			//centering.y /= 2;

			//TEMP
			//if enemy(team 2) flip
			SDL_RendererFlip flip = SDL_FLIP_NONE;
			if (team != 1)
			{
				flip = SDL_FLIP_HORIZONTAL;
			}

			//artist.drawImage(tex[animation][drawFrame % tex[animation].size()], x * 256 - off.x/* - centering.x*/, y * 256 - off.y/* - centering.y*/, 0, 0, angle);
			artist.drawAnimation(tex[animation], x * 256 - off.x/* - centering.x*/, y * 256 - off.y/* - centering.y*/, 0, 0, animationStartTime, angle, Artist::FRAME_TIME, flip);

			//reset to idle
			//if ((clock() - animationStartTime) / 100 >= tex[animation].size())
			//{
			//	animation = 0;
			//	animationStartTime = clock();
			//}


			
		}

		void genPaths();

		

	};

	static void load();

};