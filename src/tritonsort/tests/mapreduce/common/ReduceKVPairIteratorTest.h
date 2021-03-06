#ifndef THEMIS_REDUCE_KV_PAIR_ITERATOR_TEST_H
#define THEMIS_REDUCE_KV_PAIR_ITERATOR_TEST_H

#include <stdint.h>

#include "third-party/googletest.h"

class KVPairBuffer;
class KeyValuePair;
class ReduceKVPairIterator;

class ReduceKVPairIteratorTest : public ::testing::Test {
public:
  void SetUp();
  void TearDown();

protected:
  void validateKVPair(
    KeyValuePair& kvPair, const uint8_t* key, uint32_t keyLength,
    const uint8_t* value, uint32_t valueLength);

  void setupBuffer();
  void validateCompleteIteration(ReduceKVPairIterator& iterator);

  KVPairBuffer* buffer;
  uint8_t* dummyMemory;
};

#endif // THEMIS_REDUCE_KV_PAIR_ITERATOR_TEST_H
