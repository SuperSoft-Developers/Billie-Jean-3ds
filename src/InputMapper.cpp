#include "InputMapper.h"

std::string InputMapper::Serialize(const InputState& state) {
    return
        std::string("A=") + (state.a ? "1" : "0") +
        ";B=" + (state.b ? "1" : "0") +
        ";X=" + (state.x ? "1" : "0") +
        ";Y=" + (state.y ? "1" : "0") +
        ";START=" + (state.start ? "1" : "0") +
        ";SELECT=" + (state.select ? "1" : "0");
}
