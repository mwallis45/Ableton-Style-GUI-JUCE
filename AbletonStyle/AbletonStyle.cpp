/*
  ==============================================================================

    AbletonStyle.cpp
    Created: 1 Oct 2026 12:00:00pm
    Author:  Michael Wallis

  ==============================================================================
*/

#include "AbletonStyle.h"

namespace juce {

    void DefaultAbletonStyle::setTheme(Theme newTheme) {
        currentTheme = newTheme;
        switch (newTheme) {
        case Dark:
        default:
            // Row 1
            setColour(alert, Colour::fromRGB(255, 125, 67));
            setColour(arrangerGridTiles, Colour::fromRGB(217, 217, 217));
            setColour(automation, Colour::fromRGB(255, 102, 77));
            setColour(automationOverride, Colour::fromRGB(170, 96, 81));
            setColour(controlBackground, Colour::fromRGB(20, 20, 20));
            setColour(controlBorder, Colour::fromRGB(25, 25, 25));
            setColour(controlHandle, Colour::fromRGB(147, 147, 147));
            setColour(controlHeader, Colour::fromRGB(67, 67, 67));
            setColour(controlHighlight, Colour::fromRGB(69, 104, 152));
            // Row 2
            setColour(controlHighlightStandby, Colour::fromRGB(171, 198, 203));
            setColour(controlNeedleOff, Colour::fromRGB(147, 147, 147));
            setColour(controlNeedleOn, Colour::fromRGB(217, 217, 217));
            setColour(controlOff, Colour::fromRGB(67, 67, 67));
            setColour(controlOn, Colour::fromRGB(230, 166, 13));
            setColour(controlOnInactive, Colour::fromRGB(147, 147, 147));
            setColour(controlOnVariant, Colour::fromRGB(152, 184, 237));
            setColour(controlOnVariant2, Colour::fromRGB(0, 238, 255));
            setColour(controlRangeOff, Colour::fromRGB(147, 147, 147));
            // Row 3
            setColour(controlRangeOffInactive, Colour::fromRGB(147, 147, 147));
            setColour(controlRangeOn, Colour::fromRGB(147, 147, 147));
            setColour(controlRangeOnInactive, Colour::fromRGB(147, 147, 147));
            setColour(controlSelectionFrame, Colour::fromRGB(114, 114, 114));
            setColour(controlTriangle, Colour::fromRGB(217, 217, 217));
            setColour(desktop, Colour::fromRGB(60, 60, 60));
            setColour(deviceBackground, Colour::fromRGB(71, 71, 71));
            setColour(freeze, Colour::fromRGB(67, 145, 230));
            setColour(gainReductionLine, Colour::fromRGB(255, 185, 1));
            // Row 4
            setColour(inputCurve, Colour::fromRGB(83, 83, 83));
            setColour(inputCurveOutline, Colour::fromRGB(0, 0, 0));
            setColour(lcdBackground, Colour::fromRGB(20, 20, 20));
            setColour(lcdBackgroundText, Colour::fromRGB(186, 186, 186));
            setColour(lcdHandle, Colour::fromRGB(255, 185, 1));
            setColour(lcdHandleVariant, Colour::fromRGB(240, 118, 128));
            setColour(lcdLine, Colour::fromRGB(44, 44, 44));
            setColour(lcdShape, Colour::fromRGB(255, 185, 1));
            setColour(lcdShapeVariant, Colour::fromRGB(0, 238, 255));
            // Row 5
            setColour(lcdTextIcon, Colour::fromRGB(238, 197, 134));
            setColour(lcdTextIconInactive, Colour::fromRGB(83, 83, 83));
            setColour(lcdTextIconVariant, Colour::fromRGB(158, 190, 243));
            setColour(lcdTitle, Colour::fromRGB(190, 190, 190));
            setColour(ledBackground, Colour::fromRGB(66, 66, 66));
            setColour(line, Colour::fromRGB(181, 181, 181));
            setColour(mappingHighlight, Colour::fromRGB(67, 67, 67));
            setColour(mappingKey, Colour::fromRGB(255, 100, 0));
            setColour(mappingMacro, Colour::fromRGB(0, 218, 72));
            // Row 6
            setColour(mappingMidi, Colour::fromRGB(64, 52, 239));
            setColour(modulation, Colour::fromRGB(0, 140, 173));
            setColour(numboxTriangle, Colour::fromRGB(158, 190, 243));
            setColour(outputCurve, Colour::fromRGBA(143, 143, 143, 76));
            setColour(outputCurveOutline, Colour::fromRGB(207, 207, 207));
            setColour(play, Colour::fromRGB(0, 250, 163));
            setColour(preListen, Colour::fromRGB(26, 125, 241));
            setColour(record, Colour::fromRGB(255, 89, 95));
            setColour(scaleAwareness, Colour::fromRGB(190, 152, 255));
            // Row 7
            setColour(sliderRangeValue, Colour::fromRGB(152, 184, 237));
            setColour(sliderRangeValueVariant2, Colour::fromRGB(248, 118, 128));
            setColour(sliderRangeValueVariant3, Colour::fromRGB(241, 172, 0));
            setColour(spectrum, Colour::fromRGB(83, 83, 83));
            setColour(spectrumGrid, Colour::fromRGBA(182, 182, 182, 63));
            setColour(spectrumVariant, Colour::fromRGB(26, 125, 241));
            setColour(surfaceFrameFocus, Colour::fromRGB(110, 110, 110));
            setColour(textIcon, Colour::fromRGB(217, 217, 217));
            setColour(textIconOff, Colour::fromRGB(217, 217, 217));
            // Row 8
            setColour(textIconOffInactive, Colour::fromRGB(147, 147, 147));
            setColour(textIconOn, Colour::fromRGB(20, 20, 20));
            setColour(textIconOnInactive, Colour::fromRGB(147, 147, 147));
            setColour(textIconOnStandby, Colour::fromRGB(195, 195, 195));
            setColour(textBackground, Colour::fromRGB(60, 60, 60));
            setColour(textHighlight, Colour::fromRGB(217, 217, 217));
            setColour(thresholdLine, Colour::fromRGB(0, 238, 255));
            break;

        case Light:
            // TODO: Implement Light theme
            break;

        case DarkContrast:
            // TODO: Implement DarkContrast theme
            break;

        case LightContrast:
            // TODO: Implement LightContrast theme
            break;
        }
    }


