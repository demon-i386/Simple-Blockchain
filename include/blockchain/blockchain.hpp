 /*
 * @file blockchain.hpp
 * @author VitorMob
 * @brief 
 * @version 0.1
 * @date 2021-05-31
 * 
 * @copyright Copyright (c) 2021
 *
 * Description:
 * 		here will be the part where the genesis block 
 * 		is created and the part of the blockchain library.hpp
 */
#ifndef LIB_BLOCKCHAIN_H
#define LIB_BLOCKCHAIN_H 

#include <vector>
#include <string>
#include <iostream>
#include "block.hpp"

using namespace std;

class Blockchain
{	
	private:
		vector<Block> chain;
		
	public:
		Blockchain();
		Block  previous_Block();
		void   set_Block(TransactionData data);
		string is_Chain_Valid();
};

#endif // LIB_BLOCKCHAIN_H