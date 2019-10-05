//
// Created by Maikol Guzman  on 2019-09-26.
//

#ifndef LAB_8_COMPOSICION_VENTANA_H
#define LAB_8_COMPOSICION_VENTANA_H


class Ventana {
private:
	bool polarizada;
	bool electrica;
	bool estado;
public:
	virtual Ventana();
	virtual Ventana(bool, bool, bool);
	virtual ~Ventana();

	virtual void setPolarizada(bool);
	virtual void setElectrica(bool);
	virtual void setEstado(bool);

	virtual bool getPolarizada();
	virtual bool getElectrica();
	virtual bool getEstado();





};


#endif //LAB_8_COMPOSICION_VENTANA_H
