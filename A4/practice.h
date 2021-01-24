#ifndef PRACTICE_H
#define PRACTICE_H

class Box
{
	private:
		double length;
		double width;
		double height;
	public:
		void set_param(double len, double wid, double hei);
		double get_Volume(void);
		Box();
		~Box();
};
#endif
