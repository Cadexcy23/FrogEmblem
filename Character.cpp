#include "Character.h"
#include "Map.h"
#include "Pathfinder.h"


//TEMP

void Character::load()
{
	Artist artist;
	std::vector<std::vector<SDL_Texture*>> tempFrog;
	tempFrog.resize(4);
	//idle
	tempFrog[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle0.png"));
	tempFrog[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle1.png"));
	tempFrog[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle2.png"));
	tempFrog[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle3.png"));
	tempFrog[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle4.png"));
	tempFrog[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle5.png"));
	tempFrog[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle6.png"));
	tempFrog[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle7.png"));
	tempFrog[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle8.png"));
	tempFrog[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle9.png"));
	tempFrog[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle10.png"));
	tempFrog[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle11.png"));
	tempFrog[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle12.png"));
	//walk
	tempFrog[1].push_back(artist.loadTexture("Resource/characters/testFrog/frogWalk0.png"));
	tempFrog[1].push_back(artist.loadTexture("Resource/characters/testFrog/frogWalk1.png"));
	tempFrog[1].push_back(artist.loadTexture("Resource/characters/testFrog/frogWalk2.png"));
	tempFrog[1].push_back(artist.loadTexture("Resource/characters/testFrog/frogWalk3.png"));
	//get healed
	tempFrog[2].push_back(artist.loadTexture("Resource/characters/testFrog/frogGetHeal0.png"));
	tempFrog[2].push_back(artist.loadTexture("Resource/characters/testFrog/frogGetHeal1.png"));
	tempFrog[2].push_back(artist.loadTexture("Resource/characters/testFrog/frogGetHeal2.png"));
	tempFrog[2].push_back(artist.loadTexture("Resource/characters/testFrog/frogGetHeal3.png"));
	tempFrog[2].push_back(artist.loadTexture("Resource/characters/testFrog/frogGetHeal4.png"));
	tempFrog[2].push_back(artist.loadTexture("Resource/characters/testFrog/frogGetHeal5.png"));
	tempFrog[2].push_back(artist.loadTexture("Resource/characters/testFrog/frogGetHeal6.png"));
	tempFrog[2].push_back(artist.loadTexture("Resource/characters/testFrog/frogGetHeal7.png"));
	//heal
	tempFrog[3].push_back(artist.loadTexture("Resource/characters/testFrog/frogHeal0.png"));
	tempFrog[3].push_back(artist.loadTexture("Resource/characters/testFrog/frogHeal1.png"));
	tempFrog[3].push_back(artist.loadTexture("Resource/characters/testFrog/frogHeal2.png"));
	tempFrog[3].push_back(artist.loadTexture("Resource/characters/testFrog/frogHeal3.png"));
	tempFrog[3].push_back(artist.loadTexture("Resource/characters/testFrog/frogHeal4.png"));
	tempFrog[3].push_back(artist.loadTexture("Resource/characters/testFrog/frogHeal5.png"));
	tempFrog[3].push_back(artist.loadTexture("Resource/characters/testFrog/frogHeal6.png"));
	tempFrog[3].push_back(artist.loadTexture("Resource/characters/testFrog/frogHeal7.png"));


	Map::activeMap.entityList.characters.push_back(character(2, 2, "Frog", tempFrog, 1, 0));

	std::vector<std::vector<SDL_Texture*>> tempFrog2;

	tempFrog2.resize(4);
	//idle
	tempFrog2[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle0.png"));
	tempFrog2[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle1.png"));
	tempFrog2[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle2.png"));
	tempFrog2[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle3.png"));
	tempFrog2[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle4.png"));
	tempFrog2[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle5.png"));
	tempFrog2[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle6.png"));
	tempFrog2[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle7.png"));
	tempFrog2[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle8.png"));
	tempFrog2[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle9.png"));
	tempFrog2[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle10.png"));
	tempFrog2[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle11.png"));
	tempFrog2[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle12.png"));
	//walk
	tempFrog2[1].push_back(artist.loadTexture("Resource/characters/testFrog/frogWalk0.png"));
	tempFrog2[1].push_back(artist.loadTexture("Resource/characters/testFrog/frogWalk1.png"));
	tempFrog2[1].push_back(artist.loadTexture("Resource/characters/testFrog/frogWalk2.png"));
	tempFrog2[1].push_back(artist.loadTexture("Resource/characters/testFrog/frogWalk3.png"));
	//get healed
	tempFrog2[2].push_back(artist.loadTexture("Resource/characters/testFrog/frogGetHeal0.png"));
	tempFrog2[2].push_back(artist.loadTexture("Resource/characters/testFrog/frogGetHeal1.png"));
	tempFrog2[2].push_back(artist.loadTexture("Resource/characters/testFrog/frogGetHeal2.png"));
	tempFrog2[2].push_back(artist.loadTexture("Resource/characters/testFrog/frogGetHeal3.png"));
	tempFrog2[2].push_back(artist.loadTexture("Resource/characters/testFrog/frogGetHeal4.png"));
	tempFrog2[2].push_back(artist.loadTexture("Resource/characters/testFrog/frogGetHeal5.png"));
	tempFrog2[2].push_back(artist.loadTexture("Resource/characters/testFrog/frogGetHeal6.png"));
	tempFrog2[2].push_back(artist.loadTexture("Resource/characters/testFrog/frogGetHeal7.png"));
	//heal
	tempFrog2[3].push_back(artist.loadTexture("Resource/characters/testFrog/frogHeal0.png"));
	tempFrog2[3].push_back(artist.loadTexture("Resource/characters/testFrog/frogHeal1.png"));
	tempFrog2[3].push_back(artist.loadTexture("Resource/characters/testFrog/frogHeal2.png"));
	tempFrog2[3].push_back(artist.loadTexture("Resource/characters/testFrog/frogHeal3.png"));
	tempFrog2[3].push_back(artist.loadTexture("Resource/characters/testFrog/frogHeal4.png"));
	tempFrog2[3].push_back(artist.loadTexture("Resource/characters/testFrog/frogHeal5.png"));
	tempFrog2[3].push_back(artist.loadTexture("Resource/characters/testFrog/frogHeal6.png"));
	tempFrog2[3].push_back(artist.loadTexture("Resource/characters/testFrog/frogHeal7.png"));

	int R = rand()%256, G = rand() % 256, B = rand() % 256;

	for (int j = 0; j < tempFrog2.size(); j++)
	{
		for (int i = 0; i < tempFrog2[j].size(); i++)
		{
			SDL_SetTextureColorMod(tempFrog2[j][i], R, G, B);
		}
	}

	Map::activeMap.entityList.characters.push_back(character(3, 3, "Frog2", tempFrog2, 1, 5));

	std::vector<std::vector<SDL_Texture*>> tempFrog3;

	tempFrog3.resize(4);
	//idle
	tempFrog3[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle0.png"));
	tempFrog3[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle1.png"));
	tempFrog3[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle2.png"));
	tempFrog3[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle3.png"));
	tempFrog3[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle4.png"));
	tempFrog3[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle5.png"));
	tempFrog3[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle6.png"));
	tempFrog3[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle7.png"));
	tempFrog3[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle8.png"));
	tempFrog3[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle9.png"));
	tempFrog3[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle10.png"));
	tempFrog3[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle11.png"));
	tempFrog3[0].push_back(artist.loadTexture("Resource/characters/testFrog/frogIdle12.png"));
	//walk
	tempFrog3[1].push_back(artist.loadTexture("Resource/characters/testFrog/frogWalk0.png"));
	tempFrog3[1].push_back(artist.loadTexture("Resource/characters/testFrog/frogWalk1.png"));
	tempFrog3[1].push_back(artist.loadTexture("Resource/characters/testFrog/frogWalk2.png"));
	tempFrog3[1].push_back(artist.loadTexture("Resource/characters/testFrog/frogWalk3.png"));
	//get healed
	tempFrog3[2].push_back(artist.loadTexture("Resource/characters/testFrog/frogGetHeal0.png"));
	tempFrog3[2].push_back(artist.loadTexture("Resource/characters/testFrog/frogGetHeal1.png"));
	tempFrog3[2].push_back(artist.loadTexture("Resource/characters/testFrog/frogGetHeal2.png"));
	tempFrog3[2].push_back(artist.loadTexture("Resource/characters/testFrog/frogGetHeal3.png"));
	tempFrog3[2].push_back(artist.loadTexture("Resource/characters/testFrog/frogGetHeal4.png"));
	tempFrog3[2].push_back(artist.loadTexture("Resource/characters/testFrog/frogGetHeal5.png"));
	tempFrog3[2].push_back(artist.loadTexture("Resource/characters/testFrog/frogGetHeal6.png"));
	tempFrog3[2].push_back(artist.loadTexture("Resource/characters/testFrog/frogGetHeal7.png"));
	//heal
	tempFrog3[3].push_back(artist.loadTexture("Resource/characters/testFrog/frogHeal0.png"));
	tempFrog3[3].push_back(artist.loadTexture("Resource/characters/testFrog/frogHeal1.png"));
	tempFrog3[3].push_back(artist.loadTexture("Resource/characters/testFrog/frogHeal2.png"));
	tempFrog3[3].push_back(artist.loadTexture("Resource/characters/testFrog/frogHeal3.png"));
	tempFrog3[3].push_back(artist.loadTexture("Resource/characters/testFrog/frogHeal4.png"));
	tempFrog3[3].push_back(artist.loadTexture("Resource/characters/testFrog/frogHeal5.png"));
	tempFrog3[3].push_back(artist.loadTexture("Resource/characters/testFrog/frogHeal6.png"));
	tempFrog3[3].push_back(artist.loadTexture("Resource/characters/testFrog/frogHeal7.png"));

	R = rand() % 256, G = rand() % 256, B = rand() % 256;

	for (int j = 0; j < tempFrog3.size(); j++)
	{
		for (int i = 0; i < tempFrog3[j].size(); i++)
		{
			SDL_SetTextureColorMod(tempFrog3[j][i], R, G, B);
		}
	}

	Map::activeMap.entityList.characters.push_back(character(4, 4, "Frog3", tempFrog3, 2, 6));


	//gen paths
	for (int i = 0; i < Map::activeMap.entityList.characters.size(); i++)
	{
		Map::activeMap.entityList.characters[i].genPaths();
	}

}

void Character::character::genPaths()
{
	//get map chunk
	std::vector<std::vector<bool>> mapChunk = Map::getMapChunkCollision({ x - moveDist, y - moveDist }, { moveDist * 2 + 1, moveDist * 2 + 1 });

	//make spots with enemys unreachable MAYBE FINE A BETTER SOLUTION
	for (int i = 0; i < Map::activeMap.entityList.characters.size(); i++)
	{
		//make sure its a dif team
		if (team != Map::activeMap.entityList.characters[i].team)
		{
			//make sure we are in bounds
			if (Map::activeMap.entityList.characters[i].x - x + moveDist >= 0 && Map::activeMap.entityList.characters[i].x - x + moveDist < mapChunk.size() &&
				Map::activeMap.entityList.characters[i].y - y + moveDist >= 0 && Map::activeMap.entityList.characters[i].y - y + moveDist < mapChunk[0].size())
			{
				mapChunk[Map::activeMap.entityList.characters[i].x - x + moveDist][Map::activeMap.entityList.characters[i].y - y + moveDist] = false;
			}
		}
	}

	//get paths
	std::vector<std::vector<SDL_Point>> tempPaths;
	std::vector<std::vector<bool>> tempVisitable = Pathfinder::findPaths(mapChunk, { moveDist, moveDist}, &tempPaths);

	//pass back new paths
	paths = tempPaths;
	visitable = tempVisitable;

	//remove spaces whos paths are too long
	for (int forX = 0; forX < moveDist * 2 + 1; forX++)
	{
		for (int forY = 0; forY < moveDist * 2 + 1; forY++)
		{
			//if we could make it to the pos
			if (visitable[forX][forY])
			{
				tempVisitable[forX][forY] = false;//guilty till proven innocent
				SDL_Point current = { forX, forY };
				//check how many moves it takes to get there, if above movedist then stop looking
				int i = 0;
				do
				{
					//check if current pos steps back to the char
					if (paths[current.x][current.y].x == moveDist && paths[current.x][current.y].y == moveDist)
					{
						//add 2 so we are inside the extended range for attacks
						tempVisitable[forX][forY] = true;
						i = moveDist;
					}
					else//if it doesnt update current
					{
						current = { paths[current.x][current.y].x , paths[current.x][current.y].y };
					}
					i++;
				} while (i < moveDist);
			}
		}
	}

	visitable = tempVisitable;

	//close old graphic GET WORKING?
	//if (pathGraphic != NULL)
	//{
	//	SDL_DestroyTexture(pathGraphic);
	//}

	//create graphic for drawing paths
	pathGraphic = Artist::loadTargetTexture((moveDist * 2 + 5) * 256, (moveDist * 2 + 5) * 256);
	SDL_SetTextureBlendMode(pathGraphic, SDL_BLENDMODE_BLEND);
	Artist::setRenderTarget(pathGraphic);

	//make texture all transparent
	Artist::changeRenderColor(255, 255, 255, 0);
	Artist::drawRectangle(0, 0, (moveDist * 2 + 5) * 256, (moveDist * 2 + 5) * 256);

	//make a table to hold what texture to draw on each tile
	std::vector<std::vector<int>> texGrid;
	texGrid.resize(moveDist * 2 + 5);
	for (int i = 0; i < texGrid.size(); i++)
	{
		texGrid[i].resize(moveDist * 2 + 5);
	}

	//mark each reachable spot on the new table blue if we can get to it
	for (int forX = 0; forX < moveDist * 2 + 1; forX++)
	{
		for (int forY = 0; forY < moveDist * 2 + 1; forY++)
		{
			//if we could make it to the pos
			if (visitable[forX][forY])
			{
				texGrid[forX + 2][forY + 2] = 1;
				//check to see if the tile is open
				for (int j = 0; j < Map::activeMap.entityList.characters.size(); j++)
				{
					//make sure we are in bounds
					if (Map::activeMap.entityList.characters[j].x >= 0 && Map::activeMap.entityList.characters[j].x < Map::activeMap.tileGrid.size() &&
						Map::activeMap.entityList.characters[j].y >= 0 && Map::activeMap.entityList.characters[j].y < Map::activeMap.tileGrid[0].size())
					{
						//make sure there isnt a char there already
						if (Map::activeMap.entityList.characters[j].x == forX - moveDist + x  && Map::activeMap.entityList.characters[j].y == forY - moveDist + y)
						{
							//check team
							if (Map::activeMap.entityList.characters[j].team == team)
							{
								//make sure its not self
								if (Map::activeMap.entityList.characters[j].x != x || Map::activeMap.entityList.characters[j].y != y)
								{
									//mark tiles with friendly as cyan
									texGrid[forX + 2][forY + 2] = 3;
								}
							}
						}
					}
				}
			}
		}
	}
	
	//mark red if it has a blue within one square(2 if ranged) and isnt already blue
	//look thru all 1 and 3 marked tiles
	for (int forX = 0; forX < texGrid.size(); forX++)
	{
		for (int forY = 0; forY < texGrid[0].size(); forY++)
		{
			//if tile can be moved too
			if (texGrid[forX][forY] == 1)
			{
				//make list of all neighbor tiles to check
				std::vector<SDL_Point> neighbors;
				neighbors.push_back({ forX, forY - 1 });
				neighbors.push_back({ forX, forY + 1 });
				neighbors.push_back({ forX - 1, forY });
				neighbors.push_back({ forX + 1, forY });
				
				//go thru list
				for (int i = 0; i < neighbors.size(); i++)
				{
					//make sure we are in bounds
					if (neighbors[i].x >= 0 && neighbors[i].x < Map::activeMap.tileGrid.size() &&
						neighbors[i].y >= 0 && neighbors[i].y < Map::activeMap.tileGrid[0].size())
					{
						//check to see if the grid spot is open aka 0
						if (texGrid[neighbors[i].x][neighbors[i].y] == 0)
						{
							texGrid[neighbors[i].x][neighbors[i].y] = 2;
						}
					}
				}
			}
		}
	}


	//add more colors with logic as needed

	//draw squares of the color from table
	for (int x = 0; x < texGrid.size(); x++)
	{
		for (int y = 0; y < texGrid[0].size(); y++)
		{
			Artist::drawImage(Map::activeMap.pathGraphics[texGrid[x][y]], x * 256, y * 256);
		}
	}


	//draw the path from char to mouse hovered spot

	//reset render target
	Artist::setRenderTarget(NULL);

	
}