    void DefaultAbletonStyle::drawRotarySlider(Graphics& g, int x, int y, int width, int height, float sliderPos, float rotaryStartAngle, float rotaryEndAngle, Slider& slider)
    {
        auto radius = (juce::jmin(width, height) / 4.0f) - 2.0f;
        auto centreX = (float)x + (float)width * 0.5f;
        auto centreY = (float)y + (float)height * 0.5f;
        auto currentAngle = rotaryStartAngle + sliderPos * (rotaryEndAngle - rotaryStartAngle);
        auto angleSpacer = juce::MathConstants<float>::pi / 24.0f;

        auto shiftY = (float)y + (float)height * 0.25f;

        // Basic Track Path
        juce::Path trackPath;
        float maxStartAngle = std::min(rotaryEndAngle, currentAngle + angleSpacer);
        trackPath.addCentredArc(centreX, centreY, radius + 2.0f, radius + 2.0f, 0.0f, maxStartAngle, rotaryEndAngle, true);
        g.setColour(slider.findColour(line));
        g.strokePath(trackPath, juce::PathStrokeType(2.0f));

        // Active Track Path
        juce::Path valuePath;
        float maxEndAngle = std::max(rotaryStartAngle, currentAngle - angleSpacer);
        valuePath.addCentredArc(centreX, centreY, radius + 2.0f, radius + 2.0f, 0.0f, rotaryStartAngle, maxEndAngle, true);
        g.setColour(slider.findColour(controlOnVariant2));
        g.strokePath(valuePath, juce::PathStrokeType(2.0f));

        // Line
        juce::Path pointer;
        pointer.startNewSubPath(centreX, centreY);
        pointer.lineTo(centreX + (radius + 2.0f) * std::sin(currentAngle), centreY - (radius + 2.0f) * std::cos(currentAngle));
        g.setColour(slider.findColour(line));
        g.strokePath(pointer, juce::PathStrokeType(1.0f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded));
        
        // Name Text
        g.setColour(slider.findColour(textIconOff));
        g.setFont(juce::FontOptions(12.0f, juce::Font::plain));

        auto labelBounds = juce::Rectangle<float>(x, y, width, height * 0.25);
        g.drawText(slider.getName(), labelBounds, juce::Justification::centred);

        // Value Text
        juce::String formattedValue = slider.getTextFromValue(slider.getValue());
        auto valueBounds = juce::Rectangle<float>(x, centreY + shiftY, width, height * 0.25);
        g.drawText(formattedValue, valueBounds, juce::Justification::centred);
    }


