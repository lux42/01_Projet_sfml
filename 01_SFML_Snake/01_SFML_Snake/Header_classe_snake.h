#ifndef DEF_CLASSE_SNAKE
#define DEF_CLASSE_SNAKE

#include <string>
using namespace std;

class World
{
public:

	void init_space(int x, int y);
	void deplacement(int x,int y);
	void collision();
	bool mort();


private:

	int m_pos_x;
	int m_pos_y;
	int m_taille;
	bool m_en_vie;
	string m_nom;
};

#endif