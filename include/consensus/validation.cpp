 /*
 * @file validation.cpp
 * @author VitorMob
 * @brief
 * @version 0.1
 * @date 2021-05-31
 *
 * @copyright Copyright (c) 2021
 *
 * Description:
 *      the validation of the functions are in this source
 *      we are working to improve the validation in the blockchain
 */

#include "../blockchain/block.hpp"
#include "../blockchain/blockchain.hpp"

// Valid hash the block ?
string Block::is_Hash_Valid()
{
	if(get_Hash() == generate_Hash())
        return "True";
    else
        return "False";
}

string Blockchain::is_Chain_Valid()
{
    if(chain.size() == 0 && chain.empty() == 0)
        return "False";
    else
        return "True";
}



