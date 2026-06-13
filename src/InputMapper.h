#pragma once

#include <string>

struct InputState {
    bool a = false;
    bool b = false;
    bool x = false;
    bool y = false;
    bool start = false;
    bool select = false;
};

class InputMapper {
public:
    std::string Serialize(const InputState& state);
};
