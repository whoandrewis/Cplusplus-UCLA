#include <iostream>
#include <algorithm>
#include <random>
#include <cassert>
#include "deck.h"
#include "shuffle.h"
using namespace std;

//Do not change this function
void deck::shuffle() {
  assert(deal_count == 0);
  std::default_random_engine eng(SEED_MACRO);
  std::shuffle(stack, stack + 52, eng);
}

void deck::print_deck() {
  for (int i = 0; i < 52; i++)
    cout << stack[i].read() << endl;
}

