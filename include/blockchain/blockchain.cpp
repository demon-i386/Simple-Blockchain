 /*
 * @file blockchain.cpp
 * @author VitorMob
 * @brief 
 * @version 0.1
 * @date 2021-05-31
 * 
 * @copyright Copyright (c) 2021
 *
 * Description:
 * 	here where the magic happens where 
 *      the genesis block is created
 */

#include "blockchain.hpp"

Blockchain::Blockchain()
{
      TransactionData data_g("mob", "onion", 10.0);
      Block genesis(0, data_g, "NULL");
      chain.push_back(genesis);

}

Block Blockchain::previous_Block()
{
    return chain.back();
}
void Blockchain::set_Block(TransactionData data)
{

    int index = chain.size();
    string prev_hash =  previous_Block().get_Hash();
    Block newBlk(index, data, prev_hash);
    
    chain.push_back(newBlk);

    for(int i=0;i<1;i++){
        cout<< "Block <<" <<endl
            << "Index :" << newBlk.get_Index() <<endl
            << "Sendkey :" << newBlk.data.sendkey  <<endl
            << "Receivekey :" << newBlk.data.recvkey  <<endl
            << "Amount :" << newBlk.data.amount <<endl 
            << "Hash :" << newBlk.generate_Hash() <<endl
            << "vBlock: " << newBlk.get_vBlock()<<endl
            << "PreviousHash :" << newBlk.get_Previous_Hash() <<endl
            << "Validation:" << newBlk.is_Hash_Valid() <<endl
            << "Nounce:" << newBlk.compute_hash_with_proof_of_work() <<endl
            << "Timestamp: " << newBlk.data.timestamp <<endl;
    }
}


