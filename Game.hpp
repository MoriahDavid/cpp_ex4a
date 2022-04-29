#include <string>
#include <vector>

#pragma once

using namespace std;

namespace coup{

    class Game{
        private:


        public:
            Game();

            vector<string> players();

            string turn();

            string winner();
    };
    
}