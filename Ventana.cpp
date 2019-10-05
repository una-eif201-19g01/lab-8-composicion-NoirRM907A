//
// Created by Maikol Guzman  on 2019-09-26.
//

#include "Ventana.h"

Ventana::Ventana(){}

Ventana::Ventana(bool polarizada, bool electrica, bool estado): polarizada(polarizada), electrica(electrica), estado(estado){}

Ventana::~Ventana(){}

void Ventana::setPolarizada(bool polarizada) {
	Ventana::polarizada = polarizada;
}

void Ventana::setElectrica(bool electrica) {
	Ventana::electrica = electrica;
}

void Ventana::setEstado(bool estado) {
	Ventana::estado = estado;
}

int Ventana::getPolarizada() {
	return polarizada;
}

int Ventana::getElectrica() {
	return electrica;
}

int Ventana::getEstado() {
	return estado;
}