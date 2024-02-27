
//******************************************************************************
/**
	@file temp.h

	@brief A module that implements a FIFO data structure

	@remarks \li Using <b>Whitesmiths</b> indetation

	@author \li José Ribeiro, \c 72473, <j.miguel.ribeiro@ua.pt>\n (2024)
    @author \li Gustavo Guariglia, \c 103353, <gustavo.guariglia@ua.pt>\n (2024)

	@date February 2024
	@bug No known bugs.
*/
//******************************************************************************

//******************************************************************************
#ifndef TEMP_H
#define TEMP_H

//----------------------------------------------------------
/** \brief Inicializa um vetor para armazenar a temperatura
 */
int* dtInit();

/** \brief Adiciona um valor de temperatura a um vetor
 */
int dtAdd(int* vect, int temp);

/** \brief Retorna estatísticas sobre um vetor de temperaturas
 */
int dtStat(int* vect, int* min, int* max, int* avg);

//------------------------------------------------------

//##########################################################
//Function Prototypes

//##########################################################
#endif /* MY_FIFO_H */
//******************************************************************************
