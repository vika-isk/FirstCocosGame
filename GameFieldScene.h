#ifndef __GAMEFIELD_SCENE_H__
#define __GAMEFIELD_SCENE_H__

#include "cocos2d.h"
#include "field.h"

class GameField : public cocos2d::Layer
{
	Field gameField;	// Нужно ли сделать эту переменную глобальной/синглтоном? Либо оставить тут.
	int tileWidth;
	int tileHeight;
	int coordsPreviousClickX = -1;
	int coordsPreviousClickY = -1;
	cocos2d::Vec2 origin;
	void resetCoordinatesClickAndDeletePath();		// Сбрасывает coordsPreviousClickX и coordsPreviousClickY и удаляет путь, проложенный спрайтами от точки до точки.
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	void GameField::onMouseUp(cocos2d::Event *event);

	CREATE_FUNC(GameField);	// implement the "static create()" method manually
};

#endif // __HELLOWORLD_SCENE_H__