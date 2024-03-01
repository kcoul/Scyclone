#include "MainWindow.h"

namespace AudioApp
{
class GuiAppTemplateApplication : public juce::JUCEApplication
{
public:
    const juce::String getApplicationName() override { return "Scyclone"; }
    const juce::String getApplicationVersion() override { return "1.0.0"; }
    bool moreThanOneInstanceAllowed() override { return true; }

    void initialise(const juce::String& /*commandLine*/) override
    {
        mainWindow = std::make_unique<MainWindow>(getApplicationName());
    }

    void shutdown() override { mainWindow.reset(); }

    void systemRequestedQuit() override { quit(); }

    void anotherInstanceStarted(const juce::String& /*commandLine*/) override {}

private:
    std::unique_ptr<MainWindow> mainWindow;
};

// This macro generates the main() routine that launches the app.
START_JUCE_APPLICATION(GuiAppTemplateApplication)

} // namespace GuiApp
