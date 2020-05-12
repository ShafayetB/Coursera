# Software Development Models: Traditional Models

## 🔹 Waterfall Models

  - **Predictive** (Waterfall model, V-Model, Sashimi Model)
  - **Adaptive** (Unified Process, Spiral Model)
___________

  - Incremental
  - Iterative
  - Both
  - None
_________________

### 🟧 Waterfall Model

<img src="https://github.com/ElizaLo/Software-Development-Lifecycle/blob/master/Software%20Development%20Processes%20and%20Methodologies/Week%203/Waterfall_model.svg" width="700" height="500">

![Waterfall 1.png](https://github.com/ElizaLo/Software-Development-Lifecycle/blob/master/Software%20Development%20Processes%20and%20Methodologies/Week%203/Waterfall%201.png)
_______________________

### 🟧 V-Model 

![V-Model](https://github.com/ElizaLo/Software-Development-Lifecycle/blob/master/Software%20Development%20Processes%20and%20Methodologies/Week%203/V-Model.png)

![V-Model 1.png](https://github.com/ElizaLo/Software-Development-Lifecycle/blob/master/Software%20Development%20Processes%20and%20Methodologies/Week%203/V-Model%201.png)
________________________________

### 🟧 Sashimi Model

![Sashimi model.png](https://github.com/ElizaLo/Software-Development-Lifecycle/blob/master/Software%20Development%20Processes%20and%20Methodologies/Week%203/Sashimi%20model.png)

_________________________

### 🔺 Waterfall methods

1. In waterfall method, you get your product in one big bang deployment

  - [x] True
  - [ ] False
  
  > That is true because all of the implementation happens in one shot. Think about what customer sees. Do they get all at once?

2. Sashimi model may help decrease the time duration of the project by

  - [x] Overlapping the phases
  - [ ] Adding more skilled resources of the project
  
  > The main idea behind the Sashimi model is to overlap the phases so that later phases can start before the previous phase ends. This sometimes helps reduce the total project duration. 

3. Which of the following are true for the V-model? Select two.

  - [x] It is a predictive model.
  > The V-model is a predictive model as requirements are expected to be well known earlier in the process and requirement changes are costly in later phases.
  - [x] Testing-related activities are started earlier in the process.
  > In the V-model, we map each of the earlier phases to a later validation phase. This helps get testing activities started earlier in the project's development process.
  - [ ] Requirement changes are welcomed in all phases of this project.
  
## 🔹 Incremental Models

### 🟧 Incremental Model

![Incremental model.png](https://github.com/ElizaLo/Software-Development-Lifecycle/blob/master/Software%20Development%20Processes%20and%20Methodologies/Week%203/Incremental%20model.png)

____________________________________

### 🔺 Waterfall and Incremental Software Development Models

1. In predictive models, change during the development is expected.

  - [ ] True
  - [x] False
  > Since change is very costly in predictive model, it is not expected.

2. In which of following models, you may end-up building something different than what you originally planned? Select two.

  - [x] Agile models
  > agile mindset recommends that you deliver in short iterations, get regular feedback and make changes based on the feedback.
  - [ ] Waterfall models
  - [x] Adaptive models
  > adaptive models are where you get regular feedback and make changes based on the feedback.
  - [ ] V-Model

3. What are the BENEFITS of the Sashimi Model? Select two.

  - [ ] It supports early validation
  > There is no emphasis on early validation in this model.
  - [x] It can help shorten development time
  > True. By overlapping the phases
  - [x] It can support creating a learning prototype early
  > Since it is possible to overlap requirements, design, and development early, we can potentially work on a prototype early to support learning.

4. Which of the following is true for the V-model? Select two.

  - [x] The V-model is useful in cases where there is ambiguity in requirements and early validation would be useful.
  > True, by including some of the corresponding validation discussions in the early phases, the V-model helps identify issues with requirements early on.
  - [ ] This models emphasizes risk analysis and resolution
  - [ ] In this model, you build software in increments
  - [x] It is a predictive model
  > True. This model assumes that all requirements are known in advance.

5. Which of the following is true for Incremental Models? Select three.

  - [x] You can overlap building of one increment with another
  > True. Overlapping increment development is acceptable in incremental models. For example, you can start defining the requirements of increment 2 while the development of increment 1 is still in progress.
  - [ ] If deploying an increment to actual users can benefit the organization, using an incremental model is a potential candidate to consider.
  > True. This is one of the primary reasons why organizations use incremental models.
  - [ ] Incremental models are always predictive models
  - [ ] You always have to use same model for each of the increments
  > You can use any suitable model for a given increment. For example, in one increment you may use the V-model and for another increment, you may use the Sashimi model.
  - [x] Incremental models may result in rework
  > This is true because in a basic incremental model, you have requirements/design for only the current increment. When you work on a future increment, you may have to change the work done in previous increments as a result of the requirements for the current increment.

6. Which of the following is true for the Waterfall model, V-model and Sashimi model? Select two.

  - [x] In these models, the cost of change depends on how late we find out about the change. If problem requiring a change is found during the implementation phase, it will be more expensive to fix than one found during the design phase.
  > According to the cost of change curve, the later we find a problem requiring a change (a defect/bug), the more costly it is to fix. For example, if we find the change in implementation, it will requires us to redo requirements and design. Whereas if we find change during design phase, we only need to fix the requirements.
  - [x] In these models, we assume that we know requirements really well
  > This is the basis for these models because if you don't know the requirements, it is better to adopt adaptive model that is more conducive to changes later in the development cycle.
  - [ ] In these models, the team is expected know the solution really well.

7. Which model is the best model to use in all situations?

  - [x] None
  > Each model has its place and its pros and cons so there is no one model that will fit all situations
  - [ ] Adaptive since it has most advantages
  - [ ] Waterfall

## 🔹 Iterative Models

### 🟧 Unified Process and its Variants

![1.png](https://github.com/ElizaLo/Software-Development-Lifecycle/blob/master/Software%20Development%20Processes%20and%20Methodologies/Week%203/1.png)

**✅ Pros:**
- **Adaptive model**
- Quality and Reuse
- Focus on risk mitigation increases chances of success
- Flexible to incorporate other software dev models

**❌ Cons:**
- Complicated model
- Need more resources
- Too much overhead for smaller project

**So where do you use this model?** 
- Bigger and riskier projects
- All requirments not known early in the project
- Desire to deliver value earlier
____________________________

### 🟧 Spiral Model

- Risk-driven approach
  - Effort and detail driven by risk
- Four basic activities in every cycle 
- Process model generator. Incorporates other models
- The risk determines the level of effort and the degree of details. 
- And then not every activity in the diagram needs to be performed
- **Adaptive model**

![Spiral Model](https://github.com/ElizaLo/Software-Development-Lifecycle/blob/master/Software%20Development%20Processes%20and%20Methodologies/Week%203/Spiral_model.png)

**✅ Pros:**
- You can change in every cycle the direction where you're going. 
- The focus on the risk increases the chance of success of your product. 
- Flexibility of using any software development model.
- Minimizes waste because it talks about how you don't need to go through all this every single step in the same rigor but, based on the risk, you define how much effort you want to put. 
-  Option of go, no-go in every cycle and move forward.

**❌ Cons:**
- Complicated model
- Cost more to manage
- Needs the stakeholder engagement because after every cycle or during every cycle, you need a lot of or bit of engagement from your key stakeholders.

**So where do you use this model?** 
- If it is a very large high risk project, I think, a spiral model would be a good fit for those kind of projects.

### 🔺 Unified and Spiral Processes

1. In the Unified process, all requirements work is done upfront and no requirements work is done in the construction phase.

  - [x] False
  - [ ] True
  > In the unified process, although the majority of requirements work is performed in first two stages, there is still some requirements work needed in the construction and transition phases.

2. What are some of the activities that happen in the elaboration phase of the Unified process? Select two.

  - [ ] Deploy an increment of the software
  - [x] Address known risks
  - [ ] Decide if you are going to build the system or buy off the shelf product
  - [x] Validate system architecture by building executable architecture baseline
  > Two key things that happen in elaboration phase is addressing known risks and creating an executable architecture. See the unified process video

3. Which of the following activities happen in Step 2 of the Spiral model? Select two.

  - [x] Identify risks
  - [ ] Make a decision whether to continue with next cycle
  - [x] Resolve risks
  - [ ] Decide objectives and constraints

4. Select the four basic steps followed in each cycle of Spiral model.

  - [ ] Design
  - [x] Identify and Resolve Risks
  - [ ] Deployment
  - [x] Define Objective
  - [x] Development and Tests
  - [ ] Requirements
  - [x] Plan the Next Iteration

5. Which of the following are true for the Unified Processes and its variants? Select two.

  - [x] Agile Unified Process and Open Unified Process are lighter versions of the "Unified Process".
  - [ ] UML Unified Process is the Ultimate Unified Process with a superset of all practices and processes.
  - [x] Enterprise Unified Process adds additional practices on top of the Unified Process and Rational Unified Process.
  - [ ] Rational Unified Process is a lighter version on Unified Process.
  
## 🔹 Applying traditional software development models

### Phase Gates / Stage Gates

![Phase Gates ](https://github.com/ElizaLo/Software-Development-Lifecycle/blob/master/Software%20Development%20Processes%20and%20Methodologies/Week%203/Phase%20Gates.png)

______________________________

### 🔺 Traditional Software Development Models

1. Which of the following is true for adaptive models? (Select any two)

  - [x] You may end-up building something different that what you originally though
  > Since adaptive models request user/client feedback after each release, it allows / welcomes changes during the process. What will this result in? 
  - [ ] You discourage change during the development process
  - [x] You are not sure about what exactly you want to build
  > If it is adaptive model, you adapt based on feedback you get. 
  - [ ] Adaptive model is the best model in all situations

2. A team divided the application they were building into 4 parts and planning to build one part at a time. To build each part, they are planning to go through the steps of requirements, design, implementation, test, and deployment. Also, they are planning to complete each part fully with high fidelity. By fidelity we mean the completeness of the features implemented in each part. Based on this information, what type of model do you suggest they use for their software development process?

  - [x] Incremental
  - [ ] Iterative and Incremental
  > Is there a plan to increase fidelity of components over time? Or do they want to finish one component fully, release it and move to next component? 
  - [ ] Iterative

3. A team is working on a problem where the requirements are well known but they are short on time. They prefer to start the design phase when some of the requirements have been defined. Similarly, they want to start coding when the design for part of the system is ready. What model will best fit their needs?

  - [x] Sashimi
  - [ ] V-model
  - [ ] Waterfall
  - [ ] Spiral

4. In the incremental model variation where you do requirements and design for all of the application once and then just increment on implementation, testing, and deployment, are you making the process more suitable for a predictive or adaptive situation?

  - [x] Predictive
  > If situation is adaptive and user needs may change later, it can potentially result in change in requirements and design for which we invested heavily in the beginning. This in turn may result in extra work and could be very costly.
  - [ ] Adaptive

5. Which of following is NOT true about incremental and iterative models?

  - [ ] Iterative approaches release every feature with low fidelity and then improve fidelity over time. By fidelity we mean the completeness of the feature.
  > In an iterative model, you release all of the features of the product, but features are not complete. For example, in the case of the search feature on a job portal website, it may allow a basic search by keyword but not a search by city, type of job, etc. Another example of low fidelity might be the algorithm used. Low Fidelity = Basic algorithm. High Fidelity = Advanced and very intuitive algorithm.
  - [ ] Incremental approaches release features as they are finished with high fidelity.
  - [x] An incremental model is one where you can build each part of the system individually but you release all at once.
  - [ ] In a model which is both iterative and incremental, we release features when they are usable. Over time the development team improves existing features and adds new ones

6. Which of the following is NOT true for the Waterfall model, V-model and Sashimi model?

  - [ ] In these models, the team is expected know the solution really well.
  - [ ] In these models, we assume that we know requirements really well
  - [x] These models will be a good model to be used by a startup implement a new idea that is new to market
  - [ ] In these models, the cost of change depends on how late we find out about the change. If problem requiring a change is found during the implementation phase, it will be more expensive to fix than one found during the design phase.

7. In the Unified Process, what does the milestone of "Lifecycle Architecture" mean?

  - [ ] Agreement among stakeholders about the objectives of the project and to proceed with the project.
  - [x] Agreement among the stakeholders about the technical approach.
  - [ ] Agreement among the stakeholders about the deployment of the system to actual users.

8. Which of the following is true for the Unified Process? (select any 3)

  - [x] It is a framework and not a specific model.
  - [ ] It is a predictive framework.
  - [ ] It is a very simple framework to follow.
  - [x] It is an architecture-centric framework.
  - [x] The construction phase supports both iterative and incremental approaches.

9. Select situations listed below where you would NOT use the unified process framework

- [ ] Medium-sized project with some risks involved.
- [x] Very small, simple project where the problem and solution are well known.
- [ ] Situation where the organization wants to deliver part of the application early to capture the market ahead of competition.
- [ ] All requirements are not known early in the project.

10. Which of the following is NOT true for Spiral model?

  - [ ] Spiral model is not a model but a process model generator
  - [ ] It is suitable for very large high risk projects
  - [x] You always have to perform all the steps mentioned in the spiral model diagram
  - [ ] It minimizes waste by allowing teams to tailor the effort put into different processes based on the risk involved in each cycle.

11. Which of the following is NOT the benefits of the Unified Process?

  - [x] Easy to understand and implement
  - [ ] Flexible for handling change.
  - [ ] Supports / encourages risk identification and mitigation
  - [ ] Supports to incorporate other models in the process for e.g you can use Agile in construction phase.
  - [ ] Supports quality and reuse by emphasizing on architecture
