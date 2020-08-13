#ifndef Syph_Samples_h
#define Syph_Samples_h

#include "Syph_Queue.h"

namespace Syph
{
    class Samples : public Queue<int>
    {
        public:
            Samples(int size) : Queue<int>(size) { }

            int mean() {
                int s = size();
                int acc = 0;

                for (int i = 0; i < s; ++i) {
                    acc += _arr[i];
                }

                return acc / s;
            }
    };
}

#endif
