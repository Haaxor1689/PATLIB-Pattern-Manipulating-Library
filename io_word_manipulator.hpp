#pragma once

#include <vector>

#include "typedefs.hpp"
#include "trie_pattern_manipulator.hpp"

namespace ptl {

class io_word_manipulator : public trie_pattern_manipulator {
    using base = trie_pattern_manipulator;

public:
    io_word_manipulator(const Tin_alph& max_i_a, const Tcount_pair& out_i_z, const unsigned& q_thr = 3) : base(max_i_a, out_i_z, q_thr) {}

    void hard_insert_pattern(const Tin_alph& w, const Tcount_pair& o) {
        std::vector<Tin_alph> vec;
        vec.push_back(w);

        base::hard_insert_pattern(vec, o);
    }

    void word_output(const Tin_alph& w, Tcount_pair& o) {
        o = trie_outp[trie_root + w];
    }

};
    
} // namespace ptl