    /** 
     * @brief Toggle Button Override for Ableton Style.
     * 
     * Uses the basic drawToggleButton override to apply the shape and colours of an Ableton Toggle.
     * 
     * @ Param g
     * @ Param button
     * @ param shouldDrawButtonAsHighlighted
     * @ param shouldDrawButtonAsDown
     */
    void DefaultAbletonStyle::drawToggleButton(Graphics& g, ToggleButton& button, bool shouldDrawButtonAsHighlighted, bool shouldDrawButtonAsDown)
    {
        auto boarder = button.getLocalBounds().toFloat();
        auto bounds = button.getLocalBounds().toFloat().reduced(1.0f);
        bool isOn = button.getToggleState();

        g.setColour(button.findColour(controlBackground));
        g.fillRect(boarder);
        
        g.setColour(isOn ? button.findColour(controlOn) : button.findColour(controlOff));
        g.fillRect(bounds);

        g.setColour(isOn ? button.findColour(textIconOn) : button.findColour(textIconOff));
        g.setFont(juce::FontOptions(10.0f, juce::Font::plain));

        g.drawText(button.getButtonText(), bounds, juce::Justification::centred);
    }

    void DefaultAbletonStyle::drawComboBox(Graphics& g, int width, int height, bool isButtonDown, int buttonX, int buttonY, int buttonW, int buttonH, ComboBox& comboBox) {
        auto boarder = comboBox.getLocalBounds();
        auto bounds = comboBox.getLocalBounds().toFloat().reduced(1.0f);

        g.setColour(comboBox.findColour(controlBackground));
        g.fillRect(boarder);

        g.setColour(comboBox.findColour(controlOff));
        g.fillRect(bounds);

        juce::Path triangle;
        auto arrowArea = juce::Rectangle<float>(buttonX + (buttonW * 0.5f), buttonY, buttonW * 0.5f, buttonH);
        auto arrowSize = 4.0f; // Width/Height of the triangle
        auto centreX = arrowArea.getCentreX();
        auto centreY = arrowArea.getCentreY();

        // Define downward pointing triangle vertices
        triangle.addTriangle(centreX - arrowSize, centreY - (arrowSize * 0.5f),  // Top Left
            centreX + arrowSize, centreY - (arrowSize * 0.5f),  // Top Right
            centreX, centreY + (arrowSize * 0.5f)); // Bottom Point

        g.setColour(comboBox.findColour(textIconOff));
        g.fillPath(triangle);

        g.setFont(FontOptions(10.0f, Font::plain));
        g.drawText(comboBox.getText(), bounds.reduced(2, 0), juce::Justification::left);
    }

    void DefaultAbletonStyle::drawPopupMenuBackgroundWithOptions(Graphics& g, int width, int height, const PopupMenu::Options& options)
    {
        g.fillAll(findColour(controlBackground));

        g.setColour(findColour(controlOff));
        g.fillRect(juce::Rectangle<int>(width, height).reduced(1));
    }

