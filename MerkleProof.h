
typedef struct{
    char slice[];
    PBPair pbPair;
    char ackTxHash[];
    Signature sigServer;
}MerkleProof;

typedef struct{
    int index;
    char keyHash[];
    unsigned char value;

}
