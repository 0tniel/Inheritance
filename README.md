# Inheritance
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Inheritance in Object-Oriented Programming</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 20px;
            line-height: 1.6;
        }
        h1 {
            color: #2c3e50;
        }
        h2 {
            color: #34495e;
        }
        p {
            margin-bottom: 15px;
        }
        ul {
            margin: 10px 0;
        }
    </style>
</head>
<body>

    <h1>Inheritance in Object-Oriented Programming</h1>

    <p>Inheritance is one of the most important features of Object-Oriented Programming (OOP). It allows new classes to derive properties and characteristics from existing classes.</p>

    <h2>Key Concepts</h2>
    <ul>
        <li><strong>Base Class (Parent Class):</strong> The existing class from which properties are inherited.</li>
        <li><strong>Derived Class (Child Class):</strong> The new class that inherits properties from the base class.</li>
    </ul>

    <h2>How Inheritance Works</h2>
    <p>The derived class inherits attributes and methods from the base class, allowing for code reuse and the creation of hierarchical class structures.</p>

    <h2>Benefits of Inheritance</h2>
    <ul>
        <li>Code Reusability: Allows existing code to be reused, reducing redundancy.</li>
        <li>Logical Hierarchy: Facilitates the creation of a natural class hierarchy.</li>
        <li>Polymorphism: Enables methods to be used interchangeably across classes.</li>
    </ul>

    <h2>Example</h2>
    <p>Here is a simple example of inheritance in a programming context:</p>
    <pre>
class Animal {
    void eat() {
        System.out.println("This animal eats food.");
    }
}

class Dog extends Animal {
    void bark() {
        System.out.println("The dog barks.");
    }
}
    </pre>

    <p>In this example, <strong>Dog</strong> is the derived class that inherits from the <strong>Animal</strong> base class.</p>

</body>
</html>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Modes and Types of Inheritance</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 20px;
            line-height: 1.6;
        }
        h1 {
            color: #2c3e50;
        }
        h2 {
            color: #34495e;
        }
        p {
            margin-bottom: 15px;
        }
        ul {
            margin: 10px 0;
        }
    </style>
</head>
<body>

    <h1>Modes of Inheritance</h1>

    <h2>1. Public Mode</h2>
    <p>If a subclass is derived from a public base class:</p>
    <ul>
        <li>Public members of the base class remain public in the derived class.</li>
        <li>Protected members of the base class remain protected in the derived class.</li>
    </ul>

    <h2>2. Protected Mode</h2>
    <p>If a subclass is derived from a protected base class:</p>
    <ul>
        <li>Both public and protected members of the base class become protected in the derived class.</li>
    </ul>

    <h2>3. Private Mode</h2>
    <p>If a subclass is derived from a private base class:</p>
    <ul>
        <li>Both public and protected members of the base class become private in the derived class.</li>
    </ul>

    <h1>Types of Inheritance</h1>

    <h2>1. Single Inheritance</h2>
    <p>In single inheritance, a class is allowed to inherit from only one class. This means one subclass is inherited by one base class only.</p>

    <h2>2. Multiple Inheritance</h2>
    <p>In multiple inheritance, a class can inherit from more than one class. This means one subclass is derived from multiple base classes.</p>

    <h2>3. Multilevel Inheritance</h2>
    <p>In multilevel inheritance, a derived class is created from another derived class, forming a chain of inheritance.</p>

    <h2>4. Hierarchical Inheritance</h2>
    <p>In hierarchical inheritance, more than one subclass is derived from a single base class. This means multiple derived classes share a common base class.</p>

</body>
</html>

