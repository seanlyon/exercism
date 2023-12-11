#include <string>

namespace log_line {
    std::string message(std::string log_line) {
        return log_line.substr(log_line.find(':') + 2);
    }

    std::string log_level(std::string log_line) {
        return log_line.substr(1, log_line.find(']') - 1);
    }
} // namespace log_line
