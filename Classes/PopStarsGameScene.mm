//
//  PopStarsGameScene.cpp
//  PopStars
//
//  Created by 郭妙友 on 16/1/4.
//
//

#include "PopStarsGameScene.h"
#include "StarSprite.h"
#include "CCGeometry.h"
using namespace cocos2d;
using namespace std;

Scene* PopStarsGameScene::createScene(){
    Scene *scene = Scene::create();
    PopStarsGameScene* layer = new(nothrow) PopStarsGameScene();
    if(layer && layer->init()){
        layer->autorelease();
        scene->addChild(layer);
    }
    else{
        delete layer;
        layer = NULL;
    }
    
    return scene;
}


bool PopStarsGameScene::init(){
    if(!LayerColor::init()) return false;
    
    this->setColor(Color3B::BLACK);
    
    MenuItemFont *item = MenuItemFont::create("back", std::bind(&PopStarsGameScene::back, this, std::placeholders::_1));
    item->setColor(Color3B::WHITE);
    
    Menu *menu = Menu::create(item, NULL);
    menu->alignItemsVertically();
    this->addChild(menu);
    
    auto star = StarSprite::create(Color3B::RED, cocos2d::Size(100, 100));
    star->setPosition(200, 200);
    this->addChild(star);
    
    
    return true;
}

void PopStarsGameScene::back(cocos2d::Ref *sender){
    Director::getInstance()->popScene();
}