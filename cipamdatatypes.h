/*
#   Eretna Technology
#
#   Description:
#       CIPAM modul kartindan alinan veriler icin veri yapisi
*/

#include <QHash>

#ifndef CIPAMDATATYPES_H
#define CIPAMDATATYPES_H

//##############################################################################
//  Ana->Data->Waweform veri yapilari
//##############################################################################

typedef struct tagWaveFormData
{
	short int ECG_I;
	short int ECG_II;
	short int ECG_III;

}TWaveFormData,*PWaveFormData;


#endif // CIPAMDATATYPES_H
