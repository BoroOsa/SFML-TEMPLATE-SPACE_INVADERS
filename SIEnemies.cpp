
#include "SIEnemies.h"
#include <iostream>
#include <vector>
using namespace std;

SIEnemies::SIEnemies( int szerokosc_mapy, int wysokosc_mapy, int kierunek_ruchu)
{
  this->szerokosc_mapy=730;
  this->wysokosc_mapy=500;
  this->kierunek_ruchu=1;
  ile_razy_nastapila_zmiana=0;

  for(int i=0;i<10;i=i+1)
  {
    for(int j=0; j<5; j=j+1)
    {
      vec.push_back({i*40, j*40});
    }
  }
}

void SIEnemies::ruch_wroga()
{
  int czy_nastapila_zamiana=0;
  if(kierunek_ruchu==1)
  {
    for(int i=0; i<50;i=i+1)
    {
      if(vec[i].first==775)
      {
        kierunek_ruchu=0;
        czy_nastapila_zamiana=1;
        break;
      }
    }
    if(czy_nastapila_zamiana==1 and ile_razy_nastapila_zmiana<20)
    {  
      for(int i=0; i<50;i=i+1)
        {
             vec[i].second=vec[i].second+10;   
        }
      ile_razy_nastapila_zmiana=ile_razy_nastapila_zmiana+1;
    }
    else if(czy_nastapila_zamiana==1 and ile_razy_nastapila_zmiana>=20)
    {
    }
    else
    {
      for(int i=0; i<50;i=i+1)
      {
        vec[i].first=vec[i].first+5;
      }
    }
  }

  if(kierunek_ruchu==0)
  {
    for(int i=0; i<50;i=i+1)
    {
      if(vec[i].first==0)
      {
        kierunek_ruchu=1;
        czy_nastapila_zamiana=1;
        
        break;
      }
    }
    if(czy_nastapila_zamiana==1 and ile_razy_nastapila_zmiana<20)
    { 
      ile_razy_nastapila_zmiana=ile_razy_nastapila_zmiana+1;
      for(int i=0; i<50;i=i+1)
        {
             vec[i].second=vec[i].second+10;
             
        }
    }
    else if(czy_nastapila_zamiana==1 and ile_razy_nastapila_zmiana>=20)
    {
    }
    else
    {
      for(int i=0; i<50;i=i+1)
      {
        vec[i].first=vec[i].first-5;
      }
    }
  }
}

int SIEnemies::get_enemy_width(int x)
{
  return vec[x].first;
}

int SIEnemies::get_enemy_height(int y)
{
  return vec[y].second;
}

void SIEnemies::strzal_wroga()
{
  
}


void SIEnemies::remove_enemy(int i, int j)
{
  for(int p=0;p<50;p=p+1)
  {
    if(vec[p].first>i and vec[p].first<i+40 and vec[p].second<j )
    {
      vec.erase(vec.begin()+p);
    }
  }
}

/*
void SIEnemies::remove_enemy(int i)
{
  vec.erase(vec.begin()+i);
}
*/