    void DefaultAbletonStyle::drawPopupMenuItemWithOptions(Graphics& g, const Rectangle<int>& area, bool isHighlighted, const PopupMenu::Item& item, const PopupMenu::Options& options)
    {
        if (isHighlighted && item.isEnabled)
        {
            g.setColour(findColour(controlOnVariant));
            g.fillRect(area);
        }
        else
        {
            g.setColour(findColour(controlOff));
            g.fillRect(area);
        }

        if (item.isSeparator)
        {
            g.setColour(findColour(controlBorder));
            g.fillRect(area.reduced(5, 0).withHeight(1));
            return;
        }

        juce::Colour textColor = isHighlighted ? findColour(textIconOn) : findColour(textIconOff);
        if (!item.isEnabled)
            textColor = textColor.withAlpha(0.4f);

        g.setColour(textColor);
        g.setFont(FontOptions(10.0f, Font::plain));

        g.drawText(item.text, area.reduced(2,0), Justification::left, false);
    }

    Label* DefaultAbletonStyle::createComboBoxTextBox(ComboBox& box)
    {
        // Returns the default Label, but you can configure justification here if needed
        return new Label(String(), String());
    }

    void DefaultAbletonStyle::positionComboBoxText(ComboBox& box, Label& label)
    {
        auto bounds = box.getLocalBounds();

        const int arrowWidth = box.getHeight();

        label.setBounds(0, 0, 0, 0);
    }

    Font DefaultAbletonStyle::getComboBoxFont(ComboBox& box)
    {
        return FontOptions(10.0f, Font::plain);
    }

    /**
    * @brief Toggle Button Override for Pre Listen Style.
    *
    * Uses the basic drawToggleButton override to apply the shape and colours of an Ableton Toggle.
    *
    * @ Param g
    * @ Param button
    * @ param shouldDrawButtonAsHighlighted
    * @ param shouldDrawButtonAsDown
    */
    void AbletonListenButton::drawToggleButton(Graphics& g, ToggleButton& button, bool shouldDrawButtonAsHighlighted, bool shouldDrawButtonAsDown)
    {
        auto boarder = button.getLocalBounds().toFloat();
        auto bounds = button.getLocalBounds().toFloat().reduced(1.0f);
        bool isOn = button.getToggleState();

        g.setColour(button.findColour(controlBackground));
        g.fillEllipse(boarder);

        g.setColour(isOn ? button.findColour(preListen) : button.findColour(controlOff));
        g.fillEllipse(bounds);

        g.setColour(isOn ? button.findColour(textIconOn) : button.findColour(textIconOff));
        g.setFont(juce::FontOptions(10.0f, juce::Font::plain));

        g.drawText(button.getButtonText(), bounds, juce::Justification::centred);
    }

    void AbletonTextSlider::drawRotarySlider(Graphics& g, int x, int y, int width, int height, float sliderPos, float rotaryStartAngle, float rotaryEndAngle, Slider& slider)
    {
        auto boarder = slider.getLocalBounds().toFloat();
        auto bounds = slider.getLocalBounds().toFloat().reduced(1.0f);

        g.setColour(slider.findColour(controlBackground));
        g.fillRect(boarder);

        g.setColour(slider.findColour(controlOff));
        g.fillRect(bounds);

        // Slide
        auto sliderBounds = juce::Rectangle<float>(bounds.getX(), bounds.getY(), bounds.getWidth() * sliderPos, bounds.getHeight());
        g.setColour(slider.findColour(controlOnVariant2));
        g.fillRect(sliderBounds);

        // Text
        g.setColour(slider.findColour(textIconOff));
        g.setFont(juce::FontOptions(12.0f, juce::Font::plain));
        juce::String formattedValue = slider.getTextFromValue(slider.getValue());
        g.drawText(formattedValue, bounds, juce::Justification::centred);
    }

