/*
 * Some long comment about the Mersenne Twister here.
 *
 * Matt Mokary ( mxm6060@rit.edu )
 */

#ifndef MTWIST_H
#define MTWIST_H

// initialize the generator from a seed
extern void initialize_with_seed( int seed );

// initialize the generator with a random seed
extern void initialize_with_rand();

// check to see if the generator has been initialized
// returns 1 if it has been initialized, 0 otherwise
extern int mt_initialized();

// get a pseudorandom number
extern unsigned int extract_number();

#endif
