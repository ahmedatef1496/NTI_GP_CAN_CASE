/*********************************************************************************/
/* Author    : Islam Abdo                                                        */
/* Version   : V01                                                               */
/* Date      : 11 OCT  2020                                                      */
/*********************************************************************************/

#ifndef AFIO_PRIVATE_H
#define AFIO_PRIVATE_H


/*******************   Register Definition     ***********************/

typedef struct
{
	volatile u32 EVCR;
	volatile u32 MAPR;
	volatile u32 EXTICR[4];
	volatile u32 MAPR2;
}AFIO_t;

/*******************   BASE Address Definition    *********************/

#define AFIO_BASE_ADDRESS	0x40010000		//define the boundary address of AFIO

#define AFIO 		((volatile AFIO_t *) AFIO_BASE_ADDRESS)


#endif // AFIO_PRIVATE_H
