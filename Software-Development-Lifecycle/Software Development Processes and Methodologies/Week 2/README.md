# Software Development Processes : Part 2

- **TMTOWTDI** — there's more than one way to do it
    - There may be many different solutions that can be applied to your specific problem. The most popular solution is always good to consider, but it should not limit the designer's view

**Cutover Strategies:**

   - Hot failover
   - Warm standby
   - Cold back-up (storage)
   
**Software Testing: Strategies**

   - Regression Testing (big part of Incremental Testing)
   - Top-down Testing
   - Bottom-up Testing
   - Back to Back Testing
   
**Software Testing: Perspectives**

   - Black-box Testing
   - White-box Testing


# 🔹 Design
## 🔺 1. Software Design: Introduction

1. Software design is the process of transforming the stated problem into a ready-to-use implementation.

    - [x] False
    - [ ] True
    > The product of software design is not an actual implementation, but rather a full description of the solution, which can then be used by the code development team.

2. Abstract solutions do not require extensive domain knowledge and effectively reduce the costs during the software design phase.

    - [ ] True
    
    > Domain knowledge is the first and most fundamental necessity in order to achieve quality results during software design (including abstract solutions!).
    
    - [x] False
    
3. It is often advised that abstract solutions do not provide optimization details regarding the implementation.

    - [x] True
    - [ ] False
    
