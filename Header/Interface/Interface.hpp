#ifndef RANDOMJAM_INTERFACE_HPP
#define RANDOMJAM_INTERFACE_HPP

#include "Utils/Updatable.hpp"
#include "Utils/Drawable.hpp"
#include "Interface/NPanel.hpp"
#include "Interface/NLabel.hpp"
#include "Interface/NButton.hpp"
#include "Interface/NTextField.hpp"
#include "Interface/InputHandler.hpp"
#include "Interface/AnimatableObject.hpp"

class Interface : public Updatable, public Drawable
{
public:
    explicit Interface(bool debug, InputHandler *inputHandler);
    virtual ~Interface();

    virtual void draw(sf::RenderWindow *window);
    virtual void update(double time);
    void handleInput(sf::Event &event);

    NPanel *getContentPane();

    void setContentPane(NPanel *pane);

protected:
    bool m_debug;
    bool m_optionActive;
    InputHandler *m_inputHandler;

private:
    NPanel m_contentPane;
    std::vector<VisualObject*> m_Interfaces;

    void updateInterfaces(double time);
};

#endif //RANDOMJAM_INTERFACE_HPP
