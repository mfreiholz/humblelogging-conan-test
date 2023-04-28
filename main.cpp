#include <humblelogging/humblelogging.h>
using namespace humble::logging;

HUMBLE_LOGGER(LL, "default");

int main(int argc, char** argv)
{
	Factory& fac = Factory::getInstance();
	fac.setConfiguration(std::make_unique<Configuration>(LogLevel::All));
	fac.registerAppender(std::make_shared<ConsoleAppender>());

	HL_INFO(LL, "Test!!!");
	return 0;
}