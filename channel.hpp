#include <string>
#include <vector>
#include <iostream>
#include "color.hpp"
#include "server.hpp"

class Server;

class Channel
{
    public:
        std::string name;
        void print_group();
        void add_to_member(std::string member_name);
        void add_to_operators(std::string member_name);
        void add_to_bannad(std::string member_name);
        void add_to__invited(std::string member_name);
        void remove_from_member(std::string member_name);
        void remove_from_operators(std::string member_name);
        void remove_from_bannad(std::string member_name);
        void remove_from_invited(std::string member_name);
        Channel(const std::string& name);
        ~Channel();
    private:
        std::vector<std::string> _member;
        std::vector<std::string> _operators;
        std::vector<std::string> _bannad;
        std::vector<std::string> _invited;
        void add_to_group(std::vector<std::string> target , std::string member_name);
        void remove_from_group(std::vector<std::string> target , std::string member_name);
        bool lookup_member(std::vector<std::string> target , std::string member_name);


        //vars
        int _max_member;
        bool _channel_exist;
        int total_member;

        //test  

};