# Utility

Here you'll find some classes for rapid and easy game development.

There are some classes:

## Scene & SceneManager

Classes to manage game scenes. All game scene must inherit **Scene**. 

### Scene

Control and Draw game scenes.

* **Scene(std::string name):** Constructor with a name to identify the scene
* **std::string getName():** Get the scene's name
* **void update():** Update the scene
* **void draw():** Draw the scene

### SceneManager

Manage the scenes.

* **SceneManager():** Constructor =)
* **void addScene(Scene *scene):** Add a scene to the list
* **void removeScene(std::string name):** Remove and delete from memory a scene added before 
* **void changeCurrentScene(std::string name):** Change the current scene to the scene with tha given name
* **Scene *getCurrentScene():** Get the current scene
* **Scene *getScene(std::string name):** Get a scene with the given name
* **void update():** Update the current scene
* **void draw():** Draw the current scene
