/*
  ==============================================================================

    AbletonStyle.h
    Created: 1 Oct 2026 12:00:00pm
    Author:  Michael Wallis

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
namespace juce {

    class DefaultAbletonStyle : public LookAndFeel_V4 {

    public:

        /** Custom colour IDs to replecate Ableton's coding scheme. */
        enum ColourIds
        {
            // Row 1
            alert = 0x2000100,
            arrangerGridTiles = 0x2000101,
            automation = 0x2000102,
            automationOverride = 0x2000103,
            controlBackground = 0x2000104,
            controlBorder = 0x2000105,
            controlHandle = 0x2000106,
            controlHeader = 0x2000107,
            controlHighlight = 0x2000108,
            // Row 2
            controlHighlightStandby = 0x2000109,
            controlNeedleOff = 0x200010a,
            controlNeedleOn = 0x200010b,
            controlOff = 0x200010c,
            controlOn = 0x200010d,
            controlOnInactive = 0x200010e,
            controlOnVariant = 0x200010f,
            controlOnVariant2 = 0x2000110,
            controlRangeOff = 0x2000111,
            // Row 3
            controlRangeOffInactive = 0x2000112,
            controlRangeOn = 0x2000113,
            controlRangeOnInactive = 0x2000114,
            controlSelectionFrame = 0x2000115,
            controlTriangle = 0x2000116,
            desktop = 0x2000117,
            deviceBackground = 0x2000118,
            freeze = 0x2000119,
            gainReductionLine = 0x200011a,
            // Row 4
            inputCurve = 0x200011b,
            inputCurveOutline = 0x200011c,
            lcdBackground = 0x200011d,
            lcdBackgroundText = 0x200011e,
            lcdHandle = 0x200011f,
            lcdHandleVariant = 0x2000120,
            lcdLine = 0x2000121,
            lcdShape = 0x2000122,
            lcdShapeVariant = 0x2000123,
            // Row 5
            lcdTextIcon = 0x2000124,
            lcdTextIconInactive = 0x2000125,
            lcdTextIconVariant = 0x2000126,
            lcdTitle = 0x2000127,
            ledBackground = 0x2000128,
            line = 0x2000129,
            mappingHighlight = 0x200012a,
            mappingKey = 0x200012b,
            mappingMacro = 0x200012c,
            // Row 6
            mappingMidi = 0x200012d,
            modulation = 0x200012e,
            numboxTriangle = 0x200012f,
            outputCurve = 0x2000130,
            outputCurveOutline = 0x2000131,
            play = 0x2000132,
            preListen = 0x2000133,
            record = 0x2000134,
            scaleAwareness = 0x2000135,
            // Row 7
            sliderRangeValue = 0x2000136,
            sliderRangeValueVariant2 = 0x2000137,
            sliderRangeValueVariant3 = 0x2000138,
            spectrum = 0x2000139,
            spectrumGrid = 0x200013a,
            spectrumVariant = 0x200013b,
            surfaceFrameFocus = 0x200013c,
            textIcon = 0x200013d,
            textIconOff = 0x200013e,
            // Row 8
            textIconOffInactive = 0x200013f,
            textIconOn = 0x2000140,
            textIconOnInactive = 0x2000141,
            textIconOnStandby = 0x2000142,
            textBackground = 0x2000143,
            textHighlight = 0x2000144,
            thresholdLine = 0x2000145
        };

        /** Available theme palettes. */
        enum Theme {
            Dark, Light, DarkContrast, LightContrast
        };

        DefaultAbletonStyle() {
            setTheme(Dark);
        }

        /** @return The active Theme. */
        Theme getCurrentTheme() const { return currentTheme; }

        /** Sets the new Theme and updates all JUCE colour IDs. */
        void setTheme(Theme newTheme);

        void drawRotarySlider(Graphics& g, int x, int y, int width, int height, float sliderPosProportional, float rotaryStartAngle, float rotaryEndAngle, Slider& slider) override;

        void drawToggleButton(Graphics& g, ToggleButton& button, bool shouldDrawButtonAsHighlighted, bool shouldDrawButtonAsDown) override;
    
        void drawComboBox(Graphics& g, int width, int height, bool isButtonDown, int buttonX, int buttonY, int buttonW, int buttonH, ComboBox& comboBox) override;

        void drawPopupMenuBackgroundWithOptions(Graphics& g, int width, int height, const PopupMenu::Options&) override;

        void drawPopupMenuItemWithOptions(Graphics&, const Rectangle<int>& area, bool isHighlighted, const PopupMenu::Item& item, const PopupMenu::Options&) override;

        Label* createComboBoxTextBox(ComboBox& box) override;

        void positionComboBoxText(ComboBox& box, Label& label) override;

        Font getComboBoxFont(ComboBox& box) override;

    private:
        Theme currentTheme{ Dark };
    };

    class AbletonListenButton : public DefaultAbletonStyle
    {
    public:
        void drawToggleButton(Graphics& g, ToggleButton& button, bool shouldDrawButtonAsHighlighted, bool shouldDrawButtonAsDown) override;
    };

    class AbletonTextSlider : public DefaultAbletonStyle
    {
    public:
        void drawRotarySlider(Graphics& g, int x, int y, int width, int height, float sliderPosProportional, float rotaryStartAngle, float rotaryEndAngle, Slider& slider) override;
    };

    class AbletonPanSlider : public DefaultAbletonStyle {
    public:
        void drawRotarySlider(Graphics& g, int x, int y, int width, int height, float sliderPosProportional, float rotaryStartAngle, float rotaryEndAngle, Slider& slider) override;
    };

}