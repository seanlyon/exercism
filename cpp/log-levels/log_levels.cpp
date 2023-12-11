#include <string>

namespace log_line {
    std::string message(std::string log_line) {
        return log_line.substr(log_line.find(':') + 2);
    }
} // namespace log_line
