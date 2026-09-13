#include <iostream>
#include <string>
#include <vector>

struct TrainerSection {
    std::string label;
    std::vector<std::string> options;
};

int main() {
    const std::string projectName = "How-to-Fish-Trainer";

    const std::vector<TrainerSection> groups = {
        {"Progress Mods", {
            "Max Level",
            "Unlock Recipes"
        }},
        {"World Mods", {
            "Freeze Time",
            "Game Speed",
            "Always Day",
            "Reveal Map"
        }},
        {"Movement Mods", {
            "Mount Speed Boost",
            "Super Jump",
            "Speed Multiplier",
            "Unlimited Jumps"
        }},
        {"Player Mods", {
            "Sell Price Multiplier",
            "Restore Stamina",
            "No Fall Damage",
            "No Poison"
        }},
        {"Enemies Mods", {
            "Instant Kill Boss",
            "Freeze Enemies",
            "No Aggro",
            "Weak Enemies",
            "One-Hit Enemies"
        }}
    };

    std::cout << "[" << projectName << "]\n";
    std::cout << "Example build generated for How to Fish.\n\n";

    for (const auto& cat : groups) {
        std::cout << "[" << cat.label << "]\n";
        for (const auto& entry : cat.options) {
            std::cout << "  - " << entry << '\n';
        }
        std::cout << '\n';
    }

    std::cout << "Requirements:\n";
    std::cout << "  - Windows 10 / 11 (64-bit)\n";
    std::cout << "  - Windows 10 or newer\n";

    return 0;
}
