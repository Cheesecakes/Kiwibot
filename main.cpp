#include <iostream>
#include "ircbot.h"

using namespace std;

int main() {

  // set nick and channel information
  string nick = "KaffinatedKiwi";
  string channel = "#caffeine-addicts";

  /* sets nickname and user information for the bot */
  IrcBot bot = IrcBot(nick,"USER guest tolmoon tolsun :Ronnie Regan");

  /* initialise the bot on channel specified in parameter*/
  bot.init(channel);

  /* start the main loop where we look at the messages coming in and out */
  int botStatus = bot.mainLoop();

  return botStatus;
}
