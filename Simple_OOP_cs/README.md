Vehicle Management System

The Vehicle Management System is a sophisticated C# console application built on the .NET 8.0 framework. It serves as a comprehensive demonstration of Object-Oriented Programming (OOP), modeling a real-world automotive hierarchy that balances general data management with high-performance specializations.

Project Overview

The system is architected around a central Vehicle base class that defines the core "DNA" for all automotive entities. It highlights the evolution of software design through the following pillars:

Brand-Specific Specialization: Implements unique property sets and logic for luxury manufacturers, such as Audi (Manufacturer Location) and Porsche (Tuning Price/Type).

Deep Inheritance Chains: Showcases multi-level inheritance where the S8 class extends Audi, which in turn extends the Vehicle base, demonstrating how specialized models build upon layers of existing logic.

Robust Object Composition: Integrates a dedicated Owner class to encapsulate personal data (Name and Age), allowing the Vehicle to delegate "Greetings" and social interactions to the owner instance.

Interface-Driven Design: Utilizes the ITrasnsport_Method interface to enforce a consistent behavioral contract across the entire object hierarchy.
