# Single Inheritance Program

This C++ program demonstrates **single inheritance** where the `Dep` (Department) class inherits from the `Uni` (University) class. The program showcases how inheritance is used to create a relationship between a base class (`Uni`) and a derived class (`Dep`).

## Algorithm

1. **Start**  
2. **Define the `Uni` class**:  
   - Declare a public string variable `uni` to store the university name.  
   - Define a constructor that initializes `uni` with the value "Symbiosis:".  
   - Define a method `discipline()` that outputs the string "Engineering".  
3. **Define the `Dep` class** that inherits from the `Uni` class:  
   - Declare a public string variable `dept` to store the department name.  
   - Define a constructor that initializes `dept` with the value "Electronics & Communication".  
4. **In the `main()` function**:  
   - Create an object `u1` of the `Dep` class.  
   - Call the `discipline()` method of the `u1` object to display "Engineering".  
   - Output the `uni` and `dept` attributes of the `u1` object to display the university and department details.  
5. **Stop**  

## Explanation

- The program demonstrates **single inheritance**, where the `Dep` class (derived class) inherits the properties and methods of the `Uni` class (base class). 
- The `Uni` class contains the university name and a method to display the discipline, while the `Dep` class contains the department name.
- The `main()` function creates an object of the `Dep` class and uses it to display both the university and department information.

# Multiple Inheritance Program

This C++ program demonstrates **multiple inheritance** where the `Car` class inherits from both the `Vehicle` and `Specs` classes. The program showcases how multiple inheritance is used to combine properties and methods from more than one base class into a single derived class.

## Algorithm

1. **Start**  
2. **Define the `Vehicle` class**:  
   - Declare a public string variable `company` initialized with "Ford".  
   - Define a method `type()` that outputs the string "Mustang".  
3. **Define the `Specs` class**:  
   - Declare a public string variable `mileage` initialized with "8 kmpl".  
   - Define a method `colour()` that outputs the string "Grey".  
4. **Define the `Car` class** that inherits from both `Vehicle` and `Specs` classes:  
   - Declare a public string variable `seater` initialized with "4 seater".  
5. **In the `main()` function**:  
   - Create an object `f2` of the `Car` class.  
   - Call the `colour()` method of the `f2` object to display "Grey".  
   - Output the `company` attribute and call the `type()` method to display the car company and model (Ford Mustang).  
   - Output the `seater` and `mileage` attributes to display the seating capacity and mileage details.  
6. **Stop**

## Explanation

- The program demonstrates **multiple inheritance**, where the `Car` class (derived class) inherits from both the `Vehicle` and `Specs` classes (base classes). 
- The `Vehicle` class contains the company name and type of car, while the `Specs` class contains the mileage and color of the car.
- The `Car` class combines these properties and methods and introduces its own attribute, `seater`.
- The `main()` function creates an object of the `Car` class and uses it to display all the relevant details of the car, including its company, model, color, seating capacity, and mileage.

# Multilevel Inheritance Program

This C++ program demonstrates **multilevel inheritance**, where the `Restaurant` class inherits from the `Dish` class, and the `Dish` class inherits from the `Food` class. The program showcases how inheritance works in a hierarchical structure where each derived class inherits from its immediate base class.

## Algorithm

1. **Start**  
2. **Define the `Food` class**:  
   - Declare a public string variable `cuisine` initialized with "Indian".  
   - Define a method `type()` that outputs the string "Asian".  
3. **Define the `Dish` class** that inherits from the `Food` class:  
   - Declare a public string variable `dish` initialized with "Biryani".  
4. **Define the `Restaurant` class** that inherits from the `Dish` class:  
   - Declare a public string variable `name` initialized with "Spice Kitchen".  
5. **In the `main()` function**:  
   - Create an object `f3` of the `Restaurant` class.  
   - Call the `type()` method of the `f3` object to display the cuisine type "Asian".  
   - Output the `cuisine` and `dish` attributes to display the cuisine and dish details (Indian: Biryani).  
   - Output the `name` attribute to display the restaurant name.  
6. **Stop**

## Explanation

- The program demonstrates **multilevel inheritance**, where the `Restaurant` class (derived class) inherits from the `Dish` class, and the `Dish` class inherits from the `Food` class. 
- The `Food` class contains information about the cuisine and its type.
- The `Dish` class inherits the `Food` class and adds its own attribute for the specific dish.
- The `Restaurant` class inherits both `Food` and `Dish` properties and introduces its own attribute for the restaurant name.
- The `main()` function creates an object of the `Restaurant` class and uses it to display the cuisine type, dish, and the restaurant name.

# Hierarchical Inheritance Program

This C++ program demonstrates **hierarchical inheritance**, where multiple derived classes (`Bootcut`, `WL`, and `Skinny`) inherit from a single base class (`Jeans`). The program showcases how each derived class can have its own attributes while still inheriting properties and methods from the base class.

## Algorithm

1. **Start**  
2. **Define the `Jeans` class**:  
   - Declare a public string array `type[3]` initialized with "Bootcut", "Wide Leg", and "Skinny".  
   - Define a method `brand()` that outputs the string "H&M - Denim".  
3. **Define the `Bootcut` class** that inherits from the `Jeans` class:  
   - Declare a public string variable `color` initialized with "Dark Blue".  
4. **Define the `WL` class** that inherits from the `Jeans` class:  
   - Declare a public string variable `color` initialized with "Black".  
5. **Define the `Skinny` class** that inherits from the `Jeans` class:  
   - Declare a public string variable `color` initialized with "Grey".  
6. **In the `main()` function**:  
   - Create an object `j1` of the `Bootcut` class, call its `brand()` method, and output the bootcut jeans type and color.  
   - Create an object `j2` of the `WL` class, call its `brand()` method, and output the wide-leg jeans type and color.  
   - Create an object `j3` of the `Skinny` class, call its `brand()` method, and output the skinny jeans type and color.  
7. **Stop**

## Explanation

- The program demonstrates **hierarchical inheritance**, where the `Jeans` class is the base class and has three derived classes: `Bootcut`, `WL` (Wide Leg), and `Skinny`. 
- The `Jeans` class contains an array representing different types of jeans and a method to display the brand.
- Each derived class inherits the attributes and methods of the `Jeans` class and also has its own specific `color` attribute.
- The `main()` function creates objects for each derived class (`Bootcut`, `WL`, and `Skinny`), displaying the brand, type of jeans, and color for each.
