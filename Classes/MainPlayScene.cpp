//
//  MainPlayScene.cpp
//  PopStars
//
//  Created by 郭妙友 on 15/12/29.
//
//

#include "MainPlayScene.hpp"
#include "PopStarsGameScene.hpp"

using namespace cocos2d;
using namespace std;

Scene* MainPlayScene::createScene(){
    
    Scene *mainScene = Scene::create();
    MainPlayScene* layer = new(nothrow) MainPlayScene();
    if(layer && layer->init()){
        layer->autorelease();
        mainScene->addChild(layer);
    }
    else{
        delete layer;
        layer = NULL;
    }
    
    return mainScene;
}

bool MainPlayScene::init(){
    if(!LayerColor::initWithColor(Color4B::WHITE)) return false;
    
    MenuItemFont *startItem = MenuItemFont::create("start",std::bind(&MainPlayScene::menuStartCallback, this, std::placeholders::_1));
    startItem->setColor(Color3B::BLACK);
    
    MenuItemFont *aboutItem = MenuItemFont::create("about",std::bind(&MainPlayScene::menuAboutCallback, this, std::placeholders::_1));
    aboutItem->setColor(Color3B::BLACK);
    
    Menu *menu = Menu::create(startItem, aboutItem,NULL);
    menu->alignItemsVertically();
    
    this->addChild(menu);
    return true;
}

#pragma mark - Menu Callback
void MainPlayScene::menuStartCallback(cocos2d::Ref *sender){
    printf("tap on menu start item\n");
    
    Director::getInstance()->pushScene(PopStarsGameScene::createScene());
}

void MainPlayScene::menuAboutCallback(cocos2d::Ref *sender){
    printf("tap on menu about item\n");
}

