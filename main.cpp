#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include <vector>
#include "SISFMLView.h"
#include "SIPlayer.h"
#include <iostream>
#include "SIEnemies.h"
#include "SIBullet.h"

int main()
{
  srand(time(0));
	sf::RenderWindow window(sf::VideoMode(800, 600), "Space Invadors");
    window.setVerticalSyncEnabled(false);
    window.setFramerateLimit(30);

  SIPlayer player(10,20);
  SIEnemies enemies(730,500,1);
  SIBullet bullet(550,0);
  SISFMLView view(player, enemies, bullet);


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) 
                window.close();
            if(event.type==sf::Event::KeyPressed)
            {
              if(event.key.code==sf::Keyboard::A)
              {
              player.ruch_w_lewo();
              }
              if(event.key.code==sf::Keyboard::D)
              {
              player.ruch_w_prawo();
              }
              if(event.key.code==sf::Keyboard::Space)
              {
              bullet.strzal_gracza();
              }
          }    
        }
        
        window.clear(sf::Color(8,6,40));
        view.drawOnWindow(window);
        bullet.ruch_naboju();
        enemies.ruch_wroga();
        window.display();
    }

  return 0;
} 















//testowe rysowanie przeciwniow
        /*
        for(int j=0, y=0;j<5;j=j+1, y=y+35)
        {

          for(int x=200; x<600;x=x+35)
          {
           sf::CircleShape c1 (12);
           c1.setFillColor(sf::Color::Red);
           c1.setPosition(x,y);
           window.draw(c1);        
          }
        }
        */