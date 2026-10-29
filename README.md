# Ableton-Style LookAndFeel for JUCE

An Ableton Live-inspired custom `juce::LookAndFeel` class for styling standard JUCE UI components.

---

## Important Legal Disclaimer

> **Trademark & Brand Notice:**  
> This project is a visual recreation inspired by Ableton Live. The UI color palettes, typography, and visual styling are intellectual property/trademarks of **Ableton AG**. 
> 
> * This repository is intended strictly for **educational, personal, and research purposes**.
> * **Do not use** these visual assets or color schemes in commercial plugins or distributed commercial products that could infringe on Ableton AG's trademarks or copyright.

---

## File Structure

* **`AbletonStyle.h`** – Header file defining the custom `juce::LookAndFeel_V4` class override.
* **`AbletonStyle.cpp`** – Implementation file containing component drawing logic and color definitions.

---

## Installation

### Option 1: Projucer

1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/Ableton-Style-GUI-JUCE.git
   ```
2. Drag AbletonStyle.h and AbletonStyle.cpp into your Projucer file tree under the Source/ group.
3. Save and re-generate your project files.

### Option 2: CMake

Add the files directly to your target sources in CMakeLists.txt:

```CMake
target_sources(YourAudioPlugin PRIVATE
    Source/AbletonStyle.h
    Source/AbletonStyle.cpp
)
```

---

## Usage Example

To apply the custom look and feel globally across your plugin editor or GUI component:

```C++
#include "AbletonStyle.h"

class AudioPluginAudioProcessorEditor : public juce::AudioProcessorEditor
{
public:
    AudioPluginAudioProcessorEditor (AudioPluginAudioProcessor& p)
        : AudioProcessorEditor (&p), processorRef (p)
    {
        // Apply the Ableton LookAndFeel globally
        juce::LookAndFeel::setDefaultLookAndFeel (&abletonStyle);
        
        setSize (400, 300);
    }

    ~AudioPluginAudioProcessorEditor() override
    {
        // Clean up look and feel on shutdown
        juce::LookAndFeel::setDefaultLookAndFeel (nullptr);
    }

private:
    AbletonStyle abletonStyle;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AudioPluginAudioProcessorEditor)
};
```

---

## License

The code in this repository is released under the MIT License. Please refer to the Legal Disclaimer regarding Ableton's trademarked visual identity.

*Last Updated: October 29, 2026*