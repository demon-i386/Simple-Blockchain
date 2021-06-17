 /*
 * @file block.hpp
 * @author VitorMob
 * @brief 
 * @version 0.1
 * @date 2021-05-31
 * 
 * @copyright Copyright (c) 2021
 * 
 * Description:
 *    block implementation where I will make a 
 *    crypto of the data inside the block, 
 *    always attaching the previous block 
 *    thus creating a blockchain
 */

#ifndef LIB_BLOCK_H
#define LIB_BLOCK_H

#include <iostream>
#include <string>
#include <stdio.h>

#include "transaction.hpp"
#include "../crypto/sha256.hpp"
#include "version.hpp"

using namespace std;

class Block
{
	private:
	
		double  vBlock;
		int     index;
		size_t  nounce;
        string  hash;
        string  previous_hash;

	public:
		Block(int idx, TransactionData d, string prev_hash);
		string 	generate_Hash();
		size_t  get_Index();
		size_t  compute_hash_with_proof_of_work();
		string 	get_Hash();
		string 	get_Previous_Hash();
		string 	is_Hash_Valid();
		double  get_vBlock();

        TransactionData data;

};

#endif // LIB_BLOCK_H