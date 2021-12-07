# -Advanced-Programming-C++
Introduction 
Within this article, by applying object-oriented design and analysis in a hypothetical situation, I and my team will present the general characteristics and principles of the object-oriented model of the program. This report is broken down into 2 sections. The first part will be an introduction to the basic features of object-oriented programming, and an example of an object-oriented programming application. 
Examples and explains of design patterns will be the second part of the report. 
1.	OOP General Concepts  
1.1.	OOP Characteristics 
OOP is a programming paradigm used to develop software and computer programs that concentrate on objects and their interactions. Objects are the same entities, characteristics with the same properties, attributes, behavior, and we come together in real life to be like objects. An object consists of two inputs: properties and methods. Programming techniques can include such features as encapsulation, modularity, polymorphism, and inheritance. (Balagurusamy, 2006) 
Object-oriented programming has many functionalities as follows: 
•	Programs are divided into things called objects.  
•	Objects are distinguished by the design of data structures.  
•	Objects are linked and can communicate with each other through functions.  
•	New functions or new data can be added easily. 
•	In the data structure, functions are all interconnected when running on the object data. 
One aspect that's important when referring to OOP is its fundamental principles. An object typically has four characteristic properties, which are inheritance, encapsulation, polymorphism, and abstraction. 
1.2.	Characteristic 
-	Inheritance: A class 's capacity to derive properties and features from another class is called Inheritance. Inheritance is one of the Object-Oriented Programming Is most important features.  
-	Encapsulation: The purpose of Encapsulation is to ensure users are shielded from "sensitive" data. To do this, the class variables/attributes must be declared as private (cannot be accessed from outside the class). When you want someone to read or change a private member 's interest, you should have methods for the public to get and set. 
-	Abstraction: Data abstraction is one of the most important and essential functionalities of object-oriented programming in C++. Abstraction means only showing important information and covering up the data. Data abstraction refers to supplying the outside world with only basic knowledge about the data, covering the context details or implementation. 
-	Polymorphism: Polymorphism means "multiple types," and it occurs when we have multiple groups that are inheritably related to one another. As defined in the previous chapter; Inheritance allows us to inherit attributes and methods from a specific class. 
Polymorphism uses certain techniques to accomplish various tasks. This helps one to perform a single action in different ways. (Anon, 2016) 
2.	Scenario and UML Diagram  
2.1.	Scenario 
The application provides new, hot songs, charts or many other songs for users of all ages. To use the application, users need to register and log into the application, users can search for any music genre or songs they want. 
-	Users will register and log in / log out to access the system, in the system users can search for music, listen to the music they want to listen to. 
-	Users can also pay fees to get a VIP account to download VIP songs. 
-	Staff can log in / log out of the system and manage user information (only have the right to read customer information). 
-	Admin can login / logout the system, admin will manage the system, manage user and staff accounts (add, edit, delete information), manage songs (add , edit, delete songs) and update, maintain the system. 
2.2.	Use case diagram 
The above example is seen visually by use case diagram. 
Use case diagram:  
![image](https://user-images.githubusercontent.com/94780400/144963506-c188ae93-3a50-4a6c-b34d-e99d14fa9515.png)
Figure 1: Use case diagram 
We can see that there are 3 main actors, based on the above scenario: User, Admin, Staff. Every actor is going to have different use cases and different roles. Functions such as uploading new tracks, removing tracks, or managing device apps are explicitly the responsibility of the administrator. Employees will be responsible for user management, song quest, and account management of payments. And the user has functions like registering an account, finding the song they want, purchasing accounts, upgrading to a VIP account, and finally making payments. In addition, we can see an extended use case by the user when purchasing and paying for the VIP account is managed by the staff. This shows that buying a VIP account is an extended feature that allows customers to download music with a better quality of experience. Also, all users must log in before implementing other features. 
2.3.	Class diagram 
![image](https://user-images.githubusercontent.com/94780400/144963540-4cdb3214-e442-4c8f-bf24-846bad0cdee6.png)
This class diagram describes some classes that can be defined on our program. That includes 7 classes (Staff, User, Admin, SystemApp, 
Normal Account, Vip Account, Song). music application system class includes some basic properties: User( User), Admin( Manage System), Staff, song, Account. Admin class provides a location to App song that chooses by the user, class Admin on a vector, and provides some methods to add or delete the song from the System. SystemApp class includes User, Staff (that means membership lv of the User), and a pointer to access Staff class and Admin. Song class basically contain Name to access and id to AppMusic that showed on the System. User class is abstract class that provides a frame for NormalAccount or VipAccount and provides pay_account() method for User override this to do Signup action. Normal Account and Vip Account is had a relationship with User is Generalization 
(Inheritance). Admin and SystemApp is has own (Association), Staff and SystemApp is Association, user and SystemApp is Association. 
2.4.	Activity diagram 
![image](https://user-images.githubusercontent.com/94780400/144963583-4edb201e-5dd9-475f-95d4-8e07c60093e2.png)
Figure 3: Activity diagram 
Activity diagram illustrating the payment feature when a user purchases a VIP account in a music app. Firstly, they have to Sign up to the system. If the username and password are valid, the application will display a pay Accounts box, if it is invalid, the user must reenter username and password until it is correct. After a pay Accounts box is displayed, the SystemApp must send bill keywords for users. If the user wants pay, the application will show the type of information of the bank box, if the user doesn't want pays, the pay Accounts box will invalid again. After that, users can type password of the bank, and then the system will send code for pays to the user. Next, the confirmation box will display by application for users to make decisions. If they agree, the application will make a contract and pay successful, the user now can download the song or listen to the song then end the activity. 
3.	Design Pattern 
3.1.	Definitions of design patterns 
A design pattern is a complete solution to rising problems in software design. A pattern of design is not a complete design that can be translated directly into code; it is just a definition or blueprint that explains how to solve a problem that can be used in several different circumstances. Object-oriented designs also demonstrate the relationship and interaction between classes or objects, without defining each particular application's classes or objects. Algorithms are not called prototypes, since they solve problems of computation rather than design. Project patterns will make our projects more versatile, changeable, and maintainable. 
The design pattern isn't a particular programming language; it can be found today in most programming languages supported by OOP. In addition, since the design pattern has been drawn by experts, we must restrict the possible errors when using the design pattern (Erich Gamma, Richard Helm., 2008) 
3.2.	Types of design patterns 
The design pattern can basically be divided into 3 key types. 
 Creational: 
Creational design patterns are design patterns that deal with the mechanics of object formation, attempting to construct objects that are relevant to the situation. The basic form of creating objects may trigger design problems or add complexity to the design. Creative design patterns overcome this problem by manipulating this development of objects in some way. (Erich Gamma, Richard Helm., 2008) Creational design patterns include:  
•	Abstract Factory • Factory Method  
•	Builder 
•	Singleton  
•	Object Pool 
•	Prototype 
 Structural: 
Structural design patterns are design patterns that ease the design by finding a clear way of realizing inter-entity relations. 
Structural design patterns include:  
•	Composite  
•	Adapter  
•	Bridge  
•	Decorator  
•	Facade  
•	Flyweight  
•	Proxy  
•	Private Class Data  Behavioral: 
Behavioral design patterns are design patterns which identify and realize common communication patterns among artifacts. Despite this, these trends increase flexibility in the execution of this communication. 
Behavioral design patterns include:  
•	Command  
•	Interpreter  
•	Chain of responsibility  
•	Iterator  
•	Mediator  
•	Memento  
•	Null Object  
•	Observe  
•	State  
•	Strategy  
•	Visitor  
•	Template Method 
3.3.	Design Patterns: Scenarios and Diagrams  
3.3.1.	Structural pattern: Adapter 
Scenario: 
League of Legends is a multiplayer online battlefield arena (MOBA) strategy game consisting of hundreds of champions with different skills and gameplay for players to choose and use in order to against other players or computer opponents. However, the variety of this game also leads to a consequence that to be able to master the champions you love or to be able to own a large enough amount of knowledge and play better in order to achieve higher rankings, players will have to spend a large amount of time learning the tips by themselves. For that reason, my goal is to create a software that can display the names and avatars of all the champions in this game, and when the user clicks on their avatar, basic information about them including the name, skills and tips will appear so the user can find what they need as quickly and conveniently as possible. 
Class Diagram:  
![image](https://user-images.githubusercontent.com/94780400/144963613-a73a7851-1c0e-45e3-8706-6d2f4424239a.png)
Figure 4: Class diagram of adapter pattern 
Above is a class diagram to show the applicability of the adapter pattern to my software. We can easily see that the notification class is the one that belongs to the old system and this class already has some basic data like variable(notification), a constructor with parameters(Notification (notification : string)) and a print method(print()) to print the messages. However, the software that I make requires users to interact with other objects that are characters in order to get the information they want. Notice that the print() method of the notification class in the old system can be reused to print tips for each champion to support the new system using the display_info() method to print other basic information of them like name, skills’ name, so I designed an adapter to print out all the information I want the player to get with only one method, display_info(). The reason my program needs an adapter to print out all the basic information with the corresponding tips for each champion is because the old interface (print()) cannot be applied directly with objects that use the new interface (display_info()) due to name incompatibility. 
3.3.2.	Behavioral Pattern: Observer 
Scenario: 
as we all know after each exam is given by the school. To get the results of each student's grades, the staff of that school will sum up the student's grades in 1 semester including a bar chart showing student scores, 1 student's transcript, 1 person observing the student, the principal and the student score data. The operating procedure will be explained as follows: when a student's score changes in the student's grade data, there will be an announcement to the student observer and then a notice to the bar chart showing Student scores, student transcripts and Principals and works their own way Since then the process of grading and entering scores for each student is completed in the best way. In the situation above. The observer pattern is a behavior pattern that an object, called a subject, maintains a list of its dependencies, named an observer, and automatically notifies them of any changes. 
Class Diagram: 
For the above scenario I can draw the following class diagram: Figure 5: Class diagram of observer pattern 
StudentPoint here is acting as the subject, while the student is the observer. Class relationship is upgrade to aggregation relationship is container-content, one-to-many dependences between a subject (StudentPoint) and many observers (student). Inside theStudentPoint must show the methods to add student (attach), remove devices (detach), and change the Point (notify the observer is the student). The observer interface has only two method, update_(): void. Whenever the StudentPoint updates the point through the add(observer : StudentObserver) : void method, it will notify the StudentObserver() to be able to notify Principal,StudentPointChart and 
StudentPointTable about the Point situation via update() : void method to call get_student () from StudentPoint. Besides, there is Principal, StudentPointChart and StudentPointTable class have a generalization relationship to StudentObserver class due to it inherit the method of update() to update point for student. When the System wants to add students, the program will call each particular method include add_students() through using addstudents() method of add_students () at StudentPoint class to perform add action. 
3.3.3.	Behavioral Pattern: Template Method Scenario: 
Lava is a large car manufacturer, they mainly produce vehicles such as suv, sedan, roadster. The processes in car production and assembly are done by machines and all types of cars have quite similar structure and design. So the group decided to build a software so that automatic devices could be correctly assembled for different types of vehicles. 
Class Diagram: 
![image](https://user-images.githubusercontent.com/94780400/144963650-c4b006ed-5b42-418d-bbc6-78662893c08a.png)
Figure 6: Class diagram for template method pattern 
With the solution above, I will use template method design pattern. Template Method is a behavioral design pattern that specifies an algorithm's skeleton in the superclass but allows subclasses to override the algorithm's unique steps without changing its structure. 
First, Class Car will be treated as the Abstract Class in the structure of the Template Method with perform() as the template function, which will define abstract primitive operations so that subclasses can identify and implement them. The Primitive Operations in the scenario above will be the carPaint() and tireFitting() functions, the Concrete Class (Roadster, SUV, Sedan) will be responsible for implements the primitive operations to perform subclass specific steps of the algorithm. 
3.3.4.	Creational pattern: Singleton 
Scenario: 
Imagine when you listen to music, you have just listened to a good song but you do not know its name, you want to find it to listen again. Therefore, a music history will help you to do this task. Additionally, you can listen to many songs but you have one history. As a result, Singleton will help you to implement this issue. 
Class Diagram: 
![image](https://user-images.githubusercontent.com/94780400/144963664-572dd314-57c3-4534-8a42-abba00e6a59d.png)
Figure 7: Class diagram for singleton pattern 
The MusicHistory has private static attribute history, a private constructor MusicHistory() and a get function getHistory() is also a static function. These 3 factors ensure that this implementation is used Singleton. MusicHistory also has some functions such as: addHistory() (when user listens to music, addHistory will be called), showHistory() (if user wants to show their music history) and deleteHistory() (when user wants to clear their history). MusicHistory is a part of MusicStreaming, so their relationship is aggregation. 
 
Conclusion 
The concepts and characteristics of object-oriented programming were described in a simple, most comprehensive way through the above article, along with a comprehensive scenario to get the most overview of the real-world implementation of object-oriented programming. Even the UML diagrams used in this scenario showed how the program was run. Lastly, the design concepts along with its programming applications are also detailed. 

![image](https://user-images.githubusercontent.com/94780400/144963627-832d367d-b7f0-4303-95ac-aaa9b1cadc99.png)
Figure 5: Class diagram of observer pattern 
StudentPoint here is acting as the subject, while the student is the observer. Class relationship is upgrade to aggregation relationship is container-content, one-to-many dependences between a subject (StudentPoint) and many observers (student). Inside theStudentPoint must show the methods to add student (attach), remove devices (detach), and change the Point (notify the observer is the student). The observer interface has only two method, update_(): void. Whenever the StudentPoint updates the point through the add(observer : StudentObserver) : void method, it will notify the StudentObserver() to be able to notify Principal,StudentPointChart and 
StudentPointTable about the Point situation via update() : void method to call get_student () from StudentPoint. Besides, there is Principal, StudentPointChart and StudentPointTable class have a generalization relationship to StudentObserver class due to it inherit the method of update() to update point for student. When the System wants to add students, the program will call each particular method include add_students() through using addstudents() method of add_students () at StudentPoint class to perform add action. 
3.3.3.	Behavioral Pattern: Template Method Scenario: 
Lava is a large car manufacturer, they mainly produce vehicles such as suv, sedan, roadster. The processes in car production and assembly are done by machines and all types of cars have quite similar structure and design. So the group decided to build a software so that automatic devices could be correctly assembled for different types of vehicles. 
Class Diagram: 
![image](https://user-images.githubusercontent.com/94780400/144963712-94104762-ba71-4d0b-8e42-db70e5227a42.png)
Figure 6: Class diagram for template method pattern 
With the solution above, I will use template method design pattern. Template Method is a behavioral design pattern that specifies an algorithm's skeleton in the superclass but allows subclasses to override the algorithm's unique steps without changing its structure. 
First, Class Car will be treated as the Abstract Class in the structure of the Template Method with perform() as the template function, which will define abstract primitive operations so that subclasses can identify and implement them. The Primitive Operations in the scenario above will be the carPaint() and tireFitting() functions, the Concrete Class (Roadster, SUV, Sedan) will be responsible for implements the primitive operations to perform subclass specific steps of the algorithm. 
3.3.4.	Creational pattern: Singleton 
Scenario: 
Imagine when you listen to music, you have just listened to a good song but you do not know its name, you want to find it to listen again. Therefore, a music history will help you to do this task. Additionally, you can listen to many songs but you have one history. As a result, Singleton will help you to implement this issue. 
Class Diagram: 
![image](https://user-images.githubusercontent.com/94780400/144963732-47cb4841-79c5-4ca9-8e0a-4dbc474be471.png)
Figure 7: Class diagram for singleton pattern 
The MusicHistory has private static attribute history, a private constructor MusicHistory() and a get function getHistory() is also a static function. These 3 factors ensure that this implementation is used Singleton. MusicHistory also has some functions such as: addHistory() (when user listens to music, addHistory will be called), showHistory() (if user wants to show their music history) and deleteHistory() (when user wants to clear their history). MusicHistory is a part of MusicStreaming, so their relationship is aggregation. 
 
Conclusion 
The concepts and characteristics of object-oriented programming were described in a simple, most comprehensive way through the above article, along with a comprehensive scenario to get the most overview of the real-world implementation of object-oriented programming. Even the UML diagrams used in this scenario showed how the program was run. Lastly, the design concepts along with its programming applications are also detailed. 
