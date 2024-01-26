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
 * Allows you to modify the MenuLayer
 */
class $modify(MenuLayer) {
    bool init() {
        if(!MenuLayer::init()) return false;
        
        // Gets the social-media-menu child from the MenuLayer
        auto socialmediamenu = this->getChildByID("social-media-menu");

        // Removes the child robtop-logo-button from the socialmediamenu
        socialmediamenu->removeChildByID("robtop-logo-button");

        // Gets the twitch button child from the socialmediamenu
        auto twitchbutton = socialmediamenu->getChildByID("");

        // Sets the ID to "twitch-button"
        twitchbutton->setID("twitch-button");

        // Gets the discord button child from the socialmediamenu
        auto discordbutton = socialmediamenu->getChildByID("");

        // Sets the position to X: 88, Y: 30
        discordbutton->setPosition(88, 30);

        // Lowers the scale of the socialmediamenu
        socialmediamenu->setScale(0.9);

        // Sets the position to X: 17, Y: -22
        socialmediamenu->setPosition(17, -22);

        // Finally sets the twitch button to X: 59, Y: 30
        twitchbutton->setPosition(59, 30);
        return true;
    };
};     