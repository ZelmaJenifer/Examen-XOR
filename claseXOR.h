/*
 * claseXOR.h
 *
 *  Created on: 07/07/2017
 *      Author: Zelma Jenifer
 */

#ifndef CLASEXOR_H_
#define CLASEXOR_H_
#define N_MAX 100000
#include <iostream>

namespace std
{

class claseXOR
{
public:
	claseXOR();
	virtual ~claseXOR();
	int principal();

private:
	int XOR(int, int);
};

} /* namespace std */

#endif /* CLASEXOR_H_ */
