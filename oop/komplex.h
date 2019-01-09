#ifndef COMPLEX_H
#define COMPLEX_H

struct Komplex
{
	double imag, real;
	void setReal(double real);

	double betrag() const {
		return sqrt(this->betrag_quadrat());
	}

	double betrag_quadrat() const{
		return this->imag*this->imag + this->real * this->real;
	}
}
#endif