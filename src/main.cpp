/**
 * Include the Geode headers.
 */
#include <Geode/Geode.hpp>
/**
 * Required to modify the MenuLayer class
 */
#include <Geode/modify/MenuLayer.hpp>

/**
 * Brings cocos2d and all Geode namespaces 
 * to the current scope.
 */
using namespace geode::prelude;

/**
 * `$modify` lets you extend and modify GD's 
 * classes; to hook a function in Geode, 
 * simply $modify the class and write a new 
 * function definition with the signature of 
 * the one you want to hook.
 */
class $modify(MenuLayer) {
    bool init() {
        if(!MenuLayer::init()) return false;
        
        auto socialmediamenu = this->getChildByID("social-media-menu");
        socialmediamenu->removeChildByID("robtop-logo-button");
        auto twitchbutton = socialmediamenu->getChildByID("");
        twitchbutton->setID("twitch-button");
        auto discordbutton = socialmediamenu->getChildByID("");
        discordbutton->setPosition(88, 30);

        socialmediamenu->setScale(0.9);
        socialmediamenu->setPosition(17, -22);
        twitchbutton->setPosition(59, 30);
        return true;
    };
};     