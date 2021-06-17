 /*
 * @file block.cpp
 * @author VitorMob
 * @brief 
 * @version 0.1
 * @date 2021-05-31
 * 
 * @copyright Copyright (c) 2021
 * 
 * Description:
 *   functions of the class block.hpp where I am 
 *   calling are members of the classes to be able to make a block
 */

#include "block.hpp"

string Block::generate_Hash()
{
    string  theHash =
		    data.sendkey+
		    data.recvkey+
		    to_string(data.amount)+
	    	data.timestamp;
	        return calc_hash_block(theHash);

}

string Block::get_Hash()
{
    return hash;
}

string Block::get_Previous_Hash()
{    
    return previous_hash; 
}

size_t Block::compute_hash_with_proof_of_work()
{
    return rand() % 2050 + 5;
}
Block::Block(int idx, TransactionData d, string prev_hash)
{
    index=idx;
    data=d;
    previous_hash=prev_hash;
    hash=generate_Hash();
    nounce=compute_hash_with_proof_of_work();
    vBlock=nVersion;
}

double Block::get_vBlock()
{
    return vBlock;
}

size_t Block::get_Index()
{
    return index;
}