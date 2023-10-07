#include "channel.hpp"

Channel::Channel(const std::string& name) : name(name), _channel_exist(true), total_member(0)
{
    std::cout << RED<< "Channel created" <<RESET<< std::endl;
}

Channel::~Channel()
{
    std::cout << RED<< "Channel destroied " <<RESET<< std::endl;
}


void Channel::add_to_group(std::vector<std::string> target , std::string member_name)
{
    if(_channel_exist == true && target.size() < _max_member && lookup_member(target, member_name) )
        target.push_back(member_name);
}

void Channel::remove_from_group(std::vector<std::string> target , std::string member_name)
{
    if(_channel_exist == true && lookup_member(target, member_name))
    for (int i = 0; i < target.size(); i++)
    {
        if(member_name == target[i])
        {
            target.erase(target.begin() + i);
            // add message as per irc protocol            
        }
    }
}

void Channel::add_to_member(std::string member_name)
{
    if(_channel_exist == false )
    {
        //create channel 
    }
    if (_member.size() < _max_member && !lookup_member(_bannad,member_name) )
        _member.push_back(member_name);
    total_member++;
}

void Channel::add_to_operators(std::string member_name)
{
    if(_channel_exist == false )
    {
        //create channel 
    }
    if (_operators.size() < _max_member && !lookup_member(_bannad,member_name) )
        _operators.push_back(member_name);
    total_member++;

}
void Channel::add_to__invited(std::string member_name)
{
    if(_channel_exist == false )
    {
        //create channel 
    }
    if (_invited.size() < _max_member && !lookup_member(_bannad,member_name) )
        _invited.push_back(member_name);
    total_member++;
}
 
void Channel::add_to_bannad(std::string member_name)
{
    if(_channel_exist == false )
    {
        //create channel 
    }
    if (_bannad.size() < _max_member )
        _bannad.push_back(member_name);
    total_member++;
}

bool Channel::lookup_member(std::vector<std::string> target , std::string member_name)
{
    for (int i = 0; i < _member.size(); i++)
    {
        if(member_name == _member[i])
            return (true);
    }
    return (false);
}

void Channel::print_group()
{
    for (int i = 0; i < _member.size(); i++)
        std::cout<< _member[i] << std::endl;
}


// remove from group
void Channel::remove_from_member(std::string member_name)
{
    for (int i = 0; i < _member.size(); i++)
    {
        if (_member[i] == member_name)
        {
            _member.erase(_member.begin() + i);
            break;
        }
    }
    total_member--;
}

void Channel::remove_from_operators(std::string member_name)
{
    for (int i = 0; i < _operators.size(); i++)
    {
        if (_operators[i] == member_name)
        {
            _operators.erase(_operators.begin() + i);
            break;
        }
    }
    total_member--;
}

void Channel::remove_from_bannad(std::string member_name)
{
    for (int i = 0; i < _bannad.size(); i++)
    {
        if (_bannad[i] == member_name)
        {
            _bannad.erase(_bannad.begin() + i);
            break;
        }
    }
    total_member--;
}

void Channel::remove_from_invited(std::string member_name)
{
    for (int i = 0; i < _invited.size(); i++)
    {
        if (_invited[i] == member_name)
        {
            _invited.erase(_invited.begin() + i);
            break;
        }
    }
    total_member--;
}