    void AbletonPanSlider::drawRotarySlider(Graphics& g, int x, int y, int width, int height, float sliderPos, float rotaryStartAngle, float rotaryEndAngle, Slider& slider)
    {
        auto bounds = juce::Rectangle<float>((float)x, (float)y, (float)width, (float)height);

        const float labelHeight = bounds.getHeight() * 0.20f;
        const float valueHeight = bounds.getHeight() * 0.15f;

        auto topBounds = bounds.removeFromTop(labelHeight);
        auto bottomBounds = bounds.removeFromBottom(valueHeight);
        auto dialArea = bounds; // The remaining middle 60%

        auto centreX = dialArea.getCentreX();
        auto centreY = dialArea.getCentreY();

        // Radius fits within the middle section (leaving padding for arc stroke + triangle)
        const float strokeThickness = 2.0f;
        const float arrowSize = 4.0f; // Width/Height of triangle

        // Radius takes up space minus stroke and top triangle room
        auto radius = (juce::jmin(dialArea.getWidth(), dialArea.getHeight()) * 0.5f) - arrowSize - strokeThickness - 2.0f;

        // Angles
        auto currentAngle = rotaryStartAngle + sliderPos * (rotaryEndAngle - rotaryStartAngle);
        auto centerAngle = rotaryStartAngle + 0.5f * (rotaryEndAngle - rotaryStartAngle);
        auto angleSpacer = juce::MathConstants<float>::pi / 24.0f;

        const float arcRadius = radius + 2.0f;

        g.setColour(slider.findColour(line));

        // Left inactive segment
        float leftTrackEnd = std::min(centerAngle, currentAngle - angleSpacer);
        if (leftTrackEnd > rotaryStartAngle)
        {
            juce::Path leftTrack;
            leftTrack.addCentredArc(centreX, centreY, arcRadius, arcRadius, 0.0f, rotaryStartAngle, leftTrackEnd, true);
            g.strokePath(leftTrack, juce::PathStrokeType(strokeThickness));
        }

        // Right inactive segment
        float rightTrackStart = std::max(centerAngle, currentAngle + angleSpacer);
        if (rightTrackStart < rotaryEndAngle)
        {
            juce::Path rightTrack;
            rightTrack.addCentredArc(centreX, centreY, arcRadius, arcRadius, 0.0f, rightTrackStart, rotaryEndAngle, true);
            g.strokePath(rightTrack, juce::PathStrokeType(strokeThickness));
        }

        if (std::abs(currentAngle - centerAngle) > 0.001f)
        {
            juce::Path activePath;

            if (currentAngle < centerAngle)
                activePath.addCentredArc(centreX, centreY, arcRadius, arcRadius, 0.0f, currentAngle, centerAngle, true);
            else
                activePath.addCentredArc(centreX, centreY, arcRadius, arcRadius, 0.0f, centerAngle, currentAngle, true);

            g.setColour(slider.findColour(controlOnVariant2));
            g.strokePath(activePath, juce::PathStrokeType(strokeThickness));
        }

        const float triangleGap = 2.0f; // Gap between arc and tip of triangle
        const float tipY = centreY - arcRadius - triangleGap; // Bottom tip sits right above the arc

        juce::Path triangle;
        triangle.addTriangle(centreX - arrowSize, tipY - arrowSize,  // Top Left
            centreX + arrowSize, tipY - arrowSize,  // Top Right
            centreX, tipY);            // Bottom Tip (Points to arc)

        bool isNotCentered = std::abs(currentAngle - centerAngle) > 0.001f;
        g.setColour(isNotCentered ? slider.findColour(controlOnVariant2) : slider.findColour(line));
        g.fillPath(triangle);

        juce::Path pointer;
        pointer.startNewSubPath(centreX, centreY);
        pointer.lineTo(centreX + arcRadius * std::sin(currentAngle), centreY - arcRadius * std::cos(currentAngle));
        g.setColour(slider.findColour(line));
        g.strokePath(pointer, juce::PathStrokeType(1.0f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded));

        g.setColour(slider.findColour(textIconOff));
        g.setFont(juce::FontOptions(11.0f, juce::Font::plain));

        // Top Name Label
        g.drawText(slider.getName(), topBounds, juce::Justification::centred);

        // Bottom Value Text
        juce::String formattedValue = slider.getTextFromValue(slider.getValue());
        g.drawText(formattedValue, bottomBounds, juce::Justification::centred);
    }
}