4. When it comes to software design, it is always best to follow a solution that is widely popular in the industry

    - [x] False
    - [ ] True
    
    > **TMTOWDTI** (there's more than one way to do it)!!! There may be many different solutions that can be applied to your specific problem. The most popular solution is always good to consider, but it should not limit the designer's view
    
5. While a solution coming from software design does not include implementation details, there are still common cases where pseudocode may be provided to correctly capture the sense of a complex algorithm.

    - [x] True
    - [ ] False
    
## 🔺 2. Software Design: Modularity

1. Check all that apply: The four aspects of modularity are...

    - [x] Information Hiding
    - [x] Cohesion
    - [x] Coupling
    - [ ] Data Hiding
    - [ ] Components
    - [ ] Sort Functions
    - [x] Data Encapsulation
    
 2. Which of the four aspects of modularity is defined as: How well modules work together.
 
    - [x] Coupling
    - [ ] Cohesion
    - [ ] Information Hiding
    - [ ] Data Encapsulation
    
    > This is the definition of coupling.

 3. Which of the four aspects of modularity can be described as: Abstracting away implementation details.
 
    - [ ] Cohesion
    - [ ] Coupling
    - [ ] Data Encapsulation
    - [x] Information Hiding
    
    > This is the definition of information hiding.
    
4. Which of the four aspects of modularity can be described as: How well a module meets a single well-defined goal.

    - [x] Cohesion
    - [ ] Data Encapsulation
    - [ ] Coupling
    - [ ] Information Hiding
    
    > This is the definition of cohesion.

5. Which of the four aspects of modularity can be described as: Containment of constructs and concepts within a module.

    - [ ] Coupling
    - [ ] Information Hiding
    - [ ] Cohesion 
    - [x] Data Encapsulation
    
    > This is the definition of data encapsulation.
    
6. Three aspects of ______ can be described as (1) Decomposability, (2) Composability, and (3) Ease of Understanding.

    - [x] Modularity
    - [ ] Coupling
    - [ ] Cohesion
   
   > Modularity is when a complex system is broken down into smaller parts. This is done through decomposability (divide and conquer strategy), composability (put it back together again), and ease of understanding.
    
7. You have a sort function that provides no details on which sorting algorithm is used. This is an example of which aspect of modularity?

    - [ ] Coupling
    - [ ] Cohesion
    - [x] Information Hiding
    - [ ] Data Encapsulation
    
    > This is a great example of information hiding.
    
8. A benefit to using ______ is that you know if your data is corrupted, then it must have been corrupted by the module.
   
    - [ ] Cohesion
    - [x] Data Encapsulation
    - [ ] Coupling
    - [ ] Information Hiding
    
## 🔺 3. Software Design: Coupling

1. Choose the most accurate answer: Low coupling aids in...

    - [ ] lower corruption rate of data
    - [ ] Decomposability
    - [ ] Abstracting away complex information 
    - [x] ensuring that changes don't cross boundaries of modules
    
    > What we hope to gain through low coupling is that changes don't cross the boundaries between modules.

2. Which of the following statements about coupling are true?

    - [ ] Coupling measures the strength of connections between components.
    - [ ] Loose coupling makes it unlikely that changes will be propogated across components.
    - [ ] Shared variables and control information leads to tight coupling.
    - [ ] Loose coupling is partly achieved through message passing.
    - [x] All of the above
    
    > All of these are true about coupling.
    
3. The goal in low coupling is to ensure that changes don't cross the boundaries of modules.

    - [x] true
    - [ ] false
    
    > This statement is true. This is the goal with low coupling.

4. The The three types of tight coupling are:

    - [ ] There is no such thing as tight coupling
    - [ ] Control; Data Structure; Message
    - [x] Content; Common; External
    - [ ] Data; Message; None
    
    > Tight coupling can be content coupling, common coupling, or external coupling.

5. Module A relies directly on local data of module B. This is an example of what type of coupling?

    - [ ] Tight external coupling
    - [ ] Tight common coupling
    - [x] Tight content coupling
    
    > Tight content coupling is exactly what this example defines.

6. Modules A and B both rely on global data or a global variable. This is an example of what type of coupling?

    - [ ] Tight content coupling
    - [x] Tight common coupling
    - [ ] Tight external coupling
    
    > Tight common coupling is exactly what this example defines.

7. Modules rely on externally imposed format (or protocol or interface). This is an example of what type of coupling?

    - [x] Tight external coupling
    - [ ] Tight content coupling
    - [ ] Tight common coupling
    
    > Tight external coupling is exactly what this example defines.

8. The two types of medium coupling are:

    - [x] Control; Data Structure
    - [ ] Message; None
    - [ ] Content; Common
    - [ ] Data; Message
    
    > Medium coupling can be control coupling or data structure coupling.

9. Module A controls the logical flow of module B. This is an example of what type of coupling?

    - [ ] Medium data structure coupling
    - [x] Medium control coupling
    
    > Medium control coupling is exactly what this example defines.

10. Module A and B both rely on the same composite data structure. This is an example of what type of coupling?

    - [x] Medium data structure coupling
    - [ ] Medium control coupling
    
    > Medium data structure coupling is exactly what this example defines.

11. The three types of loose coupling are:

    - [ ] Control; Data Structure; Loose
    - [ ] Data; Message; Data Structure
    - [x] Data; Message; None
    - [ ] Content; Common; External
    
    > Loose coupling can be data coupling, message coupling, or no coupling.

12. Modules only share parameters. This is an example of what type of coupling?

    - [ ] Loose no coupling
    - [x] Loose data coupling
    - [ ] Loose message coupling
    
    > Loose data coupling is exactly what this example defines.

13. The loosest type of coupling; components only communicate through parameters or message passing. This is an example of what type of coupling?

    - [ ] Loose data coupling
    - [x] Loose message coupling
    - [ ] Loose no coupling
    
    > Loose message coupling is exactly what this example defines.
    
## 🔺 4. Software Design: Cohesion

1. Choose the most accurate answer: Cohesion describes...

    - [x] how well everything within a module fits together.
    - [ ] loose coupling.
    - [ ] decomposability.
    - [ ] how changes do not cross boundaries of modules.
    
    > Cohesion describes how well everything within a module fits together.

2. Which of the following statements about cohesion is true?

     - [ ] Cohesion measures how well everything within a module fits together.
     - [ ] Describes the implementation of a single logical entity or function.
     - [ ] Represents a desirable design attitude.
     - [ ] High cohesion is the aim in software development.
     - [x] All of the above
     
     > All of these are true about cohesion.

3. The goal in real-life software development is to aim for object and functional cohesion and anything less than this should be justified.

    - [x] True
    - [ ] False
    
    > This statement is true. The strongest cohesion isn't always practical or possible, but object and functional cohesion should always be possible.

4. The four types of weak cohesion are:

    - [ ] Coincidental, temporal, sequential, logical association
    - [ ] Communicational, sequential, object, functional
    - [ ] There is no such thing as loose cohesion
    - [x] Coincidental, temporal, procedural, logical association
    
    > Weak cohesion types consist of coincidental, temporal, procedural, and logical association.

5. Parts of modules are together in the same file. This is an example of what type of cohesion?

    - [ ] Temporal cohesion
    - [ ] Procedural cohesion
    - [x] Coincidental cohesion
    - [ ] Logical association cohesion
    
    > This is an example of weak, coincidental cohesion.

6. Different pieces of code are activated at the same time. This is an example of what type of cohesion?

    - [ ] Coincidental cohesion
    - [ ] Procedural cohesion
    - [ ] Logical association cohesion
    - [x] Temporal cohesion
    
    > This is an example of weak, temporal cohesion

7. One piece of code runs after the other. This is an example of what type of cohesion?

    - [ ] Logical association cohesion
    - [x] Procedural cohesion
    - [ ] Temporal cohesion
    - [ ] Coincidental cohesion
    
    > This is an example of weak, procedural cohesion

8. Components do similar but separate things. This is an example of what type of cohesion?

    - [x] Logical association cohesion 
    - [ ] Temporal cohesion
    - [ ] Procedural cohesion
    - [ ] Coincidental cohesion
    
    > Logical association occurs when modules/components do logically similar things.

9. The two types of medium cohesion are:

    - [ ] There is no such thing as medium cohesion
    - [ ] Sequential, logical association
    - [x] Communicational, sequential
    - [ ] Coincidental, temporal
    
    > Medium cohesion is either communicational or sequential.

10. All elements of a component operate on the same input or produce the same output. This is an example of what type of cohesion?

    - [ ] Sequential Cohesion
    - [x] Communicational Cohesion
    
    > This is a great example of medium, communicational cohesion.
    
11. One component's output provides the input to another component. This is an example of what type of cohesion?

    - [ ] Communicational Cohesion
    - [x] Sequential Cohesion
    
    > This is an example of medium, sequential cohesion.

12. The two types of strong cohesion are:

    - [x] Object, functional
    - [ ] Coincidental, temporal
    - [ ] Object, strong
    - [ ] Communicational, sequential
    
    > Strong cohesion is either described as object cohesion or functional cohesion.

13. Each operation in a module is provided to allow object attributes to be modified or inspected. This is an example of what type of cohesion?

    - [x] Object Cohesion
    - [ ] Functional Cohesion
    
    > This is an example of strong, object cohesion.

14. Every part of a component is necessary for a single well-defined behavior. This is an example of what type of cohesion?

    - [ ] Object Cohesion
    - [x] Functional Cohesion
    
    > This is an example of strong, functional cohesion.

15. True or False: inheritance strengthens cohesion.

    - [ ] True
    - [x] False
    
    > This statement is false. Inheritance always weakens cohesion. To really understand a component, you must examine the superclass(es).

# 🔹 Implementation
## 🔺 1. Implementation

1. Why should you program when you are alert?

    - [ ] Sleep deprivation leads to mistakes.
    - [ ] Output falls drastically after working 50+ hours per week.
    - [x] All of the above
    
    > All of these are good reasons why you should program when well-rested and alert.

2. Which of the following are examples of 'Write code for people not computers'? Select three.

    - [x] Let your code (variable names, function names, etc.) explain HOW it does what it does.
    - [x] Choose informative variable names.
    - [ ] Do not code while sleep deprived.
    - [x] In your comments, explain WHY the code does what it does.

3. Fill in the blank. Write ____, _____, and _____ before writing functional code.

    - [ ] Comments; Benchmarks; Tips for Use.
    - [ ] System Specifications; User Guide; Exception Handling.
    > The user guide is the problem here. While it can be helpful to know how you want the system to run, this is not required before writing the functional code.
    - [x] Comments; Tests; Exception Handling.
    > Write the comments, exception handling, and tests before writing functional code. This is how you know your functional code is actually doing what you mean it to do.

4. If you write the same code more than once...

    - [ ] You did something wrong.
    - [ ] It's okay.
    - [x] Put that code into a method.
    > If you write the same code more than once, usually this means you will be writing it again somewhere else. Break that into a small method.

5. True or False: Every method can be written without side effects.

    - [ ] True.
    - [x] False.
    > This is not always possible. You should always try to minimize side effects, but there are times when side effects are impossible to avoid.

## 🔺 2. Deployment

1. Deployment occurs in the end stage of active development.

    - [x] True
    - [ ] False
    
    > Deployment is the end stage of active development and occurs between testing and product maintenence.

2. Product deployment should encapsulate three main focus areas. What are they?

    - [x] Plan for recovery in case of failure
    - [x] Planned steps
    > The focus areas of deployment should include planned steps for deployment, problem areas within those steps, and a plan to recover in case of failure
    - [ ] Description of the physical environment
    - [x] Problem areas

3. Concerns to address in your deployment plan include:

    - [ ] Physical environment requirements
    - [ ] Hardware requirements
    - [ ] Documentation
    - [ ] 3rd party software requirements
    - [ ] Training
    - [ ] Software being deployed
    - [ ] Database-related activities
    - [x] All of the above
    
## 🔺 4. Deployment: Rollback

1. A rollback is the reversal of actions completed during deployment with the intent to never revert a system back to its previous working state.

    - [ ] true
    - [x] false
    > The intent is always to revert a system back to its previous working state in a rollback.

2. What are some reasons why you would need a rollback plan?

    - [x] Installation doesn't go as expected.
    > If installation doesn't go as expected or the problem ends up taking longer to fix than the installation window allows.
    - [ ] It is the end goal in product deployment.
    - [x] Fixing the problem ends up taking longer than the window allows.
    > If installation doesn't go as expected or the problem ends up taking longer to fix than the installation window allows.
    - [ ] Database management in complex systems.
    - [ ] All of the above

3. Deployment without a rollback plan should occasionally occur. Especially when the installation involves deleting files.

    - [ ] true
    - [x] false
    > Deployment without a rollback plan should never happen. In the case of no possibility of a rollback (i.e. deleting files), the rollback plan should detail this and be given special attention.
    
## 🔺 5. Deployment: Cutover Strategies

1. The three cutover strategies are...

    - [x] Cold backup
    - [ ] Hot standby
    - [ ] Cold failover
    - [x] Hot failover
    - [x] Warm standby
    - [ ] Warm failover

2. If you need to have a cutover strategy where the replacement machine is ready for a full setup and install, then you would choose which of the following cutover strategies?

    - [ ] Hot failover
    - [ ] Warm standby
    - [x] Cold backup
    - [ ] Warm failover
    
    > Cold backup storage is when the replacement machine is available in terms of hardware or server, but none of the installation or data replication is done.

3. If you need to have a cutover strategy where the replacement services are ready for the redirection of data with no installation, then you would choose which of the following cutover strategies?

    - [ ] Hot backup
    - [x] Hot failover
    > Hot failover is when everything is set up in terms of hardware, the installation is up to date, and most of the data has already been replicated. It is just ready and waiting for a transaction.
    - [ ] Warm standby
    > Warm standby is when the machine is running, but still requires an installation. When the machine has full installation and is set up and running, what strategy is that?
    - [ ] Cold backup

4. If you need to have a cutover strategy where the replacement machine is running and ready for installation, then you would choose which of the following cutover strategies?

    - [ ] Hot failover
    > Hot failover is when everything is set up in terms of hardware, the installation is up to date, and most of the data has already been replicated. It is just ready and waiting for a transaction.
    - [x] Warm standby
    > Warm standby is when the machine is ready for installation.
    - [ ] Cold backup
    - [ ] Cold failover

5. There is no difference between load balancing and hot failover.

    - [ ] true
    - [x] false
    > Load balancing is when the transaction load is distributed over multiple machines or servers. A hot failover is when there is multiple machines or servers, but the normal transaction load is not distributed - that machine is there for backup in case of failure.
    
# 🔹 Testing and Verification

## 🔺 1. Software Testing: Introduction

1. Test data represents possible inputs that are provided to the _____ for the purposes of testing

    - [ ] system
    - [ ] oracle
    - [x] both the system and the oracle

2. The oracle uses information provided from test cases to decide the correctness of the software under test

    - [x] True
    - [ ] False

3. Test cases are composed of _______

    - [x] test data
    - [ ] system (actual) outputs
    - [x] expected outputs

4. Manual oracles are sufficient and effective for the majority of real-world applications

    - [ ] True
    - [x] False

5. Choose the correct True-False pair: An error is the manifestation of a failure. A fault is the manifestation of an error.

    - [ ] True, True
    - [ ] False, False
    - [x] False, True
    - [ ] True, False

6. It is possible for errors to remain undiscovered as long as the erroneous ________ is never used

    - [x] component
    - [ ] test data 
    - [ ] test case 
    - [ ] output

7. Software testing can be used to prove the absense of failures in a module, but not the absense of faults

    - [ ] True
    > Incorrect
    >It is impossible to show the absense of faults/error/failures using software testing! The best we can do is to show that such issues exist under certain circumstances.
    - [x] False
    
 # 🔴 Quiz: Design, Implementation, and Testing 🔴
 
 1. Where does software design fit in the traditional waterfall software development lifecycle?

    - [ ] Between specification and architecture
    - [x] Between architecture and implementation
    - [ ] Between implementation and deployment
    - [ ] Before requirements

2. Which of the following is NOT an aspect of software design

    - [x] Polymorphism
    - [ ] Coupling
    - [ ] Modularity
    - [ ] Cohesion

3. The ability to use a built-in function of a programming language to generate a random number is an example of which of the following?

    - [ ] Modularity
    - [ ] Cohesion
    - [ ] Coupling
    - [x] Information hiding

4. Analyzing the extent to which other modules must change when a module is modified is an example of which of the following?

    - [ ] Information hiding
    - [x] Coupling
    - [ ] Modularity
    - [ ] Cohesion

5. When all of the responsibilities of a module are easily classified as being strongly related, this is an example of high what?

    - [ ] Information hiding
    - [ ] Modularity
    - [x] Cohesion
    - [ ] Coupling

6. **Which of the following is most preferred?** "Software Design - Coupling"

    - [ ] **Having two modules rely on the same global information structure (common coupling)**
    - [ ] Allowing one module to affect the program flow of another via the use of a state message (message coupling)
    - [ ] **Having more than one module rely on the same version of the RSS standard (external coupling)**
    - [ ] **Allowing one module to affect the program flow of another via the use of a flag (control coupling)**

7. Which of the following is LEAST desirable?

    - [ ] including functionality which entirely encapsulates all the necessary function for a specific task
    - [x] including functionality which occurs around the same time
    - [ ] including functionality which relys on the same input
    - [ ] including functionality which modifies an object's own attributes

8. Which of the following are necessary before proper testing?

    - [x] inputs, expected output, and an oracle
    - [ ] inputs which cause issues
    - [ ] inputs, expected output, an oracle, and the actual output
    > You can't have actual output BEFORE proper testing
    - [ ] inputs and expected output

9. **Which of the following is an mistake in code which has not yet been activated?** "Software Testing - Introduction"

    - [ ] Fault
    - [x] Effective error
    - [ ] Failure
    - [ ] **Latent error** 

10. Which of the following is an example of validation?

    - [ ] software recognizes incorrect inputs
    - [ ] use of the software provides the correct results as documented
    - [x] software is well-received by the user
    - [ ] ensuring the system locks out an account after three failed log-in attempts

11. In your current project, you have access to some intern development resources, which are not currently operating at full capacity. You also know that the testing timeline will be truncated, due to delays in critical-path module development. Which strategy should you employ?** "Software Testing - Strategies"

    - [x] Utilize the intern resources to design and develop drivers and stubs, while work continues on critical-path module development
    - [ ] Make no changes to the current project testing or development allocations, utilizing intern resources to create documentation.
    - [ ] Allow the testing team to work without (or with quick-to-develop) drivers and stubs, while using intern resources to aid critical-path development
    - [ ] Allow the testing team to work without (or with quick-to-develop) drivers and stubs, and utilize the intern resources to aid testing once all critical-path development is complete

12. When is testing complete?

    - [ ] When you have completed all the tests in the test plan
    - [ ] When you have tested every input
    - [ ] When you find the last bug
    - [x] When you run out of time

13. Which of the following is an example of black-box testing?

    - [ ] Developing test cases to exercise error-prone constructs
    - [ ] Developing additional test cases to force a division by zero
    - [x] Developing test cases based on typical user behavior
    - [ ] Developing additional tests when every if statement does not evaluate both true and false once given the current test suite

9. Which of the following is when the operation of a system differs from what the user expects?

    - [x] Failure
    - [ ] Fault
    - [ ] Effective error
    - [ ] Latent error

9. Which of the following is a mistake made by the developer?

    - [x] Fault
    - [ ] Effective error
    - [ ] Failure
    - [ ] Latent error

9. Which of the following is an mistake in code which is found in code review?

    - [ ] Failure
    - [x] Latent error
    - [ ] Fault
    - [ ] Effective error


