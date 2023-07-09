#include "SISFMLView.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>


SISFMLView::SISFMLView( SIPlayer &player, SIEnemies &enemies, SIBullet &bullet) : player(player), enemies(enemies), bullet(bullet)
{
  Player=sf::Sprite();
  Player.setScale(0.1f, 0.1f);
  gracz.loadFromFile("/home/runner/SFML-TEMPLATE-SAPER/resources/niebieska_kropka.png");
 
  Enemy=sf::Sprite();
  Enemy.setScale(0.013f,0.013f);
  przeciwnik.loadFromFile("/home/runner/SFML-TEMPLATE-SAPER/resources/czerwona_kropka.png");

  Bullet=sf::Sprite();
  Bullet.setScale(0.1f,0.1f);
  Bullet.rotate(90);
  naboj.loadFromFile("/home/runner/SFML-TEMPLATE-SAPER/resources/zolty_naboj.png");
}

void SISFMLView::drawOnWindow(sf::RenderWindow & win)
{
  int x=player.get_player_width();
  Player.setTexture(gracz);
  Player.setPosition(x, 550);
  win.draw(Player);

  
  for(int i=0;i<50;i=i+1)
  {
    int pierwsza_wspolrzedna=enemies.get_enemy_width(i);
    int druga_wspolrzedna=enemies.get_enemy_height(i);
    
    Enemy.setTexture(przeciwnik);
    Enemy.setPosition(pierwsza_wspolrzedna, druga_wspolrzedna);
    win.draw(Enemy);
  }

  

  
  int pierwsza_wspolrzedna_naboju=player.get_player_width();
    
  //int pierwsza_wspolrzedna_naboju=bullet.get_bullet_width();
  

  int druga_wspolrzedna_naboju=bullet.get_bullet_height();
  Bullet.setTexture(naboj);
  Bullet.setPosition(pierwsza_wspolrzedna_naboju+77,druga_wspolrzedna_naboju);

  for(int i=0; i<50;i=i+1)
  {
    if(pierwsza_wspolrzedna_naboju<enemies.get_enemy_width(i)+40 and pierwsza_wspolrzedna_naboju+10<enemies.get_enemy_width(i) and druga_wspolrzedna_naboju<=enemies.get_enemy_height(i)+10)
    {
    enemies.remove_enemy(pierwsza_wspolrzedna_naboju,druga_wspolrzedna_naboju);
    //enemies.remove_enemy(i);
    bullet.restart_bullet();
    }
    
  }
/*
    if(Bullet.getGlobalBounds().intersects(Enemy.getGlobalBounds()))
    {
    enemies.remove_enemy();
    bullet.restart_bullet();
    }
    else
    {
    }
*/
  win.draw(Bullet);
  
}