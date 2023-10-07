#include "channel.hpp"

int main()
{
    Channel channel("irc");

    channel.add_to_member("amro");
    channel.add_to_member("amro1");
    channel.add_to_member("amro2");


    // channel.print_group();
    
    channel.remove_from_member("amro1");
    channel.print_group();
    return 0;
}