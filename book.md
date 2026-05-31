Undergraduate Topics in Computer Science
Joe Pitt-Francis
Jonathan Whiteley
Guide to
Scientific
Computing in
C++
Second Edition

| Undergraduate |     |     |     | Topics | in  | Computer | Science |
| ------------- | --- | --- | --- | ------ | --- | -------- | ------- |
Series editor
Ian Mackie
| Advisory      | Board             |            |               |            |            |         |     |
| ------------- | ----------------- | ---------- | ------------- | ---------- | ---------- | ------- | --- |
| Samson        | Abramsky,         | University |               | of Oxford, | Oxford,    | UK      |     |
| Chris Hankin, | Imperial          |            | College       | London,    | London,    | UK      |     |
| Mike Hinchey, |                   | University | of            | Limerick,  | Limerick,  | Ireland |     |
| Dexter C.     | Kozen,            | Cornell    | University,   |            | Ithaca,    | USA     |     |
| Andrew        | Pitts, University |            | of Cambridge, |            | Cambridge, | UK      |     |
HanneRiisNielson,TechnicalUniversityofDenmark,KongensLyngby,Denmark
| Steven S.     | Skiena,    | Stony | Brook      | University, | Stony | Brook, USA |     |
| ------------- | ---------- | ----- | ---------- | ----------- | ----- | ---------- | --- |
| Iain Stewart, | University |       | of Durham, | Durham,     |       | UK         |     |

Undergraduate Topics in Computer Science (UTiCS) delivers high-quality
instructional content for undergraduates studying in all areas of computing and
information science. From core foundational and theoretical material to final-year
topics and applications, UTiCS books take a fresh, concise, and modern approach
and are ideal for self-study or for a one- or two-semester course. The texts are all
authoredbyestablishedexpertsintheirfields,reviewedbyaninternationaladvisory
board, and contain numerous examples and problems. Many include fully worked
solutions.
More information about this series at http://www.springer.com/series/7592

| Joe Pitt-Francis | Jonathan | Whiteley |
| ---------------- | -------- | -------- |
•
| Guide to  | Scientific |     |
| --------- | ---------- | --- |
| Computing | in         | C++ |
Second Edition
123

| JoePitt-Francis       |                   | JonathanWhiteley      |              |
| --------------------- | ----------------- | --------------------- | ------------ |
| University            | of Oxford         | University            | of Oxford    |
| Oxford                |                   | Oxford                |              |
| UK                    |                   | UK                    |              |
| ISSN 1863-7310        |                   | ISSN 2197-1781        | (electronic) |
| Undergraduate         | Topics inComputer | Science               |              |
| ISBN978-3-319-73131-5 |                   | ISBN978-3-319-73132-2 | (eBook)      |
https://doi.org/10.1007/978-3-319-73132-2
LibraryofCongressControlNumber:2017962059
1stedition:©Springer-VerlagLondonLimited2012
2ndedition:©SpringerInternationalPublishingAG,partofSpringerNature2017
Thisworkissubjecttocopyright.AllrightsarereservedbythePublisher,whetherthewholeorpart
specifically
of the material is concerned, the rights of translation, reprinting, reuse of illustrations,
microfilms
recitation, broadcasting, reproduction on or in any other physical way, and transmission
orinformationstorageandretrieval,electronicadaptation,computersoftware,orbysimilarordissimilar
methodologynowknownorhereafterdeveloped.
The use of general descriptive names, registered names, trademarks, service marks, etc. in this
publicationdoesnotimply,evenintheabsenceofaspecificstatement,thatsuchnamesareexemptfrom
therelevantprotectivelawsandregulationsandthereforefreeforgeneraluse.
The publisher, the authors and the editors are safe to assume that the advice and information in this
book are believed to be true and accurate at the date of publication. Neither the publisher nor the
authorsortheeditorsgiveawarranty,expressorimplied,withrespecttothematerialcontainedhereinor
for any errors or omissions that may have been made. The publisher remains neutral with regard to
jurisdictionalclaimsinpublishedmapsandinstitutionalaffiliations.
Printedonacid-freepaper
ThisSpringerimprintispublishedbytheregisteredcompanySpringerInternationalPublishingAGpart
ofSpringerNature
Theregisteredcompanyaddressis:Gewerbestrasse11,6330Cham,Switzerland

| Preface | to the | Second Edition |     |     |
| ------- | ------ | -------------- | --- | --- |
The principle changes in this updated edition are additional material on software
testing and on some of the new features introduced in the C++11 standard. When
introducingthisadditionalmaterial,wehavefollowedthesamephilosophyaswhen
writingthefirsteditionofthisbook.Thatis,wefocusonaconcisediscussionofthe
keyfeaturesthataremostusefultothenoviceandintermediateprogrammerinthe
field of scientific computing. We have found this an effective approach when
teaching this course to graduate students—once the basics have been mastered,
|     | confidence | find |     |     |
| --- | ---------- | ---- | --- | --- |
students then have the to out about less well-used features them-
| selves when | they are needed. |     |     |     |
| ----------- | ---------------- | --- | --- | --- |
complete—or update—
| This second | edition would | not be as | as enjoyable | to  |
| ----------- | ------------- | --------- | ------------ | --- |
withoutdiscussionswithcolleaguesandotherreadersofthefirstedition,including
those previously unknown to us who were kind enough to provide constructive
feedback.Wewouldliketoexpressourgratitudetoallwhocontributedinthisway
orofferedtheirencouragement,andtothestaffatSpringerforinvitingustoupdate
first
the edition.
Finally, we would both again like to thank our families for their love and
support.
| Oxford, UK   |     |     |          | Joe Pitt-Francis |
| ------------ | --- | --- | -------- | ---------------- |
| October 2017 |     |     | Jonathan | Whiteley         |
v

Preface to the First Edition
ManybookshavebeenwrittenontheC++programminglanguage,varyingacrossa
spectrum from the very practical tothe very theoretical.Thisbook certainly lies at
the practical end of this spectrum and has a particular focus for the practical
treatment of this language: scientific computing.
Traditionally, Fortran and MATLAB®1 have been the languages of choice for
scientific computing applications. The recent development of complex mathemat-
icalmodels—infieldsasdiverseasbiology,financeandmaterialsscience,toname
but a few—has driven a need for software packages that allow computational
simulations based on these models. The complexity of the underlying models,
together with the need to exchange code between co-workers, has motivated pro-
grammers to develop object-oriented code (often written in C++) for these simu-
lation packages. The computational demands of these simulations may require
softwaretobewrittenforparallelcomputingfacilities,typicallyusingtheMessage
Passing Interface (MPI). The need to train programmers in the skills to program
applications such as these led to the development of a graduate-level course C++
for Scientific Computing, taught by the authors of this book, at the University of
Oxford.
This book provides a guide to C++ programming in scientific computing. In
contrast to many other books on C++, features of the language are demonstrated
mainly using examples drawn from scientific computing. Object orientation isfirst
mentionedinChap.1wherewebrieflydescribewhatthisphrase—andotherrelated
terms such as inheritance—means, before postponing any further discussion of
object orientation or related topics until Chap. 6. In the intervening chapters until
object orientation reappears, we present what is best described as “procedural pro-
gramming in C++”, covering variables, flow of control, input and output, pointers
(includingdynamicallocationofmemory),functionsandreferencevariables.Armed
with this grounding in C++, we then introduce classes in Chaps. 6 and 7. In these
two chapters, where the main features of object orientation are showcased, we
1MATLABisaregisteredtrademarkofTheMathWorks,Inc.
vii

viii PrefacetotheFirstEdition
initially, for the sake of clarity, abandon our principle of using examples drawn
fromscientificcomputing.Oncethetopicshavebeenpresentedhowever,weresume
our strategy of demonstrating concepts through scientific computing examples.
More advanced C++ features such as templates and exceptions are introduced in
Chaps. 8 and 9. Having introduced the features of C++ required for scientific
computing,theremainderofthebookfocusesontheapplicationofthesefeatures.In
Chap.10,webegintodevelopacollectionofclassesforlinearalgebracalculations:
these classes are then developed further in the exercises at the end of this chapter.
Chapter 11 presents an introduction to parallel computing using MPI. Finally, in
Chap. 12, we discuss how an object-oriented library for solving second-order dif-
ferentialequationsmaybeconstructed.Theimportanceofaclearprogrammingstyle
tominimise theintroduction oferrorsinto codeis stressed throughout thebook.
This book is aimed at programmers of all levels of expertise who wish to write
scientific computing programs in C++. Experience with a computer to the level
where files can be stored and edited is expected. A basic knowledge of mathe-
matics,suchasoperationsbetweenvectorsandmatrices,andtheNewton–Raphson
method for finding the roots of nonlinear equations would be an advantage.
The material presented here has been enhanced significantly by discussions
about C++ with colleagues, too numerous to list here, in the Department of
Computer Science at the University of Oxford. A special mention must, however,
bemadeoftheChaste2programmingteam:particulargratitudeshouldbeexpressed
to Jonathan Cooper for readily sharing with us his impressively wide and deep
knowledgeoftheC++language.Othermembersoftheteamwhohavesignificantly
helped clarify our thoughts on the C++ language are Miguel Bernabeu, James
Osborne, Pras Pathmanathan and James Southern. We should also thank students
from both the M.Sc. in Mathematical Modelling and Scientific Computing and the
Doctoral Training Centres at the University of Oxford for unwittingly aiding our
understanding of the language through asking pertinent questions.
Finally, it is always important to remember—especially when debugging a
particularlytiresomecode—thatthereisfarmoretolifethanC++programmingfor
scientific computing. We would both like to thank our families for their love and
support, especially during the writing of this book.
Oxford Joe Pitt-Francis
October 2011 Jonathan Whiteley
2TheCancer,HeartAndSoftTissueEnvironment(Chaste)isanobject-orientedpackage,written
in C++, for simulations in the field of biology. More details on this package may be found at
https://www.cs.ox.ac.uk/chaste/.

Contents
1 Getting Started .... .... ..... .... .... .... .... .... ..... .... 1
| 1.1 | A Brief | Introduction |     | to C++ |     |           |                 |      | 1   |
| --- | ------- | ------------ | --- | ------ | --- | --------- | --------------- | ---- | --- |
|     |         |              |     |        | ..  | .... .... | .... .... ..... | .... |     |
“Object-Oriented”
|     | 1.1.1 | C++   | is      |           |           | .. ....    | .... .... ..... | .... | 2   |
| --- | ----- | ----- | ------- | --------- | --------- | ---------- | --------------- | ---- | --- |
|     | 1.1.2 | Why   | You     | Should    | Write     | Scientific | Programs        |      |     |
|     |       | in    | C++ ... | .....     | ....      | .... ....  | .... .... ..... | .... | 3   |
|     | 1.1.3 | Why   | You     | Should    | Not Write | Scientific | Programs        |      |     |
|     |       | in    | C++     |           |           |            |                 |      | 4   |
|     |       |       | ...     | .....     | ....      | .... ....  | .... .... ..... | .... |     |
|     | 1.1.4 | Scope | of      | This Book | ..        | .... ....  | .... .... ..... | .... | 5   |
1.2 A First C++ Program ... .... .... .... .... .... ..... .... 5
1.3 Compiling a C++ Program ... .... .... .... .... ..... .... 6
|     | 1.3.1 | Integrated |     | Development |         | Environments | .... .....      | .... | 7   |
| --- | ----- | ---------- | --- | ----------- | ------- | ------------ | --------------- | ---- | --- |
|     | 1.3.2 | Compiling  |     | at the      | Command | Line         |                 |      | 8   |
|     |       |            |     |             |         |              | .... .... ..... | .... |     |
1.3.3 Compiler Flags .. .... .... .... .... .... ..... .... 9
1.4 Variables .... .... ..... .... .... .... .... .... ..... .... 10
1.4.1 Basic Numerical Variables . .... .... .... ..... .... 10
1.4.2 Other Numerical Variables . .... .... .... ..... .... 12
|     | 1.4.3 | Mathematical |     | Operations |     | on Numerical | Variables |     | 14  |
| --- | ----- | ------------ | --- | ---------- | --- | ------------ | --------- | --- | --- |
....
1.4.4 Division of Integers .. .... .... .... .... ..... .... 16
1.4.5 Arrays ... ..... .... .... .... .... .... ..... .... 17
1.4.6 ASCII Characters .... .... .... .... .... ..... .... 18
1.4.7 Boolean Variables ... .... .... .... .... ..... .... 19
1.4.8 Strings ... ..... .... .... .... .... .... ..... .... 19
1.5 Simple Input and Output . .... .... .... .... .... ..... .... 20
1.5.1 Basic Console Output . .... .... .... .... ..... .... 20
|     | 1.5.2 | Keyboard |     | Input |        |           |                 |      | 21  |
| --- | ----- | -------- | --- | ----- | ------ | --------- | --------------- | ---- | --- |
|     |       |          |     |       | . .... | .... .... | .... .... ..... | .... |     |
1.6 The assert Statement .. .... .... .... .... .... ..... .... 22
1.7 Tips: Debugging Code .. .... .... .... .... .... ..... .... 24
1.8 Exercises .... .... ..... .... .... .... .... .... ..... .... 25
2 Flow of Control ... .... ..... .... .... .... .... .... ..... .... 27
2.1 The if Statement . ..... .... .... .... .... .... ..... .... 28
2.1.1 A Single if Statement .... .... .... .... ..... .... 28
|     | 2.1.2 | Example: |     | Code for | a Single | if Statement |         |      | 29  |
| --- | ----- | -------- | --- | -------- | -------- | ------------ | ------- | ---- | --- |
|     |       |          |     |          |          |              | . ..... | .... |     |
ix

| x   |       |         |            |     |        |           |            | Contents |     |
| --- | ----- | ------- | ---------- | --- | ------ | --------- | ---------- | -------- | --- |
|     | 2.1.3 | if–else | Statements |     | . .... | .... .... | .... ..... | ....     | 29  |
2.1.4 Multiple if Statements ... .... .... .... ..... .... 30
|     | 2.1.5 | Nested | if Statements |     | .... | .... .... | .... ..... | .... | 30  |
| --- | ----- | ------ | ------------- | --- | ---- | --------- | ---------- | ---- | --- |
2.1.6 Boolean Variables ... .... .... .... .... ..... .... 31
2.2 Logical and Relational Operators ... .... .... .... ..... .... 31
2.3 The while Statement ... .... .... .... .... .... ..... .... 33
2.4 Loops Using the for Statement ... .... .... .... ..... .... 35
|     | 2.4.1 | Example: | Calculating |            | the Scalar | Product   | of Two     |      |     |
| --- | ----- | -------- | ----------- | ---------- | ---------- | --------- | ---------- | ---- | --- |
|     |       | Vectors  | ...         | ..... .... | ....       | .... .... | .... ..... | .... | 36  |
| 2.5 | The   | switch   | Statement   |            |            |           |            |      | 37  |
|     |       |          |             | .. ....    | ....       | .... .... | .... ..... | .... |     |
2.6 Tips: Loops and Branches .... .... .... .... .... ..... .... 38
|     | 2.6.1 | Tip | 1: A Common |     | Novice Coding |     | Error .. ..... | .... | 38  |
| --- | ----- | --- | ----------- | --- | ------------- | --- | -------------- | ---- | --- |
2.6.2 Tip 2: Counting from Zero . .... .... .... ..... .... 38
2.6.3 Tip 3: Equality Versus Assignment .. .... ..... .... 39
|     | 2.6.4 | Tip | 4: Never     | Ending | while    | Loops |               |        | 41  |
| --- | ----- | --- | ------------ | ------ | -------- | ----- | ------------- | ------ | --- |
|     |       |     |              |        |          |       | .. .... ..... | ....   |     |
|     | 2.6.5 | Tip | 5: Comparing | Two    | Floating | Point | Numbers       | . .... | 41  |
2.7 Exercises .... .... ..... .... .... .... .... .... ..... .... 42
3 File Input and Output .. ..... .... .... .... .... .... ..... .... 47
3.1 Redirecting Console Output to File . .... .... .... ..... .... 47
3.2 Writing to File .... ..... .... .... .... .... .... ..... .... 48
3.2.1 Setting the Precision of the Output .. .... ..... .... 51
3.3 Reading from File . ..... .... .... .... .... .... ..... .... 51
3.4 Checking Input and Output are Successful ... .... ..... .... 53
3.5 Reading from the Command Line .. .... .... .... ..... .... 54
3.6 Tips: Controlling Output Format ... .... .... .... ..... .... 55
3.7 Exercises .... .... ..... .... .... .... .... .... ..... .... 56
| 4 Pointers |     |           |      |            |      |           |            |      | 59  |
| ---------- | --- | --------- | ---- | ---------- | ---- | --------- | ---------- | ---- | --- |
|            | ..  | .... .... | .... | ..... .... | .... | .... .... | .... ..... | .... |     |
Computer’s
| 4.1 | Pointers | and | the |     | Memory | ... .... | .... ..... | .... | 59  |
| --- | -------- | --- | --- | --- | ------ | -------- | ---------- | ---- | --- |
4.1.1 Addresses . ..... .... .... .... .... .... ..... .... 59
4.1.2 Pointer Variables .... .... .... .... .... ..... .... 60
4.1.3 Example Use of Pointers .. .... .... .... ..... .... 61
|     | 4.1.4 | Warnings | on  | the Use | of Pointers |      |            |      | 61  |
| --- | ----- | -------- | --- | ------- | ----------- | ---- | ---------- | ---- | --- |
|     |       |          |     |         |             | .... | .... ..... | .... |     |
4.2 Dynamic Allocation of Memory for Arrays ... .... ..... .... 62
4.2.1 Vectors ... ..... .... .... .... .... .... ..... .... 63
4.2.2 Matrices .. ..... .... .... .... .... .... ..... .... 64
4.2.3 Irregularly Sized Matrices . .... .... .... ..... .... 65
| 4.3 | Tips: | Pointers |      |            |      |           |            |      | 66  |
| --- | ----- | -------- | ---- | ---------- | ---- | --------- | ---------- | ---- | --- |
|     |       |          | .... | ..... .... | .... | .... .... | .... ..... | .... |     |
4.3.1 Tip 1: Pointer Aliasing .... .... .... .... ..... .... 66
4.3.2 Tip 2: Safe Dynamic Allocation . .... .... ..... .... 67
|     |       |     |          | new | delete |     |                |      |     |
| --- | ----- | --- | -------- | --- | ------ | --- | -------------- | ---- | --- |
|     | 4.3.3 | Tip | 3: Every | Has | a      |     | ... .... ..... | .... | 68  |

Contents xi
4.4 Modern C++ Memory Management .... .... .... ..... .... 69
4.4.1 The unique_ptr Smart Pointer ... .... ..... .... 69
4.4.2 The shared_ptr Smart Pointer ... .... ..... .... 71
4.5 Exercises .... .... ..... .... .... .... .... .... ..... .... 72
5 Blocks, Functions and Reference Variables .. .... .... ..... .... 75
5.1 Blocks .. .... .... ..... .... .... .... .... .... ..... .... 75
5.2 Functions .... .... ..... .... .... .... .... .... ..... .... 77
5.2.1 Simple Functions .... .... .... .... .... ..... .... 77
5.2.2 Returning Pointer Variables from a Function .... .... 79
5.2.3 Use of Pointers as Function Arguments ... ..... .... 80
5.2.4 Sending Arrays to Functions ... .... .... ..... .... 82
5.2.5 Example: A Function to Calculate the Scalar
Product of Two Vectors ... .... .... .... ..... .... 84
5.3 Reference Variables ..... .... .... .... .... .... ..... .... 85
5.4 Default Values for Function Arguments . .... .... ..... .... 86
5.5 Function Overloading ... .... .... .... .... .... ..... .... 87
5.6 Declaring Functions Without Prototypes . .... .... ..... .... 89
5.7 Function Pointers .. ..... .... .... .... .... .... ..... .... 89
5.8 Recursive Functions .... .... .... .... .... .... ..... .... 92
5.9 Modules .... .... ..... .... .... .... .... .... ..... .... 93
5.10 Tips: Code Documentation ... .... .... .... .... ..... .... 94
5.11 Exercises .... .... ..... .... .... .... .... .... ..... .... 96
6 An Introduction to Classes ... .... .... .... .... .... ..... .... 99
6.1 The Raison d’Être for Classes . .... .... .... .... ..... .... 99
6.1.1 Problems That May Arise When Using Modules . .... 100
6.1.2 Abstraction, Encapsulation and Modularity
Properties of Classes . .... .... .... .... ..... .... 100
6.2 A First Example Simple Class: A Class of Books .. ..... .... 101
6.2.1 Basic Features of Classes .. .... .... .... ..... .... 101
6.2.2 Header Files .... .... .... .... .... .... ..... .... 103
6.2.3 Setting and Accessing Variables . .... .... ..... .... 104
6.2.4 Compiling Multiple Files .. .... .... .... ..... .... 107
6.2.5 Access Privileges .... .... .... .... .... ..... .... 109
6.2.6 Including Function Implementations
in Header Files .. .... .... .... .... .... ..... .... 110
6.2.7 Constructors and Destructors ... .... .... ..... .... 110
6.2.8 Pointers to Classes ... .... .... .... .... ..... .... 115
6.3 The friend Keyword .. .... .... .... .... .... ..... .... 116
6.4 A Second Example Class: A Class of Complex Numbers . .... 117
6.4.1 Operator Overloading . .... .... .... .... ..... .... 118
6.4.2 The Class of Complex Numbers .... .... ..... .... 119

xii Contents
6.5 Some Additional Remarks on Operator Overloading ..... .... 125
6.6 Tips: Coding to a Standard ... .... .... .... .... ..... .... 125
6.7 Exercises .... .... ..... .... .... .... .... .... ..... .... 127
7 Inheritance and Derived Classes ... .... .... .... .... ..... .... 129
7.1 Inheritance, Extensibility and Polymorphism .. .... ..... .... 129
7.2 Example: A Class of E-books Derived from a Class
of Books .... .... ..... .... .... .... .... .... ..... .... 130
7.3 Access Privileges for Derived Classes ... .... .... ..... .... 133
7.4 Classes Derived from Derived Classes .. .... .... ..... .... 134
7.5 Run-Time Polymorphism . .... .... .... .... .... ..... .... 134
7.6 The Abstract Class Pattern ... .... .... .... .... ..... .... 137
7.7 Tips: Using a Debugger . .... .... .... .... .... ..... .... 138
7.8 Exercises .... .... ..... .... .... .... .... .... ..... .... 139
8 Templates .... .... .... ..... .... .... .... .... .... ..... .... 145
8.1 Templates to Control Dimensions and Verify Sizes . ..... .... 145
8.2 Templates for Polymorphism .. .... .... .... .... ..... .... 147
8.3 A Brief Survey of the Standard Template Library .. ..... .... 148
8.3.1 Vectors ... ..... .... .... .... .... .... ..... .... 148
8.3.2 Sets . .... ..... .... .... .... .... .... ..... .... 151
8.4 A Survey of Some New Functionality in Modern C++ ... .... 153
8.4.1 The auto Type . .... .... .... .... .... ..... .... 154
8.4.2 Some Useful Container Types with Unified
Functionality ... .... .... .... .... .... ..... .... 155
8.4.3 Range-based for Loops .. .... .... .... ..... .... 157
8.4.4 Mapping Lambda Functions .... .... .... ..... .... 158
8.5 Tips: Template Compilation .. .... .... .... .... ..... .... 159
8.6 Exercises .... .... ..... .... .... .... .... .... ..... .... 160
9 Errors, Exceptions and Testing .... .... .... .... .... ..... .... 163
9.1 Preconditions . .... ..... .... .... .... .... .... ..... .... 164
9.1.1 Example: Two Implementations of a Graphics
Function .. ..... .... .... .... .... .... ..... .... 164
9.2 Three Levels of Errors ... .... .... .... .... .... ..... .... 166
9.3 Introducing the Exception .... .... .... .... .... ..... .... 167
9.4 Using Exceptions .. ..... .... .... .... .... .... ..... .... 168
9.5 Testing Software .. ..... .... .... .... .... .... ..... .... 169
9.5.1 Unit Testing .... .... .... .... .... .... ..... .... 170
9.5.2 Extending Software .. .... .... .... .... ..... .... 171
9.5.3 Black Box Testing ... .... .... .... .... ..... .... 172
9.5.4 White Box Testing ... .... .... .... .... ..... .... 176
9.5.5 Test Driven Development .. .... .... .... ..... .... 177
9.6 Tips: Writing Appropriate Tests ... .... .... .... ..... .... 178
9.7 Exercises .... .... ..... .... .... .... .... .... ..... .... 179

| Contents |     |     |     |     |     |     |     | xiii |
| -------- | --- | --- | --- | --- | --- | --- | --- | ---- |
10 Developing Classes for Linear Algebra Calculations ... ..... .... 183
10.1 Requirements of the Linear Algebra Classes .. .... ..... .... 183
10.2 Constructors and Destructors .. .... .... .... .... ..... .... 188
10.2.1 The Default Constructor ... .... .... .... ..... .... 188
10.2.2 The Copy Constructor .... .... .... .... ..... .... 188
10.2.3 A Specialised Constructor . .... .... .... ..... .... 189
10.2.4 Destructor . ..... .... .... .... .... .... ..... .... 189
10.3 Accessing Private Class Members .. .... .... .... ..... .... 189
10.3.1 Accessing the Size of a Vector . .... .... ..... .... 190
|     | 10.3.2 | Overloading | the | Square Bracket | Operator |         |      | 190 |
| --- | ------ | ----------- | --- | -------------- | -------- | ------- | ---- | --- |
|     |        |             |     |                |          | . ..... | .... |     |
10.3.3 Read-Only Access to Vector Entries . .... ..... .... 190
10.3.4 Overloading the Round Bracket Operator .. ..... .... 190
10.4 Operator Overloading for Vector Operations .. .... ..... .... 190
10.4.1 The Assignment Operator .. .... .... .... ..... .... 191
|     | 10.4.2 | Unary | Operators |             |           |            |      | 191 |
| --- | ------ | ----- | --------- | ----------- | --------- | ---------- | ---- | --- |
|     |        |       |           | . .... .... | .... .... | .... ..... | .... |     |
10.4.3 Binary Operators .... .... .... .... .... ..... .... 191
10.5 Functions .... .... ..... .... .... .... .... .... ..... .... 191
10.5.1 Members Versus Friends .. .... .... .... ..... .... 191
10.6 Tips: Memory Debugging Tools ... .... .... .... ..... .... 192
| 10.7 | Exercises |      |            |           |           |            |      | 193 |
| ---- | --------- | ---- | ---------- | --------- | --------- | ---------- | ---- | --- |
|      |           | .... | .... ..... | .... .... | .... .... | .... ..... | .... |     |
11 An Introduction to Parallel Programming Using MPI . ..... .... 197
11.1 Distributed Memory Architectures .. .... .... .... ..... .... 197
11.2 Installing MPI .... ..... .... .... .... .... .... ..... .... 199
11.3 A First Program Using MPI .. .... .... .... .... ..... .... 199
11.3.1 Essential MPI Functions ... .... .... .... ..... .... 201
|     | 11.3.2 | Compiling | and | Running MPI | Code | .. .... ..... | .... | 201 |
| --- | ------ | --------- | --- | ----------- | ---- | ------------- | ---- | --- |
11.4 Basic MPI Communication ... .... .... .... .... ..... .... 203
11.4.1 Point-to-Point Communication .. .... .... ..... .... 203
11.4.2 Collective Communication . .... .... .... ..... .... 206
| 11.5 | Example | MPI Applications |     |          |           |            |      | 213 |
| ---- | ------- | ---------------- | --- | -------- | --------- | ---------- | ---- | --- |
|      |         |                  |     | ... .... | .... .... | .... ..... | .... |     |
11.5.1 Summation of Series . .... .... .... .... ..... .... 213
11.5.2 Parallel Linear Algebra .... .... .... .... ..... .... 215
11.6 Tips: Debugging a Parallel Program .... .... .... ..... .... 218
11.6.1 Tip 1: Make an Abstract Program ... .... ..... .... 219
|     | 11.6.2 | Tip 2: | Datatype | Mismatch |             |            |      | 219 |
| --- | ------ | ------ | -------- | -------- | ----------- | ---------- | ---- | --- |
|     |        |        |          |          | . .... .... | .... ..... | .... |     |
11.6.3 Tip 3: Intermittent Deadlock ... .... .... ..... .... 220
11.6.4 Tip 4: Almost Collective Communication . ..... .... 220
11.7 Exercises .... .... ..... .... .... .... .... .... ..... .... 221
12 Designing Object-Oriented Numerical Libraries .. .... ..... .... 225
12.1 Developing the Library for Ordinary Differential Equations ... 226
12.1.1 Model Problems . .... .... .... .... .... ..... .... 226
|     | 12.1.2 | Finite | Difference | Approximation | to  | Derivatives |         | 227 |
| --- | ------ | ------ | ---------- | ------------- | --- | ----------- | ------- | --- |
|     |        |        |            |               |     |             | .. .... |     |

xiv Contents
12.1.3 Application of Finite Difference Methods
to Boundary Value Problems ... .... .... ..... .... 229
12.1.4 Concluding Remarks on Boundary Value Problems
in One Dimension ... .... .... .... .... ..... .... 231
12.2 Designing a Library for Solving Boundary Value Problems ... 232
12.2.1 The Class SecondOrderOde . .... .... ..... .... 233
12.2.2 The Class BoundaryConditions . .... ..... .... 234
12.2.3 The Class FiniteDifferenceGrid ... ..... .... 235
12.2.4 The Class BvpOde .. .... .... .... .... ..... .... 236
12.2.5 Using the Class BvpOde .. .... .... .... ..... .... 237
12.3 Extending the Library to Two Dimensions ... .... ..... .... 238
12.3.1 Model Problem for Two Dimensions . .... ..... .... 239
12.3.2 Finite Difference Methods for Boundary Value
Problems in Two Dimensions .. .... .... ..... .... 239
12.3.3 Setting Up the Linear System for the Model
Problem .. ..... .... .... .... .... .... ..... .... 241
12.3.4 Developing the Classes Required .... .... ..... .... 242
12.4 Tips: Using Well-Written Libraries . .... .... .... ..... .... 243
12.5 Exercises .... .... ..... .... .... .... .... .... ..... .... 243
Appendix A: Linear Algebra . ..... .... .... .... .... .... ..... .... 245
Appendix B: Other Programming Constructs You Might Meet ... .... 257
Appendix C: Solutions to Exercises. .... .... .... .... .... ..... .... 263
Further Reading ... .... .... ..... .... .... .... .... .... ..... .... 281
Index .... .... .... .... .... ..... .... .... .... .... .... ..... .... 283

1
GettingStarted
Inthisintroductorychapter,youwilllearnalittlebitaboutthefeaturesofC++in
termsofsomeofthecommon“buzzwords”youmayhaveheardaboutthelanguage,
andintermsofitsstrengthsandweaknesses.Youwillalsolearnhowtoedit,compile
andrunyourfirstC++program.Thischapteralsoincludesinformationonvariables
andsimplewaysofgettingdataintoandoutofyourprograms.
Thechapterconcludeswithtipsonhowyoumight,asanoviceC++programmer,
go about debugging your programs. We have included tips with every chapter in
thisbook.Theyarepresentedatanincreasinglevelofsophistication—thisshould
matchyourgainingknowledgeasyoureadthroughthebookandattemptsomeof
theexercises.
1.1 ABriefIntroductiontoC++
Averylargenumberofprogramminglanguagesforwritingcomputersoftwareexist.
Ifoneoftheseprogramminglanguageswasthemostsuitableforallpurposes,then
itwouldbeexpectedthateveryonewouldusethislanguage,andallotherlanguages
wouldeventuallybecomeobsolete.This,however,iscertainlynotthecase.Itseems
appropriate to begin this book by describing the key features of C++, allowing us
to explain why C++ is a suitable programming language for scientific computing
applicationsandwhyitisn’ttheonlysuitablechoiceoflanguage.
©SpringerInternationalPublishingAG,partofSpringerNature2017 1
J.Pitt-FrancisandJ.Whiteley,GuidetoScientificComputing
inC++,UndergraduateTopicsinComputerScience,
https://doi.org/10.1007/978-3-319-73132-2_1

2 1 GettingStarted
1.1.1 C++is“Object-Oriented”
YoumayhaveheardthatC++isan“object-oriented”languageandhavewondered
whatthatmeans.Whatmarksalanguagewhichisobject-orientedoutfromonethat
is not? Fundamentally, it is because the basic unit of the language is an object or
class—anentitywhichbringstogetherrelatedfunctionalityanddata.Wewillprobe
theideasbehindobjectsandclassesmoredeeplyinChap.6.
ManybooksonC++startbydefiningobject-orientation moreexplicitly.Ifthis
bookwereaimedatacomputerscienceorsoftwareengineeringaudience,thenwe
wouldfinditnecessarytodefinesomespecificconceptsrelatedtoobject-orientation.
Wewouldneedtoconvinceyouoftheimportanceofthefollowingconcepts.
(cid:129) Modularity.Allthedataofaparticularobject,andtheoperationsthatweperform
onthisobject,areheldinoneortwofiles,andcanbeworkedonindependently.
(cid:129) Abstraction. The essential features and functionality of a class are put in one
placeandthedetailsofhowtheyworkareunimportanttotheuseroftheclass.
For example, if you are using a linear system library to solve matrix equations
youshouldnotneedtoknowtheprecisedetailsofhowmatricesarelaidoutin
memoryortheexactorderthatanumericalsolverperformsitsoperations.You
shouldonlyneedtoknowhowtousethefunctionalityofthelibrary.
(cid:129) Encapsulation.Theimplementationofanobjectiskepthiddenfromtheuserof
the class. This is not only about clarity (abstracting away the detail). It is also
about preventing the user from accidentally amending internal workings of, for
example,alinearsolver,stoppingitfromworkingeffectively.
(cid:129) Extensibility.Functionalitycanbereusedwithselectedpartsextended.Forexam-
ple, much of the core of a linear solver is in matrix-vector products and scalar
products—thistypeoffunctionalityneedonlybeimplementedonce,thenother
partsoftheprogramcanbuildonit.
(cid:129) Polymorphism.Thesamecodecanbeusedforavarietyofobjects.Forexample,we
wouldliketousesimilarlookingC++codetoraiseamatrixofcomplexnumbers
to a given power as we would to raise a real number to a given power—even
thoughthebasicarithmeticoperations“behindthescenes”aredifferent.
(cid:129) Inheritance.This,perhapsthemostimportantfeatureofobject-orientation,allows
for code reuse, extensibility and polymorphism. For example, a new linear
solver for singular matrix systems will share many of the features of a basic
linear solver. Inheritance allows the new solver to derive functionality from the
basicsolver,andthenbuildonthisfunctionality.
Wearenotgoingtodiscussthesetermsinanymoredetailatthistime.Itisnotthat
thesethingsareunimportant.Quitethecontrary—alltheseconceptsadduptomake
C++averypowerfullanguage.However,wecancoverthebasicsofprogramming
withoutobject-orientation.WewilldescribeclassesandobjectsinChap.6andrevisit
someoftheseconcepts.Thenwecanshowexactlywhyinheritance,forinstance,is
sopowerfulwhenwecometoexplainitinChap.7.

1.1 ABriefIntroductiontoC++ 3
1.1.2 WhyYouShouldWriteScientificProgramsinC++
Sinceyouhaveselectedabookwiththewords“C++”and“ScientificComputing”
inthetitle,thenthechancesarethatyouhavedecidedtostartwritingyourscientific
programsinC++.Perhapsnot.Perhapsyouareconsideringyouroptions,orperhaps
thechoiceoflanguagehasbeenfoistedonyou.
Itisnotourplacetofightbattlesaboutwhichlanguageistheverybest,especially
because the choice of language for a program will often depend on the problem
thatisbeingsolved.Inthefieldofnumericalscientificprogramming,therearemany
languagesbeingused,withmostscientistsoptingforMatlab®,1C/C++orFortran.
The first and most compelling reason for using C++ (as well as C and Fortran)
isbecausetheyarefast.Thatis,withcarefulprogrammingandoptimisations,they
canbecompiledtoamachinecodeprogramwhichisabletousethefullpowerof
the available hardware. Many scripting languages (such as Matlab and Python)
are interpreted languages, meaning that the code which you write is translated to
machinecodeatruntime.Othermodernlanguages(suchasJavaandC#)compile
halfway—toahardware-independentbyte-codewhichistheninterpretedatruntime.
Run time interpretation means that some of the computer’s power is spent on the
conversionprocessandalsothatitishardertoapplyoptimisations.NowadaysMat-
lab,PythonandJavaimplementationsuseclevertrickssuchascachingcompilation
stepsandjust-in-timecompilationtomakeprogramsrunfaster.Nevertheless,these
tricksrequirecomputationaleffortandsotheselanguagesmaynotfullyutilisethe
powerofallhardware.
A second reason for using C++ is that there is a wealth of numerical libraries
forscientificcomputinginC++andrelatedlanguages.Lotsofnumericalalgorithms
were established in the 1950s and were then incorporated into software libraries
(suchasEISPACKandLINPACK)inthe1970s.2Ifyouwriteyourowncodeusing
well-established,well-testedsoftwarethenyouarebuildingondecadesofexperience
andimprovement.
AthirdreasonforchoosingtowriteinC++isthatthereisawide-rangeofopen
sourceandcommercialtoolstosupportyou.WeusedthefreeGNUcompilertool-set
totesttheprogramsinthisbookandyoucanuseanyC++compilertocompilethem
foryourcomputer.Incontrast,ifweweredistributingMatlabprograms,youwould
needtohaveMatlabandalicenceinstalledonyourcomputerbecauseitisapro-
prietaryproduct.Therearesimilaropensourceproducts(suchasGNUOctave)but
thereisnoguaranteethataMatlabprogramwillproducethesameanswerwhenrun
inOctave.Becauseitisclosedsource,themeaningofaprogramcanchangebetween
versions of Matlab. For example, when just-in-time compilation was introduced
inMatlab7theoperationalsemanticsofthelanguagesubtlychanged.Thismeant
thatasmallminorityofMatlabprogramswhichwereknowntoworkwellwithone
1MatlabisaregisteredtrademarkofTheMathWorks,Inc.
2Theoriginalversionof MatlabwaswritteninFortranandwasintendedasasimpleinterface
intopartsoftheEISPACKandLINPACKFortranlibraries.

4 1 GettingStarted
versionof Matlabcouldproduceincorrectresults,errorsorwarningsonanother
version.
AfourthreasonforC++isthatithasaflexiblememorymanagementmodel.Ina
Javaprogram,someofthesystemmemoryisusedintheinterpretationandyourely
onagarbagecollectortotidyupmemorywhichyouarenolongerusing,andsoyou
maynotbeabletopredicthowmuchmemoryaprogramisgoingtoneed.InC++
youcanmakethisprediction,butthisisadouble-edgedswordbecauseyouarealso
responsibleformakingsurethatmemoryismanagedproperly.
A final reason to program in C++ is that it is an object-oriented language. We
haven’tyettoldyouwhatthismeansexactly,butitiswidelyheldthatwritinginan
object-orientedstyleleadstoprogramswhichareeasiertounderstand,toextend,to
maintainandtorefactor.
1.1.3 WhyYouShouldNotWriteScientificProgramsinC++
It is worth stressing that C++ is not the best language for every occasion. Some
peoplesaythatotherlanguagesmaybefaster.Manyscientificprogrammersbelieve
thatFortranwillalwaysgivethebestperformanceintermsofrawspeedandwould
reject C++ on the basis that features such as pointer chasing and virtual method
look-up(don’tworryifyouhaven’theardoftheseterms,ordon’tknowwhatthey
mean—you may never need to!) result in the code being executed at suboptimal
speed.Thismayhavesometruth,butthefactthatobject-orientationleadstogreater
readability(asmentionedabove)makesitareasonablecompromiselanguage.Itcan
beaveryfastlanguageanditisalsoagoodlanguageforreadability.
Sometimesotherlanguagesarebetterforaspecialisedtask.Scriptinglanguages
suchasPerlandPythonareidealfortextprocessingandstringmanipulation.Ifyou
need to sum columns of numbers from files then you could write a C++ program,
butashort,disposablescriptwouldbefarquickertoimplement.
Some languages are better for writing prototype programs or for plotting data.
Matlabexcelsinthefieldofrapidprototyping—shortprogramstoquicklyexplore
some algorithm or phenomenon. To test a particular linear algebra algorithm on a
rangeofmatriceswithvarioussizesandstructureswouldtakeafewlinesofMatlab,
butinC++youmighthavetowriteseveralfilesandcompileagainstsomeoneelse’s
libraries.Matlabalsohastheadvantageofafully-integratedgraphicaldevelopment
environment,makingmanyprogrammingtaskseasywithouthavingtorelyonextra
tools.Furthermore,Matlabhasanin-builtplottingenvironment,soifyouwantto
visualisetheresultsofyouralgorithmsquicklyMatlabmightbeyourbestchoice.
SoC++maynotbethebestchoiceoflanguageineverysituation.However,there
are many situations in which C++ has the ideal fit for a particular problem. The
discussionabovemaybeenoughtoconvinceyouthatitisworthgettingstartedwith
C++.

1.1 ABriefIntroductiontoC++ 5
1.1.4 ScopeofThisBook
MostC++programsforscientificcomputingcanbewrittenveryeffectivelybyusing
only a fraction of the total capabilities of the language. This book focuses on the
aspectsofC++thatyouaremostlikelytoutilise,ortoencounterinotherprogram-
mer’scode,forscientificcomputingapplications.Whenwritingyourownprograms,
youmayoccasionallyneedtounderstandoneofthemoreadvancedfeaturesofthe
language.IntheFurtherReadingsectionattheendofthisbook,wedirectthereader
to a collection of resources that provide a more comprehensive description of the
wholeC++language[5–8].
1.2 AFirstC++Program
It is very common to introduce a programming language by using a program that
printsthetext“HelloWorld”tothescreen.AsimpleexampleofaC++programthat
doesthis is shown below. The code in Listing1.1 illustrates several basic features
ofC++programs.Inline1ofthiscode,weincludetheheaderfileiostream.The
nameiostreampertainstoinputandoutputstreamingandisrequiredinanyC++
program that inputs data from the keyboard or outputs data to the console, that is,
thescreen.Thesecondfeaturetonoteisthatthereisasectionofcodethat:
(cid:129) begins with the line of code “int main(int argc, char* argv[])”
(line3ofthiscode);
(cid:129) isfollowedbymorecodeenclosedbetweencurlybrackets,{and};and
(cid:129) thecodewithinthecurlybracketsendswiththestatement“return 0;”.
Thesectionofthecodebetweencurlybracketscontainstheinstructionsthatwewant
thecomputertoexecute.Thepartofline3insidebracketsallowsustoexecutethe
codeusinguser-specifiedarguments:wewillpostponeadiscussionofthisfunction-
alityuntilChap.3.Notethatcommentshavebeeninsertedintothecodeinlines5,
6,7and9toaidthereadingofthecodebyhumans:anythingbetweenthecomment
opener “/*” and the comment closer “*/”, or any line that starts with “//” is a
comment,andisignoredwhenthecodeisconvertedintoanexecutable,computer
readablefile.Wehaveusedtheextension.cppforthecodebelowtoindicatethat
thefileHelloWorld.cppisaC++program.Choiceofthisextensionisentirely
a matter of personal choice: other authors use the extensions .C, .c++, .cxx or
.cc.
Wenowfocusonthepurposeoflines10and12:theselinesofcodeeachcontain
aninstructiontothecomputer,andareknownasstatements.Notethatallstatements
endwithasemi-colon.Itissufficientforthetimebeingforthereadertoknowthat
line10isthelineofcodethatdirectsthecomputertoprintthecontentswithinthe
quotationmarkstothescreen.The“\n”denotesanewline,andsothephrase“Hello
World”,followedbyanewline,willbeprintedtothescreen.Thewordcoutisa
contractionof consoleoutput,thatis,printingtothescreen.

6 1 GettingStarted
Listing1.1 HelloWorld.cpp
✞
#include <iostream>
1
2
3
int main(int argc, char* argv[])
{
4
5
/* This is a comment and will be ignored by the compiler
Comments are useful to explain in English what
6
7
the program does */
8
// Print "Hello World" to the screen
9
std::cout << "Hello World\n";
10
11
return 0;
12
}
13
Theword“int”atthestartofline3indicatesthatthelastlineofthecodewithin
curlybracketswillreturnanintegervalue.Thisiscarriedoutusingthestatementin
line12“return 0;”.Returningthevaluezeroindicatestothecomputerthatthe
programhasreachedtheendwithoutencounteringanyproblems.
BeforemovingontoexplainhowtogetyourcomputertoprintHello Worldto
yourscreenwepausetodiscusssomestylisticissuesofwhichyoushouldbeaware.
Youwillseeinthelistingabovethatalllinesofcodewithinthecurlybracketshave
beenindented.Thisisnotcompulsory.However,itisstandardpracticewhencoding
to indent these lines: this will become clearer in later chapters when we embed
code within more than one set of curly brackets. The number of spaces indented
is entirely for the programmer to decide: all spaces—termed “white space”—are
ignored when executing the code above. A final point is that lines in C++ may be
aslongastheprogrammerwishes,andmayrunovertheendofthelineinthetext
editorusedtowriteyourC++programs.Forclarity,itisgenerallyadvisabletosplit
apotentiallylonglineoverseverallines.Wewilldemonstratethislaterwhenwriting
morecomplexstatements.
The code in Listing 1.1 is a correct C++ program for printing the text “Hello
World” to the screen. However, before this program may be executed it must first
be translated into a format that the computer can read: this process is known as
compilation.Wenowexplainwhatcompilationis,andhowtodoit.
1.3 CompilingaC++Program
ManyreaderswillhaveexperienceofscientificcomputinginMatlab.Akeydif-
ferencebetweenC++andMatlabisthataC++programmustbecompiled before
itcanbeexecuted.Therearemanydifferentwaysthatcompilationcanbeperformed
whichwenowdiscuss.

1.3 CompilingaC++Program 7
1.3.1 IntegratedDevelopmentEnvironments
Asyoutakeyourfirststepsinlearninganewprogramminglanguage,youmaynot
wanttoinvestalotoftimeininstallingnewsoftwareandconfiguringapplicationsto
helpyoudevelopprograms.Forthisreason,werecommendthatyoubeginwriting
programs with your favourite text editor and a command line compiler (see the
followingSect.1.3.2).However,asyourprogramsandprojectsgrowinsizeyouwill
need to manage multiple files each containing various parts of the program. This
becomesdifficultwhenthenumberoffilesbecomeslarge,andyoumayspendalot
oftimeswitchingbetweenfilesinordertolookupwhatyoucalledsomefunctionor
argument.Atthispointinyourcodedevelopment,wewouldrecommendthatyou
switchtousinganIntegratedDevelopmentEnvironment(IDE).
ExamplesofIDEsthatareavailableforC++programmersatthetimeofwriting
includeKDevelopforLinux,MicrosoftVisualStudioforWindows,XCodeforMac
OSX,andthecross-platformIDEsCLionandEclipse.Eclipseisopensource,runs
on most operating systems and is well-maintained by a community of developers.
BecauseitwasoriginallybuiltfordevelopingJavaprograms,itisnecessarytoinstall
a“C/C++developmenttoolsplug-in”shoulditbeusedfordevelopingC++programs.
ThefunctionalityofvariousIDEsvariesaccordingtotheirlevelofsophistication,
but most present the seasoned programmer with several advantages over an old-
schoolcompileatthecommandlineapproach.CommonfeaturesofIDEsarelisted
below. Don’t worry if you do not fully understand all the terms used: these will
becomeclearasyouworkthroughthisbook.
1. Aprogrameditorwithsyntaxhighlightingsuchaskeywordcolouring,automatic
codeindentationandidentificationofillegalprogrammingconstructs.
2. Context aware editing, so that you immediately know what functionality is
presentinoneofyourclassesasyoutypeitsname.
3. Build automation, where your entire project code is managed so that changes
tosmallpartsofalargeprogramonlyresultinsmallcompilationsteps.Build
automationistraditionallydonewithahand-craftedfileknownasaMakefile,
whichweintroduceinSect.6.2.4.1.ManyIDEsanalyseyourcodefordepen-
denciesandthenuseaMakefilebehindthescenes.
4. On-the-flycompilationgivesthesystemtheabilitytoconstantlysaveandcom-
pileyourprogramasyouwriteit.
5. “Stepthrough”graphicaldebuggingletsyouwalkthroughaprogramasitruns,
pauseitatcriticalpoints,andexaminetheinternalstateofitsvariables.(More
informationondebuggersisgiveninSect.7.7.)
6. AutomaticcodegenerationisparticularlyusefulinIDEsforgraphicaltooldevel-
opment.Whentheuserselectsthattheywanttoincludeabuttononagraphical
toolintheirprogramsome“boilerplate”codeisgeneratedincludingthefunc-
tions thatareactivated when thebutton ispressed—theseare thenfilled inby
theprogrammer.

8 1 GettingStarted
1.3.2 CompilingattheCommandLine
WhenusingtheLinuxoperatingsystem,3C++codesmaybecompiledandexecuted
atthecommandlinewithinaterminalwindow.Manycompilers—bothopensource
andcommerciallydeveloped—areavailable.Inthisbook,weassumethatthereader
has access to the GNU gcc compiler. To ensure that this compiler is installed,
openaterminalwindowandtype“which g++”followedbyreturn.Hopefullythe
computerwillrespondbyreportingthelocationofthiscompiler,forexample,
✞
$ which g++
1
/usr/bin/g++
2
$
3
Ifthecompilerisnotinstalled,itmaybedownloadedfromhttps://gcc.gnu.org/,
whereinstructionsforinstallationmayalsobefound.
To compile the code given in Listing 1.1, open a terminal window and create a
directorywherecodemaybesaved.Moveintothisdirectory,andsavethecodeas
“HelloWorld.cpp”.Inthesamedirectorytype
✞
g++ -o HelloWorld HelloWorld.cpp
In the command above, g++ tells the computer that we want to use the GNU
gcccompilerforC++.Thesectionofthecommand“-o HelloWorld”tellsthe
computer that we want to name the executable file “HelloWorld”. The “-o” is
knownastheflagthatthecomputerexpectswillbefollowedbytheexecutablename,
inthiscaseHelloWorld.ThecommandendsbystatingtheC++filethatwewish
tocompile.ThiscommandproducesanexecutablefilecalledHelloWorld.This
executablemayberunbytyping“./HelloWorld”insidetheterminal.Running
thisexecutablewillresultinthetext“HelloWorld”beingprintedtothescreeninside
theterminal.
If we were to compile the code using the command above, but without the flag
andtheexecutablename,thenanexecutablefilewouldstillbeproduced.Adefault
name would be allocated to the executable file. For many compilers, this default
executablenameisa.out.
3IfyouareworkingonaMacoperatingsystem,werecommendthatyouinstalltheXcodedeveloper
tool-set. This comes complete with a GNU C++ compiler which you can use on the command
lineorwithinthedeveloperenvironment.IfyouareworkingonaWindowsoperatingsystem,we
recommendthatyouinstallMinGW(aminimalenvironmentforusingGNUtoolswithinWindows).
Alternatively,youmaywantsomethingmoresophisticatedbuiltonMinGWsuchasCygwin(aUnix-
likeenvironment)orCode::Blocks(anopensourcewindowsdevelopmentenvironmentcontaining
MinGWandtheGNUC++compiler).

1.3 CompilingaC++Program 9
1.3.3 CompilerFlags
IfweweretoattempttocompileacodethatwasnotwrittenusingcorrectC++syntax,
thenthecompilerwouldreportanerror,andwouldnotproduceanexecutablefile.
Assuch,thecompilercanbethoughtofasahelpfultoolthathasthecapabilityto
performsomevalidationofthecorrectnessofthecode.
Supposewehavewrittencodewhereacalculationwasstoredasavariable,but
thisvariableisneversubsequentlyused.Althoughthismaybewrittenwithcorrect
C++syntaxitislikelythatthisisanerror—wewouldexpectthattheresultofevery
calculation will subsequently be used somewhere in the code, or there would be
nopointinperformingthiscalculation.Compilershavethecapacitytowarnusof
unexpectedoccurrencessuchasthisbytheuseofcompilerflags.Thecompilation
commandbelowwillwarnusofinstancessuchasthese.
✞
g++ -Wall -o HelloWorld HelloWorld.cpp
Thecompilerflag-Wallaboveisacontractionof warningall.Thecompilation
commandabovewillwarnusofanythingunexpectedthatisnotactuallyanerror,but
willstillcreateanexecutablefile.Wegiveanexampleinstanceofasituationinwhich
thecompilerwillwarnofaprobableprogrammingerrorasoneofourprogramming
tipsinSect.2.6.3.Supposewewanttobestricterthanthis,andwantthecompiler
totreatanythingunexpectedasanerrorand,therefore,nottocreateanexecutable
filewhenthisoccurs.Thismaybeachievedusingthecompilationcommandbelow.
✞
g++ -Wall -Werror -o HelloWorld HelloWorld.cpp
Therearealargenumberofcompilerflagsavailableformostcompilers.Atthis
stage,thereisnoneedtoknowaboutanymorethanthebasicflags.Wehaveshown
howtousecompilerflagstoperformsomevalidationofthecodewritten.Wewill
now discuss three more flags that are particularly valuable when writing scientific
computingapplications.Thefirstflagwediscussmaybeusedtooptimisetheper-
formanceoftheexecutablefile.Thedefaultisnooptimisation.Byusingthe“-O”
(uppercaseo)flagasshownbelow,theexecutablefileshouldexecutemorequickly
althoughcompilationmaytakelonger.
✞
g++ -O -o HelloWorld HelloWorld.cpp
Ifwearedebuggingaprogram,itisimportantthattheexecutableandthedebugger
have information about which line in the source code produced specific machine
instructions.Normallythisinformationisnotretainedaftercompilation.Inorderto
produceanon-optimisedversionofthecodewithdebugginginformationpreserved,
weusethe“-g”flag.

10 1 GettingStarted
✞
| g++ -g | -o HelloWorld | HelloWorld.cpp |
| ------ | ------------- | -------------- |
The last flag that we introduce here is one that allows us to link to a library
ofmathematicalroutines.Weinstructthecompilertolinktothislibraryusingthe
commandbelow.
✞
| g++ -lm | -o HelloWorld | HelloWorld.cpp |
| ------- | ------------- | -------------- |
We may use as many flags as we wish when compiling—simply list them one
aftertheotherwhencompilingthecode.
1.4 Variables
IntheexamplecodeinListing1.1wesimplyprintedsometexttothescreen.Inmost
programs,especiallyscientificcomputingapplications,wewishtostoreentitiesand
performoperationsonthem.Theseentitiesareknownasvariables.InC++programs,
incommonwithmostcompiledlanguages,thevariablesmustbedeclaredtobean
appropriatetypebeforetheyareused.
1.4.1 BasicNumericalVariables
Thetwomostcommontypesofvariablethatareusedinscientificcomputingappli-
cationsareintegersanddoubleprecisionfloatingpointvariables.Looselyspeaking,
ifanumericalvariabledoesnot—andneverwill—requireadecimalpointitmaybe
storedasanintegervariable:ifnotitshouldbestoredasafloatingpointvariable.
Ifacodeusestwointegersdenotedbyrowandcolumn,andonedoubleprecision
floating point variable denoted by temperature, we may declare these before
theyareused,andsettheirvalues,usingthefollowingcodefragment.
Listing1.2 Declaringvariables
✞
| 1 int | row, column; |     |
| ----- | ------------ | --- |
double
| 2           | temperature; |      |
| ----------- | ------------ | ---- |
| 3 row       | = 1;         |      |
| 4 column    | = 2;         |      |
| temperature | =            | 3.0; |
5

1.4 Variables 11
Thestatementsinlines1and2ofthecodeaboveallocatememoryfortwointe-
ger variables row and column, and one double precision floating point variable
temperature.Itisimportanttounderstandthat,whilstmemoryisallocatedfor
thesevariables,wedonotknowuntilweassignvaluestothesevariablesinlines3–5
whatvaluesarestoredbythesevariables.Acommonmistakeistoassumethatthese
variablesareinitialisedtozerowhenthememoryisallocated:thisistruesomeof
thetime,butyoushouldnotrelyonthis.
Notetheuseofthedecimalpointforthedoubleprecisionfloatingpointvariable
temperature in line 5 of the listing above. This is not strictly necessary, but
emphasisesthatthisvariableisafloatingpointvariable.Useofthisdecimalpoint
hastheadvantagethat,providedwecompilethecodewithsuitableflags,compilation
willtriggerawarningifwehadmistakenlydeclaredthisvariabletobeaninteger.
Westronglyencouragetheuseofvariablenamesthathavesomerelationtothe
variablethattheyrepresent,forexample rowasavariablethatcontainstheindex
totherowofamatrix(seeSect.6.6foralongerdiscussionofnamingconventions
forvariables).TherearecertainrulesthatvariablenamesinC++mustadhereto,but
theserulesarenotparticularlyrestrictive.ThefirstruleisthatallvariablesinC++
programsshouldbeginwithaletter.Allothercharactersinvariablenamesmustbe
letters,numbersorunderscores.Variablenamesarecase–sensitive,andso“ROW”is
adifferentvariableto“row”.Wewouldnot,however,recommendwritingaprogram
withonevariablecalled“ROW”andanothervariablecalled“row”asthepotential
for confusing these variables is obvious. One final restriction is that some names,
suchasint, for, returnmaynotbeusedasvariablenamesbecausetheyare
usedbythelanguage.Thesewordsareknownasreservedwordsorkeywords.
Avariablemaybeinitialised whendefiningthevariabletype.Forexample,the
codefragmentinListing1.2maybewrittenasthefollowingcodefragment.
✞
int row = 1, column = 2;
1
double temperature = 3.0;
2
Thevalueofmorethanonevariablemaybeassignedineachstatement,asshown
below.
✞
int row = 1, column = 2;
1
row = column = 3;
2
However, line 2 in the code fragment above may cause confusion—it actually
means
✞
int row = 1, column = 2;
1
row = ( column = 3 );
2

12 1 GettingStarted
andsobothrowandcolumntakethevalue3afterthisfragmentofcodehasbeen
executed.However,itmaybemistakenlyreadtobe
✞
int row = 1, column = 2;
1
( row = column ) = 3;
2
inwhichrowwouldfirsttakethevalue2(whichwastheinitialvalueofcolumn),
and then row, because it is the result of the assignment row = column, would
take the value 3. The value of column is unaffected. There is clearly potential for
introducingerrorswhenassigningmorethanonevalueineachstatement,andsowe
donotrecommendthisapproach.
Itisoftenthecasethataprogrammerintendsavariabletobeconstantthroughout
thecode,forexamplethenumericalvalueusedforthedensityofafluid.Thepro-
grammer can ensure that a variable is guaranteed to be unchanged throughout the
code by assigning a value to the variable when it is declared, together with use of
thekeywordconstasshowninthefragmentofcodebelow.
✞
const double density = 45.621;
Wemaywanttosetthetoleranceofsomeiterativesolvertoaverysmallnumber,
forexample10−12.Clearly,wemaysetthistoleranceusingthecodefragmentbelow.
✞
double tolerance = 0.000000000001;
Thelistingaboveisclearlynotideal—acasualglanceatthecodedoesnotallowus
todistinguisheasilybetween,say,10−10and10−12.Itwouldbemuchclearerifwe
could write the numerical value in scientific notation. This is demonstrated in the
codebelow.
✞
double tolerance = 1.0e-12;
The letter “e” in the line of code above may be read as “times 10 to the power
of”:thatis,589.63maybewritten5.8963e2as589.63=5.8963×102.
1.4.2 OtherNumericalVariables
Intheprevioussection,werestrictedourselvestodeclaringallintegervariablesusing
thekeywordintandallfloatingpointvariablesusingthekeyworddouble.There
are—however—variantsonthesevariabletypeswhichwenowdiscuss.

1.4 Variables 13
Integers can be declared as integers, short integers or long integers as shown
below.
✞
int integer1;
1
short int integer2;
2
long int integer3;
3
Theactualrangeofintegersthatmaybestoredbyeachofthesevariablesdepends
onthesystemthatyouareusing.Forexample,onanobsolete32-bitoperatingsystem
thelong intiscompletelysynonymouswiththeintdatatype—butonmodern
64-bitarchitecturesthelong intisassignedtwiceasmuchspaceastheint(so
itcanstorenumbersintherange±9×1018asopposedto±2×109).
Variables of type short int require the allocation of less memory, with a
correspondingreductionintherangeofvaluesthatmaybestoredinthismemory.
It may be tempting to try to use short integers where possible to free up as much
memory as possible. We do not recommend this: in software written for scientific
computingapplicationsthebulkofmemoryallocatedisusuallyusedtostorefloating
point variables. Reducing the memory allocated to integer variables is unlikely to
freeasignificantvolumeofmemory.
A further classification of each of the integer types is as signed or unsigned
integers. Signed integers may be used to store both positive and negative integers,
whilst unsigned integers may be used to store only nonnegative integers. These
variablesmaybeusedasshownbelow.
✞
signed long int integer4; // signed is unnecessary
1
unsigned int integer5;
2
Thedefaultforanyintegerisasignedinteger,hencethereisnopurposeinexplic-
itly declaring an integer as a signed integer. A variable of type unsigned int
is allocated an identically sized memory location as a variable of type int. As
would be expected, a variable of type unsigned int can then store a range of
nonnegativeintegersroughlytwiceasbigasavariableoftypeint.Aprogrammer
is, however, unlikely to notice the difference between these two variable types on
modernsystems.
Floatingpointvariablesmaybedeclaredusingthekeywordsfloat,double
orlong doubleasshownbelow.
✞
float floating_point_number1;
1
double floating_point_number2;
2
long double floating_point_number3;
3

14 1 GettingStarted
As with integers, the range of numbers that may be stored using each of these
variabletypesdependsonthesystemused.Onmodernsystemsitisveryrarethat
the range of numbers that may be stored by a variable of type double differs
from the range that may be stored by a variable of type long double. In the
remainderofthisbook,wedonotdistinguishbetweenthesedatatypes.Variablesof
typefloattypicallystoreasmallerrangeofnumbersthanthoseoftypedouble.
Althoughvariablesoftypedoublerequiremorememorywestronglyurgewriters
ofscientificcomputingapplicationstousedoubleprecisionfloatingpointvariables:
thiswillminimisetheeffectofroundingerrors,thusremovingonepotentialsource
oferrorfromanyprogramwritten.
1.4.3 MathematicalOperationsonNumericalVariables
SampleC++codeforperformingavarietyofmathematicaloperationsonvariables
isgivenbelow.Notetheinclusionoftheheaderfilecmath.Thisfileisneededfor
some mathematical operations and also includes values of some useful constants,
suchasM_PI,thatcontainsthevalueofπ correcttoabout20decimalplaces.
✞
#include <cmath>
1
2
3
int main(int argc, char* argv[])
{
4
double x = 1.0, y = 2.0, z;
5
z = x/y; // division
6
7
z = x*y; // multiplication
z = sqrt(x); // square root
8
z = exp(y); // exponential function
9
z = pow(x, y); // x to the power of y
10
z = M_PI; // z stores the value of pi
11
12
return 0;
13
}
14
Manyothermathematicalfunctionsareavailable.Thefunctionscos,sin,tan,
acos,asin,atan,cosh,sinh,tanh,log,log10,ceil,floorcanbeused
in exactly the same way as sqrt and exp in the code above: that is, they accept
oneargument,andreturnonevalue.
Some mathematical functions deserve more explanation. This is done through
theirimplementationincodebelow.

| 1.4 | Variables |     |     |     |     |     |     | 15  |
| --- | --------- | --- | --- | --- | --- | --- | --- | --- |
✞
|     | #include <cmath> |     |     |     |     |     |     |     |
| --- | ---------------- | --- | --- | --- | --- | --- | --- | --- |
1
2
|     | int main(int | argc, | char* argv[]) |     |     |     |     |     |
| --- | ------------ | ----- | ------------- | --- | --- | --- | --- | --- |
3
{
4
|     | double | x = 7.8, | y = 1.65, | u = -3.4, |     | z;  |     |     |
| --- | ------ | -------- | --------- | --------- | --- | --- | --- | --- |
5
|     | z = fmod(x, | y); | // remainder | when | x   | is divided |     | by y |
| --- | ----------- | --- | ------------ | ---- | --- | ---------- | --- | ---- |
6
|     |     |     | // z is | 1.2 since | 7.8 | =   | 4*1.65 | + 1.2 |
| --- | --- | --- | ------- | --------- | --- | --- | ------ | ----- |
7
| 8   | z = atan2(y, | x); | // inverse | tangent      |              | (in radians) |        | of   |
| --- | ------------ | --- | ---------- | ------------ | ------------ | ------------ | ------ | ---- |
| 9   |              |     | // angle   | between      | the          | vector       |        |      |
| 10  |              |     | // (x,     | y) and       | the positive |              | x-axis |      |
| 11  |              |     | // note    | the ordering |              | of           | y and  | x in |
|     |              |     | // calling | the          | function     |              | atan2  |      |
12
|     |     |     | // z is | 0.208465 |     |     |     |     |
| --- | --- | --- | ------- | -------- | --- | --- | --- | --- |
13
|     | z = fabs(u); |     | // Absolute | value | of  | u   |     |     |
| --- | ------------ | --- | ----------- | ----- | --- | --- | --- | --- |
14
|     |     |     | // z is | 3.4 |     |     |     |     |
| --- | --- | --- | ------- | --- | --- | --- | --- | --- |
15
|     |     |     | // note | fabs should |     | not | be confused |     |
| --- | --- | --- | ------- | ----------- | --- | --- | ----------- | --- |
16
|     |     |     | // with | abs (the | integer |     | equivalent) |     |
| --- | --- | --- | ------- | -------- | ------- | --- | ----------- | --- |
17
18
| 19  | return | 0;  |     |     |     |     |     |     |
| --- | ------ | --- | --- | --- | --- | --- | --- | --- |
20 }
Therearemanyinstancesinscientificcomputingcodewherewewishtoincrement
avariableabythevalueb,thatis,wewanttoreplacethevaluethatthevariablea
stores by the value a+b. There are shorthand operations for this and other similar
operationsinC++,showninTable1.1.4 Notethatthe a%boperation,pronounced
“a mod b”, is a modulus operation and may be thought of as the remainder after
dividingabybusingintegerdivisionasdescribedinSect.1.4.4.
Table1.1 Shorthandfor
|     |     |     | Longhand | Shorthand |     |     |     |     |
| --- | --- | --- | -------- | --------- | --- | --- | --- | --- |
somemathematical
|     |     |     | a = a + | b; a | += b; |     |     |     |
| --- | --- | --- | ------- | ---- | ----- | --- | --- | --- |
operations
|     |     |     | a = a - | b; a                  | -= b;                          |     |     |     |
| --- | --- | --- | ------- | --------------------- | ------------------------------ | --- | --- | --- |
|     |     |     | a = a * | b; a                  | *= b;                          |     |     |     |
|     |     |     | a = a / | b; a                  | /= b;                          |     |     |     |
|     |     |     | a = a % | b; a                  | %= b;ifaandbareintegers(amodb) |     |     |     |
|     |     |     | a = a + | 1; a++;ifaisaninteger |                                |     |     |     |
|     |     |     | a = a - | 1; a--;ifaisaninteger |                                |     |     |     |
4The“++”shorthandprogrammingconstruct,whichisalsoavailableintheClanguage,explains
theoriginalnamingofthelanguage“C++”.Itisapunwhichmeans“likeCbutonebetter”.

16 1 GettingStarted
1.4.4 DivisionofIntegers
OnecommonerrorfrequentlymadebyinexperiencedC++programmersisindivid-
inganintegerbyanotherinteger.Considerthefragmentofcodebelow.
✞
int i = 5, j = 2, k;
1
k = i / j;
2
std::cout << k << "\n";
3
This code fragment will output the value 2, when the value of dividing 5 by
2—that is, 2.5—was actually intended. There are two potential problems with the
codefragmentasitiswrittenabove.Thefirstoperationthatwillbeperformedwhen
executingline2ofthelistingaboveistodividetheintegeribytheintegerj.The
valueresultingfromthisoperationwillthenbestoredinthememoryallocatedtok.
In C++, division of an integer by another integer will return only the integer part
of this division: hence dividing i by j will store the integer part of 2.5, which is
2 (as everything after the decimal point will be ignored). The second part of this
statement—the assignment operator—will then assign the value 2 to the integer
variablek.
Itmaybethoughtthatmodifyingthecodefragmentabovesothatkisdefinedto
beadoubleprecisionfloatingpointvariablemaysolvetheproblem,asshowninthe
codefragmentbelow.
✞
int i = 5, j = 2;
1
double k;
2
k = i / j;
3
std::cout << k << "\n";
4
This still does not give the correct value of 2.5. This is because the division is
performedinline3beforetheresultisstoredasthedoubleprecisionfloatingpoint
variable k. As division of an integer by another integer in C++ returns the integer
partofthedivision,thedivisionof ibyjreturnsthevalue2asexplainedabove.
This value is then stored as the double precision floating point number 2.0 in the
memoryallocatedtok.
Todividetwointegersasiftheywerefloatingpointvariables,wemayconvertthe
integerstodoubleprecisionfloatingpointvariablesasshowninthecodefragment
below.
✞
int i = 5, j = 2;
1
double k;
2
k = ((double)(i)) / ((double)(j));
3
std::cout << k << "\n";
4

1.4 Variables 17
Thecode((double)(i))isknownas“explicittypeconversion”andallowsus
to treat the integer variable i as a double precision floating point variable, and so
thiscodefragmentdoesoutputthecorrectvalueof2.5.
1.4.5 Arrays
Manyscientificcomputingapplicationsareunderpinnedbyalgorithmsthatarebased
onvectorsandmatrices.ThesemaybestoredinC++asanentityknownasanarray.
Ifthesizeofthearrayisknowninadvancethenitcanbedeclaredasfollows.
✞
|     | int array1[2]; |     |     |     |     |     |     |
| --- | -------------- | --- | --- | --- | --- | --- | --- |
1
|     | double | array2[2][3]; |     |     |     |     |     |
| --- | ------ | ------------- | --- | --- | --- | --- | --- |
2
Inthecodefragmentabove,array1representsavectorofintegersoflength2,
whilst array2represents a matrix of double precision floating point variables of
size2×3.
Matlab
In contrast to and Fortran, in C++ the indices of an array of length n
startwithentry0andendwithentryn-1.Thisisknownas“zero-basedindexing”.
Elementsofanarrayareaccessedbyplacingtheindicesinseparatesquarebrackets,
andsowemaycompletelypopulatethearraysarray1andarray2declaredabove
usingthefollowingcode.
✞
|     | array1[0] | = 1; | // Note | that | indexing | begins from | 0   |
| --- | --------- | ---- | ------- | ---- | -------- | ----------- | --- |
1
|     | array1[1] | = 10; |     |     |     |     |     |
| --- | --------- | ----- | --- | --- | --- | --- | --- |
2
|     | array2[0][0] | =   | 6.4; |     |     |     |     |
| --- | ------------ | --- | ---- | --- | --- | --- | --- |
3
|     | array2[0][1] | =   | -3.1; |     |     |     |     |
| --- | ------------ | --- | ----- | --- | --- | --- | --- |
4
|     | array2[0][2] | =   | 55.0; |     |     |     |     |
| --- | ------------ | --- | ----- | --- | --- | --- | --- |
5
|     | array2[1][0] | =   | 63.0; |     |     |     |     |
| --- | ------------ | --- | ----- | --- | --- | --- | --- |
6
|     | array2[1][1] | =   | -100.9; |     |     |     |     |
| --- | ------------ | --- | ------- | --- | --- | --- | --- |
7
| 8   | array2[1][2] | =   | 50.8; |     |     |     |     |
| --- | ------------ | --- | ----- | --- | --- | --- | --- |
Wemayalsoperformoperationsonentriesofthearrayasshownbelow.
✞
|     | array1[0]++; | //  | increments |     | the value | of this entry | by 1 |
| --- | ------------ | --- | ---------- | --- | --------- | ------------- | ---- |
1
| 2   | array2[1][2] | =   | array2[0][1] |     | + array2[1][0]; |     |     |
| --- | ------------ | --- | ------------ | --- | --------------- | --- | --- |
Arrayscanbeinitialisedwhentheyaredeclared,forexample,
✞
|     | double | array3[3] | =   | {5.0, | 1.0, 2.0}; |     |     |
| --- | ------ | --------- | --- | ----- | ---------- | --- | --- |
1
|     | int array4[2][3] |     | =   | { {1, | 6, -4}, | {2, 2, 2} }; |     |
| --- | ---------------- | --- | --- | ----- | ------- | ------------ | --- |
2

| 18  |     |     | 1 GettingStarted |
| --- | --- | --- | ---------------- |
wherethearrayarray3representsthevector
5
⎛1⎞,
2
⎝ ⎠
andarray4representsthematrix
1 6 −4
.
(cid:6)2 2 2(cid:7)
Note that the curly bracket notation may only be used to populate arrays at the
sametimeaswhentheyaredeclared—forexamplethecode
✞
int
| array5[3] | = {0, | 1, 2}; |     |
| --------- | ----- | ------ | --- |
isacceptable,butthecode
✞
| int array6[3]; |     |     |     |
| -------------- | --- | --- | --- |
1
| array6 | = {0, 1, 2}; |     |     |
| ------ | ------------ | --- | --- |
2
willnotbeacceptedbythecompiler.
1.4.6 ASCIICharacters
ASCIIcharactersarenumbers,uppercaseletters,lowercaselettersandsomeother
commonlyusedsymbols:mostofthecharactersonyourkeyboardareASCIIchar-
acters. Variables that are ASCII characters are declared using the keyword char.
ExamplecodeusinganASCIIcharacterisshownbelow.
✞
| 1 #include | <iostream> |     |     |
| ---------- | ---------- | --- | --- |
2
| 3 int main(int | argc, char* | argv[]) |     |
| -------------- | ----------- | ------- | --- |
4 {
| char letter; |     |     |     |
| ------------ | --- | --- | --- |
5
| letter | = ’a’; // note | the single quotation | marks |
| ------ | -------------- | -------------------- | ----- |
6
7
| std::cout | << "The character | is " << letter | << "\n"; |
| --------- | ----------------- | -------------- | -------- |
8
9
| return | 0;  |     |     |
| ------ | --- | --- | --- |
10
}
11

1.4 Variables 19
1.4.7 BooleanVariables
Booleanvariablestakeeitherthevaluetrueorthevaluefalse.Thesevariables
arecommonlyusedwhenspecifyingwhetheraportionofcodeshouldbeexecutedin
conjunctionwithifandwhilestatements(whichwillbeintroducedinChap.2).
ExamplesofBooleanvariablesaregivenbelow.
✞
|     | bool flag1, | flag2; |     |     |     |     |     |     |
| --- | ----------- | ------ | --- | --- | --- | --- | --- | --- |
1
|     | flag1 | = true; |     |     |     |     |     |     |
| --- | ----- | ------- | --- | --- | --- | --- | --- | --- |
2
|     | flag2 | = false; |     |     |     |     |     |     |
| --- | ----- | -------- | --- | --- | --- | --- | --- | --- |
3
1.4.8 Strings
ThedatatypecharrepresentsoneASCIIcharacter.Astringmaybethoughtofas
anorderedcollectionofcharacters.Forexample,“C++”isastringconsistingofthe
orderedlistofcharacters“C”,“+”,and“+”.
TousestringsinC++requirestheheaderfile string.Thelibrarywhichmay
beaccessedusingthisheaderfilecontainssignificantfunctionalityfortheuseand
manipulation of strings. The bulk of coding for scientific computing applications
requiresoperationsonnumericalvariables,andsowedonotdiscussthisdatatype
inmuchdetail.Intheexamplecodebelow,wedemonstratehowtodeclareastring,
howtodeterminethelengthofastring,howtoaccessindividualcharactersofthe
string,andhowtoprintastringtotheconsole.
AstringinC++isalittlelikeanarrayofcharacterstogetherwithalayerofextra
functionality. There is no need to understand why the length and elements of the
stringmaybeaccessedinthisway:anunderstandingofhowissufficient.
✞
|     | #include | <iostream> |     |     |     |     |     |     |
| --- | -------- | ---------- | --- | --- | --- | --- | --- | --- |
1
|     | #include | <string> |     |     |     |     |     |     |
| --- | -------- | -------- | --- | --- | --- | --- | --- | --- |
2
3
|     | int main(int | argc, | char* | argv[]) |     |     |     |     |
| --- | ------------ | ----- | ----- | ------- | --- | --- | --- | --- |
4
{
5
|     | std::string | city; | //  | note | the std:: |     |     |     |
| --- | ----------- | ----- | --- | ---- | --------- | --- | --- | --- |
6
|     | city = | "Oxford"; | //  | note the | double | quotation | marks |     |
| --- | ------ | --------- | --- | -------- | ------ | --------- | ----- | --- |
7
| 8   | std::cout | << "String      |     | length    | = " <<    | city.length() |        | << "\n"; |
| --- | --------- | --------------- | --- | --------- | --------- | ------------- | ------ | -------- |
| 9   | std::cout | << "Third       |     | character | = "       | << city.at(2) |        | << "\n"; |
| 10  | std::cout | << "Third       |     | character | = "       | << city[2]    | <<     | "\n";    |
| 11  | std::cout | << city         | <<  | "\n";     | // Prints | the string    |        | in city  |
|     | std::cout | << city.c_str() |     |           | << "\n";  | // Also       | prints | city     |
12
}
13
Inline9andline10ofthecoderecallthatarraysinC++haveindicesthatbegin
from zero: city.at(2) and city[2] both refer to the entry of the array of

20 1 GettingStarted
characterswithindex2,thatis,“f”,thethirdletterofthestring“Oxford”.Lines11
and12bothhavetheeffectofprintingthecontentsofcity(“Oxford”)tothescreen.
Line 12 prints the contents of city to the screen, but does so by first converting
fromaC++stringtoaCstring,whichisanarrayoftypechar.Thestringutility
functionc_strisnotneededhere,butisusefulincaseswhereweneedtopassa
C++stringtoafunctionwhichexpectsanarrayoftypechar.
1.5 SimpleInputandOutput
Itwouldbepointlesstowriteacodewithouthavingthemeanstocommunicatethe
output of the code to the user, or to some other application. As such, output is a
programming technique that must be mastered by all programmers. Similarly, the
user of software would expect to be provided with the ability to specify data that
the software would use to generate output: input is therefore just as important a
programming skill. We now describe basic C++ commands to allow output to the
screen and input from the keyboard. In Chap. 3, we provide a fuller explanation,
describinginputfrom,andoutputto,afile,andamoreflexiblespecificationofthe
formatofthisoutput.
1.5.1 BasicConsoleOutput
Wehavealreadybrieflydiscussedconsole—orscreen—outputinSect.1.2,andhave
seenthatthestatement
✞
std::cout << "Hello World\n";
printsthetext“HelloWorld”tothescreen,followedbyanewline.
Wemayusestd::couttowritemorethanoneentitytotheconsoleatatime.
Thisisbestexplainedbyexample:considerthestatementsbelow.
✞
int x = 1, y = 2;
1
std::cout << "x = " << x << " and y = " << y << "\n";
2
The second statement above tells the computer to first print the string “x = ”,
followedbythevalueassignedtothevariablex,thenthestring“ and y =”,then
thevalueassignedtothevariabley,andfinallytofinishwithanewline.Theoutput
istherefore
✞
x = 1 and y = 2

1.5 SimpleInputandOutput 21
Note that any spaces required in the output must be included within quotation
marksinthestatementthatbeginsstd::cout.
WehavealreadyseenoneformattingcommandforoutputinC++:thenewline
formatting command \n. Some other useful formatting commands are shown in
Table1.2.
Table1.2 Someformatting
|     |     | Command | Symbol |     |
| --- | --- | ------- | ------ | --- |
commandsforconsoleoutput
|     |     | newline   | \n  |     |
| --- | --- | --------- | --- | --- |
|     |     | tab       | \t  |     |
|     |     | ’         | \’  |     |
|     |     | ”         | \"  |     |
|     |     | ?         | \?  |     |
|     |     | bellsound | \a  |     |
Output from C++ is buffered. Sometimes, for example, if the computer is busy
doing a large volume of computation, the program may not print the output to
the screen immediately. If immediate output is desirable then use the statement
“std::cout.flush();”afteranystd::coutcommandtoensuretheoutput
is printed before any other statements are executed, as shown in the listing below.
AswithcertainaspectsofstringmanipulationdiscussedinSect.1.4.8,atthisstage
itissufficienttounderstandhowtosendoutputtotheconsoleimmediatelywithout
worryingwhyitisdoneinthisway.
✞
| std::cout | << "Hello | World\n"; |     |     |
| --------- | --------- | --------- | --- | --- |
1
std::cout.flush();
2
1.5.2 KeyboardInput
Keyboard input for numerical variables and characters is achieved using the input
stream std::cin, where cin is a contraction of console in. As with console
iostreamheaderfile
| output,the |     | mustbeincluded. | Thefollowing | codeprompts |
| ---------- | --- | --------------- | ------------ | ----------- |
someonetoentertheirPersonalIdentificationNumber—commonlyknownastheir
PIN—andthenassignsthenumberenteredtotheintegervariablepin.
✞
| int pin; |     |     |     |     |
| -------- | --- | --- | --- | --- |
1
| std::cout | << "Enter | your PIN, | then hit RETURN\n"; |     |
| --------- | --------- | --------- | ------------------- | --- |
2
| std::cin | >> pin; |     |     |     |
| -------- | ------- | --- | --- | --- |
3
std::cinmaybeusedtoaskformorethanoneinputatatime,asshownbelow.

| 22  |     |     |     |     | 1 GettingStarted |
| --- | --- | --- | --- | --- | ---------------- |
✞
| int account_number, |     | pin; |     |     |     |
| ------------------- | --- | ---- | --- | --- | --- |
1
| std::cout | << "Enter | your | account | number\n"; |     |
| --------- | --------- | ---- | ------- | ---------- | --- |
2
| std::cout | << "and | then your | PIN | followed | by RETURN\n"; |
| --------- | ------- | --------- | --- | -------- | ------------- |
3
| std::cin | >> account_number |     | >>  | pin; |     |
| -------- | ----------------- | --- | --- | ---- | --- |
4
Keyboardinputforvariablesoftypestringisslightlydifferent.Anexampleof
howtoinputastringisgivenbelow.Aswiththecommandsforbasicmanipulation
ofstringsgiveninSect.1.4.8,wedonotattempttoexplainwhystringsareinputin
thisway:thiswillbecomeclearwhenmoreadvancedfeaturesofC++areexplained
laterinthisbook.
✞
| 1 #include | <iostream> |     |     |     |     |
| ---------- | ---------- | --- | --- | --- | --- |
| 2 #include | <string>   |     |     |     |     |
3
| int main(int | argc, | char* | argv[]) |     |     |
| ------------ | ----- | ----- | ------- | --- | --- |
4
{
5
| std::string | name; |     |     |     |     |
| ----------- | ----- | --- | --- | --- | --- |
6
| std::cout | << "Enter | your | name | and then | hit RETURN\n"; |
| --------- | --------- | ---- | ---- | -------- | -------------- |
7
| std::getline(std::cin, |     |     | name); |     |     |
| ---------------------- | --- | --- | ------ | --- | --- |
8
| std::cout | << "Your | name | is " | << name | << "\n"; |
| --------- | -------- | ---- | ---- | ------- | -------- |
9
10
| 11 return | 0;  |     |     |     |     |
| --------- | --- | --- | --- | --- | --- |
12 }
1.6 TheassertStatement
Scientificcomputingapplicationsusuallyrequireamassivenumberofcomplicated
mathematicalcomputations.Ifanyoneofthesecomputationsisincorrect,thenthe
finalresultsofthecomputationwillusuallybeincorrect.Findingthesourceofthe
errorisanexcruciatinglytediousprocess,andsowestronglyrecommendtheuseof
thefeaturesoftheC++languagethatallowidentificationofunexpectedoccurrences
suchasanattempttocomputethesquarerootofanegativenumber.
InChap.9wepointtothenotionthattherearevariouslevelsordegreesoferror.
Inparticular,weintroduceexceptions,whichareafeatureoftheC++languagethat
allowveryeffectivehandlingofanunexpectedoccurrencewhenacodeisbeingrun.
Alesssophisticatedapproachistouseassertstatements,asdemonstratedinthe
codebelow.Notetheinclusionoftheextraheaderfilecassertthatisrequiredto
useassertstatements.

TheassertStatement
1.6 23
✞
| 1 #include <iostream> |     |     |     |
| --------------------- | --- | --- | --- |
| 2 #include <cassert>  |     |     |     |
| 3 #include <cmath>    |     |     |     |
4
| 5 int main(int | argc, char* | argv[]) |     |
| -------------- | ----------- | ------- | --- |
6 {
| 7 double     | a;        |                |            |
| ------------ | --------- | -------------- | ---------- |
| 8 std::cout  | << "Enter | a non-negative | number\n"; |
| 9 std::cin   | >> a;     |                |            |
| 10 assert(a  | >= 0.0);  |                |            |
| 11 std::cout | << "The   | square root    | of "<< a;  |
| 12 std::cout | << " is   | " << sqrt(a)   | << "\n";   |
| 13 return    | 0;        |                |            |
14 }
The code above invites the user to enter a nonnegative number, and returns the
squarerootofthisnumber.Beforethesquarerootiscalculated,wecheckthatthe
numberreallyisnonnegativethroughtheassertstatement.WewillseeinChap.2
that the “>=” that appears in line 10 of the code is the “greater than or equal to”
operator:thislineofcodethereforechecksthatthevariableaisnonnegative.Tosee
theeffectoftheassertstatement,wefirstsavethecodeasprogram.cppand
thencompilethecodewithoutanyoptimisationflagstoproduceexecutablea.out.
If,whenthisexecutableisrun,thenumber−5isentered,thecodeterminatesatthe
assertstatementwiththefollowingerrormessage.
✞
a.out:: program.cpp:10: int main(int, char**): Assertion ‘a >= 0.0’ failed
AfurtherC++functionthatisusefulinconjunctionwithassertionsisthefunction
std::isfinite.Thisallowsconfirmationthatavariablexcontainsafinitevalue,
andnotaninfinitevalue(obtained,forexample,bydividinganon-zeronumberby
zero) or some other value that is not defined as a number (such as the square-root
orlogarithmofanegativenumber).5 Theuseofthisfunctionalongwithanassert
statementisillustratedinthecodefragmentbelow.
✞
| double x; |     |     |     |
| --------- | --- | --- | --- |
assert(std::isfinite(x));
Althoughweemphasisethatthisisaveryrudimentarytechniqueforidentifying
errors, and that we will introduce more sophisticated techniques later, assert
statementscanprovide significantinformation: intheerrormessage above wesee
thattheexactlineofcodewheretheproblemoccurredhasbeenidentified.Another
5Forthosevalueswhichfailthestd::isfinitetestitispossibletodifferentiatebetweeninfinite
numbers(usingstd::isinf)andthosewhichare“notanumber”(usingstd::isnan).

24 1 GettingStarted
advantageof assertstatementsisthattheycanbeautomaticallyremovedwhen
thecodeiscompiledwiththe“-DNDEBUG”flag.Thisallowsyoutotestcodewith
the assertions activated but to distribute a faster program that has the assertions
deactivatedbycompilingusingthecommand
✞
g++ -DNDEBUG program.cpp
1.7 Tips:DebuggingCode
There are many tools designed to aid with the debugging of code. The most basic
oftheseisthecompiler,andtheflagsassociatedwiththecompiler,asdescribedin
Sects. 1.3.2 and 1.3.3. More sophisticated tools exist, but they are aimed at larger
scaleprojects,suchasthosethatwewilldevelopinlaterchaptersofthisbook.
Rather than learning to use a sophisticated debugging tool whilst in the early
stages of learning C++, we suggest below some simpler techniques for debugging
thecodethatyouwillbewritingwhentacklingtheexercisesintheearlychaptersof
thisbook.
Compileyourcodefrequently. Savingyourcodeandcompilingitusingthewarn-
ingcompilerflagdescribedinSect.1.3.3everytimeafewstatementsareaddedis
ausefuldiagnostictoseeifanypotentialproblemsarebeingintroduced.Ifthere
areanyproblems,commentoutthenewstatementsandrecompile.Thenaddthe
statements in one at a time until the problem line is identified. When you first
writecodeinC++youmaybeamazedhowoftenyouforgetthebasicsyntaxsuch
asasemi-colonattheendofastatement.
Saveyourprojectfrequently. If you have code that works and you need to add
new functionality, then do not throw away the old version. If things go wrong
then you will be able to see exactly what you changed and if all else fails you
willhaveaworkingversiontorollbackto.Ifitiscriticalthatyouareabletoroll
backtoaworkingversionofthecode,orifyouareinacollaborativeproject,we
recommendthatyouuseaversioncontrolsystem.6
Alwaystestthecodewithasimpleexample. Forexample,ifyouarewritingcode
toaddtheelementsoftwoarraysverifytheoutputbycomparisonwithacalcu-
lationthatyouhavecarriedoutyourself.
Understanderrorsthatarisewhenexecutingthecode. Ifyourprogramcomplains
ofa“segmentationerror”whenexecuting,itislikelythatyouhaveattemptedto
accessamemberofanarraythatisout-of-range:thatis,youmayhaveattempted
toaccessthe6thentryofanarraythatwasonlydeclaredtohave4elements.
6TherearemanyopensourceversioncontrolsystemssuchasCVS,Subversion,MercurialorGit
tohelpyouwiththis.Therearealsoorganisationswhowillhostyourcoderepositoryforyou.

1.7 Tips:DebuggingCode 25
Useoutput. Ifyouneedtoknowwhereyourprogramiscrashing,andwhy,then
printoutsomevaluesofvariablesatkeypointsintheexecution.Donotforgetto
flushtheoutputsothatitappearsbeforetheprogramcrashes!
Useassertions. Ifyouexpectacertainpropertyatthestartofasectionofcode,
forexample,thatthescalefactorisnonzeroorthattheargumentofasquare-root
isnonnegative,youcancheckforitusingassertions(introducedinSect.1.6).
C++arraysareindexedbeginningfromzero. If the array temperature is
declaredashaving4elements,thestatement“temperature[4] += 1.0;”
willcauseproblems.
Useadebugger. Ifallelsefailsthendebugyourprogramusingadebugger.Tips
onusingadebuggeraretobefoundinSect.7.7.
1.8 Exercises
1.1 Toensurethatyourcompileriscorrectlysetup,copyandsavethefileHello-
World.cppdisplayedinListing1.1,compileit,andexecuteit.
1.2 Write code that asks a user to enter two integers from the keyboard and then
writestheproductoftheseintegerstothescreen.
1.3 Writecodethatdeclarestwovectorsasarraysofdoubleprecisionfloatingpoint
numbersoflength3andassignsvaluestoeachoftheentries.Extendthiscodesothat
itcalculatesthescalar(dot)productofthesevectorsandprintsittoscreen.Finally,
extendthecodesothatitprintstheEuclideannormofbothvectorstoscreen.
[SeeSect.A.1.2foradefinitionofthescalarproduct,andSect.A.1.5foradefinition
oftheEuclideannormofavector.]
1.4 Writecodethatdeclaresfour2×2matricesofdoubleprecisionfloatingpoint
numbers,A,B,C,D,andassignsvaluestotheentriesof AandB.LetC=A+B,and
D=A*B.ExtendyourcodesothatitcalculatestheentriesofCandD,andthenprints
theentriesofthesematricestoscreen.
1.5 Writecodethatinvitestheusertoinputseparatelystringsthatstoretheirgiven
nameandtheirfamilyname.Printtheuser’sfullnametoscreen.
1.6 Iwanttorecordthenumberofcarsthatdrivepastmyhouseeachdayforfive
consecutive days, and calculate the average of these numbers. Create an integer
array to store these five numbers, and then write code to calculate the average of
thesenumbers.Executeyourcodeusingthesampledata34,58,57,32,43.Verify
thatyougetthecorrectanswerof44.8.

26 1 GettingStarted
[Hint: read the material in Sect. 1.4.4 on converting integers to double precision
floatingpointnumbers.]
1.7 InvestigatetheuseofthecompilererrorwarningflagsdiscussedinSect.1.3.3.
Forexample:(i)declareanintegerasaconstantvariableandthenattempttochange
thisvaluelaterinthecode;and(ii)attempttosetanintegervariabletothevalue3.2.

2
FlowofControl
Inalmostanycomputerprogramwrittenforascientificcomputingapplication,we
needtoallowthecomputertoexecuteacollectionofstatementsif—andonlyif—
some criterion is met. For example, if we were writing a program to control the
motionofaspacecrafttravellingtoMars,theprogramwouldincludelinesofcode
that would control the safe landing of the spacecraft. As the craft completes its
touchdown,itfiresretrorocketmotorstocontroldescentuntilthesensorsdetectthat
thelandinggearisincontactwiththeplanet’ssurface.Itisimperativethatthelines
of code which say “cut the motor if and only if there is a strong signal from the
landing gear” are executed at exactly the right time. If these instructions are not
executedwhenthespacecrafthaslanded,theretrorocketsmayfirefortoolongand
causedamagetothecraft.Ontheotherhand,iftheinstructiontocutthemotorsis
executedwhenthespacecraftisstilldescending,wewouldexpectthespacecraftto
crash.1 Itisclearthattherelevantlinesofcodeshouldbeexecutedif,andonlyif,
certainconditionsaremet.
Aswithmostprogramminglanguages,conditionalbranchingmaybeachievedin
C++programsbyusinganifstatement.Similarly,wemayuseawhilestatement
to execute a collection of statements until a specified condition is met, and a for
looptoexecuteacollectionofstatementsaspecifiednumberoftimes.Inthischapter,
weexplainhowtoutilisethesefeaturesoftheC++language.
1NobodyknowswhathappenedtotheMarsPolarLanderinthelastfewsecondsofitsdescent
in1999,butexpertsbelievetherewasabuginthelandinggearsensorcode.Thisbuginvolved
accumulatingweaksignalsfromthelandinggearandmayhavecausedtheretrorocketstocutout
tooearly.
©SpringerInternationalPublishingAG,partofSpringerNature2017 27
J.Pitt-FrancisandJ.Whiteley,GuidetoScientificComputing
inC++,UndergraduateTopicsinComputerScience,
https://doi.org/10.1007/978-3-319-73132-2_2

28 2 FlowofControl
2.1 TheifStatement
Themostbasicuseofanifstatementistoexecuteoneormorestatementsif,and
onlyif,agivenconditionismet.Asweshallseeinthissection,wemaybuildupon
thissimpleconstructtowritemorecomplicatedstatementswhenrequired.
2.1.1 ASingleifStatement
Letussupposethatwewishtoexecutetwostatements,Statement1andState-
ment2,if—andonlyif—thecondition p>qismet.Thefollowingcodedemon-
stratesthebasicsyntaxforthisinC++.
✞
1 if (p > q)
2 {
3 Statement1;
4 Statement2;
5 }
If the condition p > q is met, then the code enclosed by the curly brackets
is executed. The condition (in round brackets) is technically know as the guard.
Notetheindentationwithinthecurlybracketsintheabovelisting.Whilethisisnot
necessaryforthecompilertounderstandthemeaning,itmakesitclearertothereader
whichstatementsareexecutediftheconditionp>qismet.
If only one statement—Statement1—is to be executed when the condition
p > q is satisfied, then curly brackets are not strictly necessary. For example, the
followingtwocodefragmentswillexecuteStatement1iftheconditionp>qis
met.
✞
1 if (p > q)
2 Statement1;
or
✞
if (p > q) Statement1;
Althougheitherofthesetwovariantsofthecodewilldowhatwewantitto,we
do not recommend them, as the curly brackets make it very clear precisely which
statements are executed as a consequence of a given if statement. As such, we
wouldstronglysuggesttheuseofcurlybrackets,asshowninthecodebelow.More
suggestionsontipsforensuringcodeisclearlyreadable—knownascodingconven-
tions—maybefoundinSect.6.6.

2.1 TheifStatement 29
✞
1 if (p > q)
2 {
3 Statement1;
4 }
2.1.2 Example:CodeforaSingleifStatement
Belowisaconcreteexampleofcodethatusesanifstatement.Thiscodechanges
thevalueof xtozeroif,andonlyif,xisnegative.If xisnotnegative,line5ofthe
codewillnotbeexecuted,andthevalueof xwillbeunchanged.
✞
1 double x = -2.0;
2
3 if (x < 0.0)
4 {
5 x = 0.0;
6 }
2.1.3 if–elseStatements
Itisoftenthecasethatwewanttosetavariabletoonevalueifaspecifiedcondition
ismet,andtoadifferentvalueotherwise.ThismaybeimplementedinC++codeby
theuseofanifstatementinconjunctionwithanelsestatement.Thefragmentof
codebelowsetsthedoubleprecisionfloatingpointvariable ytothevalue2ifthe
integervariableiispositive,andtothevalue10otherwise.
✞
1 int i;
2 //...
3 double y;
4 if (i > 0)
5 {
6 y = 2.0;
7 }
else
8
9 {
10 //When i <= 0
11 y = 10.0;
12 }
Notethecommentinline10ofthelistingabove.Asnoconditionisneededfor
the else condition, it is always good programming practice to use a comment to
explicitlystateunderwhatconditionstheelseconditionshouldbemet.

30 2 FlowofControl
2.1.4 MultipleifStatements
Wemayextendthe ifand elsestatementsdescribedabovetoallowmorecom-
plicatedconditionsontheexecutionofstatements.Extendingthepreviousexample,
supposethedoubleprecisionfloatingpointvariableytakesthevalue2iftheinteger
variableiisgreaterthan100,ytakesthevalue10if iisnegative,andytakesthe
value5otherwise.C++codeforthisconditionisgivenbelow.
✞
| int i; |     |     |     |
| ------ | --- | --- | --- |
1
2 //...
double
| 3   | y;  |     |     |
| --- | --- | --- | --- |
if
| 4 (i | > 100) |     |     |
| ---- | ------ | --- | --- |
5 {
| 6 y = | 2.0; |     |     |
| ----- | ---- | --- | --- |
7 }
| else if | (i < 0) |     |     |
| ------- | ------- | --- | --- |
8
{
9
| y = | 10.0; |     |     |
| --- | ----- | --- | --- |
10
}
11
else
12
13 {
| 14 //When | 0 <= i | <= 100 |     |
| --------- | ------ | ------ | --- |
| 15 y =    | 5.0;   |        |     |
16 }
2.1.5 NestedifStatements
Itiscommoninscientificcomputingtohaveanalgorithmwherestatementsmustbe
executedif,andonlyif,twoseparateconditionsaremet.Onewayofimplementing
thisistousenestedifstatements,asshownbelow.Inthiscodethedoubleprecision
floatingpointvariableyisassignedthevalue10if,andonlyif,theconditionsx>z
andp>qarebothmet.
| Listing2.1 Anestedifstatement |     |     |     |
| ----------------------------- | --- | --- | --- |
✞
double
| 1   | x, z, p, | q;  |     |
| --- | -------- | --- | --- |
double
| 2   | y;  |     |     |
| --- | --- | --- | --- |
if
| 3 (x | > z) |     |     |
| ---- | ---- | --- | --- |
4 {
| if  | (p > q) |     |     |
| --- | ------- | --- | --- |
5
{
6
| //Both | conditions | have been | met |
| ------ | ---------- | --------- | --- |
7
y = 10.0;
8
}
9
}
10

2.1 TheifStatement 31
2.1.6 BooleanVariables
Booleanvariablesmaybeusedastheconditionwithanifstatement.Thisisdemon-
stratedinthefragmentofcodebelow.
✞
| bool flag | = true; |     |     |
| --------- | ------- | --- | --- |
1
if (flag)
2
{
3
| std::cout | << "This will | be printed\n"; |     |
| --------- | ------------- | -------------- | --- |
4
5 }
else
6
7 {
| 8 // flag   | is false       |                |     |
| ----------- | -------------- | -------------- | --- |
| 9 std::cout | << "This won’t | be printed\n"; |     |
10 }
2.2 LogicalandRelationalOperators
InSect.2.1wedemonstratedtheuseofifstatementsbyusingtherelationaloperator
“greater than”. To fully utilise if statements and, as we shall see later, while
statements and for loops, we need to extend our range of logical and relational
operators.ThesearesummarisedinTables2.1and2.2.Thecombinationoflogical
andrelationaloperatorsallowanyreasonableconditiontobeimplementedinC++
code.
Afirstexampleofthecombinationoflogicalandrelationaloperatorsistoreplace
thenestedifstatementsinListing2.1byasingleifstatement.Theconditioninthe
newifstatementistrueif,andonlyif,boththeconditionx>zandthecondition
| Table2.1 Logicaloperators | Logicalcondition |     | Operator |
| ------------------------- | ---------------- | --- | -------- |
inC++
|     | AND |     | &&  |
| --- | --- | --- | --- |
|     | OR  |     | ||  |
|     | NOT |     | !   |
Table2.2 Relational
|     | Relation |     | Operator |
| --- | -------- | --- | -------- |
operatorsinC++
|     | Equalto              |     | ==(notethatitisnot“=”) |
| --- | -------------------- | --- | ---------------------- |
|     | Notequalto           |     | !=                     |
|     | Greaterthan          |     | >                      |
|     | Lessthan             |     | <                      |
|     | Greaterthanorequalto |     | >=                     |
|     | Lessthanorequalto    |     | <=                     |

32 2 FlowofControl
p > q are true. If this compound condition is met, the value 10 is assigned to the
variabley.Thisisdemonstratedinthecodebelow.
✞
1 double x, z, p, q;
2 double y;
3 if ((x > z) && (p > q))
4 {
5 //Both conditions have been met
6 y = 10.0;
7 }
The example code fragment below uses a combination of logical and relational
operatorstosetadoubleprecisionfloatingpointvariableytothevalue10ifeither
p>qortheintegervariableiisnotequalto1.Ifneitheroftheseconditionshas
beenmet,thenthevariableyisassignedthevalue−10.
✞
1 double p, q;
2 int i;
3 double y;
4 if ((p > q) || (i != 1))
5 {
6 //One or both conditions have been met
7 y = 10.0;
8 }
else
9
10 {
11 //Neither condition has been met: p<=q and i==1
12 y = -10.0;
13 }
Thelogicaloperator“NOT”isoftenusedinconjunctionwithBooleanvariables.
This is demonstrated in the example code below, where the integer variable i is
incrementedbythevalue2if,andonlyif,theBooleanvariableflagtakesthevalue
false.
✞
1 int i;
2 bool flag = false;
3 if (!flag)
4 {
5 // !flag is true when flag is false
6 i += 2;
7 }

2.3 ThewhileStatement 33
2.3 ThewhileStatement
Awhilestatementisusedifacollectionofstatementsaretobeexecuteduntilsome
prescribedconditionisnotmet.TheC++syntaxforwhilestatementsissimilarto
thatforifstatements.
A first example of a while statement is given below. A variable x is initially
assignedthevalue10.Oneachexecutionofthecodeinsidethe whilestatement
thevalueofthevariablexishalved.Thisisrepeatedwhilethevalueofthevariable
xisgreaterthan1.
| Listing2.2 | Awhileloop |     |     |     |     |
| ---------- | ---------- | --- | --- | --- | --- |
✞
|     | double | x = 10.0; |     |     |     |
| --- | ------ | --------- | --- | --- | --- |
1
while
| 2   | (x  | > 1.0) |     |     |     |
| --- | --- | ------ | --- | --- | --- |
3 {
| 4   | // This       | loop will | execute while     | x > 1,  | so if the |
| --- | ------------- | --------- | ----------------- | ------- | --------- |
| 5   | // value      | of x      | does not decrease | then it | will not  |
| 6   | // terminate. |           |                   |         |           |
|     | x *=          | 0.5;      |                   |         |           |
7
}
8
|     | // Here | we know the | guard (x > | 1.0) has broken. |     |
| --- | ------- | ----------- | ---------- | ---------------- | --- |
9
|     | // This | means that | after the loop, | x <= 1.0 |     |
| --- | ------- | ---------- | --------------- | -------- | --- |
10
Although statements are frequently used in C++ programming, they
while
shouldbeusedwithcare.Considerthefragmentofcodebelow.Supposewewant
todevelopListing2.2abovesothatwecountthenumberoftimesthatwehalvethe
variable x. This may be achieved by the use of an integer variable count which
isincrementedeverytimethestatementsinsidethecurlybracketsareexecuted,as
shownbelow.
✞
|     | double | x = 10.0; |     |     |     |
| --- | ------ | --------- | --- | --- | --- |
1
|     | int count | = 0; |     |     |     |
| --- | --------- | ---- | --- | --- | --- |
2
|     | while (x | > 1.0) |     |     |     |
| --- | -------- | ------ | --- | --- | --- |
3
4 {
| 5   | x *=      | 0.5;     |             |            |     |
| --- | --------- | -------- | ----------- | ---------- | --- |
| 6   | std::cout | << "x    | = " << x << | ", count = | "   |
| 7   |           | << count | << "\n";    |            |     |
8 count++;
|     | std::cout | << "x | = " << x << | ", count = | "   |
| --- | --------- | ----- | ----------- | ---------- | --- |
9
|     |     | << count | << "\n"; |     |     |
| --- | --- | -------- | -------- | --- | --- |
10
|     | std::cout | << "Reached | bottom | of while | loop\n"; |
| --- | --------- | ----------- | ------ | -------- | -------- |
11
}
12
|     | std::cout | << "count | = " << count | << "\n"; |     |
| --- | --------- | --------- | ------------ | -------- | --- |
13

34 2 FlowofControl
Theoutputofthiscodeisshownbelow.
✞
| x = 5, count   | = 0       |      |     |
| -------------- | --------- | ---- | --- |
| x = 5, count   | = 1       |      |     |
| Reached bottom | of while  | loop |     |
| x = 2.5,       | count = 1 |      |     |
| x = 2.5,       | count = 2 |      |     |
| Reached bottom | of while  | loop |     |
| x = 1.25,      | count = 2 |      |     |
| x = 1.25,      | count = 3 |      |     |
| Reached bottom | of while  | loop |     |
| x = 0.625,     | count =   | 3    |     |
| x = 0.625,     | count =   | 4    |     |
| Reached bottom | of while  | loop |     |
| count = 4      |           |      |     |
The important thing to note in the example output above is that the condition
x>1.0 is tested only at the beginning of the statements enclosed within the curly
brackets. In particular, this condition first became untrue when the variable x was
assignedthevalue0.625atline5inthecode.However,theconditionx>1.0was
nottestedatthispoint,andsothevariablecountwasincrementedasline8willbe
executedbeforeleavingthewhileloop.
Were we to want a loop to be executed at least once, regardless of any other
conditions, then we can use the do-while syntax which tests at the end of the
loop,asshownbelow.
✞
| double | x = 0.8; |     |     |
| ------ | -------- | --- | --- |
1
| int count | = 0; |     |     |
| --------- | ---- | --- | --- |
2
do
3
4 {
| 5 x *=      | 0.5;     |             |              |
| ----------- | -------- | ----------- | ------------ |
| 6 std::cout | << "x    | = " << x << | ", count = " |
| 7           | << count | << "\n";    |              |
count++;
8
| std::cout | << "x | = " << x << | ", count = " |
| --------- | ----- | ----------- | ------------ |
9
|     | << count | << "\n"; |     |
| --- | -------- | -------- | --- |
10
| std::cout | << "Reached | bottom | of do-while loop\n"; |
| --------- | ----------- | ------ | -------------------- |
11
| } while | (x > 1.0); |     |     |
| ------- | ---------- | --- | --- |
12
| std::cout | << "count | = " << count | << "\n"; |
| --------- | --------- | ------------ | -------- |
13
Theoutputofthiscode(shownbelow)demonstratesthatthebodyoftheloopis
executed once, even though the initial value of x does not satisfy the condition in
theguard.

2.3 ThewhileStatement 35
✞
| x =     | 0.4, count | =   | 0        |      |     |
| ------- | ---------- | --- | -------- | ---- | --- |
| x =     | 0.4, count | =   | 1        |      |     |
| Reached | bottom     | of  | do-while | loop |     |
| count   | = 1        |     |          |      |     |
We may nest while statements in exactly the same way as if statements,
describedinSect.2.1.5.
2.4 LoopsUsingtheforStatement
The simplest application of a for loop is to execute a collection of statements a
specifiednumberoftimes.Thefragmentofcodebelowdemonstrateshowtoexecute
agivenstatement10times.
✞
| for | (int |            |      |     |     |
| --- | ---- | ---------- | ---- | --- | --- |
| 1   |      | i=0; i<10; | i++) |     |     |
2 {
| 3   | std::cout | <<  | i << " | ";  |     |
| --- | --------- | --- | ------ | --- | --- |
}
4
Line 1 of the code above deserves more explanation. The first statement in this
lineofcodedeclaresanintegervariablei,andinitialisesthisvariabletothevalue0.
Thecodeinsidethecurlybracketsisexecutedif,andonlyif,thevariableiisless
than10.Thefinalcontentofthislineofcodeincrementsibythevalue1eachtime
allthestatementsenclosedbythecurlybracketshavebeenexecuted.Theoutputof
thiscodeistherefore
✞
| 0 1 | 2 3 4 | 5 6 7 | 8 9 |     |     |
| --- | ----- | ----- | --- | --- | --- |
Wemayalsonestforloopsinasimilarwaytothatforifstatementsdescribed
in Sect.2.1.5. Furthermore, for loops may be defined to be executed a variable
numberoftimes,asdemonstratedintheexamplecodebelow.
✞
| 1 for | (int | i=0; i<5; | i++) |     |     |
| ----- | ---- | --------- | ---- | --- | --- |
{
2
|     | for (int | j=5; | j>i; | j--) |     |
| --- | -------- | ---- | ---- | ---- | --- |
3
{
4
|     | std::cout | <<  | "i  | = " << i |     |
| --- | --------- | --- | --- | -------- | --- |
5
|     |     | <<  | " j | = " << j | << "\n"; |
| --- | --- | --- | --- | -------- | -------- |
6
7 }
8 }

36 2 FlowofControl
Beforeexplainingwhatthecodeabovedoes,itisimportanttounderstandwhat
line3ofcode(thesecond forstatement)does.Inasimilarveintothediscussion
of the initial example of a for loop, we see that the first statement initialises the
integer variable j to 5. The statements within the furthest indented curly brackets
are executed when the variable j is greater than the variable i. Each time these
statementshavebeenexecuted,jisdecrementedbythevalue1.
We are now in a position to understand the whole of the code above. The loop
overthevariable iisknownastheouterloop,andtheloopoverthevariable jis
knownastheinnerloop.Thefirsttimethestatementsintheouterloopareexecuted,
i takes the value 0. When i takes this value, the third line of code tells us that j
takesthevalues5,4,3,2,1.Thesecondtimethestatementsintheouterloopare
executed,iwilltakethevalue1,andsojwilltakethevalues5,4,3,2.Wemay
nowdeducethattheoutputofthecodeabovewillbe
✞
i = 0 j = 5
i = 0 j = 4
i = 0 j = 3
i = 0 j = 2
i = 0 j = 1
i = 1 j = 5
i = 1 j = 4
i = 1 j = 3
i = 1 j = 2
i = 2 j = 5
i = 2 j = 4
i = 2 j = 3
i = 3 j = 5
i = 3 j = 4
i = 4 j = 5
2.4.1 Example:CalculatingtheScalarProductofTwoVectors
Thescalarproductbetweentwovectorsofthesamelengthmaybecomputedusinga
forloop.Supposethevectorsarebothoflengthn,andarestoredindoubleprecision
floatingpointarraysvector1andvector2ofthecorrectsize.Rememberingthat
theindexingofC++arraysbeginsfromzero,thescalarproduct(discussedinmore
detailinSect.A.1.2)betweenthesevectors—definedtobeadoubleprecisionfloating
pointvariablescalar_product—isgivenmathematicallybythefollowingsum:
n−1
scalar_product= vector1[i]×vector2[i].
(cid:2)i=0
The mathematical expression above for calculating the scalar product is imple-
mentedinC++belowforthecasen=2.Notethatthevariablescalar_product
mustbeinitialisedto0beforeanycalculationiscarriedout.

2.4 LoopsUsingtheforStatement 37
✞
1 double vector1[2], vector2[2];
2 vector1[0] = 0.5; vector1[1] = -2.3;
3 vector2[0] = 34.2; vector2[1] = 0.015;
4 double scalar_product = 0.0;
5 for (int i=0; i<2; i++)
6 {
7 scalar_product += vector1[i] * vector2[i];
8 }
2.5 TheswitchStatement
A good understanding of the flow of control resulting from if, while and for
statements is crucial for implementation of scientific computing applications. One
furtherstatementthatisusedlessfrequentlyistheswitchstatement.Thisstatement
is best explained by example. Consider the code below, where the variable i has
beendeclaredasaninteger.Notethatthelanguagespecificationsaysthatthecontrol
variable,whichisiinourcase,mustbeanintegerandnotafloatingpointtype.
✞
1 int i;
2
switch(i)
3 {
4 case 1:
5 std::cout << "i = 1\n";
6 case 20:
7 std::cout << "i = 1 or i = 20\n";
8
break;
9
default:
10 std::cout << "i is not 1 or 20\n";
11 }
If i takes the value 1 when the code above is executed, the statements below
line 4 will be executed until the line of code break is reached (line 8). At the
pointwhenbreakisreached,theflowofexecutionwillleavethecodeinsidethe
curlybrackets.Similarly,ifthecodeisexecutedwhenitakesthevalue20,thenthe
statements below line 6 will be executed until the line of code break is reached.
Forallothervaluesof ithelineofcodeafterdefault(line9)willbeexecuted.
Switchstatementswereintroducedtoprogramminglanguagesbecausetheyare
very easy for compilers to implement efficiently. However, they are notorious as
placeswhereprogrammersintroducebugsbyforgettingtoendcasestatementswith
the break keyword or by forgetting to give a default case. Switch statements
shouldbewrittenwithcare.

38 2 FlowofControl
2.6 Tips:LoopsandBranches
Inthistipssection,wehighlightseveraltrapsthatprogrammerswhoarenewtoC++
mayfallinto.
2.6.1 Tip1:ACommonNoviceCodingError
Belowiscodethathasbeenwrittenwiththeintentionofdoublingavariablexfive
times.
✞
1 double x = 2.0;
2 for (int i=0; i<5; i++);
3 {
4 x *= 2.0;
5 }
6 std::cout << "x = " << x << "\n";
Itwouldbeexpectedthatthiscodewouldoutputthevalue2×25 =64.However,
theactualoutputofthiscodeis
✞
x = 4
Whyisthis?Hint:lookverycloselyatline2ofthecodeabove.
Thereasonforthesurprisingoutputisthesemi-colonattheendofline2.This
isacommonerrorforprogrammerswhoarenewtothelanguage.Afterseeingthat
most lines end with a semi-colon you might begin to get into the habit of ending
everylinewithone.Whenyouseetheguardatthebeginningofafor,whileor
ifstatementwithoutasemi-colonattheendthenitmightbetemptingtostickone
in!
Youmightask“Iftheloopisnotexecutingasintended,whyisthefinalanswer
x = 4andnotx = 2?”.Theansweristhattheemptyspaceinline2betweenthe
“)”andthe“;”isbeinginterpretedasthebodyoftheloop—itistheemptynothing
which is executed 5 times. The intended body of the loop (lines 3–5) is treated as
a block with special scope (see Sect.5.1 for more information). This block has no
connectionwiththeforloopandisexecutedonce.
2.6.2 Tip2:CountingfromZero
ProgrammerswhoareexperiencedwithMatlaborFortranmaybeusedtoaloop
beginning from 1 and ending when the loop variable reaches a given value. If we

2.6 Tips:LoopsandBranches 39
wishalooptoexecuteexactlyfourtimes,wewouldwriteitinMatlaborFortran
as
✞
| 1 %MATLAB |     | loop |     |     |
| --------- | --- | ---- | --- | --- |
for
2 j=1:4,
3 j
end
4
✞
| 1 ! | Fortran | loop |     |     |
| --- | ------- | ---- | --- | --- |
DO
| 2   | 10         | J = 1, 4 |        |     |
| --- | ---------- | -------- | ------ | --- |
| 3   | WRITE(*,*) | ’J       | = ’, J |     |
10 CONTINUE
4
In both cases the variable j (in the Matlab code) or J (in the Fortran code)
takesvaluesfrom1to4inclusive.WhenprogramminginC++itiscommontowrite
the equivalent loop from 0 up to, but not including, 4. That is, j = 0, 1, 2, 3. The
reasonforthisisthatwhileMatlabandFortranuseone-basedindexingwherearray
indexingstartsat1,C++useszero-basedindexing.Itisagoodideatowriteloops
intheformofthesecondloopgivenbelow.
✞
|     | // This | loop is | natural for MATLAB | programmers |
| --- | ------- | ------- | ------------------ | ----------- |
1
|     | for (int | j=1; j<=4; | j++) |     |
| --- | -------- | ---------- | ---- | --- |
2
{
3
|     | std::cout | <<  | "j = " << j << "\n"; |     |
| --- | --------- | --- | -------------------- | --- |
4
5 }
| 6   | // This  | loop is   | natural for C++ | programmers |
| --- | -------- | --------- | --------------- | ----------- |
|     | for (int |           |                 |             |
| 7   |          | j=0; j<4; | j++)            |             |
8 {
| 9   | std::cout | <<  | "j = " << j << "\n"; |     |
| --- | --------- | --- | -------------------- | --- |
}
10
2.6.3 Tip3:EqualityVersusAssignment
WhenweintroducedrelationaloperatorsinTable2.2,wenotedthatthereisadiffer-
encebetweenasingle=andadouble==.Theoperator=isanassignmentoperator
which takes the value on the right-hand side and assigns it to the variable on the
left-handside.Theequalityoperator==returnstrueif,andonlyif,thevaluesonthe
leftandrightareequal.
Acommonprogrammingerroristomistakeonefortheother.

40 2 FlowofControl
✞
| // This | erroneous | line | has no effect |     |
| ------- | --------- | ---- | ------------- | --- |
1
| x == | 2+2; |     |     |     |
| ---- | ---- | --- | --- | --- |
2
| // After | testing | x against | the value | 4, the true/false |
| -------- | ------- | --------- | --------- | ----------------- |
3
| // answer | is discarded. |     |     |     |
| --------- | ------------- | --- | --- | --- |
4
5
| x = | 3;  |     |     |     |
| --- | --- | --- | --- | --- |
6
| 7 //This | erroneous | line | will alter the | value of x |
| -------- | --------- | ---- | -------------- | ---------- |
if
| 8   | (x = 4) |     |     |     |
| --- | ------- | --- | --- | --- |
9 {
| 10 x | = 6; |     |     |     |
| ---- | ---- | --- | --- | --- |
11 }
ThecodeaboveshowstwocommonunintendedbugsinC++code.Line2ofthis
codewilltestwhetherornotthevariablexisequalto4,butassignnovaluetox.
This line therefore has no overall effect. Your compiler may give you a warning.
However,asdifferentcompilerswillgivedifferentwarnings,youshouldnotrelyon
this.Unlesssuitablecompilerflagsareusedthecompilerwillgivenoerrorsinceitis
validsyntax.Theseconderrorisshowninlines8–11ofthecode.Inthiscase,line8
ofthecodeusesassignment(asingleequalssign)whenequalitytesting(adouble
equalssign)wasintended.Thiscodewillhavetheeffectofchangingthevalueof x
tothevalue4whenthiswasnotintended.Theconditionwhichisactuallytestedis
obtainedfromthevalueoftheassignment.Anon-zerovalue(inthiscasethevalue
4)isinterpretedassuccess,andsothisconditionismet.Thecodeinsidethecurly
bracketsthereforewillbeexecuted,andsothevariablexwilltakethevalue6.Again,
thisisvalidsyntaxsothecompilermaygivenowarningorerror.
Somecompilersmayreportthesetypesofproblemsaseitherwarningsorerrors.
Youmaybeabletoensurethatthecompilerinformsyouofthesequitesubtleprob-
lemsbyswitchingonwarnings,aswedescribedinSect.1.3.3.
IfweincludetheaboveinaprogramcalledTip.cpp,andcompilewiththeflag
toswitchonallwarnings,thentheGNUC++compilergivesthefollowingwarnings:
✞
| $ g++      | -Wall Tip.cpp |           |             |                   |
| ---------- | ------------- | --------- | ----------- | ----------------- |
|            |               | ‘int      | main(int,   | char              |
| Tip.cpp:   | In function   |           |             | **)’:             |
| Tip.cpp:2: | warning:      | statement | has no      | effect            |
| Tip.cpp:8: | warning:      | suggest   | parentheses | around assignment |
| used as    | truth value   |           |             |                   |
Weseethat,althoughtheoffendinglinesarenotdoingwhatwasintended,anexe-
cutable that can be run is still produced. If we compile with the compilation flag
-Werror discussed in Sect.1.3.3, then the warnings now become errors, and so
no executable program is produced. In this case, we get the following output at
compilationtime:

| 2.6 Tips:LoopsandBranches |     |     |     |     |     | 41  |
| ------------------------- | --- | --- | --- | --- | --- | --- |
✞
| $ g++      | -Wall -Werror | Tip.cpp   |             |           |            |      |
| ---------- | ------------- | --------- | ----------- | --------- | ---------- | ---- |
| cc1plus:   | warnings      | being     | treated     | as errors |            |      |
| Tip.cpp:   | In function   | ‘int      | main(int,   | char      | **)’:      |      |
| Tip.cpp:2: | error:        | statement | has         | no effect |            |      |
| Tip.cpp:8: | error:        | suggest   | parentheses | around    | assignment | used |
| as truth   | value         |           |             |           |            |      |
2.6.4 Tip4:NeverEndingwhileLoops
As discussed briefly in Sect.2.3, it is essential to ensure that the code can always
leaveawhileloop.Thecodebelowwaswrittentofindthemaximumofanarray
offourpositivenumberscalled positive_numbers.Whywillthiscodenever
leavethewhileloop?
✞
double
| 1   | positive_numbers[4] |     |     | = {1.0, 5.65, | 42.0, 0.01}; |     |
| --- | ------------------- | --- | --- | ------------- | ------------ | --- |
double
| 2     | max =   | 0.0; |     |     |     |     |
| ----- | ------- | ---- | --- | --- | --- | --- |
| 3 int | count = | 0;   |     |     |     |     |
| while | (count  | < 4) |     |     |     |     |
4
{
5
| if  | (positive_numbers[count] |     |     | > max) |     |     |
| --- | ------------------------ | --- | --- | ------ | --- | --- |
6
{
7
max = positive_numbers[count];
8
}
9
10 }
The problem with thecode above isthat the integer countis not incremented
inside the while statement. The variable count will therefore always take the
value0,theconditioncount < 4willalwaysbesatisfied,andthecodewillnever
exitthewhileloop.
2.6.5 Tip5:ComparingTwoFloatingPointNumbers
Ifiandjhavebeendeclaredasintegers,andwewanttosetanotherintegervariable
ktozeroifthesevariablestakethesamevalue,thenthismayeasilybewrittenin
C++usingthefollowingcode.
✞
| int | i, j, k; |     |     |     |     |     |
| --- | -------- | --- | --- | --- | --- | --- |
1
| if (i | == j) |     |     |     |     |     |
| ----- | ----- | --- | --- | --- | --- | --- |
2
{
3
| k   | = 0; |     |     |     |     |     |
| --- | ---- | --- | --- | --- | --- | --- |
4
5 }

42 2 FlowofControl
Suppose, instead, we wanted to set k to zero if two double precision floating
point variables p and q take the same value. It may be thought that a very simple
modificationofthecodeabovewillsuffice,where pand qaredeclaredasdouble
precision floating point variables and the guard in line 2 of the listing is modified
totestforequalityof pand q.This,however,isnotthecase.Operationsbetween
floatingpointnumbersallinduceroundingerrors.Asaconsequence,ifthetruevalue
of a calculation is 5, the number stored may be 5.000000000000186. Testing two
doubleprecisionfloatingpointvariablesforequalityisunlikelytogivetheexpected
answer,asduetoroundingerrorsitisunlikelythattwosuchvariableswilleverbe
equal.Instead,weshouldcheckthatthetwonumbersdifferbylessthansomevery
smallnumber,2asshownbelow.
✞
1 double p, q;
2 int k;
3 if (fabs(p-q) < 1.0e-8)
4 {
5 k = 0;
6 }
2.7 Exercises
2.1 Belowisanexamplefragmentofcodethatusesseveralfeaturesintroducedin
thischapter.Thevariablesx,yandzarealldoubleprecisionfloatingpointvariables.
✞
1 double x, y, z;
2 if ((x > y) || (x < 5.0))
3 {
4 z = 4.0;
5 }
else
6
7 {
8 z = 2.0;
9 }
1. Explain,inwords,whatthefragmentofcodedoes.
2. Whatvaluewouldthefragmentofcodeassigntothevariablezwhenthevariables
xandytakethefollowingvalues:
2If pandqaretheresultsoftwocalculationswhichoughttobeequal,towithinmachinepre-
cision,thentheymanydifferbyabout|p|×DBL_EPSILON,sinceDBL_EPSILON∼2e–16is
definedin#include <cfloat>tobesmallestdoubleprecisionfloatingpointnumbersuch
that1.0+DBL_EPSILON isnotequalto1.0whenroundingerrorsaretakenaccountof.

2.7 Exercises 43
(a) x = 10.0,andy = -1.0;
(b) x = 10.0,andy = 20.0;and
(c) x = 0.0,andy = 20.0.
3. Modifythecodeabovesothattheconditionx>yisreplacedbyx≥y.
2.2 Below is some example code. The exercises below all require modification of
thiscode.Inallcasesuseasuitablechecktoensureyourcodeiscorrect.
✞
1 #include <iostream>
2
3 int main(int argc, char * argv[])
4 {
5 double p, q, x, y;
6 int j;
7
8 return 0;
9 }
1. Setthevariable xtothevalue5ifeither pisgreaterthanorequaltoq,orthe
variablejisnotequalto10.
2. Setthevariable xtothevalue5ifboth yisgreaterthanorequaltoq,andthe
variablejisequalto20.Ifthiscompoundconditionisnotmet,setxtotakethe
samevalueasp.
3. Setthevariablexaccordingtothefollowingrule.
0, p>q,
x=⎧1, p≤q, andj=10,
⎨2, otherwise.
⎩
2.3 Inthisexerciseyouareaskedtowriteandtestaprogramwhichsumsalistof
numberswhichareprovidedbyauserviastd::cin(seeSect.1.5.2).
1. Writeaprogramthatcalculatesthesumofacollectionofpositiveintegersthat
areenteredbytheuserfromthekeyboard.Yourprogramshouldprompttheuser
to enter each integer followed by the return key, and to enter “−1” at the end
ofthelistofintegerstobeadded.Notethatthereisnoneedtostorethelistof
integers:youcankeeptrackofthesumastheuserisenteringthevalues.
2. Modifyyourcodesothatthecodeterminatesifthesumofintegersenteredupto
thatpointexceeds100.
3. Modifyyourcodesothat,iftheuserhasenteredanincorrectinteger,theymay
enter“−2”toresetthesumtozeroandbeginenteringintegersagain.

| 44  |     |     |     |     |     |     |     | 2 FlowofControl |
| --- | --- | --- | --- | --- | --- | --- | --- | --------------- |
2.4 Thisexerciseusesthefollowingvectorsandmatrices:
|     |             | 1   | 6   |     | 150   |      | −2     | 0 1 |
| --- | ----------- | --- | --- | --- | ----- | ---- | ------ | --- |
|     | =⎛2⎞;v=⎛5⎞; |     |     | A=⎛ | 712⎞; |      | =⎛     | 0⎞. |
|     | u           |     |     |     |       |      | B 10   |     |
|     |             | ⎜3⎟ | ⎜4⎟ |     | ⎜ 0   | 0 1⎟ | ⎜ 410⎟ |     |
|     |             | ⎝ ⎠ | ⎝   | ⎠   | ⎝     | ⎠    | ⎝      | ⎠   |
Furthermore,thevectorwsatisfiesw =u−3v.Thesevectorsandmatricesarestored
inarraysusingthefollowingprogram.Thisprogramincludescodetocalculatethe
vectorw.
✞
| 1 #include | <iostream> |     |     |     |     |     |     |     |
| ---------- | ---------- | --- | --- | --- | --- | --- | --- | --- |
2
| int main(int |     | argc, | char | * argv[]) |     |     |     |     |
| ------------ | --- | ----- | ---- | --------- | --- | --- | --- | --- |
3
{
4
| double |     | u[3] = | {1.0, | 2.0, 3.0}; |     |     |     |     |
| ------ | --- | ------ | ----- | ---------- | --- | --- | --- | --- |
5
| double |     | v[3] = | {6.0, | 5.0, 4.0}; |     |     |     |     |
| ------ | --- | ------ | ----- | ---------- | --- | --- | --- | --- |
6
| double |     | A[3][3] | = {{1.0, | 5.0, | 0.0}, |     |     |     |
| ------ | --- | ------- | -------- | ---- | ----- | --- | --- | --- |
7
| 8   |     |     | {7.0, | 1.0, | 2.0},  |     |     |     |
| --- | --- | --- | ----- | ---- | ------ | --- | --- | --- |
| 9   |     |     | {0.0, | 0.0, | 1.0}}; |     |     |     |
double
| 10  |     | B[3][3] | = {{-2.0, | 0.0, | 1.0},  |     |     |     |
| --- | --- | ------- | --------- | ---- | ------ | --- | --- | --- |
| 11  |     |         | {1.0,     | 0.0, | 0.0},  |     |     |     |
| 12  |     |         | {4.0,     | 1.0, | 0.0}}; |     |     |     |
13
| double |     | w[3]; |     |     |     |     |     |     |
| ------ | --- | ----- | --- | --- | --- | --- | --- | --- |
14
| for | (int | i=0; | i<3; i++) |     |     |     |     |     |
| --- | ---- | ---- | --------- | --- | --- | --- | --- | --- |
15
{
16
|     | w[i] | = u[i] | - 3.0*v[i]; |     |     |     |     |     |
| --- | ---- | ------ | ----------- | --- | --- | --- | --- | --- |
17
18 }
19
return
| 20  |     | 0;  |     |     |     |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- |
21 }
| Wenowdefinevectorsx,y,andz,andmatricesC |     |     |     |     |     |     | andD,suchthat |     |
| --------------------------------------- | --- | --- | --- | --- | --- | --- | ------------- | --- |
x =u−v,
|     |     |     |     | y = | Au,   |     |     |     |
| --- | --- | --- | --- | --- | ----- | --- | --- | --- |
|     |     |     |     | z = | Au−v, |     |     |     |
C =4A−3B,
|     |     |     |     | D = | AB. |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- |
Developtheprogramabovetocalculatethevectorsx,y,andzandthematricesC
andD,usingloopswherepossible.Hint:makesureyoudefinearraysofanappro-
priate size for these variables. Check your answer by printing out the results, and
comparingwithdirectcalculation.

2.7 Exercises 45
2.5 Theinverseofa2×2squarematrixisgiveninSect.A.1.3.
1. Writecodetocalculatetheinverseofthematrixgivenby
4 10
A= .
(cid:12)1 1 (cid:13)
2. Check that the inverse calculated is correct by printing out the entries of the
inverse,andcomparingwithdirectcalculation.
3. Modifyyourcodetoincludeanassertstatementthatchecksthatthedetermi-
nantofthematrixisnonzero.
2.6 TheNewton–Raphsonmethod(see,forexample,Kreyszig[2])isoftenusedto
solvenonlinearequationsoftheform f(x)=0.Thisisaniterativealgorithm:given
aninitialguessx ,successiveiteratessatisfy
0
f(x )
i−1
x = x − , i =1,2,3,....
i i−1 f′(x )
i−1
Thisalgorithmmaybeterminatedwhen|x −x |<εforsomeuser-prescribedε.
i i−1
In this exercise, we will apply the Newton–Raphson algorithm to the function
f(x)=ex+x3−5,withinitialguessx =0.
0
1. Writedown(onpaper)theNewton–Raphsoniterationforthischoiceoff(x).
2. Byusingaforloop,andanarrayfortheiteratesx
i
,writeaprogramthatimple-
mentstheNewton–Raphsoniterationfori=1,2,3,…,100.Printoutthevalueof
x oneachiteration,andconfirmthattheiterationdoesconvergeasi increases.
i
Atthisstage,donotworryaboutterminatingtheiterationwhenεissufficiently
small.
3. Think of a check that can be performed on the iterates x, as i becomes larger,
i
thatallowsyoutohaveconfidencethatyoursolutioniscorrect.Implementthis
checkinyourprogram.
4. It is not necessary to store the value of x on each iteration to implement the
i
Newton–Raphsonalgorithm.Allthatisneededisthepreviousiterate,x ,and
i−1
the current iterate, x. Modify your code so that the array representing x ,i=
i i
1,2,...,100isreplacedbytwoscalarvariables,x_prevandx_next.
5. Modifyyourcodesothat,byuseofawhilestatement,theiterationterminates
when|x_next-x_prev|<ε.Investigatetheuseofdifferentvaluesofε.

3
FileInputandOutput
Beingabletotransferdatabetweenapplicationsisanessentialrequirementofmost
scientificcomputingsoftware.Forexample,datadefiningtheboundaryofanobject
maybegeneratedfromanimageprocessingapplication.Thisdatamaysubsequently
beusedbymanyapplicationswrittenbyavarietyofusers.Toallowexchangeofdata
betweenapplicationsinthismannerrequiresustostoredatainaclearlyspecified
format.Readingandwritingfilestoagivenspecificationthereforeplaysakeyrole
inscientificcomputingapplications,andisthesubjectofthischapter.
3.1 RedirectingConsoleOutputtoFile
We introduced basic C++ commands for writing text and the contents stored by a
variabletotheconsoleinSect.1.5.OnaLinuxsystemthisoutputmayveryeasily
be redirected to a single file rather than the screen. Should the executable file be
calledSampleCode,thisoutputmaybeprintedtothefileSampleOutput.txt
byexecutingatthecommandline,asdescribedinSect.1.3.2,withtheexecutable
namebeingfollowedbyaspecificationofthefiletobewrittento,asshownbelow:
✞
$./SampleCode > SampleOutput.txt
$
When output has been redirected to file in this way, you may prefer to print to
screenerrorsencounteredbytheprogram.Thiscanbedoneusingstd::cerras
shownbelow.Thewordcerrisacontractionof consoleerror.
©SpringerInternationalPublishingAG,partofSpringerNature2017 47
J.Pitt-FrancisandJ.Whiteley,GuidetoScientificComputing
inC++,UndergraduateTopicsinComputerScience,
https://doi.org/10.1007/978-3-319-73132-2_3

48 3 FileInputandOutput
✞
int x, y;
1
if (y == 0)
2
{
3
std::cerr << "Error - division by zero\n";
4
}
5
else
6
{
7
// y not zero
8
std::cout << x/y << "\n";
9
}
10
The syntax for std::cerr is identical to that for std::cout. When the
console output is not redirected to file there is no difference between the effect of
thesetwocommands.However,whenoutputisredirectedtoaspecifiedfile,onlythe
std::coutstatements areredirected: the output from a std::cerrstatement
willstillbeprintedtothescreen.Shouldoutputfromthecodeaboveberedirected
tofile,thenthevaluegivenbydividingxbyywillbewrittentothespecifiedfile
unlessthevariableytakesthevaluezero.Underthesecircumstances,themessage
“Error - division by zero”willbeprintedtothescreeninstead.
3.2 WritingtoFile
In the previous section, we explained how all the output of an application may be
printedtoasinglefile.Thismaybeadequateforsomeapplications,butisdefinitely
notadequateforallapplications.Forexample,werewetowriteacodetocalculate
thefiniteelementsolutionofagivendifferentialequationwemaywanttostorethe
nodesofthemeshinonefile,theconnectivityarraydefiningtheelementsinanother
file,thefiniteelementsolutioninanotherfile,and—perhaps—thenodescomprising
theindividualfacesoftheelementsinanotherfile.Wethereforeneedtobeableto
writeoutputtomorethanonefile.AlthoughC++offersanextremelylargenumber
ofcommandsforprintingtofile,almostallfileformatscanbeachievedbyusinga
verysmallsubsetofthesecommands.
Writing to, or reading from, file requires the additional header file fstream.
Inthecodebelow,weshowhowtowritetofile.Wefirstdeclareanoutputstream
variablewrite_outputbyspecifyingitasbeingoftypestd::ofstream,and
alsospecifythefilename“Output.dat”asshowninline9.Line10thenchecks
thatthefilehasbeensuccessfullyopened:wereturntothispointbelow.Writingto
fileissimilartoconsoleoutput,butreplacingstd::coutwithwrite_output
in line 13: this writes the entries of the arrays x and y to the file associated with
theoutputstreamvariable,inthiscaseOutput.dat.Finally,inline15,whenall
requireddatahasbeenwrittentofile,we“closethefilehandle”.InSect.1.5.1,we
explained that console output is buffered, and so the output may not immediately

3.2 WritingtoFile 49
be written to the console. Output to file is also buffered: closing the file handle
flushes thebuffer:thatis,alldatathathasbeenbufferediswrittentofilebeforethe
computerexecutesanyfurtherstatements.Itisimportantthatthisisdone:ifanother
part of the program reads a file which is still being written to, then we cannot be
certainwhatdata—ifany—hasyetbeenwrittentodisk.Closingthefilehandlehas
thefurthereffectthatnomoredatacanbewrittentothisfile:thispreventsthefile
beingcorruptedbymistakenlyattemptingtowritefurtherdata.Wenoteatthispoint
thatexplicitlyclosingthefilehandleonline15,andinmanyofourlaterexamples,
is actually redundant for the simple reason that the call to close() will be run
automaticallyasthefilehandleistidiedwhenthemainfunctionfinishes.However
itisgoodpracticeforthenoviceprogrammertomakethiscallexplicitlyandthereby
toknowwhentoexpectoutputfromtheirprogramtobewrittentofile.
| Listing3.1 Basicwritingtofile |     |     |     |
| ----------------------------- | --- | --- | --- |
✞
#include
| 1 <cassert> |     |     |     |
| ----------- | --- | --- | --- |
#include
| 2 <iostream>         |     |     |     |
| -------------------- | --- | --- | --- |
| 3 #include <fstream> |     |     |     |
4
| int main(int | argc, char* | argv[]) |     |
| ------------ | ----------- | ------- | --- |
5
{
6
| double | x[3] = {0.0, | 1.0, 0.0}; |     |
| ------ | ------------ | ---------- | --- |
7
| double | y[3] = {0.0, | 0.0, 1.0}; |     |
| ------ | ------------ | ---------- | --- |
8
| std::ofstream | write_output("Output.dat"); |     |     |
| ------------- | --------------------------- | --- | --- |
9
assert(write_output.is_open());
10
| for (int | i=0; i<3; | i++) |     |
| -------- | --------- | ---- | --- |
11
12 {
| 13 write_output | << x[i] | << " " << y[i] | << "\n"; |
| --------------- | ------- | -------------- | -------- |
14 }
15 write_output.close();
| return | 0;  |     |     |
| ------ | --- | --- | --- |
16
}
17
Itisalsopossibletoflushabufferwithoutclosingthefilehandle.Thisisdonein
asimilarwayasforconsoleoutputinSect.1.5.1,andisdemonstratedbelowforthe
outputstreamvariablewrite_output.
✞
write_output.flush();
We explained above that it is important to check that a file has been opened
(line10oftheListing3.1)beforeattemptingtowriteanydatatoit.Ifthefilecannot
beopened—perhapswedidnothavepermissiontowritetothatfile,oradirectory
wehavespecifieddoesnotexist—thenwritingtotheofstreammaycausenoerror
eventhoughwritingtothefileisnotpossible.Forexample,ifinline9werenamed
thelocationoftheoutputfiletoafolderwearerestrictedfromwritingtoasfollows:

50 3 FileInputandOutput
✞
std::ofstream write_output("/etc/Output.dat");
9
thenwemightexpecttheprogramtofailasweareunlikelytohavepermissionto
writetothefolder/etc/.However,withoutthetestforthefilebeingopenthecode
willexitnormally,producingnooutputfile.Thiswouldclearlybeveryfrustrating
fortheuserofthecode.
TheexecutablecreatedfromListing3.1willcreateanewfile,Output.dat,if
thisfiledoesnotalreadyexist.Ifthisfiledoesexist,theexecutablegeneratedfrom
thelistingabovewilldeletetheoriginalfileandwriteanewfilewiththesamename:
theoriginalcontentsofthefilewillbelost.1 WhetherornotthefileOutput.dat
existedbeforethecodeabovewasexecuted,afterexecutiontherewillbeafilecalled
Output.datthatislistedbelow.
Listing3.2 ThefileOutput.dat
✞
0 0
1 0
0 1
ThecodeinListing3.1maydowhatwasrequired,butitmaynot.Supposethat,
ratherthandeletingthefileifitexists,wewantourcodetoappenddatatotheend
ofthisfile.Thiswouldbeachievedbymodifyingline9ofListing3.1to
✞
std::ofstream write_output("Output.dat", std::ios::app);
9
If the file Output.dat did not exist and we were to execute the code in
Listing 3.1, with line 9 modified as shown above, we would then create the file
Output.datshowninListing3.2.Ifwewerethentoexecutethecodeasecond
timewewouldthenendupwiththefileOutput.datbeingmodifiedasshownin
Listing3.3below.
Listing3.3 ModifiedfileOutput.dat
✞
0 0
1 0
0 1
0 0
1 0
0 1
1Ifyouwanttocheckfortheexistenceofafilebeforeopeninganoutputstreamtoitthenasimple
thingtodoistofirstattempttoreadfromit.SeeExercise3.1

3.2 WritingtoFile 51
3.2.1 SettingthePrecisionoftheOutput
Thekeyformattingcommandforscientificcomputingapplicationsisspecificationof
theprecisionoftheoutput.Thisisdemonstratedinthelistingbelow.Thenumberin
bracketsaftertheprecisioncommandsspecifiesthenumberofsignificantfigures
thattheoutputiscorrectto.Notethatwhentheprecisionissetto10significantfigures
in line 15 of the listing below only eight significant figures will be printed: this is
becausethevariablexisonlygiventoeightsignificantfigures,andsotheremaining
accuracyrequestedisredundant.
✞
| #include <iostream> |     |     |     |
| ------------------- | --- | --- | --- |
1
| #include <fstream> |     |     |     |
| ------------------ | --- | --- | --- |
2
3
| int main(int | argc, char* | argv[]) |     |
| ------------ | ----------- | ------- | --- |
4
{
5
double
| 6               | x = 1.8364238;              |     |     |
| --------------- | --------------------------- | --- | --- |
| 7 std::ofstream | write_output("Output.dat"); |     |     |
8
| write_output.precision(3); |     | // 3 sig | figs |
| -------------------------- | --- | -------- | ---- |
9
| write_output | << x << | "\n"; |     |
| ------------ | ------- | ----- | --- |
10
11
| write_output.precision(5); |     | // 5 sig | figs |
| -------------------------- | --- | -------- | ---- |
12
| write_output | << x << | "\n"; |     |
| ------------ | ------- | ----- | --- |
13
14
| write_output.precision(10); |     | // 10 sig | figs |
| --------------------------- | --- | --------- | ---- |
15
| write_output | << x << | "\n"; |     |
| ------------ | ------- | ----- | --- |
16
17 write_output.close();
18
| 19 return | 0;  |     |     |
| --------- | --- | --- | --- |
}
20
3.3 ReadingfromFile
Whenreadingfromfilewefirstneedtodeclareaninputstreamvariable inasimilar
waytotheoutputstreamvariabledescribedinSect.3.2,andthenspecifythefilethat
wewishtoread.Aswithoutputtofile,theheaderfilefstreamshouldbeincluded.
Reading the file is then performed in a similar way to that described for keyboard
inputinSect.1.5.2,withstd::cinreplacedbytheinputstreamvariable.Suppose
wewanttoinputthefileOutput.datshowninListing3.3.Weknowthatthisfile
hassixrowsandtwocolumns,andsowemayreadthisfileusingthecodeshown
inListing3.4.Theassertioninline9ensuresthat Output.datisondiskinthe
correctlocationandwiththecorrectaccessprivileges:ifnot,theassertionistripped
andthecodeisterminated.

52 3 FileInputandOutput
Listing3.4
Readingcolumnformatteddata
✞
| #include <cassert> |     |     |
| ------------------ | --- | --- |
1
#include
| 2 <iostream> |     |     |
| ------------ | --- | --- |
#include
| 3 <fstream> |     |     |
| ----------- | --- | --- |
4
| int main(int | argc, char* | argv[]) |
| ------------ | ----------- | ------- |
5
{
6
| double | x[6], y[6]; |     |
| ------ | ----------- | --- |
7
| std::ifstream | read_file("Output.dat"); |     |
| ------------- | ------------------------ | --- |
8
assert(read_file.is_open());
9
| for (int | i=0; i<6; | i++) |
| -------- | --------- | ---- |
10
{
11
| 12 read_file | >> x[i] | >> y[i]; |
| ------------ | ------- | -------- |
13 }
14 read_file.close();
| 15 return | 0;  |     |
| --------- | --- | --- |
}
16
Inthecodeabove,weknewthatthefilewewerereadinghadsixrowsandtwo
columns,andsoweknewwhenwritingthiscodethatthestatementsinsidethefor
loophadtobeexecutedsixtimes.Inmanyscientificcomputingapplicationswewill
wanttoreadafile,butdonotknowthelengthofthefileinadvance.Forexample,
we may know that a file contains a list of the coordinates of an unknown number
of points in two dimensions: the file therefore has two columns, but an unknown
numberofrows.Wecannotuseaforloopaswedonotknowhowmanytimesthe
statements in this loop need to be executed. Instead, we use the Boolean variable
associatedwiththeinputstreamvariableread_file.eof().Thisvariabletakes
|     | end | of file |
| --- | --- | ------- |
the value true when the the is reached, and allows us—through the
useofawhilestatement—tocarryonreadingthefilewhilethisvariabletakesthe
valuefalse.Assumingthatweknowthatthenumberofpointsisfewerthan100,
we may achieve this using the following code. Note that a potential problem with
thiscodeasgivenwillbeaddressedinExercise3.2.
✞
| #include <cassert> |     |     |
| ------------------ | --- | --- |
1
| #include <iostream> |     |     |
| ------------------- | --- | --- |
2
| #include <fstream> |     |     |
| ------------------ | --- | --- |
3
4
| int main(int | argc, char | *argv[]) |
| ------------ | ---------- | -------- |
5
{
6
double
| 7               | x[100], y[100];          |     |
| --------------- | ------------------------ | --- |
| 8 std::ifstream | read_file("Output.dat"); |     |
9 assert(read_file.is_open());
10
| int i = | 0;  |     |
| ------- | --- | --- |
11
| while (!read_file.eof()) |     |     |
| ------------------------ | --- | --- |
12
{
13

3.3 ReadingfromFile 53
read_file >> x[i] >> y[i];
14
i++;
15
}
16
read_file.close();
17
return 0;
18
}
19
Oneadditionalfeatureofreadingfromfilethatisofusewhenwritingscientific
computingapplicationsistheabilitytorewindafilesothatwecanreadafilestarting
fromthebeginningagain.Thismaybeachievedbyinsertingthestatementsbelow
intothecodeatthepointwherethefileshouldberewound.
✞
read_file.clear();
1
read_file.seekg(std::ios::beg);
2
3.4 CheckingInputandOutputareSuccessful
In Sect.3.2 we advised C++ programmers to confirm that a file has been opened
beforewritinganydatatothatfile.Wejustifiedthisusingtheexampleofattempting
toopenafileinadirectorythatdoesn’texist.Underthesecircumstancestheintended
datawouldnotbewrittentofile,butthecodewouldproceedwithoutinformingus
ofthis.
Evenifwedoconfirmthatafileweareintendingtowritetoisopenthereareother
problemsthatmayoccur.Wemaysuccessfullywritesomedatatofile,andthenreach
ourdiskquotasetbythesystemadministrator.Subsequentattemptstowritetofile
wouldthenfail,althoughthecodewouldcontinuetoexecute.Alternativelywemay
beexpectingtoread50doubleprecisionnumbersfromafilethatonlycontains40
suchnumbers.Aftersuccessfullyreading40numberswewouldliketobeinformed
thatwehadreachedtheendofthefile,andnomorenumberswereavailabletoread
in. We can check that reading from or writing to file has taken place as expected
using the C++ function ios::good. Use of this function is illustrated below for
thecaseofwritingtofile;itsusewhenreadingfromfilefollowsasimilarpattern.
✞
std::ofstream write_output("OutputVerified.dat");
1
assert(write_output.is_open());
2
for (int i=0; i<100; i++)
3
{
4
write_output << i << "\n";
5
assert(write_output.good());
6
}
7

| 54  |     |     |     |     | 3 FileInputandOutput |
| --- | --- | --- | --- | --- | -------------------- |
3.5 ReadingfromtheCommandLine
Inscientificcomputingapplications,itiscommonforausertowanttosetsomeofthe
parametersusedthemselveswhenexecutingthecode.Forexample,ifcodehasbeen
writtentocalculatethetemperaturedistributioninabarusingthefinitedifference
methodtheusermaywishtosetthethermalconductivityofthebar,orthenumber
ofnodesusedinthefinitedifferencegrid,atthesametimethatthecodeisexecuted.
Fortunately,C++allowstheusertodothiswhenrunningfromthecommandline.
In Sect. 1.2 we promised to explain the third line of the C++ program given in
Listing1.1,namelythelineofcodeshownbelow.
✞
| int main(int | argc, char* | argv[]) |     |     |     |
| ------------ | ----------- | ------- | --- | --- | --- |
3
Althoughwearenotquitereadytoexplainthewholemeaningofthislineuntil
wehaveintroducedpointersinChap.4,wemayexplainhowthislineallowsusto
specifyinputargumentstoaprogramfromthecommandline.Suppose—asdescribed
above—wewanttowritecodethatallowsustospecifyanintegernumberofnodes,
number_of_nodes,tobeusedinafinitedifferencegrid,andadoubleprecision
floating point variable, conductivity, that represents the thermal conductivity
ofabar.Thisisdemonstratedbythefollowingcode.Wewillexplaintheadditional
header file cstdlib used in line 2, and the functions atoi and atof used in
lines15and16attheendofthissection:forthetimebeingwewillfocusonhowto
inputdatafromthecommandline.
✞
| 1 #include | <iostream> |     |     |     |     |
| ---------- | ---------- | --- | --- | --- | --- |
| #include   | <cstdlib>  |     |     |     |     |
2
3
| int main(int | argc, char | *argv[]) |     |     |     |
| ------------ | ---------- | -------- | --- | --- | --- |
4
{
5
| std::cout | << "Number | of  | command | line arguments | = " |
| --------- | ---------- | --- | ------- | -------------- | --- |
6
|     | << argc | << "\n"; |     |     |     |
| --- | ------- | -------- | --- | --- | --- |
7
| for (int | i=0; i<argc; | i++) |     |     |     |
| -------- | ------------ | ---- | --- | --- | --- |
8
9 {
| 10 std::cout | << "Argument |     | " << | i << " = " << | argv[i]; |
| ------------ | ------------ | --- | ---- | ------------- | -------- |
| 11 std::cout | << "\n";     |     |      |               |          |
12 }
13
| std::string | program_name |     | = argv[0]; |     |     |
| ----------- | ------------ | --- | ---------- | --- | --- |
14
| int number_of_nodes |     | = atoi(argv[1]); |     |     |     |
| ------------------- | --- | ---------------- | --- | --- | --- |
15
| double | conductivity | = atof(argv[2]); |     |     |     |
| ------ | ------------ | ---------------- | --- | --- | --- |
16
| std::cout | << "Program | name | =   | " << program_name | << "\n"; |
| --------- | ----------- | ---- | --- | ----------------- | -------- |
17
| std::cout | << "Number | of  | nodes | = " << number_of_nodes; |     |
| --------- | ---------- | --- | ----- | ----------------------- | --- |
18
| std::cout | << "\n"; |     |     |     |     |
| --------- | -------- | --- | --- | --- | --- |
19
| 20 std::cout | << "Conductivity |     | =   | " << conductivity | << "\n"; |
| ------------ | ---------------- | --- | --- | ----------------- | -------- |
21
| 22 return | 0;  |     |     |     |     |
| --------- | --- | --- | --- | --- | --- |
}
23

3.5 ReadingfromtheCommandLine 55
Wewouldinstructtheusertospecifytheseparametersbytypingtheexecutable
name, followed by the number of nodes to be used in the finite difference grid,
followedbythevaluefortheconductivity:thatis,ifwewanttouse100nodesand
a conductivity of 5.0 we would compile the code above to produce the executable
CommandLineCodeandthenenterthefollowingatthecommandline:
✞
| ./CommandLineCode | 100 | 5.0 |     |
| ----------------- | --- | --- | --- |
Thiswouldproduceoutput
✞
| $./CommandLineCode | 100                      | 5.0       |     |
| ------------------ | ------------------------ | --------- | --- |
| Number             | of command line          | arguments | = 3 |
| Argument           | 0 = ./CommandLineCode    |           |     |
| Argument           | 1 = 100                  |           |     |
| Argument           | 2 = 5.0                  |           |     |
| Program            | name = ./CommandLineCode |           |     |
| Number             | of nodes = 100           |           |     |
| Conductivity       | = 5                      |           |     |
$
Weseefromthecodeandoutputabovethattheintegervariableargccontainsthe
numberofargumentsspecifiedatthecommandline.Inthiscasethisisthree:these
aretheexecutablename./CommandLineCode,theinteger100,andthefloating
point number 5.0. These are stored as the ordered list argv[0],argv[1],
argv[2],asisdemonstratedwhenweusetheforlooptoprinttheseout.Eachof
thesearestoredasarraysofcharacters,andsowemustfirstconvertthesearraysof
characterstotheappropriatevariabletypes.Thisisperformedbylines14,15and16
ofthecodelisted.Inline15,weusethefunctionatoi(argv[1])toconvertthe
arrayofcharactersstoredbyargv[1]toaninteger.Similarly,atof(argv[2])
converts argv[2] to a floating point variable. The functions atoi and atof
requiretheheaderfilecstdlibwhichhasbeenincludedinline2.
3.6 Tips:ControllingOutputFormat
Ifthefilesthatarewrittenaretobereadonlybyacomputer,thenitdoesnotreally
matterwhethertheselookattractiveornot.Forexample,ifadatafileisonlytobe
usedforimportingintoavisualisationpackagethenitdoesnotmatteriftheformat
of this file is opaque to humans provided the visualisation package can read the
fileaccurately.If,however,humansmaywanttolookatthesefilesthenformatting
commands,suchascontrollingthewidthofeachcolumnmaybedesirable.
Belowweshowhowtoimplementthreecommonlydesiredformattingtechniques
whichwenowlistbeforedemonstrating.

56 3 FileInputandOutput
1. Output in scientific format. Scientific format is where a number is written as
aproduct of one number withonly one significant figure to the leftof the dec-
imal point and an integer power of 10, that is, 465.78 in scientific format is
4.6578×102, which may be written in C++ notation as 4.6578e2. This is
achievedbytheuseoftheflagstd::ios::scientificwhichrequiresthe
headerfilefstream.
2. Alwaysshowinga+or−sign.Thedefaultsettingforanoutputstreamisnotto
printaplussignbeforeapositivenumber.Tolineupnumbersinneatcolumns,we
maywishtoalwaysprecedeanumberwithaplusorminussign:thisisachieved
by the use of the flag std::ios::showpos which requires the header file
fstream.
3. Precision of scientific output. When scientific format is used the precision
statementworksslightlydifferentlytothatdescribedinSect.3.2.1:inthiscase
the precision specified is the number of digits after the decimal point, and so
the number of significant figures is one greater than this number (as there is
anothersignificantfigurebeforethedecimalpoint).Furthermore,incontrastto
the precision set in Sect. 3.2.1, when scientific format is used zeros are added
afterthedecimalpointtoensurethatalloutputisofexactlythesamewidth.
Theseformattingtechniquesaredemonstratedinthecodebelow.
✞
#include <iostream>
1
#include <fstream>
2
3
4
int main(int argc, char* argv[])
{
5
std::ofstream write_file("OutputFormatted.dat");
6
// Write numbers as +x.<13digits>e+00 (width 20)
7
write_file.setf(std::ios::scientific);
8
write_file.setf(std::ios::showpos);
9
write_file.precision(13);
10
11
double x = 3.4, y = 0.0000855, z = 984.424;
12
write_file << x << " " << y << " " << z << "\n";
13
14
write_file.close();
15
return 0;
16
}
17
3.7 Exercises
3.1 Thisquestionassumesthatyouarestartingfromthecodeinthelistingbelow.

3.7 Exercises 57
✞
| #include | <iostream> |     |     |     |     |
| -------- | ---------- | --- | --- | --- | --- |
1
| #include | <fstream> |     |     |     |     |
| -------- | --------- | --- | --- | --- | --- |
2
3
| int | main(int | argc, | char* | argv[]) |     |
| --- | -------- | ----- | ----- | ------- | --- |
4
{
5
|     | double | x[4] = | {0.0, | 1.0, 1.0, | 0.0}; |
| --- | ------ | ------ | ----- | --------- | ----- |
6
|     | double | y[4] = | {0.0, | 0.0, 1.0, | 1.0}; |
| --- | ------ | ------ | ----- | --------- | ----- |
7
8
return
| 9   |     | 0;  |     |     |     |
| --- | --- | --- | --- | --- | --- |
10 }
1. Extendthecodeabovetoprintthearraysxandytoafilecalledx_and_y.dat
sothatthedatafilehasthefourelementsofxonthetopline,andthefourelements
of yonthenextline.
2. Extendthecodesothattheoutputstreamisflushedimmediatelyaftereachline
ofthefileiswritten.
3. Extendthecodesothattheprecisionissetto10significantfigures,theoutputis
inscientificnotation,andplussignsareshownforpositivenumbers.
4. Amend the program so that it does not automatically create a fresh file
x_and_y.dat every time it is run. Have the program first attempt to open
thefilex_and_y.datasanifstreamforreading.Ifthefilecanbesuccess-
fullyopenedthen,afterclosingtheifstream,warntheuser.Havetheprogram
prompt the user as to whether it should erase the existing file or append to the
existingfile.
3.2
Thisquestionusesthedatafilex_and_y.datthatwaswrittenintheprevious
exercise.Thecodebelowassumesthatweknowthatthedatafilehas4columnsand
thatwewanttocountthenumberofrows.
✞
| #include | <iostream> |     |     |     |     |
| -------- | ---------- | --- | --- | --- | --- |
1
| #include | <fstream> |     |     |     |     |
| -------- | --------- | --- | --- | --- | --- |
2
3
| int | main(int | argc, | char* | argv[]) |     |
| --- | -------- | ----- | ----- | ------- | --- |
4
5 {
| 6   | std::ifstream |     | read_file("x_and_y.dat"); |     |     |
| --- | ------------- | --- | ------------------------- | --- | --- |
if
7 (!read_file.is_open())
8 {
|     | return | 1;  |     |     |     |
| --- | ------ | --- | --- | --- | --- |
9
}
10
|     | int number_of_rows |     |     | = 0; |     |
| --- | ------------------ | --- | --- | ---- | --- |
11
while(!read_file.eof())
12
{
13
|     | double | dummy1, | dummy2, | dummy3, | dummy4; |
| --- | ------ | ------- | ------- | ------- | ------- |
14
|     | read_file | >>  | dummy1 | >> dummy2; |     |
| --- | --------- | --- | ------ | ---------- | --- |
15
| 16  | read_file | >>  | dummy3 | >> dummy4; |     |
| --- | --------- | --- | ------ | ---------- | --- |
17 number_of_rows++;
18 }

58 3 FileInputandOutput
std::cout << "Number of rows = "
19
<< number_of_rows << "\n";
20
read_file.close();
21
return 0;
22
}
23
Run the code above. This code does not give the correct answer. Why is this?
Doesthecodegivethecorrectanswerifthefinalnewlinecharacterisremovedfrom
thefilex_and_y.dat?Modifythecodesothatitgivesthecorrectanswer.
[Hint:Youmightinvestigatetheuseofread_file.fail()whichmaybeusedto
probewhetherthelastreadonthefilestreamwasunsuccessful.]
3.3 Writecodetoimplementtheimplicit(orbackward)Eulermethodtosolvethe
initialvalueordinarydifferentialequation
dy
=−y, y(0)=1,
dx
ontheinterval0≤ x ≤1usingaconstantstepsizeh.Allowtheusertospecifythe
numberofgridpoints,N theywanttouseatthecommandline,anduseanassert
statementtoensurethatthenumberofgridpointsisgreaterthan1.Usethenumberof
gridpointstocalculatethestepsizeh.Yourcodeshouldprintafilecalledxy.dat
thathastwocolumns:thecalculatedvaluesofx;andthecalculatedvaluesofy.Plot
thedatafromthefilexy.datandhencecompareitwiththetruesolutiony =e−x.
[TheimplicitEulermethod(see,forexample,SüliandMayers[3])forthisproblem
resultsinthedifferencerelation
y =1, y n −y n−1 =−y , n =1,2,...,N −1,
0 n
h
wherehisstepsizeandy isthesolutionatx =nh,n =0,1,2,...,N−1,where
n n
Nisthenumberofgridpoints,andwehaveusedzero-basedindexingforthevectors
xandy.]

4
Pointers
One of the key features of the C++ language is the concept of a pointer. We will
see later in this chapter that pointers are extremely useful for allocating memory
for arrays whose sizes are not known when the code is compiled. We will see in
Chap.5 that they also have use when writing functions that allow us to repeat the
sameoperationondifferentvariables.Weconcludethischapterbydiscussingsome
featuresofpointersthathavebeenintroducedinrecentC++standards.
4.1 PointersandtheComputer’sMemory
Pointersarebestintroducedbyexplaininghowtheyrelatetothestorageofvariables
inthecomputer’smemory.
4.1.1 Addresses
Let us suppose that an integer variable total_sum is declared and assigned the
value10:
✞
int total_sum = 10;
Theaddress—thatis,location—ofthisvariableinthecomputer’smemoryisgiven
by&total_sumandcanbeprintedtotheconsoleintheusualway(asshownbelow)
althoughthisaddresswillnotbemeaningfultohumans.
©SpringerInternationalPublishingAG,partofSpringerNature2017 59
J.Pitt-FrancisandJ.Whiteley,GuidetoScientificComputing
inC++,UndergraduateTopicsinComputerScience,
https://doi.org/10.1007/978-3-319-73132-2_4

60 4 Pointers
✞
std::cout << &total_sum << "\n";
Whentheintegervariabletotal_sumisdeclared,memoryisallocatedtothis
variable,andthelocationofthismemorywillnotvarythroughoutexecutionofthe
code.Assuch,theexpression &total_sum,whichrepresentstheaddressofthis
location,willtakeaconstantvaluethroughoutexecutionofthecode.
4.1.2 PointerVariables
In addition to data types such as integers and floating point numbers that we have
encountered earlier in this book, we may also declare pointer variables which are
variablesthatstoreaddresses—thatis,thelocationinthecomputer’smemory—of
other variables. In the code below, p_x is a pointer to a double precision floating
point variable, and p_i is a pointer to an integer variable. The pointer p_x may
thenbeusedtostoretheaddressofadoubleprecisionfloatingpointnumber,whilst
p_imaybeusedtostoretheaddressofaninteger.Theasteriskthatprefixesthese
variableswhentheyaredeclaredindicatesthatthesevariablesarepointers.Inthis
book, we follow a coding standard where all pointer variables, apart from those
introducedlaterinthischapterthatrepresentarrays,havenamesthatbeginwithp_
todenotethattheyareapointervariable:adiscussionofconventionssuchofthese
that are used for variable names, which forms a part of what is known as coding
standards,isgiveninSect.6.6.
✞
1
double* p_x;
2
int* p_i;
Notethatthespacingcanvary,sothatint* p_iandint *p_iareequivalent.
However, int* p_i states more clearly that the type of p_i is a pointer to an
integer,ratherthananinteger.
All pointer variables require an asterisk when they are declared. Hence, in the
codebelow,p_x,p_y,p_iarepointers,whilejisanintegervariable.
✞
1
double *p_x, *p_y;
2
int *p_i, j;
Whendeclaringmorethanonepointeronalinetheasteriskmustberepeatedas
showninline1ofthelistingabove,whichmeansthat int* p_iinline2would
belessappropriateasonlyonevariable(p_i)isapointervariable.Forthisreason,
werecommendonlyonepointerdeclarationperline.

4.1 PointersandtheComputer’sMemory 61
Nowwehaveexplainedhowtodeclareapointervariable,andwhatthesevariables
represent,weexplainhowtousethem.
4.1.3 ExampleUseofPointers
Ifavariablep_xhasbeendeclaredasapointertoadoubleprecisionfloatingpoint
number, then it is clearly important to distinguish between: (i) the location of the
memory to which this pointer points at (denoted by p_x); and (ii) the contents of
thismemory(denotedby*p_x).Theasteriskoperatorin*p_xiscalledapointer
de-referenceandcanbethoughtofastheoppositetothe &operatorintroducedin
Sect.4.1.1.
Thecodebelowshowshowpointerstodoubleprecisionfloatingpointvariables
maybecombinedwithdoubleprecisionfloatingpointvariables.
✞
| double | y, z; | //  | y, z store | double | precision |     | numbers |
| ------ | ----- | --- | ---------- | ------ | --------- | --- | ------- |
1
| double* | p_x; | //  | p_x stores | the | address | of  | a double |
| ------- | ---- | --- | ---------- | --- | ------- | --- | -------- |
2
|     |     | //  | precision | floating |     | point | number |
| --- | --- | --- | --------- | -------- | --- | ----- | ------ |
3
| z = 3.0; |     |     |     |     |     |     |     |
| -------- | --- | --- | --- | --- | --- | --- | --- |
4
| p_x = | &z; | //  | p_x stores | the | address | of  | z   |
| ----- | --- | --- | ---------- | --- | ------- | --- | --- |
5
| 6 y = *p_x | + 1.0; | //  | *p_x is   | the contents |       | of the | memory |
| ---------- | ------ | --- | --------- | ------------ | ----- | ------ | ------ |
| 7          |        | //  | p_x, i.e. | the          | value | of z   |        |
4.1.4 WarningsontheUseofPointers
Avariablepointershouldnotbeuseduntilfirsthavingbeenassignedavalidaddress.
Forexample,thefollowingfragmentofcodemaycauseproblemsthataredifficult
tolocate.
✞
| 1 double* | p_x; | // p_x       | can store | the    | address   | of   | a double |
| --------- | ---- | ------------ | --------- | ------ | --------- | ---- | -------- |
| 2         |      | // precision |           | number | - haven’t | said | which    |
|           |      | // address   | yet       |        |           |      |          |
3
4
| *p_x | = 1.0; | // trying | to store | the | value | 1.0 | in an |
| ---- | ------ | --------- | -------- | --- | ----- | --- | ----- |
5
|     |     | // unspecified |     | memory | location |     |     |
| --- | --- | -------------- | --- | ------ | -------- | --- | --- |
6
Inthecodeabove,wehaven’tspecifiedthelocationofthedoubleprecisionfloating
pointvariablethatp_xpointsat.Itmaythereforebepointingatanylocationinthe
computer’smemory.Changingthecontentsofanunspecifiedlocationinacomputer’s
memory—asisdoneinline5ofthecodeabove—clearlyhasthepotentialtocause
problems that may be hard to locate. This problem may be avoided by the use of
thenewkeywordasshownbelowtoallocateavalidmemoryaddresstop_x,and

| 62  |     |     |     |     |     |     | 4 Pointers |
| --- | --- | --- | --- | --- | --- | --- | ---------- |
thedeletekeywordwhichreleasesthismemorytobeusedbyotherpartsofthe
programwhenthismemoryisnolongerrequired.
✞
|     | double* | p_x; |     | // p_x | stores the | address | of a double |
| --- | ------- | ---- | --- | ------ | ---------- | ------- | ----------- |
1
|     |     |     |     | // precision | floating | point | number |
| --- | --- | --- | --- | ------------ | -------- | ----- | ------ |
2
3
| 4   | p_x    | = new  | double; | // assigns  | an address    | to         | p_x |
| --- | ------ | ------ | ------- | ----------- | ------------- | ---------- | --- |
| 5   | *p_x   | = 1.0; |         | // stores   | 1.0 in memory | with       |     |
| 6   |        |        |         | // address  | p_x           |            |     |
|     | delete | p_x;   |         | // releases | memory        | for re-use |     |
7
Afurtherreasontousepointerswithcareisshowninthecodebelow.Thefirst
timeyisprinted(inline5)ittakesthevalue3:thesecondtimeyisprinted(inline7)
ittakesthevalue1eventhoughyisnotexplicitlyalteredinthecodebetweenthese
twolines.Thisisbecausethelinebetweenthestd::coutstatements,line6,has
alteredthevalueof y,possiblyunintentionally,by usingthepointervariable p_x
| (whichcontainstheaddressof |     |     |     | y)tochangethevalueof |     | y.  |     |
| -------------------------- | --- | --- | --- | -------------------- | --- | --- | --- |
✞
|     | double | y;  |     |     |     |     |     |
| --- | ------ | --- | --- | --- | --- | --- | --- |
1
|     | double* | p_x; |     |     |     |     |     |
| --- | ------- | ---- | --- | --- | --- | --- | --- |
2
|     | y   | = 3.0; |     |     |     |     |     |
| --- | --- | ------ | --- | --- | --- | --- | --- |
3
|     | p_x | = &y; |     |     |     |     |     |
| --- | --- | ----- | --- | --- | --- | --- | --- |
4
|     | std::cout |     | << "y | = " << y | << "\n"; |     |     |
| --- | --------- | --- | ----- | -------- | -------- | --- | --- |
5
|     | *p_x | = 1.0; | //  | This changes | the value | of  | y   |
| --- | ---- | ------ | --- | ------------ | --------- | --- | --- |
6
|     | std::cout |     | << "y | = " << y | << "\n"; |     |     |
| --- | --------- | --- | ----- | -------- | -------- | --- | --- |
7
Asituationwherethecontentsofthesamevariablemaybeaccessedusingdifferent
names,suchasinthecodeabove,isknownasaliasing.InC++,thisismostlikelyto
happenwhenpointersareinvolved,eitherwhentwopointersaliasthesameaddress
inmemory,orwhenapointerreferencesthecontentsofanothervariable.Whenone
ormorepointersallowthesamevariabletobeaccessedusingdifferentnames,the
aliasingisknownaspointeraliasing.
4.2 DynamicAllocationofMemoryforArrays
One of the main uses of pointers is the dynamic allocation of memory for storing
arrays.InSect.1.4.5,weexplainedhowarrayscouldbedeclaredwhenthesizeofthe
arraywasknowninadvance.However,wedonotalwaysknowthesizesofthearrays
inaprogramwhenwecompilethecode.InSect.3.5,forexample,wedemonstrated
howtoallowtheuserofacodetospecifythenumberofnodesinafinitedifference
gridwhenexecutingthecode.Ifthecoordinatesofthenodesinthismeshweretobe
storedinanarraywewouldnotknow,whencompilingthecode,whatsizetomake
thisarray.Underthesecircumstances,usingthemethodofdeclaringarraysgivenin

4.2 DynamicAllocationofMemoryforArrays 63
Sect.1.4.5,wehavetocompilethecodewithsomeestimateofthesizeofthisarray.
If we overestimate the size of this array, we are being wasteful of computational
memorywiththepotentialeffectofpreventingtheexecutionofthecodeonasystem
with insufficient memory. If we underestimate the size of this array, the program
willalmostcertainlycrash.Ineithercase,wewillthenhavetorecompilethecode
with a new estimate of the array size. The use of pointers to dynamically allocate
memoryforarraysavoidstheseproblems,aswedonotneedtoknowthearraysize
atcompiletime.
Afurtheruseofpointersfordynamicallyallocatingmemoryisfortheefficient
storageofirregularlysizedarrays,forexamplealowertriangularmatrix.Ifalower
triangular matrix is stored in an array as described in Sect.1.4.5, we will have to
allocate the same number of columns to each row of the matrix. As we know that
roughlyhalftheseentriesarezero,wearebeingwastefulofcomputationalmemory.
Dynamicallocationofmemoryallowsustoallocatememorymoreprudently.
Memory can be allocated using the new operator, and deallocated using the
deleteoperator.
4.2.1 Vectors
Tousepointerstocreateaone-dimensionalarrayofdoubleprecisionfloatingpoint
numbersoflength10calledx,weusethefollowingsectionofcode.
✞
1
double* x;
x = new double [10];
2
Theelementsofthearraymaythenbeaccessedinexactlythesamewayasifthe
arrayhadbeencreatedbyusingthetypeofdeclarationintroducedinSect.1.4.5.In
thedynamicallocationofmemoryforthearrayusingthepointerxabove,xstores
theaddressofthefirstelementofthearray.Thiscanbeseenbyprintingoutboththe
pointerxandtheaddressofthefirstelementofthearray,asshownbelow.
✞
std::cout << x << "\n";
1
std::cout << &x[0] << "\n"; //prints the same value
2
The memory allocated to x may be, and should be, deallocated by using the
statementbelowwhenthisarrayisnolongerrequired.
✞
delete[] x;
Always be sure to free any memory allocated when it is no longer required—a
codecanveryquicklyuseallavailablememoryotherwise.Inlaterchaptersofthis

64 4 Pointers
book,whenwedevelopaclassofvectors,wewillseethatoneadvantageofwriting
aclassofvectorsisthatmemoryallocatedtoavectorisautomaticallyfreedwhen
appropriate.
An example code that uses dynamically allocated memory for arrays is shown
below. This code creates two arrays, x and y, both of size 10. Elements of x are
then assigned manually. Elements of y are then set to be twice the value of the
correspondingelementof x.Finally,allmemoryallocatedisdeleted.
✞
| #include | <iostream> |     |
| -------- | ---------- | --- |
1
2
| int main(int | char* |         |
| ------------ | ----- | ------- |
| 3            | argc, | argv[]) |
4 {
| 5 double* | x;           |     |
| --------- | ------------ | --- |
| 6 double* | y;           |     |
| x = new   | double [10]; |     |
7
| y = new | double [10]; |     |
| ------- | ------------ | --- |
8
9
| for (int | i=0; i<10; | i++) |
| -------- | ---------- | ---- |
10
{
11
x[i] = ((double)(i));
12
y[i] = 2.0*x[i];
13
14 }
15
| 16 delete[] | x;  |     |
| ----------- | --- | --- |
| 17 delete[] | y;  |     |
18
| return | 0;  |     |
| ------ | --- | --- |
19
}
20
4.2.2 Matrices
Memory for matrices may also be allocated dynamically. For example, to create a
two-dimensionalarrayofdoubleprecisionfloatingpointnumberswith5rowsand
3columnscalledAweusethefollowingsectionofcode.
| Listing4.1 Dynamicmemoryallocationforamatrix |     |     |
| -------------------------------------------- | --- | --- |
✞
| int rows | = 5, cols | = 3; |
| -------- | --------- | ---- |
1
double**
| 2          | A;              |      |
| ---------- | --------------- | ---- |
| 3 A = new  | double* [rows]; |      |
| 4 for (int | i=0; i<rows;    | i++) |
5 {
| A[i] | = new double | [cols]; |
| ---- | ------------ | ------- |
6
}
7

4.2 DynamicAllocationofMemoryforArrays 65
The array may then be used in exactly the same way as if it had been created by
usingthedeclaration
✞
double A[5][3];
Whenallocatingmemoryforthematrixdynamicallyinthecodeabove,thevari-
able A—which has been declared using line 2 of Listing4.1—has the following
propertiesafterthefragmentofcodehasbeenexecuted:
(cid:129) eachA[i]isapointer,andcontainstheaddressof A[i][0];and
(cid:129) AcontainstheaddressofthepointerA[0].
Assuch,thevariable Aisanarrayofpointers,whichexplainsthetwoasterisksin
line 2 of Listing4.1. Line 3 of this listing specifies that A is a pointer to an array
ofpointerstodoubleprecisionfloatingpointnumbers,andthatthisarrayisofsize
rows. The for loop in this listing then specifies that each pointer in the array
itselfpointstoanarrayofdoubleprecisionfloatingpointnumbersoflengthcols.
Thishastheeffectthat A[i]—whichisapointer—storestheaddressoftheentry
A[i][0],thatis,thefirstentryofrowi.
As was the case for vectors, it is important to deallocate memory dynamically
allocated for a matrix when it is no longer needed. The memory allocated for the
matrixAinListing4.1maybefreedusingthefollowingcode.
✞
for (int i=0; i<rows; i++)
1
{
2
delete[] A[i];
3
}
4
delete[] A;
5
Wecannotemphasiseenoughhowimportantitistoalwaysdeleteanymemory
dynamicallyallocated,particularlymemoryallocatedinsideloops—ifnotyouwill
soonrunoutofmemory.
4.2.3 IrregularlySizedMatrices
SupposewewanttoconstructalowertriangularmatrixAofintegerswith1,000rows
and1,000columns.Thismayclearlybedoneusingthedeclarationbelow.
✞
int A[1000][1000];
However,thedeclarationabovewastesaconsiderableamountofmemorystoring
the super-diagonal entries of the matrix which we know in advance all take the
value 0. We may avoid wasting this memory by allocating the memory for this

66 4 Pointers
matrixdynamically,andonlyallocatingmemoryforthediagonalandsub-diagonal
elements. This is demonstrated in the fragment of code below, where in row i
of the matrix we declare i+1 nonzero elements: that is, 1 element in row 0, 2
elementsinrow1,andsoon.Memorycan,andshouldbe,deletedinthesameway
asdemonstratedintheprevioussectionwhenthisarrayisnolongerrequired.
✞
1
int** A;
2
A = new int* [1000];
for (int i=0; i<1000; i++)
3
{
4
A[i] = new int[i+1];
5
}
6
Althoughthefragmentofcodeabovedoescorrectlyallocatethememoryrequired
foralowertriangularmatrixitshouldbeusedwithcare:errorswouldresultif,for
example,theentryA[9][19]weretobeusedinacode.Whenwedevelopclasses
later in this book, we will see how the use of classes may avoid problems such as
this.
4.3 Tips:Pointers
TheconceptofpointersisonethatinexperiencedC++programmersoftenstruggle
with.Westronglyurgethereadertoattempttheexercisesattheendofthischapterto
improvetheirunderstandingofthistopic.Inthissection,wegivetipsontheuseof
pointers.Inallotherchaptersthetipssectionisthefinalsectionbeforetheexercises.
Thischapteristheexceptionbecausesomeofthecautioninthefollowingtipsmay
bemitigatedinmodernC++.WeintroducetheseadvancedtopicsinSect.4.4which
youmightignoreonfirstreading.
4.3.1 Tip1:PointerAliasing
InSect.4.1.4,wegaveanexamplewhereapointervariablep_xwaspointingtothe
memory location of the double variable y. A change was made to that variable
by de-referencing the pointer p_x. This situation might lead to some confusion,
althoughinashortcodefragmentitiseasytoseethatthetwovariablesareleading
tothesameplace:*p_xisanaliasfory.
Inlarge-scaleprograms,itmaynotbesoeasytoseewherepointersarealiasesfor
othervariables.Thisisbecausetheinformationthattwonamesarepointingtosame
placemaynotbeavailableinthesamescreen-fullofcode,oreveninthesamefile.
Agoodexampleofthiswouldbeavectorormatrixadditionoperationinwhichthe
vectorsormatricesarestoredasarraysandpassedintoafunctionviapointers.We

4.3 Tips:Pointers 67
willdealwithfunctionsinthenextchapter,butfornowyouneedtobeawarethatthe
codeforthefunctionmaybeinadifferentfileandthatthevariablesmaytakedifferent
namesinsidethefunctiondefinition.TheoperationtocomputethematrixsumA=
B+Cwouldprobablybeimplementedinsuchafunctionbyanestedloopoverthe
elementsofthearrays,sothattheactualimplementationbecomesanelement-wise
A[i][j] = B[i][j] + C[i][j].Theremaybeunknownpointer-aliasingin
thisfunction,becausetheusermightwishtoincrementonematrixbyanother,i.e.
tocomputeX=X+Y.Itturnsoutthatthispointeraliasingwillbesafe,because
theinnerloopwilleffectivelybecalculatingX[i][j] += Y[i][j]asintended.
Eachofthe(i,j)componentsoftheresultisindependentoftheothers.
However,whatiftheuserwereusingamatrix–matrixproductoperation?Inthe
computationA=BC,thecomponentA[i][j]dependsonpartsof BandCother
than B[i][j] and C[i][j]. This means that, if the user wishes to compute X
=XYusingafunctionwrittenforcalculatingA=BC,thereisachancethatsome
components of X will be written to before they are read—leading to an incorrect
calculation.Onewaytoresolvethisaliasingissueistoproducethematrix–matrix
product result in temporary storage before copying it into the output argument A.
However, this solution is inefficient in cases where there is no pointer aliasing,
especiallywhenthesizesofthematricesarelarge.Anothersolutiontotheissueisto
providetwoversionsofthematrix-matrixproductoperation:onewhichisefficient
butonlysafetousewhenthereisnopointeraliasingandonewhichissafetousein
allcircumstances.
Onecanseethattheproblemofpointeraliasingisdeeperthanmightappearfrom
thetrivialexampleinSect.4.1.4.Ingeneral,thereisnocorrectsolutiontotheseissues.
Compilerwritersspendagreatdealoftimefindingplaceswherepointeraliasinghas
(orhasnot)definitelyhappenedsothatcodeoptimisationisonlyappliedinsituations
whereitissafetodoso.
4.3.2 Tip2:SafeDynamicAllocation
Theremaybecircumstancesunderwhichitisnotpossibletoallocatememoryeither
because the number of items in an array has been set with a negative argument or
becausethereisnotenoughphysicalmemoryavailabletotheprogram.Settingthe
numberofelementsinanarraytoanegativenumberiseasierthanyoumightthink.
If the size of a problem is configured via an input file, then a size may easily be
mistyped.Moresubtly,ifanumberisassignedtoanintegerthatislargerthanthe
maximumvaluethatcanbestoredbythatinteger,thentheintegervaluestoredmay
actuallybeanegativenumber:thisisknownasanoverflowerror.
Implementations of C++ may vary over how they treat such errors. The default
behaviour is to throw an exception when a memory error is encountered. We will
dealwithcatchingexceptionsinChap.9andnotethatanexceptioncouldterminate
yourprogram.ShouldyourimplementationofC++notthrowthissortofexception,
thenasafewaytoprogramistotestthatyourvariablehasbeenassignedavalueas
thecodefragmentbelowillustrates.

68 4 Pointers
✞
1
double* p_x;
p_x = new double[10000];
2
assert (p_x != NULL);
3
4.3.3 Tip3:EverynewHasadelete
We pointed out earlier in this chapter that all dynamically allocated memory must
befreed,orelseyoumayrunoutofmemory.Thisproblemisparticularlynoticeable
whenmemoryisdynamicallyallocatedinsidethebodyofa forloop,suchasthe
oneshownbelow.
✞
for (int i=0; i<10000; i++)
1
{
2
3
double** A;
4
A = new double* [50];
for (int j=0; j<50; j++)
5
{
6
A[j] = new double [50];
7
}
8
}
9
Eachtimethebodyoftheloopinthecodeaboveisexecuted,newmemoryisallocated
for the array A. The memory from the previous execution has not yet been freed,
althoughitwillnotbeavailableasthearrayAwillbestoredinthememorythathas
beenallocatedmostrecently:thereisnoautomaticgarbagecollectionformemory
whichisnolongeraccessible.Youwillsee,whenwediscussfunctionsinChap.5,
thatthesameproblemmayarisewhenmemoryisallocatedinsidefunctions,butnot
freedbeforethefunctionends.
If you do not delete memory which you have allocated dynamically, then that
memory will not be accessible until your program finishes (when all memory is
handedbacktothesystem).Ifyourequestmorememorythanyouneed,thenitmay
bethatthephysicalmemoryofthecomputerwillbeexhausted—yourcomputerwill
runmuchmoreslowlyandfurthermemoryallocationmayfail.
Thereareseveralwaysaroundthisissue.Thefirstandforemostistoensurethat
everynewinyourprogramismatchedwithadeletesomewhereelse.Asecond
way to make sure that inaccessible or unnecessary memory is freed up is to run
yourprogramthroughamemorydebugger(seeSect.10.6formoredetails).Another
solution,adoptedbyseasonedC++programmersistousesharedpointers.Theseare
anadvancedlanguagefeaturewhichallowmemorytobeautomaticallyde-allocated
oncethereisnolongeranyotherpartoftheprogramwhichcanaccessit.

4.4 ModernC++MemoryManagement 69
4.4 ModernC++MemoryManagement
In Sect.1.1.2, when discussing why you should write scientific programs in C++,
we claimed that its flexible memory management gave it an advantage over lan-
guageswhichusegarbagecollection,suchasJava.Howeverwealsogaveacaveat:
thisflexiblememorymanagementmeansthatyou,theprogrammer,areresponsible
for making sure that memory is managed properly. Many novice C++ program-
mersareconfusedbydynamicmemoryallocationandbecomedeterredwhenthey
learnthatitisuptothemtoknowwhendynamicallycreateddatashouldbefreed
up with delete. The good news for C++ programmers is that over recent years
theC++standardhasintroducedsmartpointerconstructswhichfacilitatememory
management—providinganefficientcompromisebetweengivingresponsibilityto
theprogrammerandautomaticruntimegarbagecollection.Theseconstructswere
firstintroducedintheC++11specificationandhavebeenrefinedinsubsequentspec-
ifications.1InthischapterwerestrictattentiontomodernC++memorymanagement
butwewillreturntoothermodernC++functionalityinChap.8.
4.4.1 Theunique_ptrSmartPointer
Inourfirsttipofthischapter,inSect.4.3.1,wewarnedaboutthedangersofpointer
aliasing.Inparticularwenotedthattheremaybetimeswhenaprogrammerassumes
that two pointers are pointing to different pieces of data, but that this assumption
may not be true. When two pointers are pointing to the same piece of data it may
leadtobugssuchasanelementofamatrixbeingoverwritten beforeitsvaluehas
beenread.
C++11 provides a smart pointer type which can guard against pointer aliasing
errors. This smart pointer unique_ptr allows the run-time system to monitor
certainpointersonanindividualbasis.Theexampleofitsuse,giveninListing4.2,
is a little contrived because the true power of the construct cannot be seen until it
is used with functions. The program will, however, serve to illustrate a few of the
mainfeatures.YourC++compilermaynotacceptthisprogramsincemostcurrent
compilers are set to read older C++98 standard programs by default. In order to
compiletheprogramyouwillneedtoaddaflagtoindicatethatthecodeadheresto
theC++11standard.InthecaseoftheGNUcompilerthismeans
✞
g++ -std=c++11 -o Unique Unique.cpp
orsimilar.
Inline6ofListing4.2anewintisdynamicallycreatedviathenewkeywordand
itsaddressassignedtoaunique_ptrcalledp_x.Notethatthetypedescriptionof
1AtthetimeofwritingthesecondeditionofthisbooktherelevantspecificationsareC++11,C++14
andC++17.

70 4 Pointers
theunique_ptrcontainsthetypeoftheentitytowhichitpoints,whichinthiscase
isint,inanglebrackets.Thisanglebracketnotationisatemplatedescriptionandwe
willseemoreofthisinChap.8.Thepurposeofnew intinroundbracketsonline
6istodynamicallycreateanintandpassitslocationintop_x.Thevariablep_x
now acts as a facade through which the actual address of the dynamically-created
integer storage may be accessed. There is more happening behind the scenes, but
thereadermayinterpretline7asade-referenceusedtostoreavalueinthememory
locationatthisaddress.
We demonstrate that the compiler won’t allow us to easily assign the value of
p_x by two lines which have been commented out: line 11 attempts to assign it
to a raw pointer and line 16 attempts to assign it to another unique_ptr. The
correctwaytogetthevalueoutofp_x(line12)istousetheget()functiontoget
theactualaddressofthemanageddata.Meanwhilethecorrectwaytoassignfrom
oneunique_ptrtoanotherisfortheownershipoftheresourcetobetransferred
between them with the function std::move(). This is demonstrated in line 17.
Lines18and19showthattheunique_ptrvariablescanbeevaluatedasBoolean
values:trueifthevariableismanagingaresourceandfalseifnot.
Note that in Listing4.2 there is no explicit call to delete to match with the
newonline6.Itisactuallythecasethat,becausetheunique_ptrismanaging
theresource,itisabletoautomaticallyfreeupmemory.Online20,p_zistoldto
relinquish ownership and this implicitly calls delete on the memory originally
createdonline6.
Listing4.2 Exampleprogramtodemonstratetheuseofunique_ptr
✞
#include <memory> // Requires C++11 or above
1
#include <cassert>
2
3
int main()
4
{
5
std::unique_ptr<int> p_x(new int);
6
7
*p_x = 5; // ’de-reference’ to alter contents
8
// The following won’t compile because p_x
9
// is not a raw pointer to int
10
11
// int* p_y = p_x;
12
int* p_y = p_x.get(); // Get raw pointer
13
std::unique_ptr<int> p_z;
14
// The following won’t compile
15
// p_z = p_x;
16
p_z = std::move(p_x); // Transfer ownership
17
assert(p_z); // Test p_z is in use
18
assert(!p_x); // Test that p_x not in use
19
p_z.reset();
20
assert(!p_z); // Test p_z is also not in use
21
return 0;
22
}
23

4.4 ModernC++MemoryManagement 71
4.4.2 Theshared_ptrSmartPointer
Themismatchbetweenthelastcodeexample(Listing4.2)andourpreviouslysound
advice in Sect.4.3.3, “Every new has a delete”, prompts us to introduce the
variabletypeshared_ptr.Thissmartpointerconstructwasnotavailableinthe
official C++ standard until C++14 but some C++11 compilers such as the GNU
compilersupportitanyway.
Theconceptbehindasmartsharedpointerissimple.Alongsidetheaddressofthe
underlyingresourcethepointeralsokeepstrackofacountofthenumberoftimes
thisresourcehasbeenused.Initiallythecountwillbe1,butitwillincrementwhen
thepointerispassedbetweenvariouspartsoftheprogram.Wheneverauseofthe
pointerfinishestheusagecountwillbedecremented.Whenthecountdropsto0,and
therearenoknownusesofthepointer,theoriginalresourcewillbefreedup.This
allhappensautomatically,withouttheuserhavingtoworryaboutit.Itiseffectively
alocalgarbagecollectorwhichmanagesasmallpieceofmemory.
ThecodepresentedinListing4.3,illustratingtheuseofasmartsharedpointer,
isagainalittlecontrived,butitrepresentshowthisautomaticmemorymanagement
mightworkinpractice.Inline6anewintegervalueisdynamicallycreatedandits
location is stored in a shared_ptr variable p_x. As with the previous C++11
examplethisnewsmartpointeristemplatedwiththetypeofitsargumentinangle
brackets.Inline10another shared_ptrvariableiscreatedanditisassignedto
the same value as p_x (this is an assignment which would not be possible with
theunique_ptrtype).Inline12p_yisresetsothatitrelinquishesanyclaimon
memory.Whilelines10and12arejustasimpleassignmentandareset,respectively,
theirusehereactuallyrepresentsgeneralwiderusesofasharedpointer.Copiesof
pointersmaybemadewhentheyarepassedintofunctions,aswewillseeinChap.5,
or passed into containers—of the kind introduced in Chap.8. When functions or
containersfinish,theircopyofthepointerisnotneededandis,ineffect,reset.
| Listing4.3 | Exampleprogramtodemonstratetheuseofshared_ptr |     |     |     |
| ---------- | --------------------------------------------- | --- | --- | --- |
✞
| 1 #include | <memory>   | // Requires | C++11 | or above |
| ---------- | ---------- | ----------- | ----- | -------- |
| #include   | <iostream> |             |       |          |
2
3
int main()
4
{
5
| std::shared_ptr<int> |     | p_x(new | int); |     |
| -------------------- | --- | ------- | ----- | --- |
6
| std::cout<<"p_x |     | use count: | "<<p_x.use_count()<<"\n"; |     |
| --------------- | --- | ---------- | ------------------------- | --- |
7
| *p_x | = 5; // | ’de-reference’ | to  | alter contents |
| ---- | ------- | -------------- | --- | -------------- |
8
| 9 //                    | Use this pointer | elsewhere  |                           |     |
| ----------------------- | ---------------- | ---------- | ------------------------- | --- |
| 10 std::shared_ptr<int> |                  | p_y        | = p_x;                    |     |
| 11 std::cout<<"p_x      |                  | use count: | "<<p_x.use_count()<<"\n"; |     |
12 p_y.reset();
| std::cout<<"p_x |     | use count: | "<<p_x.use_count()<<"\n"; |     |
| --------------- | --- | ---------- | ------------------------- | --- |
13
p_x.reset();
14
| std::cout<<"p_x |     | use count: | "<<p_x.use_count()<<"\n"; |     |
| --------------- | --- | ---------- | ------------------------- | --- |
15
| return | 0;  |     |     |     |
| ------ | --- | --- | --- | --- |
16
}
17

72 4 Pointers
Lastlyinline14theoriginalpointerisreset.Thishas,again,thesameeffectas
p_xgoingoutofuse:itsclaimonthedataisrelinquished.Inthiscasetheusecount
willdropto0andthesmartpointerwillautomaticallyfreeuptheoriginalmemory
whichwascreatedonline6.
ThroughoutListing4.3theusecountofthemainsharedpointer p_xiswritten
to the console. The output of this program is given below and reflects the number
ofusesofthesharedresource.Thiscountisoriginally1whenp_xiscreated,then
2 when p_y shares the resource, and 1 when p_y relinquishes its use on line 12.
Finally,whenp_xrelinquishesitsuse,thecountdropsto0.
✞
p_x use count: 1
p_x use count: 2
p_x use count: 1
p_x use count: 0
4.5 Exercises
4.1 Writecodethatdeclaresaninteger itotakethevalue5.Declareapointerto
anintegerp_j,andstoretheaddressof iinthispointer.Multiplythevalueofthe
variableiby5byusingalineofcodethatonlyusesthepointervariable.Declare
another pointer to an integer p_k and use the new keyword to allocate a location
inmemorythatthispointerstores.Thenstorethecontentsofthevariableiinthis
location.Nowchangethevaluepointedtobyp_jto0.Checkthatyourprogramis
correctbyoutputtingthevalueof iandvaluespointedtobyp_jandp_k.
4.2 Assignvaluestotwointegervariables.Swapthevaluesstoredbythesevariables
usingonlypointerstointegers.
4.3 Writecodethatallocatesmemorydynamicallytotwovectorsofdoubleprecision
floatingpointnumbersoflength3,assignsvaluestoeachoftheentries,andthende-
allocatesthememorybeforethecodeterminates.Extendthiscodesothatitcalculates
thescalar(dot)productofthesevectorsandprintsittoscreenbeforethememoryis
de-allocated.Puttheallocationofmemory,calculationandde-allocationofmemory
insideaforloopthatruns1,000,000,000times:ifthememoryisnotde-allocated
properlyyourcodewilluseallavailableresourcesandyourcomputermaystruggle.
4.4 Writecodethatdynamicallyallocatesmemoryforthree2×2matricesofdouble
precisionfloatingpointnumbers,A,B,C,andassignsvaluestotheentriesofAand
B.Let C=A+B.Extendyourcodesothatitcalculatestheentriesof C,andthen
printstheentriesofCtoscreen.Finally,de-allocatememory.Again,checkyouhave
de-allocatedmemorycorrectlybyusingaforloopasinthepreviousexercise.

4.5 Exercises 73
4.5 InSect.4.4weintroducedtheunique_ptrandshared_ptrconstructs.A
useful further smart pointer is the weak_ptr, which is a smart pointer that does
notcontributetotheusecount.Itcanbeusedinsituationswherevariablesneedto
beaccessed,butonlywhentheyexist.Ithasfunctionsexpiredandlockwhich
canbeusedtocheckifitsresourcehasbeendeletedand,ifithasnotbeendeleted,
togettotheresource.
CopyListing4.3andcompileitwithacompatibleC++11compiler.Nowaddan
extrasmartpointer:aweak_ptrwhichisinitialisedtothevaluep_x.Experiment
withprintingthevalueoriginalof p_x(i.e.thevalue5)viathisweaksmartpointer.
Trythisbefore,andafter,thep_xisresetonline14.

5
Blocks,FunctionsandReference
Variables
The code developed in this book up to this point has been restricted to code that
maybeplacedinsidecurlybracketsaftertheinitiallineofcode“int main(int
argc, char* argv[]);”.Readerswithpreviousprogrammingexperiencewill
beawareofthelimitationsthisplaceswhenwritingcode.Forexample,ifwewere
toapplythesameoperationsindifferentplacesinthecodewewouldhavetorepeat
thelinesofcodethatperformedtheseoperationseverywhereinthecodewherethey
wererequired.Itwouldbemuchmoreconvenientifwecouldwriteafunctionthatwe
couldcallwheneverwewantedtoperformtheseoperations.Thischapterintroduces
theC++machineryforwritingfunctions.
5.1 Blocks
A block is any piece of code between curly brackets. A variable, when declared
insideablock,maybeusedthroughoutthatblock,butonlywithinthatblock.This
isdemonstratedinthecodebelow.Inline9,weattempttousethevariablejwhen
itisonlydeclared—andthereforeavailable—intheblockenclosedwithinthecurly
brackets in lines 4 and 8. In the language of programmers, “the scope of j is the
blockbetweenlines4and8”.Ifweattemptedtousethecodefragmentbelow,the
compilerwouldreportthisattempteduseofjasanerror:jissaidtobeoutofscope
atline9.
©SpringerInternationalPublishingAG,partofSpringerNature2017 75
J.Pitt-FrancisandJ.Whiteley,GuidetoScientificComputing
inC++,UndergraduateTopicsinComputerScience,
https://doi.org/10.1007/978-3-319-73132-2_5

| 76  |     |     |     |     | 5   | Blocks,FunctionsandReferenceVariables |     |     |
| --- | --- | --- | --- | --- | --- | ------------------------------------- | --- | --- |
✞
{
1
|     |     | int | i;  |     |     |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- |
2
|     |     | i = | 5;  | // OK |     |     |     |     |
| --- | --- | --- | --- | ----- | --- | --- | --- | --- |
3
{
4
|     |     |     | int j; |     |     |     |     |     |
| --- | --- | --- | ------ | --- | --- | --- | --- | --- |
5
|     |     |     | i = 10; | //  | OK  |     |     |     |
| --- | --- | --- | ------- | --- | --- | --- | --- | --- |
6
|     | 7   |     | j = 10; | //           | OK      |          |      |     |
| --- | --- | --- | ------- | ------------ | ------- | -------- | ---- | --- |
|     | 8   | }   |         |              |         |          |      |     |
|     | 9   | j = | 5;      | // incorrect | - j not | declared | here |     |
10 }
Thesamevariablenamemaybeusedforavariabledeclaredbothinsideablock—
termedthelocalvariable—andoutsidethescopeofanyfunction(includingthemain
function)—termed the global variable. Both of these variables may be accessed
insidetheblockasshowninthecodebelow,usingtheexampleofbothaglobaland
alocalvariablecalledi.Furthermore,wemaydefineavariablejinboththeouter
blockandtheinnerblock:insidetheinnerblockthevalueofjstoredbythevariable
declaredintheouterblockisnotaccessible.Themultipledeclarationofbothiand
jinthecodebelowisbadprogrammingpractice,asitcanclearlyleadtoconfusion.
In fact, since the scope of variables is so important, we suggest that variables are
declaredonlywithintheblockwheretheyareneeded,closetotheirfirstuse.This
multipledeclarationofvariablesisknownasvariableshadowingandyoucanavoid
it happening by turning on “shadow warnings” in your compiler. With the GNU
g++ compiler this is achieved by adding the -Wshadow flag to the compilation
command.
✞
| 1   | #include | <iostream> |           |     |     |     |     |     |
| --- | -------- | ---------- | --------- | --- | --- | --- | --- | --- |
| 2   | int i    | = 5;       | // global |     | i   |     |     |     |
3
|     | int main(int |     | argc, | char | * argv[]) |     |     |     |
| --- | ------------ | --- | ----- | ---- | --------- | --- | --- | --- |
4
{
5
|     | int | j = | 7;  |     |     |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- |
6
|     | std::cout |     | <<  | i << "\n"; |     |     |     |     |
| --- | --------- | --- | --- | ---------- | --- | --- | --- | --- |
7
{
8
int
| 9   |     | i         | = 10, | j = 11;  |                    |       |          |        |
| --- | --- | --------- | ----- | -------- | ------------------ | ----- | -------- | ------ |
| 10  |     | std::cout | <<    | i <<     | "\n"; // local     | value | of i     | is 10  |
| 11  |     | std::cout | <<    | ::i      | << "\n"; // global |       | value of | i is 5 |
| 12  |     | std::cout | <<    | j <<     | "\n"; // value     | of    | j here   | is 11  |
| 13  |     | //The     | other | j (value | 7) is inaccessible |       |          |        |
}
14
|     | std::cout |     | <<  | j << "\n"; | // value | of j | here is | 7   |
| --- | --------- | --- | --- | ---------- | -------- | ---- | ------- | --- |
15
|     | return |     | 0;  |     |     |     |     |     |
| --- | ------ | --- | --- | --- | --- | --- | --- | --- |
16
}
17

5.2 Functions 77
5.2 Functions
Nowthatwehavedefinedwhatwemeanbyablockofcodewemaydemonstrate
howtowritefunctions.
5.2.1 SimpleFunctions
Asimpleprogramthatwritesandusesafunctiontodeterminetheminimumvalue
oftwodoubleprecisionfloatingpointvariablesxandy,andstoresitinthedouble
precisionvariableminimum_valueisshownbelow.Notethefunctionprototype
thatisline3inthelistingbelow.Thefunctionprototypetellsthecompilerwhatinput
variablesarerequired,andwhatvariable,ifany,isreturned.Intheexamplebelow,
thefunctionprototypeexplainsthatlaterinthecodetherewillbeafunctioncalled
CalculateMinimumthatrequirestwodoubleprecisionfloatingpointvariablesas
input,andreturnsonedoubleprecisionfloatingpointvariable.Thefunctionprototype
canbethoughtofasbeingsimilartodeclaringavariable.Thevariablenamesaand
b in the prototype are ignored by the compiler and don’t have to be included, but
theirinclusioncanclarifytheprogram.Notethatthefunctionprototypeendswitha
semi-colon.
Lines 15–29 of the code contain the statements that perform the tasks required
bythefunction.Thiscodebeginswithalineofcodethatisidenticaltothefunction
prototype(includingthevariablenames)withoutthesemi-colon.Afterthisthereis
ablockofcodethatendswitha returnstatementthatreturnsthevaluerequired
to the point in the code where this function was called from. Note that there is no
needtodeclarethevariablesaandbinsidethefunction—thedeclarationinline15
hasdonethisalready.Variablessuchasminimumthatareusedinsidethefunction
butarenotpartofthefunctionprototypemustbedeclaredwithinthefunctionblock.
Line8demonstrateshowtocallafunction:thevariablesinbrackets(xandyinthis
case)aresenttothefunction,andareknownastheargumentsofthefunction.The
variablereturnedfromthefunctionisstoredasminimum_value.
✞
1 #include <iostream>
2
3 double CalculateMinimum(double a, double b);
4
5 int main(int argc, char * argv[])
6 {
7 double x = 4.0, y = -8.0;
8 double minimum_value = CalculateMinimum(x, y);
9 std::cout << "The minimum of " << x << " and " << y
10 << " is " << minimum_value << "\n";
11
12 return 0;
13 }
14

| 78  |                                |     |     |     | 5 Blocks,FunctionsandReferenceVariables |     |
| --- | ------------------------------ | --- | --- | --- | --------------------------------------- | --- |
|     | double CalculateMinimum(double |     |     |     | double                                  |     |
| 15  |                                |     |     | a,  |                                         | b)  |
16 {
double
| 17  |     | minimum; |     |     |     |     |
| --- | --- | -------- | --- | --- | --- | --- |
if
| 18  | (a < | b)  |     |     |     |     |
| --- | ---- | --- | --- | --- | --- | --- |
19 {
|     | minimum | = a; |     |     |     |     |
| --- | ------- | ---- | --- | --- | --- | --- |
20
}
21
else
22
{
23
|     | // a | >= b |     |     |     |     |
| --- | ---- | ---- | --- | --- | --- | --- |
24
|     | minimum | = b; |     |     |     |     |
| --- | ------- | ---- | --- | --- | --- | --- |
25
26 }
27
return
| 28  |     | minimum; |     |     |     |     |
| --- | --- | -------- | --- | --- | --- | --- |
29 }
Notethatonlyonevariablemaybereturnedfromafunction.Althoughsufficient
forsomepurposes,wemaysometimeswanttoreturnmorevariables.Wewillseehow
thismaybedonelaterinthischapter.Ofcourse,therearesomecircumstanceswhere
wedonotwantafunctiontoreturnanyvariable:suchfunctionsmaybeprototyped
asa voidfunction.Thecodebelowcontainsanexampleofafunctionthatprints
outamessageinformingacandidatewhetherornottheyhavepassedanexam.This
functionrequirestwointegervariablesasinput:thefirstofthesecontainsthemark
thatacandidatehasscored;thesecondcontainsthepassmarkfortheexam.
✞
#include
| 1   | <iostream> |     |     |     |     |     |
| --- | ---------- | --- | --- | --- | --- | --- |
2
|     | void PrintPassOrFail(int |     |        | int |            |     |
| --- | ------------------------ | --- | ------ | --- | ---------- | --- |
| 3   |                          |     | score, |     | passMark); |     |
4
| 5   | int main(int | argc, char | * argv[]) |     |     |     |
| --- | ------------ | ---------- | --------- | --- | --- | --- |
{
6
|     | int score | = 29, pass_mark |     | = 30; |     |     |
| --- | --------- | --------------- | --- | ----- | --- | --- |
7
|     | PrintPassOrFail(score, |     |     | pass_mark); |     |     |
| --- | ---------------------- | --- | --- | ----------- | --- | --- |
8
9
|     | return | 0;  |     |     |     |     |
| --- | ------ | --- | --- | --- | --- | --- |
10
11 }
12
|     | void PrintPassOrFail(int |     |        | int |           |     |
| --- | ------------------------ | --- | ------ | --- | --------- | --- |
| 13  |                          |     | score, |     | passMark) |     |
14 {
| 15  | if (score | >= passMark) |     |     |     |     |
| --- | --------- | ------------ | --- | --- | --- | --- |
16 {
|     | std::cout | << "Pass | -   | congratulations!\n"; |     |     |
| --- | --------- | -------- | --- | -------------------- | --- | --- |
17
}
18
else
19
{
20
|     | // score | < passMark |     |     |     |     |
| --- | -------- | ---------- | --- | --- | --- | --- |
21
| 22  | std::cout | << "Fail | -   | better | luck | next time\n"; |
| --- | --------- | -------- | --- | ------ | ---- | ------------- |
23 }
24 }

5.2 Functions 79
Afunctioncanonlychangethevalueofavariablesenttoafunctioninsidethat
function:changesmadewithinthefunctionwillhavenoeffectonthisvariableafter
thefunctionhasbeenexecutedandthecodecontinuestoexecutestatementsinthe
block where the function has been called from. This is because a copy is made of
anyvariablethatissenttoafunction,anditisthiscopyofthevariable,andnotthe
original variable, that is modified inside the function. For example, the following
functionhasnoeffectonthevariablexoutsidethefunction,eventhoughthevalue
of xischangedinsidethefunction.
✞
| 1 #include <iostream> |     |     |     |
| --------------------- | --- | --- | --- |
2
| void HasNoEffect(double |     | x); |     |
| ----------------------- | --- | --- | --- |
3
4
| int main(int | argc, char | argv[]) |     |
| ------------ | ---------- | ------- | --- |
| 5            |            | *       |     |
{
6
| double | x = 2.0; |     |     |
| ------ | -------- | --- | --- |
7
8 HasNoEffect(x);
| 9 std::cout | << x << | "\n"; // will print | out 2.0 |
| ----------- | ------- | ------------------- | ------- |
10
return
| 11  | 0;  |     |     |
| --- | --- | --- | --- |
12 }
13
| void HasNoEffect(double |     | x)  |     |
| ----------------------- | --- | --- | --- |
14
{
15
| // x takes | the value | 2.0 here |     |
| ---------- | --------- | -------- | --- |
16
| x += 1.0; |     |     |     |
| --------- | --- | --- | --- |
17
| // x takes | the value | 3.0 here |     |
| ---------- | --------- | -------- | --- |
18
19 }
5.2.2 ReturningPointerVariablesfromaFunction
In Sect.5.2.1, we demonstrated how to write functions that returned either a vari-
able that wasn’t a pointer, or had no return type. Functions can be used to return
pointervariablesaswell,asshowninthecodebelow.Inthiscase,wehavewritten
afunctionthatallocatesmemoryforamatrixdynamically,andreturnsthepointer
to the memory allocated. The array can then be used as if the memory were allo-
cated in the main function, as demonstrated in lines 8 and 9. Because every new
requires a matching delete we have avoided leaking memory by also provid-
ing a function called FreeMatrixMemory to free up the memory created in
AllocateMatrixMemory. Both AllocateMatrixMemory and its partner
functionFreeMatrixMemoryoperateinthemannerdescribedinSect.4.2.2.

| 80  |     |     |     | 5 Blocks,FunctionsandReferenceVariables |     |
| --- | --- | --- | --- | --------------------------------------- | --- |
✞
| double | ** AllocateMatrixMemory(int |     |     | numRows, | int numCols); |
| ------ | --------------------------- | --- | --- | -------- | ------------- |
1
| void FreeMatrixMemory(int |     |     | numRows, | double | ** matrix); |
| ------------------------- | --- | --- | -------- | ------ | ----------- |
2
3
| int main(int | argc, | char | argv[]) |     |     |
| ------------ | ----- | ---- | ------- | --- | --- |
| 4            |       | *    |         |     |     |
{
5
| double                 | A;                      |     |     |     |     |
| ---------------------- | ----------------------- | --- | --- | --- | --- |
| 6                      | **                      |     |     |     |     |
| 7 A =                  | AllocateMatrixMemory(5, |     |     | 3); |     |
| 8 A[0][1]              | = 2.0;                  |     |     |     |     |
| 9 A[4][2]              | = 4.0;                  |     |     |     |     |
| 10 FreeMatrixMemory(5, |                         | A); |     |     |     |
| 11 return              | 0;                      |     |     |     |     |
}
12
13
| // Function | to allocate |     | memory | for a matrix | dynamically |
| ----------- | ----------- | --- | ------ | ------------ | ----------- |
14
| double | AllocateMatrixMemory(int |     |     | numRows, | int numCols) |
| ------ | ------------------------ | --- | --- | -------- | ------------ |
| 15     | **                       |     |     |          |              |
{
16
double
| 17  | ** matrix; |     |     |     |     |
| --- | ---------- | --- | --- | --- | --- |
new double
| 18 matrix | =               | * [numRows]; |      |     |     |
| --------- | --------------- | ------------ | ---- | --- | --- |
| for       | (int            |              |      |     |     |
| 19        | i=0; i<numRows; |              | i++) |     |     |
20 {
| 21 matrix[i] | = new | double | [numCols]; |     |     |
| ------------ | ----- | ------ | ---------- | --- | --- |
22 }
| return | matrix; |     |     |     |     |
| ------ | ------- | --- | --- | --- | --- |
23
}
24
25
| // Function | to free | memory | of a | matrix |     |
| ----------- | ------- | ------ | ---- | ------ | --- |
26
| void FreeMatrixMemory(int |     |     | numRows, | double | matrix) |
| ------------------------- | --- | --- | -------- | ------ | ------- |
| 27                        |     |     |          |        | **      |
28 {
| for | (int            |     |      |     |     |
| --- | --------------- | --- | ---- | --- | --- |
| 29  | i=0; i<numRows; |     | i++) |     |     |
30 {
delete[]
| 31  | matrix[i]; |     |     |     |     |
| --- | ---------- | --- | --- | --- | --- |
32 }
| 33 delete[] | matrix; |     |     |     |     |
| ----------- | ------- | --- | --- | --- | --- |
}
34
5.2.3 UseofPointersasFunctionArguments
WeconcludedSect.5.2.1byexplainingthatanychangestoavariablemadeinsidea
functionwouldhavenoeffectoutsidethatfunction.Thishastheadvantagethatifa
variableisalteredunintentionallythentheimpactofthisislocalisedtothefunction
wherethisunintentionalalterationwasmade.However,thereareoccasionswherewe
dowishchangestoavariableinsideafunctiontohaveaneffectoutsideafunction.
For example, if we are given a complex number in polar form, z reiθ, we may
=
wish to write a function that returns the real part, denoted by the variable x, and
imaginarypart,denotedbythevariabley,ofthisnumber.Wehavenotedearlierthat
afunctioncanonlyreturnonevariable,andsowemaynotreturnboththevariable

5.2 Functions 81
xandthevariabley.Itwouldthereforebeusefultoincludethevariablesxand y
inthefunctioncall.However,thiswouldnotworkeither,asthevaluesassignedto
thesevariableswouldnothaveanyeffectoutsidethefunction.Fortunatelypointers
provideuswithonewayaroundthisproblem.Insteadofsendingthevariablesxand
y to the function, we send the addresses of these variables to the function. When
thefunctioniscalled,copiesaremadeoftheaddressesofthesevariables,anditis
thesecopiesthataresenttothefunction.Changestotheseaddresseswillnothave
any effect outside the function as we are working with a copy of these addresses.
However,wecanchangethecontentsofthevariablewithoutchangingtheaddress
throughde-referencingthepointer,andthiswillhaveaneffectoutsideofthefunction.
Thisisdemonstratedinthecodebelow.
Note that lines 4–6 of the code are really meant to be one long line, giving
the function prototype of CalculateRealAndImaginary. Since the line is
long, we have split it across several lines and indented the continuation lines for
clarity (see Sect.6.6 for a discussion of stylistic conventions when writing code).
The prototype lists the arguments for the function. The first two arguments are
double precision floating point variables representing the magnitude (denoted by
r)andargument(denotedby theta)ofthespecifiedcomplexnumber.Thethird
and fourth arguments are pointers to—that is, the addresses of—the real part and
imaginarypartofthecomplexnumber.Inline12,wedeclareintegersxandythat
representtherealandimaginarypartsofthecomplexnumber.Tousethefunction
CalculateRealAndImaginary, we send the addresses of these variables to
the function. Behind the scenes a copy of these addresses is made, and it is these
copies that are used in the function in lines 20–26. However, these copies refer to
thesamememoryastheoriginalvariablesxandy,andsoitisthismemorythatthe
resultsofthecalculationsinlines24and25arestoredin.
| Listing5.1 Useofpointerswithfunctions |     |     |     |     |     |
| ------------------------------------- | --- | --- | --- | --- | --- |
✞
#include
| 1 <iostream> |     |     |     |     |     |
| ------------ | --- | --- | --- | --- | --- |
#include
| 2 <cmath> |     |     |     |     |     |
| --------- | --- | --- | --- | --- | --- |
3
| 4 void CalculateRealAndImaginary(double |     |     |        | r, double      | theta, |
| --------------------------------------- | --- | --- | ------ | -------------- | ------ |
| 5                                       |     |     | double | * pReal,       |        |
|                                         |     |     | double | * pImaginary); |        |
6
7
| int main(int | argc, char | argv[]) |     |     |     |
| ------------ | ---------- | ------- | --- | --- | --- |
| 8            |            | *       |     |     |     |
{
9
| double | r = 3.4; |     |     |     |     |
| ------ | -------- | --- | --- | --- | --- |
10
double
| 11  | theta = 1.23; |     |     |     |     |
| --- | ------------- | --- | --- | --- | --- |
double
| 12                              | x, y;         |        |        |               |     |
| ------------------------------- | ------------- | ------ | ------ | ------------- | --- |
| 13 CalculateRealAndImaginary(r, |               |        | theta, | &x, &y);      |     |
| 14 std::cout                    | << "Real      | part = | " << x | << "\n";      |     |
| 15 std::cout                    | << "Imaginary | part   | = "    | << y << "\n"; |     |
16
| return | 0;  |     |     |     |     |
| ------ | --- | --- | --- | --- | --- |
17
}
18
19

82 5 Blocks,FunctionsandReferenceVariables
20 void CalculateRealAndImaginary(double r, double theta,
21 double * pReal,
22 double * pImaginary)
23 {
24 *pReal = r*cos(theta);
25 *pImaginary = r*sin(theta);
26 }
5.2.4 SendingArraystoFunctions
Whensendingarraystofunctions—whetherornotthememoryhasbeenallocated
dynamically—itshouldbenotedthatitistheaddressofthefirstelementofthearray
thatisbeingsenttothefunction.Incommonwithsendingthepointertoavariable
toafunction,changestothisaddresswillnothaveaneffectinthecodefromwhich
thisfunctioniscalled:however,thecontentsofthisaddress—thatis,thecontentsof
thearray—maybechanged.Assuch,anychangesmadetoanarrayinsideafunction
willhaveaneffectwhenthatvariableisusedsubsequentlyoutsidethefunction.
Webeginbyshowinghowtosendarrayswhosesizeisknownatcompiletimeto
afunction.Thisisshowninthelistingbelow.Notethatwedonothavetospecifythe
sizeofthefirstindexofanarrayinthefunctionprototype.Thissizeiscomputedby
thecompiler.Itmaybeincludedifdesired,butthiswillbeignoredwhenthecodeis
compiled.
✞
1 #include <iostream>
2 #include <cmath>
3
4 void DoSomething(double u[], double A[][10],
5 double B[10][10]);
6
7 int main(int argc, char * argv[])
8 {
9 double u[5], A[10][10], B[10][10];
10
11 DoSomething(u, A, B);
12
13 // This will print the values allocated in
14 // the function DoSomething
15 std::cout << u[2] << "\n";
16 std::cout << A[2][3] << "\n";
17 std::cout << B[3][3] << "\n";
18
19 return 0;
20 }
21
22 void DoSomething(double u[], double A[][10],
23 double B[10][10])

5.2 Functions 83
24 {
25 u[2] = 1.0;
26 A[2][3] = 4.0;
27 B[3][3] = -90.6;
28 }
Arrayswhosesizehasbeendynamicallyallocatedcanalsobesenttoafunction.
Examplecodeforthisisshownbelow.
✞
1 #include <iostream>
2 #include <cmath>
3
4 void DoSomething(double * u, double ** A);
5
6 int main(int argc, char * argv[])
7 {
8 double * u = new double [10];
9 double ** A = new double * [10];
10 for (int i=0; i<10; i++)
11 {
12 A[i] = new double [10];
13 }
14
15 DoSomething(u, A);
16
17 // This will print the values allocated in
18 // the function DoSomething
19 std::cout << u[2] << "\n";
20 std::cout << A[2][3] << "\n";
21
22 delete[] u;
23 for (int i=0; i<10; i++)
24 {
25 delete[] A[i];
26 }
27 delete[] A;
28
29 return 0;
30 }
31
32 void DoSomething(double * u, double ** A)
33 {
34 u[2] = 1.0;
35 A[2][3] = 4.0;
36 }

84 5 Blocks,FunctionsandReferenceVariables
5.2.5 Example:AFunctiontoCalculatetheScalarProductofTwo
Vectors
Supposewewanttocalculatethescalarproductoftwovectorsofdoubleprecision
floatingpointnumbersoflengthn.Calculatingthescalarproductcouldbeembedded
within a function that inputs the two arrays, and the length n of both vectors, and
returnsadoubleprecisionfloatingpointvariablethatrepresentsthescalarproductof
thetwovectors:seeSect.A.1.2foradiscussionofhowtocalculatethescalarproduct
oftwovectors.Wewouldfirstneedtoallocatememoryforthetwovectors.Wecould
then call the function that calculates the scalar product, before finally deleting the
memoryallocatedtothetwovectors.Codeforthisisshownbelow.
✞
1 #include <iostream>
2
3 double CalculateScalarProduct(int size, double * a,
4 double * b);
5
6 int main(int argc, char * argv[])
7 {
8 int n = 3;
9 double * x = new double [n];
10 double * y = new double [n];
11 x[0] = 1.0; x[1] = 4.0; x[2] = -7.0;
12 y[0] = 4.4; y[1] = 4.3; y[2] = 76.7;
13 double scalar_product = CalculateScalarProduct(n, x, y);
14 std::cout << "Scalar product = "
15 << scalar_product << "\n";
16 delete[] x;
17 delete[] y;
18
19 return 0;
20 }
21
22 double CalculateScalarProduct(int size, double * a,
23 double * b)
24 {
25 double scalar_product = 0.0;
26 for (int i=0; i<size; i++)
27 {
28 scalar_product += a[i]*b[i];
29 }
30 return scalar_product;
31 }

5.3 ReferenceVariables 85
5.3 ReferenceVariables
InSect.5.2.3,wedemonstratedtheuseofpointerstoallowchangesmadetoavariable
withinafunctiontohaveaneffectoutsidethefunction,andshowedhowthiscould
beusedtoallowafunctionto,ineffect,returnmorethanonevariable.Analternative
tousingpointersistousereferencevariables:thesearevariablesthatareusedinside
afunctionthatareadifferentnameforthesamevariableasthatsenttoafunction.
Whenusingreferencevariablesanychangesinsidethefunctionwillhaveaneffect
outsidethefunction.Thesearemucheasiertousethanpointers:allthathastobedone
istheinclusionofthesymbol &beforethevariablenameinthedeclarationofthe
functionandtheprototype—thisindicatesthatthevariableisareferencevariable.
It is actually the case that references behave like pointers behind the scenes, but
without the programmer having to convert to an address with & on the function
call(asinListing5.1)andwithouthavingtode-referenceinsidethefunction—they
providealayerofsyntacticsugartoeasetheprogrammer’sburden.Wenowmodify
the example code in Listing5.1 that wrote a function that calculated the real and
imaginarypartsofacomplexnumbergiveninpolarformtousereferencesinstead
ofpointers.
✞
#include
| 1 <iostream>       |     |     |     |     |     |
| ------------------ | --- | --- | --- | --- | --- |
| 2 #include <cmath> |     |     |     |     |     |
3
| void CalculateRealAndImaginary(double |     |     |     | r, double | theta, |
| ------------------------------------- | --- | --- | --- | --------- | ------ |
4
|     |     |     | double& | real, |     |
| --- | --- | --- | ------- | ----- | --- |
5
|     |     |     | double& | imaginary); |     |
| --- | --- | --- | ------- | ----------- | --- |
6
7
| int main(int | argc, char | argv[]) |     |     |     |
| ------------ | ---------- | ------- | --- | --- | --- |
| 8            |            | *       |     |     |     |
9 {
double
| 10  | r = 3.4; |     |     |     |     |
| --- | -------- | --- | --- | --- | --- |
double
| 11  | theta = 1.23; |     |     |     |     |
| --- | ------------- | --- | --- | --- | --- |
double
| 12                              | x, y;         |        |        |               |     |
| ------------------------------- | ------------- | ------ | ------ | ------------- | --- |
| 13 CalculateRealAndImaginary(r, |               |        | theta, | x, y);        |     |
| 14 std::cout                    | << "Real      | part = | " << x | << "\n";      |     |
| std::cout                       | << "Imaginary | part   | = "    | << y << "\n"; |     |
15
16
| return | 0;  |     |     |     |     |
| ------ | --- | --- | --- | --- | --- |
17
}
18
19
| void CalculateRealAndImaginary(double |     |     |     | double |        |
| ------------------------------------- | --- | --- | --- | ------ | ------ |
| 20                                    |     |     |     | r,     | theta, |
double&
| 21  |     |     |     | real, |     |
| --- | --- | --- | --- | ----- | --- |
double&
| 22  |     |     |     | imaginary) |     |
| --- | --- | --- | --- | ---------- | --- |
23 {
| 24 real =    | r*cos(theta);   |     |     |     |     |
| ------------ | --------------- | --- | --- | --- | --- |
| 25 imaginary | = r*sin(theta); |     |     |     |     |
}
26

| 86  |     |     |     | 5 Blocks,FunctionsandReferenceVariables |     |     |
| --- | --- | --- | --- | --------------------------------------- | --- | --- |
5.4 DefaultValuesforFunctionArguments
Ifwearewritingafunctiontoimplementaniterativetechnique,suchastheNewton–
Raphson technique for finding a root of a nonlinear equation, we will usually be
6.Onlyonvery
contentifthesolutionisaccuratetowithinatoleranceof,say,10
−
rareoccasionswouldwewanttochangethistolerance.Wemightalsowanttorestrict
thenumberoffunctionevaluations:theNewton–Raphsoniterationwillprobablybe
implementedusinga whileloop,andnumericalroundingerrorsmaypreventthe
errorbeingsufficientlysmallfortheiterationtoterminate.Undertheseconditions,
wewouldneverexitthewhileloop,andtheprogramthatcalledthisfunctionwould
neverterminate.Itwouldthereforebeprudenttowriteafunctionforimplementing
theNewton–Raphsontechniquethatsetsadefaulttoleranceforthesolution,anda
defaultmaximumnumberofiterations.Wewouldthenbeabletocallthisfunction
withoutspecifyingthesedefaultvalues.However,ifwedidwanttocallthisfunction
withdifferentvaluesthenwewouldliketobeabletodothis.Thisiseasilyachieved
bysettingdefaultvaluesinthefunctionprototype.Thisisdemonstratedbelowina
programthatusestheNewton–Raphsontechniqueforcalculatingthecuberootofa
givennumberK throughsolvingthenonlinearequation f(x) x3 K 0.Using
|     |     |     |     |     | = − | =   |
| --- | --- | --- | --- | --- | --- | --- |
agiveninitialguessx ,theNewton–Raphsonmethodresultsintheiteration
0
x3
K
|     |     | x x   | n     | 1 − , | n 1,2,3,.... |     |
| --- | --- | ----- | ----- | ----- | ------------ | --- |
|     |     | n n 1 | −     |       |              |     |
|     |     | = −   | − 3 x | 2     | =            |     |
n 1
−
Bysettingdefaultvaluesforthetoleranceandmaximumnumberoffunctionitera-
tionswemaycallthefunctionusingoneof:(i)thedefaultvaluesoftheseparameters;
(ii)specifyingthetolerance(thefirstoptionalparameterinthefunctionprototype)
andusingthedefaultmaximumnumberoffunctioniterations;and(iii)specifying
bothoftheseparameters.Allthreeofthesecasesareshownbelow.
✞
#include
| 1   | <cmath> |     |     |     |     |     |
| --- | ------- | --- | --- | --- | --- | --- |
#include
| 2   | <iostream> |     |     |     |     |     |
| --- | ---------- | --- | --- | --- | --- | --- |
3
| 4   | void CalculateCubeRoot(double& |     |        | x, double | K,        |     |
| --- | ------------------------------ | --- | ------ | --------- | --------- | --- |
|     |                                |     | double | tolerance | = 1.0e-6, |     |
5
|     |     |     | int maxIterations |     | = 100); |     |
| --- | --- | --- | ----------------- | --- | ------- | --- |
6
7
|     | int main(int | argc, char | argv[]) |     |     |     |
| --- | ------------ | ---------- | ------- | --- | --- | --- |
| 8   |              |            | *       |     |     |     |
{
9
double
| 10  |     | x = 1.0; |     |     |     |     |
| --- | --- | -------- | --- | --- | --- | --- |
double
| 11  |     | K = 12.0; |     |     |     |     |
| --- | --- | --------- | --- | --- | --- | --- |
12
| 13  | // Calculate         | cube root | using | default | values |     |
| --- | -------------------- | --------- | ----- | ------- | ------ | --- |
| 14  | CalculateCubeRoot(x, |           | K);   |         |        |     |
15
|     | // Calculate | cube root | using | a tolerance | of 0.001 and | the |
| --- | ------------ | --------- | ----- | ----------- | ------------ | --- |
16
|     | // default | maximum | number | of iterations |     |     |
| --- | ---------- | ------- | ------ | ------------- | --- | --- |
17
|     | double | tolerance = | 0.001; |     |     |     |
| --- | ------ | ----------- | ------ | --- | --- | --- |
18
|     | x = 1.0; | // Restart | guess |     |     |     |
| --- | -------- | ---------- | ----- | --- | --- | --- |
19
|     | CalculateCubeRoot(x, |     | K, tolerance); |     |     |     |
| --- | -------------------- | --- | -------------- | --- | --- | --- |
20

5.4 DefaultValuesforFunctionArguments 87
21
22 // Calculate cube root using a tolerance of 0.001 and a
23 // maximum number of iterations of 50
24 int maxIterations = 50;
25 x = 1.0; // Restart guess
26 CalculateCubeRoot(x, K, tolerance, maxIterations);
27
28 return 0;
29 }
30
31 void CalculateCubeRoot(double& x, double K,
32 double tolerance, int maxIterations)
33 {
34 int iterations = 0;
35 double residual = x*x*x-K;
36 while ((fabs(residual) > tolerance) &&
37 (iterations < maxIterations))
38 {
39 x = x-(x*x*x-K)/(3.0*x*x);
40 residual = x*x*x-K;
41 iterations++;
42 }
43 }
5.5 FunctionOverloading
Supposewewanttowriteonefunctiontomultiplyavectorbyascalar,andanother
function to multiply a matrix by a scalar. It would seem natural to call both these
functionsMultiply.ThisisallowedinC++:wewritedifferentfunctionprototypes
and functions for both of these operations: the compiler then chooses the correct
functionbasedontheinputarguments.Thisisdemonstratedinthecodebelow,and
isknownasfunctionoverloading.
✞
1 #include <iostream>
2
3 void Multiply(double scalar, double * u, double * v, int n);
4
5 void Multiply(double scalar, double ** A, double ** B, int n);
6
7 int main(int argc, char * argv[])
8 {
9 int n = 2;
10 double * u = new double [n];
11 double * v = new double [n];
12 double ** A = new double * [n];
13 double ** B = new double * [n];

88 5 Blocks,FunctionsandReferenceVariables
14 for (int i=0; i<n; i++)
15 {
16 A[i] = new double [n];
17 B[i] = new double [n];
18 }
19
20 u[0] = -8.7; u[1] = 3.2;
21 A[0][0] = 2.3; A[0][1] = -7.6;
22 A[1][0] = 1.3; A[1][1] = 45.3;
23 double s = 2.3, t = 4.8;
24
25 // vector multiplication
26 Multiply(s, u, v, n);
27
28 // matrix multiplication
29 Multiply(t, A, B, n);
30
31 delete[] u;
32 delete[] v;
33 for (int i=0; i<n; i++)
34 {
35 delete[] A[i];
36 delete[] B[i];
37 }
38 delete[] A;
39 delete[] B;
40
41 return 0;
42 }
43
44 void Multiply(double scalar, double * u, double * v, int n)
45 {
46 // v = scalar*u (scalar by vector)
47 for (int i=0; i<n; i++)
48 {
49 v[i] = scalar*u[i];
50 }
51 }
52
53 void Multiply(double scalar, double ** A, double ** B, int n)
54 {
55 // B = scalar*A (scalar by matrix)
56 for (int i=0; i<n; i++)
57 {
58 for (int j=0; j<n; j++)
59 {
60 B[i][j] = scalar*A[i][j];
61 }
62 }
63 }

5.6 DeclaringFunctionsWithoutPrototypes 89
Note that we can overload functions based only on the number and type of the
argumentsandnotonthereturntype.Thismeansthatwecouldnothavevectormulti-
plyfunctionbool Multiply(double scalar, double* u, double*
v, int n)alongsidetheversionwhichhasavoidreturntype.Thisisbecause
thecompilercaninferthecorrectversionofanoverloadedfunctionfromthetypes
ofitsargumentsfromthecontextinwhichitisused.Thisisnotthecasewiththe
returntype,whereyoumaywanttocallafunctionwhichreturnssomething,butthen
tocastitsoutputtoanotherreturntype,orignoreitsoutputcompletely.
5.6 DeclaringFunctionsWithoutPrototypes
It is good practice to give the function signature prototypes before you write the
implementation.Thisissothatthefunctionmain,oranyotherfunctionwillrecog-
nisethenameandargumenttypesofthenewfunction.However,itispossibletoskip
thewritingofthefunctionprototypebywritingthefunctionimplementationbefore
itsfirstuse,asisshowninthecodebelow.
✞
1 #include <iostream>
2
3 double Square(double x)
4 {
5 return x*x;
6 }
7
8 int main(int argc, char * argv[])
9 {
10 std::cout << "Square of 2 = " << Square(2) << "\n";
11 return 0;
12 }
If prototypes are not given, then the function implementations must be ordered
insuchawaythateachimplementationisseenbythecompilerbeforeitsfirstuse.
Note that if two functions are mutually recursive, that is, both functions call the
otherfunction,thenitwillnotbepossibletoorderthefunctionsinthisway—and
soprototypesmustbedeclaredinthiscase.
5.7 FunctionPointers
Suppose we want to write a function to implement the solution of the nonlinear
equationf(x) 0usingtheNewton–Raphsontechnique,wheref isauser-specified
=
function. We may want to call this function for solving nonlinear equations more

| 90  |     |     |     | 5 Blocks,FunctionsandReferenceVariables |
| --- | --- | --- | --- | --------------------------------------- |
thanonceduringtheexecutionofagivenprogram,andfordifferentuser-specified
nonlinear functions. To achieve this, we need to specify the appropriate nonlinear
functioneachtimethefunctioniscalled.Thismaybedone,asdemonstratedinthe
codebelow,usingfunctionpointers.
In the code below, we specify two functions myFunction and myOther-
Function. In line 8, we declare a function pointer *p_function. This dec-
laration specifies that the function that this pointer refers to must: (i) accept one
(andonlyone)inputargumentwhichisadoubleprecisionfloatingpointvariable;
and (ii) return one double precision floating point variable. In line 10, we spec-
ify that p_function points at the function myFunction: calling the function
p_function in line 11 then has an identical effect to calling myFunction. In
lines13and14,wedemonstratehowtousep_functiontosubsequentlycallthe
functionmyOtherFunction.
✞
#include
| 1   | <iostream> |     |     |     |
| --- | ---------- | --- | --- | --- |
2
|     | double myFunction(double |     | x); |     |
| --- | ------------------------ | --- | --- | --- |
3
|     | double myOtherFunction(double |     |     | x); |
| --- | ----------------------------- | --- | --- | --- |
4
5
|     | int main(int | argc, char | argv[]) |     |
| --- | ------------ | ---------- | ------- | --- |
| 6   |              |            | *       |     |
{
7
|     | double | (*p_function)(double |     | x); |
| --- | ------ | -------------------- | --- | --- |
8
9
| 10  | p_function | = &myFunction;     |     |          |
| --- | ---------- | ------------------ | --- | -------- |
| 11  | std::cout  | << p_function(2.0) |     | << "\n"; |
12
| 13  | p_function | = &myOtherFunction; |     |          |
| --- | ---------- | ------------------- | --- | -------- |
|     | std::cout  | << p_function(2.0)  |     | << "\n"; |
14
15
|     | return | 0;  |     |     |
| --- | ------ | --- | --- | --- |
16
}
17
18
|     | double myFunction(double |     | x)  |     |
| --- | ------------------------ | --- | --- | --- |
19
20 {
return
| 21  |     | x*x; |     |     |
| --- | --- | ---- | --- | --- |
22 }
23
| 24  | double myOtherFunction(double |     |     | x)  |
| --- | ----------------------------- | --- | --- | --- |
{
25
|     | return | x*x*x; |     |     |
| --- | ------ | ------ | --- | --- |
26
}
27
The Newton–Raphson method for solving nonlinear equations is defined in
Exercise2.6intheExercisesattheendofChap.2.Thisisimplementedbelowfortwo
differentuser-specifiedfunctionsthroughtheuseoffunctionpointers.Inlines5–16,
we write a function to implement this algorithm. This function requires specifica-
tionof:(i)afunctionpointertothenonlinearfunction;(ii)afunctionpointertothe

5.7 FunctionPointers 91
derivative of the nonlinear function; and (iii) an initial guess to the solution. Note
that the function as it stands does not check for divergence, so is unsafe to use in
somecases.
In lines 46 and 47, we call the Newton–Raphson solver to solve the equation
√x 10 0 with initial guess x 1: the nonlinear function Sqrt10, and the
| −   | =   |     | =   |     |     |
| --- | --- | --- | --- | --- | --- |
derivative of the nonlinear function Sqrt10Prime are given in lines 19–22 and
26–29ofthecode.Similarly,inlines48and49wecalltheNewton–Raphsonsolver
tosolvetheequation x3 10 0withinitialguessx 1:thenonlinearfunction
|     |     | −   | =   |     | =   |
| --- | --- | --- | --- | --- | --- |
Cube10,andthederivativeofthenonlinearfunctionCube10Primearegivenin
lines32–35and39–42ofthecode.
✞
| #include | <cmath> |     |     |     |     |
| -------- | ------- | --- | --- | --- | --- |
1
| #include | <iostream> |     |     |     |     |
| -------- | ---------- | --- | --- | --- | --- |
2
3
| 4 // Implementation |                    | of  | Newton-Raphson    | iteration |     |
| ------------------- | ------------------ | --- | ----------------- | --------- | --- |
| double              | SolveNewton(double |     | (*pFunc)(double), |           |     |
5
|     |     | double | (*pFuncPrime)(double), |     |     |
| --- | --- | ------ | ---------------------- | --- | --- |
6
| 7   |     | double | x)  |     |     |
| --- | --- | ------ | --- | --- | --- |
8 {
| double |     | step; |     |     |     |
| ------ | --- | ----- | --- | --- | --- |
9
do
10
{
11
step = (*pFunc)(x)/(*pFuncPrime)(x);
12
x -= step;
13
while
| 14 } |     | (fabs(step) | > 1.0e-5); |     |     |
| ---- | --- | ----------- | ---------- | --- | --- |
return
| 15  |     | x;  |     |     |     |
| --- | --- | --- | --- | --- | --- |
16 }
17
| 18 // Function |               | to calculate | x that satisfies |     | sqrt(x)=10 |
| -------------- | ------------- | ------------ | ---------------- | --- | ---------- |
| double         | Sqrt10(double |              | x)               |     |            |
19
{
20
| return |     | sqrt(x) - | 10.0; |     |     |
| ------ | --- | --------- | ----- | --- | --- |
21
}
22
23
| // Derivative |     | of function | to calculate |     | x that satisfies |
| ------------- | --- | ----------- | ------------ | --- | ---------------- |
24
25 // sqrt(x)=10
| double | Sqrt10Prime(double |     |     |     |     |
| ------ | ------------------ | --- | --- | --- | --- |
| 26     |                    |     | x)  |     |     |
27 {
return
| 28  |     | 1.0/(2.0*sqrt(x)); |     |     |     |
| --- | --- | ------------------ | --- | --- | --- |
29 }
30
| // Function |     | to calculate | x that satisfies |     | x*x*x=10 |
| ----------- | --- | ------------ | ---------------- | --- | -------- |
31
| double | Cube10(double |     | x)  |     |     |
| ------ | ------------- | --- | --- | --- | --- |
32
{
33
| return |     | x*x*x - 10.0; |     |     |     |
| ------ | --- | ------------- | --- | --- | --- |
34
}
35
36
| 37 // Derivative |     | of function | to calculate |     | x that satisfies |
| ---------------- | --- | ----------- | ------------ | --- | ---------------- |
38 // x*x*x=10
| 39 double | Cube10Prime(double |     | x)  |     |     |
| --------- | ------------------ | --- | --- | --- | --- |

| 92  |     |     | 5 Blocks,FunctionsandReferenceVariables |     |
| --- | --- | --- | --------------------------------------- | --- |
40 {
return
| 41  | 3.0*x*x; |     |     |     |
| --- | -------- | --- | --- | --- |
42 }
43
| 44 int main(int | argc, char | * argv[]) |     |     |
| --------------- | ---------- | --------- | --- | --- |
{
45
| std::cout | << "Root | sqrt(x)=10, | with | guess 1.0 is " |
| --------- | -------- | ----------- | ---- | -------------- |
46
<< SolveNewton(Sqrt10,Sqrt10Prime,1.0) << "\n";
47
| std::cout | << "Root | x**3=10, | with guess | 1.0 is " |
| --------- | -------- | -------- | ---------- | -------- |
48
<< SolveNewton(Cube10,Cube10Prime,1.0) << "\n";
49
| return | 0;  |     |     |     |
| ------ | --- | --- | --- | --- |
50
51 }
5.8 RecursiveFunctions
Insomeapplications,wemaywishtocallafunctionfromwithinthesamefunction:
this is known as recursion, and is possible in C++. A simple application of this is
the calculation of the factorial of a positive integer n, denoted by fact(n), and
| writtenmathematicallyasn |     | ,whichisdefinedby |     |     |
| ------------------------ | --- | ----------------- | --- | --- |
!
|     | fact(n) | = n fact(n-1), |     | n > 1, |
| --- | ------- | -------------- | --- | ------ |
×
|     | fact(n) | = 1, |     | n = 1. |
| --- | ------- | ---- | --- | ------ |
Codetoimplementthisrecursivedefinitionofthefactorialfunctionisgivenbelow:
wesimplycallthefunctionCalculateFactorialfromwithinthesamefunction
asmanytimesasrequired.
✞
#include
| 1          | <iostream> |     |     |     |
| ---------- | ---------- | --- | --- | --- |
| 2 #include | <cassert>  |     |     |     |
3
| int CalculateFactorial(int |     | n); |     |     |
| -------------------------- | --- | --- | --- | --- |
4
5
| int main(int | argc, char | argv[]) |     |     |
| ------------ | ---------- | ------- | --- | --- |
| 6            |            | *       |     |     |
{
7
| int n | = 7; |     |     |     |
| ----- | ---- | --- | --- | --- |
8
| 9 std::cout | << "The | factorial                  | of " << | n        |
| ----------- | ------- | -------------------------- | ------- | -------- |
| 10          | << " is | " << CalculateFactorial(n) |         | << "\n"; |
11
return
| 12  | 0;  |     |     |     |
| --- | --- | --- | --- | --- |
13 }
14

5.8 RecursiveFunctions 93
15 int CalculateFactorial(int n)
16 {
17 assert (n > 0);
18 if (n == 1)
19 {
20 return 1;
21 }
else
22
23 {
24 // n>1
25 return n*CalculateFactorial(n-1);
26 }
27 }
5.9 Modules
SupposewewanttowriteacodetoallowustosolvelinearsystemsoftheformAx
b,whereAisasquare,invertiblematrixofsizen,bisaspecifiedvectorofsize
n = ,and x isavectortobecalculatedofsizen.Itwouldbeusefulifwecouldwrite
allthefunctionsrequiredtosolvethislinearsystemandthenallowthesefunctions
to be called through an appropriate function—that is, we want to write a function
calledSolveLinearSyswiththeprototypeshownbelow.
✞
void SolveLinearSys(double ** A, double * x, double * b, int n);
ThefunctionSolveLinearSyshasalltheinformationrequiredtosolvethelinear
system,andanyfunctionsrequiredcanbecalledfromwithinthisfunction.Thisthen
allowsustosolveanysuitablydefinedlinearsystemusingjustthesinglelineofcode
shownbelow.
✞
SolveLinearSys(A, x, b, n);
ThefunctionSolveLinearSys,andallotherfunctionsassociatedwiththislinear
solver,areknownasamodule.Inmoreconcreteterms,amoduleisacollectionof
functionsthatperformsagiventask.Everymodulehasaninterface.Intheexample
above,thiswasdefinedbytheprototypeofthefunction SolveLinearSys,and
maybethoughtofasalistofvariablesthatcontains:(i)thosethatmustbeinputto
themodule;and(ii)thosethatareoutputbythemodule.
Modulesareveryusefulwhensharingcode.Forexample,ifacolleaguehaswritten
codeforsolvinglinearsystemsasdescribedabove thenitwouldbeavery simple
taskforanothercolleaguetoutilisethiscode.Allthatisrequiredisanunderstanding

94 5 Blocks,FunctionsandReferenceVariables
oftheinterfaceandwhatthepurposeofthecodeis:thereisnoneedtounderstand
themathematicalalgorithmthatdetermineshowthelinearsystemhasbeensolved,
andthemodulemaybethoughtofasa“blackbox”.
5.10 Tips:CodeDocumentation
Asyoubegintowritemoreprograms,thereisoftenatemptationto“justgetonwith
the coding” without paying specific attention to quality. After all “you generally
know where you are going and understand the program which you are writing”.
It is important to bear in mind, though, that your code will not always be as well
understood as it is now. You might come back to a given file in three years’ time,
becauseyouneedtocorrectitortoaddsomenewfunctionalitytoit.Alternatively,
youmayatsomestagehandyourprogramsovertosomeoneelsewhohasthejobof
workingoutwhatyouweredoing.
Ourtipinthischapteristhatcomputerprogramsshouldbehuman-readable,as
wellasmachine-readable.Eventhesmallestportionofcodemayprovetobeopaque
unlessweincludeenoughcommentarytoaidthehumanreader.Takeforexamplethe
functiongivenbelow,whichcalculatesthep-normofavector.Withoutcommentsin
thecode,itwouldnotbeobviouswhatwashappening,eventhoughthereareonlya
fewlinesofcode.Ahintisgiveninthenameofthefunction,CalculateNorm,
butwhatisitmeanttodo?Whatisthesignificanceoftheargumentssandp?
✞
1 #include <cmath>
2 double CalculateNorm(double * x, int s, int p)
3 {
4 double a = 0.0;
5 for (int i=0; i<s; i++)
6 {
7 double temp = fabs(x[i]);
8 a += pow(temp, p);
9 }
10 return pow(a, 1.0/p);
11 }
In the code segment below, we give a description of the function immediately
beforeitsdefinition.Thisdescriptiongives,inline3,ameansofmappingthemath-
ematics of the function to its implementation. The rest of the description gives an
alternateplacetofindmoreinformationaboutthep-norm(lines4–6)andanexpla-
nationofsomeoftheargumentsasnecessary.Inthebodyofthefunction,theloop
hasbeencommentedtodescribewhatitsfunctionalpurposeis:itisaboutcomputing
asumovertheelementsofthevector.Finally,thereturnvalueiscommentedwitha
fewwordsofexplanation.

5.10 Tips:CodeDocumentation 95
✞
1 #include <cmath>
2 // Function to calculate the p-norm of a vector:
3 // = [ Sum_i ( |x_i|**p ) ] **(1/p)
4 // See "An Introduction to Numerical Analysis" by
5 // Endre Suli and David Mayers, page 60, for definition
6 // of the p-norm of a vector
7 // x is a pointer to the vector which is of size vecSize
8
9 double CalculateNorm(double * x, int vecSize, int p)
10 {
11 double sum = 0.0;
12 //Loop over elems x_i of x, incrementing sum by |x_i|**p
13 for (int i=0; i<vecSize; i++)
14 {
15 double temp = fabs(x[i]);
16 sum += pow(temp, p);
17 }
18 //Return p-th root of sum
19 return pow(sum, 1.0/p);
20 }
Note that documenting code is sometimes more of an art than a science. There
is a balance to be struck concerning the right level of documentation. Too many
comments can make the program less readable rather than more readable. Our tip
here is that you should describe what part of the problem the code is solving and,
perhaps,howitissolvingthatproblem.Donotbetemptedtodescribethecodein
overmuch detail. For example, the comment on the loop in line 12 of code above
couldhaveread
✞
12 // Loop over values of i going from 0 to vecSize-1
Whilethiscommentisaccurate(describingtherangeoftheloopvariablevecSize),
itdoesnothingtoaidaprogrammerintheirunderstandingofthecode.
The formatting of the code documentation can also help readability. A simple
tip is that using empty lines to break code and comments into sections can make
thecodelookmorereadable.Ifyouwanttoemphasisesomethingyoucansimulate
underliningwithhyphensorunderscores,forexample,
✞
4 // Very important comment
5 // ----------------------
Alternatively,youcanemphasisesomethingbyputtingitinabox:

96 5 Blocks,FunctionsandReferenceVariables
✞
2 /************************************************
3 ************************************************
4 ** CalculateNorm(...) **
5 ** **
6 ** Function to calculate p-norm of vector **
7 ************************************************
8 ************************************************/
5.11 Exercises
Inallexercises,wesuggestthatyouusedynamicallocationofmemoryforvectors
andmatricesasdescribedinSect.4.2.Besurethat youarecorrectlyde-allocating
memorywhenusingdynamicallocationofmemory,asexplainedintheexercisesat
theendofChap.4.
5.1 Writecodethatsendstheaddressofanintegertoafunctionthatprintsoutthe
valueoftheinteger.
5.2 Write code that sends the address of an integer to a function that changes the
valueoftheinteger.
5.3 Write a function that swaps the values of two double precision floating point
numbers,sothatthesechangesarevisibleinthecodethathascalledthisfunction.
1. Writethisfunctionusingpointers.
2. Writethisfunctionusingreferences.
5.4 Writeafunctionthatcanbeusedtocalculatethemeanandstandarddeviationof
anarrayofdoubleprecisionfloatingpointnumbers.Notethatthestandarddeviation
σ ofacollectionofnumbersx , j 1,2,...,N isgivenby
j
=
N (x x)2
σ j = 1 j − ¯
=(cid:2) N 1
(cid:3)
−
wherex isthemeanofthenumbers.
¯
5.5 Writeafunction Multiplythatmaybeusedtomultiplytwomatricesgiven
thematricesandthesizeofbothmatrices.Useassertionstoverifythatthematrices
areofsuitablesizestobemultiplied.
5.6 OverloadthefunctionMultiplywritteninthepreviousexercisesothatitmay
beusedtomultiply:

5.11 Exercises 97
1. avectorandamatrixofgivensizes;
2. amatrixandavectorofgivensizes;
3. ascalarandamatrixofagivensize;and
4. amatrixofagivensizeandascalar.
5.7 Thep-normofavectorvoflengthnisgivenby
1/p
n
|     |     | v   | p   |     |     |
| --- | --- | --- | --- | --- | --- |
v i
|     |     | (cid:3) (cid:3) p | =(cid:4) | | |     |     |
| --- | --- | ----------------- | ------------ | --- | --- |
(cid:6)
(cid:5)= i 1
wherepisapositiveinteger.ExtendthecodeinSect.5.10tocalculatethep-norm
ofagivenvector,whereptakesthedefaultvalue2.
5.8 Thedeterminantofasquarematrixmaybedefinedrecursively:seeSect.A.1.3.
Writearecursivefunctionthatmaybeusedtocalculatethedeterminantofasquare
matrix of a given size. Check the accuracy of your code by comparison with the
knownformulaeforsquarematricesofsize2and3:
|     | A       | A       |          |     |     |
| --- | ------- | ------- | -------- | --- | --- |
|     | det 00  | 01 A A  | A A ,    |     |     |
|     | A       | A 00    | 11 01 10 |     |     |
|     | 10      | 11 =    | −        |     |     |
|     | (cid:7) | (cid:8) |          |     |     |
|     | A A     | A       |          |     |     |
|     | 00 01   | 02      |          |     |     |
det A 10 A 11 A 12 A 00 (A 11 A 22 A 12 A 21 ) A 01 (A 10 A 22 A 12 A 20 )
|     | ⎛     | ⎞=     | −               | −    | −                |
| --- | ----- | ------ | --------------- | ---- | ---------------- |
|     | A A   | A      |                 |      |                  |
|     | 20 21 | 22     |                 |      |                  |
|     | ⎝     | ⎠ A (A | A A             | A ). |                  |
|     |       | 02     | 10 21 11        | 20   |                  |
|     |       | +      | −               |      |                  |
| 5.9 |       |        | 3linearsystemAu |      | bwhereAisnonsin- |
Writeamoduleforsolvingthe3
|     |     |     | ×   |     | =   |
| --- | --- | --- | --- | --- | --- |
gular.
5.10 Write a module for solving the n n linear system Au b using Gaussian
|     |     |     | A × |     | =   |
| --- | --- | --- | --- | --- | --- |
elimination with pivoting, where is n onsingular. See Sect.A .2.1.3 for details of
thisalgorithm.

6
AnIntroductiontoClasses
OneofthekeyfeaturesoftheC++programminglanguageisthatitisobject-oriented.
Upuntilnowwehavelargelyignoredthisfeature,makingonlypassingreferenceto
itinearlierchapters.Fortheremainderofthisbook,wefocusonobject-orientation,
allowingreaderstoutilisethisfeatureintheirC++programs.
6.1 TheRaisond’ÊtreforClasses
At the end of Chap.5 we introduced the concept of a module. We explained that
modulesareusefulforcodereuse,andthereforeallowrapidcodedevelopmentfor
programsthatrequirethefunctionalityprovidedbythemodule,eveniftheprogram-
mer has no understanding of the operations that a module performs. This may be
highlighted by using the example of a module for solving linear systems that was
introducedinChap.5.Threeadvantagesofhavingthismoduleavailablearegiven
below.
• Linearalgebraliesattheheartofnumericalanalysis,andsonumericalanalysts
use linear solvers in many programs that they write. A module allows them to
reusethiscoderatherthanwritenewfunctionalityforsolvinglinearsystemseach
timetheywriteanewprogram.
• Therearemanydifferentlinearalgebratechniquesforsolvinglinearsystems.Itis
possibletoincludemanydifferenttechniquesinamodule,andtospecifywhich
techniqueistobeusedaspartoftheinterfacetothemodule.
• Other scientists with little mathematical expertise may have to write programs
which require the solution of a linear system. A module allows them to do so
withoutlearningthemathematicaltechniquesthatunderpinlinearalgebraalgo-
rithms.
©SpringerInternationalPublishingAG,partofSpringerNature2017 99
J.Pitt-FrancisandJ.Whiteley,GuidetoScientificComputing
inC++,UndergraduateTopicsinComputerScience,
https://doi.org/10.1007/978-3-319-73132-2_6

100 6 AnIntroductiontoClasses
Modulesareclearlyveryusefulwhenwritingscientificcomputingprograms.But,
aswenowexplain,theuseofmodulesmaycauseproblems.
6.1.1 ProblemsThatMayAriseWhenUsingModules
Suppose that the linear solver that we discussed in the previous section has been
written so that the solution of this linear system is calculated using the GMRES
algorithm.1 Thistechniqueforsolvinglinearsystemsrequiresseveralinstancesof
a calculation of the scalar product between two vectors. Implementation of this
technique would, therefore, probably include a function being written to calculate
thescalarproductoftwovectorsofagivenlength.Useofthisfunctionwouldnot
be restricted to users of the module for solving linear systems: another part of the
code may use this function to calculate, for example, the normal derivative of a
function of two or more variables. Suppose whoever was using the scalar product
functiontocalculateanormalderivativedecidedtochangetheinputstothescalar
productfunction.Thiswouldinadvertentlycausethelinearsolvertostopfunctioning
correctly.Thelinearsolvermodulecouldthennotbetreatedasa“blackbox”.
Anotherdrawbackofusingstandardmodulesisthewayinwhichdataisstored.
Thereisonlyeveronecopyofaparticularmoduleandonecopyofanydataassociated
withit.Ifthatdataischangedforthemoduletofulfilaparticularpurpose,thenitwill
bechangedforallfutureuses.Consideralinearsolverwhichhashaditsfunctionality
extended so that it is able to deal with singular matrices. Such a linear solver will
needtohaveaccesstothenullspace(orkernel)ofthesingularmatrixormatricesin
question.Supposeweusetheextendedlinearsolvertosolveasingularlinearsystem.
Thelinearsystemwillthensolvethesingularsystemsubjecttoknowingandstoring
the null space of this system. If we were to subsequently use the module to solve
anothernonsingularlinearsystem,wewouldhavetoremembertospecifythenull
spaceasbeingemptyorthelinearsolverwouldattempttofindthesolutionofthe
nonsingularsystemsubjecttothepreviouslyspecifiednullspace.
Inthenextsection,weexplainhowclassesallowustowritecodeincludingall
thefeaturesofmodules,butwithoutthedrawbacksidentifiedabove.
6.1.2 Abstraction,EncapsulationandModularityProperties
ofClasses
Theshortcomingsofmodules,describedintheprevioussectionusingtheexample
of a module for solving a linear system, could be overcome if we could write a
“module”that:
1TheGeneralisedMinimalRESidualtechnique—commonlyknownasGMRES—isaniterative
techniqueforsolvinglinearsystems.See,forexample,TrefethenandBau[4]formoredetails.

6.1 TheRaisond’ÊtreforClasses 101
1. containsallthefunctionsneededtosolvethesystem;
2. doesnotallowthesefunctionstobeaccessedbyanyotherpartoftheprogram
exceptthroughtheinterface;
3. cannotitselfaccessanyotherpartoftheprogram;and
4. alsocontainsallthedataneededtosolvethesystem.
This is possible through the use of classes, and the specifications described
above—thatis,thecompartmentalisationofalloftheresourcesneeded—areknown
astheencapsulationfeatureofclasses.Thevariables/dataandfunctionsassociated
with a class are known as class members, and the functions more specifically as
methods. We are now in a position to describe some of the technical terms from
Sect.1.1.1.
Classesallowmodularity,whichincludesplacingsimilarfunctionalityinafew
files. Classes allow us to go further than this: access controls allow us to control
whichresourcesareavailableoutsideoftheclass,andwhicharehiddenfromusers.
Hidingpartsofthecodemay—atfirstsight—seemtohavetheundesirableeffectof
preventingauserfromaccessingthefullfunctionalityofthesoftware.Asweshall
seelaterinthischapter,thisiscertainlynottheconsequence:itactuallyhasthemore
desirableeffectofpreventingusersfrominadvertentlycorruptingdata.Furthermore,
combiningfunctionalityinthiswayallowsustoassociatedatawiththefunctionality.
Theconceptofabstractionisthattheparticularsofanideashouldnotbeimportant.
Classesallowustohidetheirrelevantdetailsoffunctionalityfromuserswhoneed
notknowaboutthem.Forexample,areaderofthisbookdoesnotneedtoknowhow
acompilertranslatesaC++codeintoamachinereadableexecutablefile,butonly
howtoinstructthecompilertoperformthistask.Abstractionallowsemphasistobe
placedonthequalitiesorpropertiesthatcharacterisetheobjectsinhowtheyactand
thetypeofinformationthattheycarry.
Afurtherpropertyofclassesisinheritancewhichallowseasycodereuse,exten-
sibilityandpolymorphism.InheritancewillbediscussedinChap.7.
6.2 AFirstExampleSimpleClass:AClassofBooks
Thefirstsimpleclassthatwedevelopisaclassofbooks.
6.2.1 BasicFeaturesofClasses
Eachbookhasthefollowingattributes:
• anauthor;
• atitle;
• aformat;
• aprice;
• ayearofpublication;and
• apublisher.

| 102 |     |     | 6 AnIntroductiontoClasses |
| --- | --- | --- | ------------------------- |
Theseattributescanbeassociatedwitheachinstanceofabookbyfirstsavingthe
filebelowasBook.hpp.Asexplainedearlier,theseattributesareknownasclass
members.
✞
| #include | <string> |     |     |
| -------- | -------- | --- | --- |
1
2
class
| 3 Book |     |     |     |
| ------ | --- | --- | --- |
4 {
5 public:
| 6 std::string | author,        | title, publisher, | format; |
| ------------- | -------------- | ----------------- | ------- |
| int           | price; //Given | in pence          |         |
7
| int | yearOfPublication; |     |     |
| --- | ------------------ | --- | --- |
8
| }; //Note | that the class | ends with | ;   |
| --------- | -------------- | --------- | --- |
9
Thefileaboveisknownastheheaderfileassociatedwiththeclass:theextension
.hppindicatesthatthisfileisaheaderfileassociatedwithaC++program.Atthis
stage, it is sufficient to know that the word public that is used in line 5 of this
file allows us to access all variables associated with the class. We will give more
precise details on what are known as access privileges later in this chapter. Note
thesemi-colonthatisrequiredaftertheclosingcurlybracketattheendofthisfile.
Acommonmistakemadebynoviceprogrammersistomissthissemi-colonatthe
endoftheclassdefinition.
Theclassofbooksmaythenbeusedasshowninthecodebelow.Notethatwhen
headerfilesthatwehavewrittenareincludedthenamesofthesefilesareenclosed
withinquotationmarks,incontrasttothesystemheaderfilessuchasiostream,
fstreamandcmaththatwehaveusedearlier.Thecompilerdoesnotdistinguish
between included files with quotation marks and those with angle brackets, but a
common coding convention encourages programmers to use quotation marks and
angle brackets to make the distinction between local include files and those from
externallibraries,respectively.
| Listing6.1 | UsingtheclassBook |     |     |
| ---------- | ----------------- | --- | --- |
✞
| #include | <iostream> |     |     |
| -------- | ---------- | --- | --- |
1
| #include | "Book.hpp" |     |     |
| -------- | ---------- | --- | --- |
2
3
| int main(int | argc, char* | argv[]) |     |
| ------------ | ----------- | ------- | --- |
4
5 {
| 6 Book | my_favourite_book; |     |     |
| ------ | ------------------ | --- | --- |
7
| my_favourite_book.author |     | = "Lewis | Carroll"; |
| ------------------------ | --- | -------- | --------- |
8
| my_favourite_book.title |     | =   |     |
| ----------------------- | --- | --- | --- |
9
|     | "Alice’s | adventures | in Wonderland"; |
| --- | -------- | ---------- | --------------- |
10
| my_favourite_book.publisher |     | =   | "Macmillan"; |
| --------------------------- | --- | --- | ------------ |
11
| my_favourite_book.price |     | = 199; |     |
| ----------------------- | --- | ------ | --- |
12
| my_favourite_book.format |     | = "hardback"; |     |
| ------------------------ | --- | ------------- | --- |
13
| my_favourite_book.yearOfPublication |     |     | = 1865; |
| ----------------------------------- | --- | --- | ------- |
14

6.2 AFirstExampleSimpleClass:AClassofBooks 103
15
| std::cout | << "Year | of publication |     | of " |     |
| --------- | -------- | -------------- | --- | ---- | --- |
16
| 17  | << my_favourite_book.title             |     |     | << " is " |          |
| --- | -------------------------------------- | --- | --- | --------- | -------- |
| 18  | << my_favourite_book.yearOfPublication |     |     |           | << "\n"; |
19 }
Theclassofbookswrittenhereallowsustoassociatedatawitheachinstanceof
the class. As such, we can think of this class as allowing us to define a new data
typeandline6ofthecodeaboveasdeclaringaninstanceofthatclass,inthiscase
calledmy_favourite_book.Theclassmemberscanallbeaccessedasshownin
lines8–18ofthecodeabove—thatis,thestringmy_favourite_book.author
is the class member author associated with the instance of the class called
my_favourite_book.
6.2.2 HeaderFiles
Itdoesn’tmatterifweincludeheaderfilessuchasiostream,string,etc.more
than once. But we should be very careful not to include files such as Book.hpp
in the form that it was written in the previous section more than once, as this can
causeproblems.Wewillseelateroninthisbookwhenweareworkingwithseveral
differentclassesthatitiseasytoinadvertentlyincludeheaderfilesmorethanonce.
Toavoidthiscodebeingincludedtwice,weadaptitsothattheheaderfileforaclass
calledExampleClassisoftheformshownbelow.
Initially EXAMPLECLASSHEADERDEF will not be defined. The “ifndef” in
if not defined.
line 1 is a contraction of The first line of code below therefore
instructsthecomputertoincludethecodebetweenhereandthe #endif(line18
of the code) only if the macro EXAMPLECLASSHEADERDEF is not defined. The
firsttimethiscodeisincludedthismacrowillnotbedefined,andsoallofthecode
inthelistingbelowwillberead.Notethatwhenthiscodeisincluded,thefirsttask
that is performed is to define the macro EXAMPLECLASSHEADERDEF (line 7 of
thecode).AsEXAMPLECLASSHEADERDEFisnowdefined,ifthiscodeweretobe
includedasecondtimeallcodebetweenthe#ifndefEXAMPLECLASSHEADER-
DEFstatement(line1)and#endif(line18)willnownotbeincluded.Wetherefore
seethatthe#ifndef,#defineand #endifstatementsmaybeusedtoensure
thatthecontentsofaheaderfilearenotincludedmorethanonce.
✞
| #ifndef | EXAMPLECLASSHEADERDEF |     | //  | only if macro |     |
| ------- | --------------------- | --- | --- | ------------- | --- |
1
|     |     |     | //  | EXAMPLECLASSHEADERDEF | not |
| --- | --- | --- | --- | --------------------- | --- |
2
|     |     |     | //  | defined execute | lines of |
| --- | --- | --- | --- | --------------- | -------- |
3
|     |     |     | //  | code until #endif |     |
| --- | --- | --- | --- | ----------------- | --- |
4
|     |     |     | //  | statement |     |
| --- | --- | --- | --- | --------- | --- |
5
6
| 7 #define | EXAMPLECLASSHEADERDEF |     | //  | define the macro       |         |
| --------- | --------------------- | --- | --- | ---------------------- | ------- |
| 8         |                       |     | //  | EXAMPLECLASSHEADERDEF. |         |
|           |                       |     | //  | Ensures that this      | code is |
9

104 6 AnIntroductiontoClasses
// only compiled once, no
10
// matter how many times it
11
// is included
12
class ExampleClass
13
{
14
lines of code // body of header file
15
};
16
17
#endif // need one of these for every #ifndef statement
18
6.2.3 SettingandAccessingVariables
In the class of books we developed in the previous section, all class members
were variables, such as strings, double precision floating point numbers, or inte-
gers.Classesare,however,muchmorepowerfulthanthis:wewillnowshowhow
functionsmayalsobedefinedasclassmembers,knownasclassmethods.
Suppose we want to check that the year of publication of an instance of the
classBookalwaystakesavalidyear.Assumingthatnobookinourcataloguewas
publishedbeforetheinventionoftheprintingpress,andhasalreadybeenpublished
or will be in the near future, then we may write a function known as a member
method,calledSetYearOfPublication,thatallowsustosetthisvariableand
checkthattheintegervalueforyearofpublicationfallswithinasensiblerange(after
theinventionoftheprintingpressandnottoofarinthefuture).Aswearewritinga
methodthatallowsustocheckthatavalidyearofpublicationisassigned,itseems
sensible to force the user of the class to use this method to set this variable. This
maybeimplementedbysettingthememberyearOfPublicationtobeaprivate
variable. Private variables may only be accessed by other class members: making
yearOfPublicationaprivatevariablethereforepreventsusfromaccessingthis
variablethroughcodesuchasline14inListing6.1.However,itcanbesetthrough
the member method SetYearOfPublication, which we will make a public
memberofthisclass.Accessprivileges—thatis,theuseofpublicandprivate
members—willbediscussedmorefullyinSect.6.2.5.
NowthatwehavemadeyearOfPublicationaprivatemember,wecannot
directly access this member from outside the class. We therefore need to write a
public method that allows us to access this member—this class member will be
calledGetYearOfPublication.Wearealsogoingtoslightlymodifythename
yearOfPublication to mYearOfPublication, where the prefix “m”—
with the “m” pertaining to “my”—reminds us that this variable is private to the
class. We now present code that implements this discussion. First we need a new
headerfileBook.hpp,givenbelow.
In the code below, all members that follow public and precede private
(lines9–12)maybeaccessedfromoutsidetheclass.AsmYearOfPublication
comesafterprivateitisonlyaccessibletoclassmembers.Wewilldiscussaccess

6.2 AFirstExampleSimpleClass:AClassofBooks 105
privilegesmorefullyinSect.6.2.5.Notethemethodsdeclaredinlines11and12of
thiscode.WehavespecifiedthatthemethodSetYearOfPublicationaccepts
anintegerargumentandreturnsnovalue,thatis,itisavoidfunction.Themethod
GetYearOfPublicationreturnsaninteger,butdoesnotrequireanyinputargu-
mentsasitcanaccessallclassmembersincludingmYearOfPublication.The
keyword const after the declaration of this method is a signal to the compiler
thatwewanttoensurethattheinstanceoftheclasswillremainconstantthrough-
outtheexecutionofthemethod.Thatis,themethodGetYearOfPublication
should have changed nothing inside the class. We now need to tell the computer
what these methods do. This is given in the code in Listing6.3, which should be
savedasBook.cpp.Wehaveusedanassertstatementtocheckthattheyearof
publicationdoesfallwithinasensibleperiodwhenitisset.Notethattheheaderfile
requiredforassertstatementsshouldbeincludedinthisfile.
| Listing6.2 | ThefileBook.hpp |     |     |     |     |
| ---------- | --------------- | --- | --- | --- | --- |
✞
| 1 #ifndef | BOOKHEADERDEF |     |     |     |     |
| --------- | ------------- | --- | --- | --- | --- |
| 2 #define | BOOKHEADERDEF |     |     |     |     |
3
| #include | <string> |     |     |     |     |
| -------- | -------- | --- | --- | --- | --- |
4
5
| class | Book |     |     |     |     |
| ----- | ---- | --- | --- | --- | --- |
6
{
7
public:
8
| std::string |     | author, | title, | publisher, | format; |
| ----------- | --- | ------- | ------ | ---------- | ------- |
9
| 10 int  | price;                   | //Given | in pence |        |     |
| ------- | ------------------------ | ------- | -------- | ------ | --- |
| 11 void | SetYearOfPublication(int |         |          | year); |     |
| 12 int  | GetYearOfPublication()   |         |          | const; |     |
private:
13
| int | mYearOfPublication; |     |     |     |     |
| --- | ------------------- | --- | --- | --- | --- |
14
};
15
16
#endif
17
| Listing6.3 | ThefileBook.cpp |     |     |     |     |
| ---------- | --------------- | --- | --- | --- | --- |
✞
| 1 #include | <cassert>  |     |     |     |     |
| ---------- | ---------- | --- | --- | --- | --- |
| 2 #include | "Book.hpp" |     |     |     |     |
3
| void | Book::SetYearOfPublication(int |     |     | year) |     |
| ---- | ------------------------------ | --- | --- | ----- | --- |
4
{
5
| assert | ((year | >   | 1440) && | (year < 2020)); |     |
| ------ | ------ | --- | -------- | --------------- | --- |
6
| mYearOfPublication |     |     | = year; |     |     |
| ------------------ | --- | --- | ------- | --- | --- |
7
}
8
9
| 10 int | Book::GetYearOfPublication() |     |     | const |     |
| ------ | ---------------------------- | --- | --- | ----- | --- |
11 {
| 12 return | mYearOfPublication; |     |     |     |     |
| --------- | ------------------- | --- | --- | --- | --- |
}
13

| 106 |     |     | 6 AnIntroductiontoClasses |
| --- | --- | --- | ------------------------- |
Inthecodeabove,line4requiresmoreexplanation.Incommonwithfunctions
introducedinChap.5,thevoidatthestartofthislineindicatesthatthismethoddoes
notreturnanyvariable.Theremainderofthislineindicatesthatthismethod:(i)is
associated with a class called Book; (ii) is called SetYearOfPublication;
and (iii) requires one integer input argument which will be termed year. Inside
this method we first check that the input year is appropriate through an asser-
tion, before allocating it to the mYearOfPublication of a book. The method
GetYearOfPublication,whichiswritteninlines10–13,allowsustoaccess
thevariablemYearOfPublicationfromoutsidetheclass,withoutallowingus
tochangethisvaluetowhatmaybeanincorrectvalue.
Code that uses this updated class is given below, and should be saved as Use-
BookClass.cpp.Usingaccessprivilegestoensurethatvariablesmayonlybeset
throughaclassmemberthatprovidesacheckontheaccuracyofdataisverygood
programmingpractice,andshouldbeusedwheneverpossible.
| Listing6.4 ThefileUseBookClass.cpp |     |     |     |
| ---------------------------------- | --- | --- | --- |
✞
| #include <iostream> |     |     |     |
| ------------------- | --- | --- | --- |
1
| #include "Book.hpp" |     |     |     |
| ------------------- | --- | --- | --- |
2
3
| 4 int main(int | argc, char* | argv[]) |     |
| -------------- | ----------- | ------- | --- |
5 {
| 6 Book promotion_book; |     |     |     |
| ---------------------- | --- | --- | --- |
7
| promotion_book.author |     | = "Iris | Murdoch"; |
| --------------------- | --- | ------- | --------- |
8
| promotion_book.title |     | = "The sea, | the sea"; |
| -------------------- | --- | ----------- | --------- |
9
| promotion_book.publisher |     | = "Chatto | & Windus"; |
| ------------------------ | --- | --------- | ---------- |
10
| promotion_book.price |     | = 299; |     |
| -------------------- | --- | ------ | --- |
11
| promotion_book.format |     | = "hardback"; |     |
| --------------------- | --- | ------------- | --- |
12
promotion_book.SetYearOfPublication(1978);
13
14
| 15 std::cout | << "Year                                 | of publication | of "      |
| ------------ | ---------------------------------------- | -------------- | --------- |
| 16           | << promotion_book.title                  |                | << " is " |
| 17           | << promotion_book.GetYearOfPublication() |                |           |
<< "\n";
18
}
19
Note that in line 17 of the code above we need to acknowledge that the class
memberGetYearOfPublicationisafunctionormethodbyincludingempty
bracketsafterusingthisclassmethod,eventhoughnoinputargumentsarerequired.
ThefilesBook.hppand Book.cpptogetherformvalidC++codeforaclass
ofbooks.ThecodeinListing6.4aboveisavalidC++useofthisclass.Sofarinthis
bookwehaveonlyneededtocompileonefile.Now,however,weneedtothinkabit
moreabouthowtocompilethemultiplefilesthatarisefromusingclasses.

| 6.2 AFirstExampleSimpleClass:AClassofBooks |     |     |     |     | 107 |
| ------------------------------------------ | --- | --- | --- | --- | --- |
6.2.4 CompilingMultipleFiles
In Sect.1.3.3 we compiled a single C++ file into an executable program using the
singlecompilationstepbelow.
✞
| g++ -Wall | -o HelloWorld | HelloWorld.cpp |     |     |     |
| --------- | ------------- | -------------- | --- | --- | --- |
WhatreallyhappensinthisprocessisthattheC++fileisfirstcompiledtoanotherfile
calledHelloWorld.o,andknownasanobjectfile,whichisamachine-readable
file.Inasecondstep,theobjectfileiscompiledintotheexecutablefileandtheinter-
mediateobjectfileisdeleted.Whatweareactuallydoingwhenusingthecompilation
commandaboveistocombinethetwocompilationstepsgivenbelow.
✞
| g++ -Wall | -c HelloWorld.cpp |              |     |     |     |
| --------- | ----------------- | ------------ | --- | --- | --- |
| g++ -Wall | -o HelloWorld     | HelloWorld.o |     |     |     |
The first of these commands creates an object file called HelloWorld.o from
|              | HelloWorld.cpp |         |                | -c             |     |
| ------------ | -------------- | ------- | -------------- | -------------- | --- |
| the C++ file |                | through | the use of the | compiler flag. | The |
second command creates an executable file HelloWorld from the object file
HelloWorld.o. Up until this point, we have used a one line compilation com-
mand,allowingustocompletelyignoretheexistenceofobjectfiles.Whencompiling
multiplefileswedo,however,needtobeawareoftheexistenceofthesefiles.
Before we can compile the file UseBookClass.cpp in Listing6.4, we first
needtocompiletheBookclasstocreateanobjectfileBook.oassociatedwiththis
class.Thisisdone,asabove,byusingthe-coptionwhencompiling:
✞
| g++ -Wall | -O -c Book.cpp |     |     |     |     |
| --------- | -------------- | --- | --- | --- | --- |
ThisproducesanobjectfileBook.o.WecannowcompileUseBookClass.cpp
intoanobjectfileandthenlink thetwoobjectfilestomakeanexecutable.Thetwo
compilationcommandsarenow
✞
| g++ -Wall | -O -c UseBookClass.cpp |                 |                |        |     |
| --------- | ---------------------- | --------------- | -------------- | ------ | --- |
| g++ -Wall | -lm -O                 | -o UseBookClass | UseBookClass.o | Book.o |     |
As in the above “HelloWorld” example, it is possible to skip one step in the com-
pilation process so that we do not have to explicitly produce the intermediate file
UseBookClass.o.
✞
| g++ -Wall | -lm -O | -o UseBookClass | UseBookClass.cpp | Book.o |     |
| --------- | ------ | --------------- | ---------------- | ------ | --- |

| 108 |     |     |     | 6 AnIntroductiontoClasses |
| --- | --- | --- | --- | ------------------------- |
Thecodemayberunasbeforebytyping
✞
./UseBookClass
atthecommandline.
| 6.2.4.1 | UsingMakefilestoCompileMultipleFiles |     |     |     |
| ------- | ------------------------------------ | --- | --- | --- |
Suppose we have code that uses several classes stored in several files. We would
rather not compile all of these classes separately every time one file is modified
slightly. This may be avoided by the use of a Makefile—using this approach
onlythenecessarycompilationiscarriedout.ThefollowingisaMakefileforcode
UseClasses.cppthatusestwoclasses,Class1andClass2.
✞
| Class1.o | : Class1.cpp | Class1.hpp |     |     |
| -------- | ------------ | ---------- | --- | --- |
1
|     | g++ -c | -O Class1.cpp |     |     |
| --- | ------ | ------------- | --- | --- |
2
3
| Class2.o | : Class2.cpp | Class2.hpp |     |     |
| -------- | ------------ | ---------- | --- | --- |
4
| 5   | g++ -c | -O Class2.cpp |     |     |
| --- | ------ | ------------- | --- | --- |
6
| 7 UseClasses.o | :      | UseClasses.cpp    | Class1.hpp | Class2.hpp |
| -------------- | ------ | ----------------- | ---------- | ---------- |
| 8              | g++ -c | -O UseClasses.cpp |            |            |
9
| UseClasses | : Class1.o | Class2.o | UseClasses.o |     |
| ---------- | ---------- | -------- | ------------ | --- |
10
|     | g++ -O | -o UseClasses | Class1.o | Class2.o UseClasses.o |
| --- | ------ | ------------- | -------- | --------------------- |
11
IfthefileaboveissavedasMakefile,thentogenerateanup-to-dateexecutable
| fileUseClasseswesimplytype“make |     |     | UseClasses”atthecommandline. |     |
| ------------------------------- | --- | --- | ---------------------------- | --- |
Usingthisapproachonlythenecessarycompilationwillbecarriedout.Line10
ofthisMakefiletellsthecompilerthattheexecutablefileUseClassesrequires
threefiles:Class1.o,Class2.oandUseClasses.o.Line11givestherulefor
compiling the executable file from its dependencies. Line 1 tells the compiler that
the file Class1.o depends on the two files Class1.cpp and Class1.hpp.
Only if one or both of these files have been changed since the last time this class
has been compiled will this class be recompiled using the rule given on Line 2.
SimilarremarksholdfortheclassClass2.Notethatinline7,therecompilationof
UseClasses.odependsnotonlyontherelevantC++file,butalsoontheclasses’
headerfiles—sothatachangeineitherclassinterfacewillresultinarecompilation
ofthefilewhichusesitsfunctionality.Finally,havingworkedthroughallthesteps
described,anewexecutable UseClasseswillbecreatedonlyifoneormoreof
thefileslistedonline10havechangedasaconsequenceofthiscompilationprocess.
ThecompilationprocedureisillustratedinFig.6.1.Inthisfigure,thethinlines
with arrows represent some of the code dependencies described above that are
encapsulatedwithintheMakefile.Manyoftheintegrateddevelopmentenviron-
mentsdescribedinSect.1.3.1willautomaticallygenerateMakefiles.

6.2 AFirstExampleSimpleClass:AClassofBooks 109
Fig.6.1 Thecompilationprocess
6.2.5 AccessPrivileges
InSect.6.2.3,webrieflydiscussedaccesstoclassmembers.Therearethreedegrees
ofaccesstoclassmembers:
• private—these class members are only accessible to other class members,
unlessfriend(whichwillbeintroducedinSect.6.3)isused;
• public—theseclassmembersareaccessibletoeveryone;
• protected—these class members are accessible to other class members, to
derivedclasses(whichwillbeintroducedinChap.7),andtofriends.
The reserved keywords private, public and protected may be used as
oftenasdesired,withthedefaultbeingprivate.Forexampleintheclassbelow,
member1andmember3areprivatemembers,member2andmember4arepublic
members,andmember5isaprotectedmember.
✞
#include <string>
1
class ExampleClass
2
{
3
double member1;
4
public:
5
std::string member2;
6
private:
7
int member3;
8
public:
9
int member4;
10
protected:
11
double member5;
12
};
13

| 110 |     |     |     |     | 6 AnIntroductiontoClasses |
| --- | --- | --- | --- | --- | ------------------------- |
6.2.6 IncludingFunctionImplementationsinHeaderFiles
WesawinSect.6.2.4thatitcanbeinconvenienttohavetocompilemultipleclasses.
When working on large projects that require the use of multiple classes it can be
difficulttokeeptrackoftheclassmembersandtheiraccessprivileges(storedinthe
headerfile)andtheimplementationsofthememberfunctions(storedinthe.cpp
file).Iffunctionsassociatedwithaclassrequireonlyafewlinesofcodethenitmay
bemoreconvenienttoincludetheimplementationofthesefunctionsintheheader
file.Thismaybedoneasshownbelow,whereweimplementthefunctionsthatare
membersofourclassBookintheheaderfileforthisclass,thuscombiningthefiles
inListings6.2and6.3intoasinglefileBook.hpp.
| Listing6.5 | ThenewfileBook.hpp |     |     |     |     |
| ---------- | ------------------ | --- | --- | --- | --- |
✞
| #ifndef | BOOKHEADERDEF |     |     |     |     |
| ------- | ------------- | --- | --- | --- | --- |
1
| #define | BOOKHEADERDEF |     |     |     |     |
| ------- | ------------- | --- | --- | --- | --- |
2
3
| #include | <string> |     |     |     |     |
| -------- | -------- | --- | --- | --- | --- |
4
| #include | <cassert> |     |     |     |     |
| -------- | --------- | --- | --- | --- | --- |
5
6
| 7 class | Book |     |     |     |     |
| ------- | ---- | --- | --- | --- | --- |
8 {
public:
9
|     | std::string | author, | title, | publisher, | format; |
| --- | ----------- | ------- | ------ | ---------- | ------- |
10
|     | int price; | //Given | in pence |     |     |
| --- | ---------- | ------- | -------- | --- | --- |
11
|     | void SetYearOfPublication(int |     |     | year) |     |
| --- | ----------------------------- | --- | --- | ----- | --- |
12
{
13
|     | assert | ((year | > 1440) | && (year < | 2020)); |
| --- | ------ | ------ | ------- | ---------- | ------- |
14
|     | mYearOfPublication |     | =   | year; |     |
| --- | ------------------ | --- | --- | ----- | --- |
15
16 }
| 17  | int GetYearOfPublication() |     |     | const |     |
| --- | -------------------------- | --- | --- | ----- | --- |
18 {
| 19  | return | mYearOfPublication; |     |     |     |
| --- | ------ | ------------------- | --- | --- | --- |
}
20
private:
21
|     | int mYearOfPublication; |     |     |     |     |
| --- | ----------------------- | --- | --- | --- | --- |
22
};
23
24
#endif
25
6.2.7 ConstructorsandDestructors
EachtimeanobjectoftheclassBookiscreatedtheprogramcallsafunctionthat
allocatesspaceinmemoryforallthevariablesused.Thisfunctioniscalledadefault
constructorandisautomaticallygenerated.Thisdefaultconstructorcanbeoverrid-
denifdesired—forexamplewemaywishtosetallthestringvariablesinourclass

6.2 AFirstExampleSimpleClass:AClassofBooks 111
ofbooksto“unspecified”sothatitwillbeclearwhenaccessingthisobjectthat
thesestringshavenotyetbeenproperlyassigned.Anappropriateheaderfileforthis
classisshownbelow.Notethatwhenoverridingthedefaultconstructorthisfunction
hasthesamenameastheclass,takesnoarguments,hasnoreturntypeandmustbe
apublicmemberoftheclass.
✞
| #ifndef | BOOKHEADERDEF |     |     |     |
| ------- | ------------- | --- | --- | --- |
1
| 2 #define | BOOKHEADERDEF |     |     |     |
| --------- | ------------- | --- | --- | --- |
3
| 4 #include | <string> |     |     |     |
| ---------- | -------- | --- | --- | --- |
5
| class | Book |     |     |     |
| ----- | ---- | --- | --- | --- |
6
{
7
public:
8
Book();
9
| std::string |     | author, | title, publisher, | format; |
| ----------- | --- | ------- | ----------------- | ------- |
10
| int | price; | //Given | in pence |     |
| --- | ------ | ------- | -------- | --- |
11
| void | SetYearOfPublication(int |     | year); |     |
| ---- | ------------------------ | --- | ------ | --- |
12
| 13 int | GetYearOfPublication() |     | const; |     |
| ------ | ---------------------- | --- | ------ | --- |
14 private:
| 15 int | mYearOfPublication; |     |     |     |
| ------ | ------------------- | --- | --- | --- |
};
16
17
#endif
18
Themethodsassociatedwiththisclassaregiveninthefilebelow.
✞
| #include | "Book.hpp" |     |     |     |
| -------- | ---------- | --- | --- | --- |
1
| #include | <cassert> |     |     |     |
| -------- | --------- | --- | --- | --- |
2
3
| //This | overrides | the default | constructor |     |
| ------ | --------- | ----------- | ----------- | --- |
4
Book::Book()
5
{
6
|     | author = | "unspecified"; |     |     |
| --- | -------- | -------------- | --- | --- |
7
| 8   | title =   | "unspecified";   |     |     |
| --- | --------- | ---------------- | --- | --- |
| 9   | publisher | = "unspecified"; |     |     |
| 10  | format =  | "unspecified";   |     |     |
11 }
12
| void | Book::SetYearOfPublication(int |     | year) |     |
| ---- | ------------------------------ | --- | ----- | --- |
13
{
14
|     | assert ((year | > 1440) | && (year < 2020)); |     |
| --- | ------------- | ------- | ------------------ | --- |
15
|     | mYearOfPublication |     | = year; |     |
| --- | ------------------ | --- | ------- | --- |
16
}
17
18
| 19 int | Book::GetYearOfPublication() |     | const |     |
| ------ | ---------------------------- | --- | ----- | --- |
20 {
| 21  | return mYearOfPublication; |     |     |     |
| --- | -------------------------- | --- | --- | --- |
}
22

112 6 AnIntroductiontoClasses
Thecodebelowdemonstrateshowtousetheoverriddendefaultconstructor.
✞
#include <iostream>
1
#include "Book.hpp"
2
3
4
int main(int argc, char* argv[])
{
5
Book my_book;
6
std::cout << "The author is " << my_book.author << "\n";
7
8
return 0;
9
}
10
Thecodeabovewillprint“The author is unspecified”.
We will see in Chap.10 that, if any memory management such as allocating
memorydynamicallyisrequiredbyaclass,thenitisessentialtochangethebehaviour
oftheautomaticallygenerateddefaultconstructor:ifnot,thedefaultconstructorwill
notallocateanymemory.Wecanchangethebehaviouroftheautomaticallygenerated
defaultconstructoreitherbyoverridingitwithadefaultconstructorofourown(as
intheexampleof Book,above)orbyprovidingsomeotherconstructor(whichwe
willdiscussshortly).Thisisbecausetheautomaticallygenerateddefaultconstructor
isonlyavailableifnootherconstructorshavebeenprovidedbytheprogrammer.
Another constructor that is automatically generated is a copy constructor. This
constructor requires as input another instance of the class, and creates a copy of
this instance of the class. In common with default constructors, copy constructors
may also be overridden. Note that the argument to a copy constructor has to be
a reference to another instance of the class, rather than that object itself. This is
because,bydefault,allmethodargumentsarecalledbycopy.Werewetomissthe
fact that this constructor takes a reference argument, then we would need to use a
copyconstructorinthecall—theverymachinerythatwearedefininghere.Itisalso
a good idea to declare the argument to a copy constructor as const which is an
instruction to the compiler to ensure that the object argument otherBook to the
copyconstructorinthecodeinListing6.6willremainconstantduringthisoperation.
Thatis,theconstructorwillhavenohiddenside-effectsontheinstanceoftheclass
thatitiscopying.
Furthermore,inadditiontothedefaultandcopyconstructors,wemaywriteour
owncustomisedconstructorthattakesanyinputsthatwefeelareappropriate,and
wemaywriteasmanyoftheseconstructorsaswelike.Forexample,wemaywant
tospecifyabook’stitlewhencreatinganobject.Wenowdemonstratehowtowrite
a constructor such as this, and how to override a copy constructor. First, we need
an appropriate header file: one is shown in Listing6.6. Line 10 of this header file
declares an overridden copy constructor, and line 11 explains that there will be a
constructorthatacceptsastringasinput.Aswehaveprovidedaconstructorourselves
theautomaticallygenerateddefaultconstructorisnot available:wemay,however,
supplyadefaultconstructorourselves.

6.2 AFirstExampleSimpleClass:AClassofBooks 113
ThemethodsassociatedwiththisclassaregiveninthefileinListing6.7.Lines
14–22aretheoverriddencopyconstructor,whereallclassmembersaresettobethe
same as the instance of the class that we wish to copy. Lines 25–28 represent the
specialisedconstructorthatsetsthetitleofthebooktoaspecifiedstring.
The code in Listing6.8 first creates an instance of the class Book, called
good_read, and sets the class members associated with good_read. Line 15
demonstrateshowtousetheoverriddencopyconstructortocreateanotherinstance
oftheclassBook,called another_book,thatisinitialisedwithclassmembers
takingidenticalvaluestothoseof good_read.Line17usestheconstructorthat
setsthetitlewhentheinstanceoftheclassisdeclared:aninstanceoftheclasscalled
an_extra_bookisdeclared,withtitlesetto“The Magician’s nephew”.
Destructors are also automatically written, and free memory allocated for an
objectwhenitgoesoutofscope.Wewillseelaterwhenwritingclassesofvectors
and matrices that there are situations—specifically where the constructor has per-
formeddynamicallocationofmemory—wheretheautomaticallygenerateddestruc-
torshouldbeoverridden.ThisallowsustoadheretothetipintroducedinSect.4.3.3,
whichadvisedprogrammerstoensurethatanylineofcodewherememoryisdynam-
icallyallocatedusingnewhasacorrespondinglinewherethememoryisfreedup
usingdelete.
| Listing6.6 | ThefileBook.hpp |     |     |     |
| ---------- | --------------- | --- | --- | --- |
✞
| #ifndef | BOOKHEADERDEF |     |     |     |
| ------- | ------------- | --- | --- | --- |
1
| #define | BOOKHEADERDEF |     |     |     |
| ------- | ------------- | --- | --- | --- |
2
3
#include
| 4   | <string> |     |     |     |
| --- | -------- | --- | --- | --- |
5
| 6 class | Book |     |     |     |
| ------- | ---- | --- | --- | --- |
7 {
public:
8
Book();
9
| Book(const |     | Book& otherBook); |     |     |
| ---------- | --- | ----------------- | --- | --- |
10
| Book(std::string |     | bookTitle); |     |     |
| ---------------- | --- | ----------- | --- | --- |
11
| std::string |     | author, | title, publisher, | format; |
| ----------- | --- | ------- | ----------------- | ------- |
12
| int | price; | //Given | in pence |     |
| --- | ------ | ------- | -------- | --- |
13
| void | SetYearOfPublication(int |     | year); |     |
| ---- | ------------------------ | --- | ------ | --- |
14
| 15 int | GetYearOfPublication() |     | const; |     |
| ------ | ---------------------- | --- | ------ | --- |
16 private:
| 17 int | mYearOfPublication; |     |     |     |
| ------ | ------------------- | --- | --- | --- |
18 };
19
#endif
20

| 114 |     |     | 6 AnIntroductiontoClasses |
| --- | --- | --- | ------------------------- |
ThefileBook.cpp
Listing6.7
✞
| #include "Book.hpp" |     |     |     |
| ------------------- | --- | --- | --- |
1
| 2 #include <cassert> |     |     |     |
| -------------------- | --- | --- | --- |
3
| 4 //Overridden | default constructor |     |     |
| -------------- | ------------------- | --- | --- |
Book::Book()
5
{
6
| author | = "unspecified"; |     |     |
| ------ | ---------------- | --- | --- |
7
| title = | "unspecified"; |     |     |
| ------- | -------------- | --- | --- |
8
| publisher | = "unspecified"; |     |     |
| --------- | ---------------- | --- | --- |
9
| format | = "unspecified"; |     |     |
| ------ | ---------------- | --- | --- |
10
}
11
12
| 13 //Overridden     | copy constructor | (mimics system | version) |
| ------------------- | ---------------- | -------------- | -------- |
| 14 Book::Book(const | Book&            | otherBook)     |          |
15 {
| author | = otherBook.author; |     |     |
| ------ | ------------------- | --- | --- |
16
| title = | otherBook.title; |     |     |
| ------- | ---------------- | --- | --- |
17
| publisher | = otherBook.publisher; |     |     |
| --------- | ---------------------- | --- | --- |
18
| format | = otherBook.format; |     |     |
| ------ | ------------------- | --- | --- |
19
| price = | otherBook.price; |     |     |
| ------- | ---------------- | --- | --- |
20
| mYearOfPublication |     | = otherBook.GetYearOfPublication(); |     |
| ------------------ | --- | ----------------------------------- | --- |
21
}
22
23
| 24 //Specialised          | constructor |            |     |
| ------------------------- | ----------- | ---------- | --- |
| 25 Book::Book(std::string |             | bookTitle) |     |
26 {
| title = | bookTitle; |     |     |
| ------- | ---------- | --- | --- |
27
}
28
29
void Book::SetYearOfPublication(int year)
30
{
31
| assert | ((year > 1440) | && (year < 2020)); |     |
| ------ | -------------- | ------------------ | --- |
32
| mYearOfPublication |     | = year; |     |
| ------------------ | --- | ------- | --- |
33
34 }
35
36 int Book::GetYearOfPublication() const
37 {
| return | mYearOfPublication; |     |     |
| ------ | ------------------- | --- | --- |
38
}
39
| Listing6.8 ExamplecodethatusestheBookclass |     |     |     |
| ------------------------------------------ | --- | --- | --- |
✞
| 1 #include <iostream> |     |     |     |
| --------------------- | --- | --- | --- |
| #include "Book.hpp"   |     |     |     |
2
3
| int main(int | argc, char* | argv[]) |     |
| ------------ | ----------- | ------- | --- |
4
{
5
| Book good_read; |     |     |     |
| --------------- | --- | --- | --- |
6

6.2 AFirstExampleSimpleClass:AClassofBooks 115
7
good_read.author = "C S Lewis";
8
good_read.title = "The silver chair";
9
good_read.publisher = "Geoffrey Bles";
10
good_read.price = 699;
11
good_read.format = "paperback";
12
good_read.SetYearOfPublication(1953);
13
14
Book another_book(good_read);
15
16
Book an_extra_book("The Magician’s nephew");
17
18
return 0;
19
}
20
6.2.8 PointerstoClasses
Wemaydeclareapointertoaninstanceofaclassasweshowinthecodebelow.In
line6ofthiscodewedeclareapointer,p_book_i_am_reading,toaninstance
of the class Book described earlier in this chapter, and allocate memory for this
instancethroughtheuseof new.Inline8,weuse*p_book_i_am_readingto
denotethecontentsofthememorywhoseaddressisstoredbythepointer.Byplacing
this in brackets, we may access the class members as shown in earlier sections of
thischapter.Line9isamoreconvenientwayofaccessingaclassmemberassociated
withapointertoaclassinwhichtheforwardarrow,->,means“de-referenceand
thenaccessthemember”.
✞
#include <iostream>
1
#include "Book.hpp"
2
3
4
int main(int argc, char* argv[])
{
5
6
Book* p_book_i_am_reading = new Book;
7
8
(*p_book_i_am_reading).author = "Philip Pullman";
p_book_i_am_reading->title = "Lyra’s Oxford";
9
10
delete p_book_i_am_reading;
11
}
12
Inthecodeabove,notethatwehavefollowedtheadvicegiveninSect.4.3.3—
whichweshallrepeatmanytimesinthisbook—toalwayswriteadeletestatement
tomatchanewstatement.

| 116 |     |     |     | 6   | AnIntroductiontoClasses |
| --- | --- | --- | --- | --- | ----------------------- |
6.3 ThefriendKeyword
When developing a program, we may wish to access private members of a class
fromoutsidetheclass.Onewayofdoingthisistocreateanewpublicmethodthat
accessestheprivatememberinthesamewayaswedidinSect.6.2.3.Anotherway
istowriteafreefunctionthatisafriend oftheclass:suchfunctionsmayaccessall
membersoftheclass,includingprivatevariables.Thisisdemonstratedintheclass
thatwewritebelow.First,wewritetheheaderfile.
✞
| 1 #ifndef | EXAMPLECLASSDEF |     |     |     |     |
| --------- | --------------- | --- | --- | --- | --- |
| 2 #define | EXAMPLECLASSDEF |     |     |     |     |
3
| class ExampleClass |     |     |     |     |     |
| ------------------ | --- | --- | --- | --- | --- |
4
{
5
private:
6
| double | mMemberVariable1; |     |     |     |     |
| ------ | ----------------- | --- | --- | --- | --- |
7
| double | mMemberVariable2; |     |     |     |     |
| ------ | ----------------- | --- | --- | --- | --- |
8
9
10 public:
| 11 ExampleClass(double |                         | member1, |     | double member2); |            |
| ---------------------- | ----------------------- | -------- | --- | ---------------- | ---------- |
| 12 double              | GetMinimum()            | const;   |     |                  |            |
| 13 friend              | double GetMaximum(const |          |     | ExampleClass&    | ex_class); |
};
14
15
#endif
16
Theconstructor,memberfunctionandfriendfunctionarethenimplementedusing
thecodebelow.NotethatasthefriendfunctionGetMaximumisnotamemberof
theclass,wedonotincludeExampleClass::inline25ofthecodeaswewould
dowhenwritingamethodthatisamemberoftheclass.
✞
| #include | "ExampleClass.hpp" |     |     |     |     |
| -------- | ------------------ | --- | --- | --- | --- |
1
2
| //Constructor | to set | private | members |     |     |
| ------------- | ------ | ------- | ------- | --- | --- |
3
| 4 ExampleClass::ExampleClass(double |     |     |     | member1, double | member2) |
| ----------------------------------- | --- | --- | --- | --------------- | -------- |
5 {
| 6 mMemberVariable1 |     | = member1; |     |     |     |
| ------------------ | --- | ---------- | --- | --- | --- |
| 7 mMemberVariable2 |     | = member2; |     |     |     |
}
8
9
| //GetMinimum | is a member | method |     |     |     |
| ------------ | ----------- | ------ | --- | --- | --- |
10
| double | ExampleClass::GetMinimum() |     |     | const |     |
| ------ | -------------------------- | --- | --- | ----- | --- |
11
{
12
| if (mMemberVariable1 |     | <   | mMemberVariable2) |     |     |
| -------------------- | --- | --- | ----------------- | --- | --- |
13
{
14
| 15 return | mMemberVariable1; |     |     |     |     |
| --------- | ----------------- | --- | --- | --- | --- |
16 }

ThefriendKeyword
6.3 117
else
17
{
18
| 19  | // mMemberVariable1 |                   | >= mMemberVariable2 |     |
| --- | ------------------- | ----------------- | ------------------- | --- |
| 20  | return              | mMemberVariable2; |                     |     |
21 }
}
22
23
| //GetMaximum |     | is a friend | function |     |
| ------------ | --- | ----------- | -------- | --- |
24
| double | GetMaximum(const |     | ExampleClass& | eg_class) |
| ------ | ---------------- | --- | ------------- | --------- |
25
{
26
| if  | ( eg_class.mMemberVariable1 |     |     | >   |
| --- | --------------------------- | --- | --- | --- |
27
eg_class.mMemberVariable2)
28
29 {
| 30  | return | eg_class.mMemberVariable1; |     |     |
| --- | ------ | -------------------------- | --- | --- |
31 }
32 else
{
33
|     | // eg_class.Var1 |     | <= eg_class.Var2 |     |
| --- | ---------------- | --- | ---------------- | --- |
34
return eg_class.mMemberVariable2;
35
}
36
}
37
Codethatusesthefriendfunctionoftheclassaboveisshownbelow.
✞
| #include | <iostream> |     |     |     |
| -------- | ---------- | --- | --- | --- |
1
| #include | "ExampleClass.hpp" |     |     |     |
| -------- | ------------------ | --- | --- | --- |
2
3
| 4 int main(int |     | argc, char* | argv[]) |     |
| -------------- | --- | ----------- | ------- | --- |
5 {
| 6 ExampleClass |     | example(2.0, | 3.0);   |                           |
| -------------- | --- | ------------ | ------- | ------------------------- |
| 7 std::cout    |     | << "Minimum  | value = | " << example.GetMinimum() |
<< "\n";
8
| std::cout |     | << "Maximum | value = | " << GetMaximum(example) |
| --------- | --- | ----------- | ------- | ------------------------ |
9
<< "\n";
10
| return | 0;  |     |     |     |
| ------ | --- | --- | --- | --- |
11
}
12
6.4 ASecondExampleClass:AClassofComplexNumbers
Intheclassofbooksthatwehavedeveloped,allclassmemberswerequitesimple,
beingeithervariables—suchasstringsorintegers—orstraightforwardmethods.We
nowdevelopaclassofcomplexnumbers,allowingsomemoreadvancedfeaturesof
classes—suchasoperatoroverloading—tobeshowcasedthroughascientificcom-
putingexample.Itisworthpointingout,beforedevelopingtheclass,thatC++does

118 6 AnIntroductiontoClasses
alreadyhaveacomplexnumbertypewhichisbasedontemplates(seeChap.8).We
are developing a complex number class here solely for illustration. If you need to
usecomplexnumberswerecommendyouusetheofficialC++class(whichwewill
revisitinSect.9.5).
A complex number has a real part and an imaginary part. A class of complex
numberswillthereforecontainclassmembersthatrepresentbothofthesequantities.
Itseemssensibletooverridethedefaultconstructortosetboththerealandimaginary
partofacomplexnumbertozerointheabsenceofanyspecifiedvalue.Wewouldalso
likeaconstructortobeavailablethatallowsustosetthecomplexnumber z = x
+ iy,wherexandyaredoubleprecisionfloatingpointvariables,usingstatements
oftheformshownbelow.
✞
double x = 4.0;
1
double y = -3.0;
2
ComplexNumber z(x, y);
3
Inaddition,wemayalsoincludeclassmembersthataremethodsthatcalculateboth
themodulusandtheargumentofthiscomplexnumber.Afurthermethodthatmay
beofuseisraisingthecomplexnumbertoaspecifiedpower.
6.4.1 OperatorOverloading
Ifwehavedeclareda,b,canddtobeintegervariablesthenwemayeasilyrelate
thesevariablesthroughstatementssuchasthosebelow.
✞
int a, b, c, d;
1
a = b;
2
c = -a;
3
d = a + b;
4
Wewouldalsoliketowritestatementssuchastheseif a,b,canddwerecomplex
numbers rather than integers. Before we can do this, we need to define: (i) what
theassignmentoperator(equals)meansforcomplexnumbers;(ii)whattheunary2
minusoperatormeans—i.e.whatismeantbytheexpression“-a”if aisacomplex
number; and (iii) what the binary3 addition operator means—that is, what a+b
meansforcomplexnumbersaandb.Definingtheseoperatorsforclassesisknown
asoperatoroverloading.WewillexplainhowthisisdoneinC++below.
2Aunaryoperatorhasoneinput,hence-aistheunaryminusoperatorappliedtoa.
3Abinaryoperatorhastwoinputs,hencea+bisthebinaryadditionoperatorappliedtoaandb.

6.4 ASecondExampleClass:AClassofComplexNumbers 119
6.4.2 TheClassofComplexNumbers
Inlightofthediscussionabove,wewillwriteaclassofcomplexnumberswiththe
followingmembers.
• AdoubleprecisionfloatingpointvariablemRealPartcontainingtherealpart
ofthecomplexnumber.
• A double precision floating point variable mImaginaryPart containing the
imaginarypartofthecomplexnumber.
• Anoverriddendefaultconstructor ComplexNumber()thatinitialisesthereal
partandtheimaginaryparttozero.
• A constructor ComplexNumber(double x, double y) that initialises
therealparttoxandtheimaginaryparttoy.
• AmethodCalculateModulus()thatreturnsadoubleprecisionfloatingpoint
variablecontainingthemodulus(ormagnitude)ofthecomplexnumber.
• A method CalculateArgument() that returns a double precision floating
pointvariablecontainingtheargument(orphase)ofthecomplexnumber.
• Amethod CalculatePower(double n)thatreturnsthecomplexnumber
calculatedwhenraisingtheoriginalcomplexnumbertothepowern.
• Overloadingoftheassignmentoperator.
• Overloadingoftheunarysubtractionoperator.
• Overloadingofthebinaryadditionandsubtractionoperators.
• Overloadingoftheoutputstream(<<)insertionoperatorwhichgivescontrolof
theoutputformatforcomplexnumbers.
A suitable header file for this class is shown below. This should be saved as
ComplexNumber.hpp. We have made the data associated with each complex
number—i.e.therealpartandtheimaginarypart—privatemembersofthisclassto
preventinadvertentcorruptionofthesemembers.Thesememberscan,ofcourse,be
accessedbythemethodsoftheclass.
Listing6.9 ThefileComplexNumber.hpp
✞
#ifndef COMPLEXNUMBERHEADERDEF
1
#define COMPLEXNUMBERHEADERDEF
2
3
#include <iostream>
4
5
class ComplexNumber
6
{
7
private:
8
double mRealPart;
9
double mImaginaryPart;
10
public:
11
ComplexNumber();
12
ComplexNumber(double x, double y);
13
double CalculateModulus() const;
14
double CalculateArgument() const;
15
ComplexNumber CalculatePower(double n) const;
16

| 120 |                |     |                 |     | 6              | AnIntroductiontoClasses |
| --- | -------------- | --- | --------------- | --- | -------------- | ----------------------- |
|     | ComplexNumber& |     | operator=(const |     | ComplexNumber& | z);                     |
17
|     | ComplexNumber |     | operator-() | const; |     |     |
| --- | ------------- | --- | ----------- | ------ | --- | --- |
18
| 19  | ComplexNumber |               | operator+(const |                          | ComplexNumber&       | z) const; |
| --- | ------------- | ------------- | --------------- | ------------------------ | -------------------- | --------- |
| 20  | ComplexNumber |               | operator-(const |                          | ComplexNumber&       | z) const; |
| 21  | friend        | std::ostream& |                 | operator<<(std::ostream& |                      | output,   |
|     |               |               |                 |                          | const ComplexNumber& | z);       |
22
};
23
24
#endif
25
CodefortheclassmembersthataremethodsisshowninListing6.10,andshould
besavedasComplexNumber.cpp.
In the code in Listing6.10 we have written two constructors. The first of these
(lines6–10)overridestheautomaticallygenerateddefaultconstructor,andinitialises
boththerealpartandtheimaginarypartofthecomplexnumbertozeroifnovalues
are specified. The second constructor (lines 13–17) accepts two double precision
floatingpointvariables,setstherealpartofthecomplexnumbertothefirstofthese,
andtheimaginarypartofthecomplexnumbertothesecondofthese.Readerswho
have followed the discussion of constructors for the class of books will need no
morediscussionontheimplementationoftheseconstructors.Wehavenotdefineda
newcopyconstructorbecausetheautomaticallygeneratedcopyconstructorbehaves
correctly.
We now turn our attention to the third method in the code below, the method
for calculating the modulus of a complex number in lines 21–25. As this method
returns the modulus of the complex number, which is a double precision floating
pointvariable,webeginline21withtheworddoubletoreflectthis.Thisisthen
followed by the text ComplexNumber::CalculateModulus() to indicate
that:(i)itisamemberoftheclassComplexNumber;and(ii)themethodiscalled
CalculateModulus.Thetext()indicatesthatnoargumentsarerequired.Recall
that member methods can access all class members, and so there is no need to
specifyeithertherealpartortheimaginarypartofthecomplexnumberinthelist
ofarguments.Line21thenconcludeswiththereservedkeywordconsttoensure
thatboththerealpartandtheimaginarypartofthecomplexnumberwhosemodulus
isbeingcalculatedareleftunchangedbythismethod.Asimplecalculationisthen
performed to return the modulus of this number. The fourth method in the code
above,lines29–32,usesverysimilarideastocalculatetheargumentofacomplex
number. Readers should work through this method to ensure that they understand
exactlywhythefunctionhasbeenwritteninthisway.
| Listing6.10 |     | ThefileComplexNumber.cpp |     |     |     |     |
| ----------- | --- | ------------------------ | --- | --- | --- | --- |
✞
|     | #include | "ComplexNumber.hpp" |     |     |     |     |
| --- | -------- | ------------------- | --- | --- | --- | --- |
1
|     | #include | <cmath> |     |     |     |     |
| --- | -------- | ------- | --- | --- | --- | --- |
2
3
|     | // Override | default | constructor |     |     |     |
| --- | ----------- | ------- | ----------- | --- | --- | --- |
4
|     | // Set | real and | imaginary | parts | to zero |     |
| --- | ------ | -------- | --------- | ----- | ------- | --- |
5

6.4 ASecondExampleClass:AClassofComplexNumbers 121
ComplexNumber::ComplexNumber()
6
{
7
mRealPart = 0.0;
8
mImaginaryPart = 0.0;
9
}
10
11
// Constructor that sets complex number z=x+iy
12
ComplexNumber::ComplexNumber(double x, double y)
13
{
14
mRealPart = x;
15
mImaginaryPart = y;
16
}
17
18
// Method for computing the modulus of a
19
// complex number
20
double ComplexNumber::CalculateModulus() const
21
{
22
23
return sqrt(mRealPart*mRealPart+
24
mImaginaryPart*mImaginaryPart);
}
25
26
// Method for computing the argument of a
27
// complex number
28
double ComplexNumber::CalculateArgument() const
29
{
30
return atan2(mImaginaryPart, mRealPart);
31
}
32
33
// Method for raising complex number to the power n
34
// using De Moivre’s theorem - first complex
35
// number must be converted to polar form
36
ComplexNumber ComplexNumber::CalculatePower(double n) const
37
{
38
double modulus = CalculateModulus();
39
double argument = CalculateArgument();
40
double mod_of_result = pow(modulus, n);
41
42
double arg_of_result = argument*n;
43
double real_part = mod_of_result*cos(arg_of_result);
44
double imag_part = mod_of_result*sin(arg_of_result);
ComplexNumber z(real_part, imag_part);
45
return z;
46
}
47
48
// Overloading the = (assignment) operator
49
ComplexNumber& ComplexNumber::
50
operator=(const ComplexNumber& z)
51
{
52
mRealPart = z.mRealPart;
53
mImaginaryPart = z.mImaginaryPart;
54
55
return *this;
}
56

122 6 AnIntroductiontoClasses
57
// Overloading the unary - operator
58
ComplexNumber ComplexNumber::operator-() const
59
{
60
ComplexNumber w;
61
w.mRealPart = -mRealPart;
62
w.mImaginaryPart = -mImaginaryPart;
63
return w;
64
}
65
66
// Overloading the binary + operator
67
ComplexNumber ComplexNumber::
68
operator+(const ComplexNumber& z) const
69
{
70
ComplexNumber w;
71
w.mRealPart = mRealPart + z.mRealPart;
72
w.mImaginaryPart = mImaginaryPart + z.mImaginaryPart;
73
return w;
74
}
75
76
// Overloading the binary - operator
77
ComplexNumber ComplexNumber::
78
operator-(const ComplexNumber& z) const
79
{
80
ComplexNumber w;
81
w.mRealPart = mRealPart - z.mRealPart;
82
w.mImaginaryPart = mImaginaryPart - z.mImaginaryPart;
83
return w;
84
}
85
86
// Overloading the insertion << operator
87
std::ostream& operator<<(std::ostream& output,
88
const ComplexNumber& z)
89
{
90
// Format as "(a + bi)" or as "(a - bi)"
91
output << "(" << z.mRealPart << " ";
92
if (z.mImaginaryPart >= 0.0)
93
{
94
output << "+ " << z.mImaginaryPart << "i)";
95
}
96
else
97
{
98
// z.mImaginaryPart < 0.0
99
// Replace + with minus sign
100
output << "- " << -z.mImaginaryPart << "i)";
101
}
102
return output;
103
}
104

6.4 ASecondExampleClass:AClassofComplexNumbers 123
Much of the discussion on the methods CalculateModulus and Calcu-
lateArgument applies to the fifth method in lines 37–47 of the code, namely
thefunctionCalculatePower,whichisusedtoreturnthenthpowerofagiven
complexnumber.Weperformthiscalculationbyfirstwritingthecomplexnumber
inpolarform,thatis,z =reiθ.Wemaythenwritezn =rneinθ,whichhasrealpart
rncos(nθ),andimaginarypartrnsin(nθ).Thismethodrequiressomedifferentfea-
turestothemethodsofthisclassalreadydescribed,whichwenowexplain.Inline37,
wespecifythatthetypeofvariablereturnedisoftypeComplexNumber:thatis,
methodscanbeusedtoreturnaninstanceofaclassaswellassimplervariabletypes
suchasdouble.Thismethodalsorequiresinputoftheexponenttowhichweraise
thecomplexnumber:thisisspecifiedbythe“double n”inbracketsattheendof
line37.Insidethemethod,thefirsttwolinesofcodecalculatethemodulusandargu-
mentoftheoriginalnumberusingthetwoclassmembersCalculateModulus
and CalculateArgument—this demonstrates how to call these methods from
withintheclass.Thenexttwolinesthenperformthecalculationsrequiredonboththe
modulusandargumentofthecomplexnumbertoraiseittothepowerof n.Having
setboththerealpartandtheimaginarypartoftheresultingcomplexnumber,this
complexnumberisthenreturned.
Inlines50–56,weoverloadtheassignmentoperator.Notethattheargumentto
the assignment operator is a reference to another instance of the class, rather than
the object itself. This is because, by default, all method arguments are called by
copy, necessitating the overhead of the use of the copy constructor in making the
assignment.Theuseoftheconstkeywordguaranteesthattheassignmentoperator
willnotalterthecontentsoftheobjectargumentz.Theremainderofthemethodfor
assignmentusesanentitycalledthiswhichdoesnotappeartohavebeendeclared.
Forthepurposeofthisbook,thereaderneedonlyknowthat thisisapointerto
thecomplexnumberthatisreturned:itisthecontentsof thiswhichisreturned.
The unary subtraction operator is overloaded in lines 59–65. Line 59 explains
that:(i)thereturntypeisaComplexNumber;(ii)themethodisamemberofthe
class ComplexNumber; (iii) defines the operator “-”; (iv) the function requires
noinputarguments(asspecifiedbytheemptybrackets);and(v)theoriginalcom-
plex number is left unchanged (through use of const). An instance of the class
ComplexNumber,calledw,isthendeclaredinline61,andtherealpartandimag-
inary part of w are set to the negative of those of the original complex number in
lines62and63.Finally,thecomplexnumberwisreturned.
Thebinaryadditionoperatorisdefinedinlines68–75.Webeginasusualinlines
68–69byspecifyingthereturntype,theclassthatthefunctionisamemberof,the
operatorandtheinputargument.Thereisonlyoneinputargumentwhichisthatto
therightofthe+operator—theclassitselfistheleftoperand.Wedeclareaninstance
ofacomplexnumber(line71),performtherequiredaddition(lines72–73),andthen
return the result of this addition (line 74). A similar function overloads the binary
subtractionoperatorinlines78–85.
The final operator is defined in lines 88–103. This is the output stream (<<)
insertionoperator.Thesyntaxhereisdifferent:theoperatorisnotamembermethod
of the class, but is an external function. This operator uses the friend keyword

| 124 |     |     | 6 AnIntroductiontoClasses |     |
| --- | --- | --- | ------------------------- | --- |
introducedinSect.6.3.Byusingthefriendkeywordfortheoperator<<inline21
oftheheaderfileforcomplexnumbers,wearetellingthecomputerthat,although
this operator is not a class member, this operator may access all class members—
includingprivatemembers.Whenthisoperatorisdefinedinlines88–103ofthelisting
above,weseethatwedonotmakeitaclassmemberthroughComplexNumber::.
Thefunctiondefiningthisoperatortakesanoutputstream(suchasstd::coutor
anoutputstreamtoafile)andinsertscharactersintoitusingthecomplexnumberz.
Wenowdemonstrateuseoftheclassofcomplexnumbersinthefollowingcode.
Recallfromearlierthatwhenmembermethodsarecalledthatrequirenoarguments
we still need to acknowledge that they are functions by using empty brackets, for
example z1.CalculateModulus()in line 9 of the code below. Note that we
candeclareanarrayofcomplexnumbers:thisisshowninline25ofthelistingbelow
wherewecreateanarrayofcomplexnumberswithtwoentries.Inlines26–27,we
setthefirstelementofthisarraytothecomplexnumberz1,andthesecondelement
ofthisarraytothecomplexnumberz2.Inlines28and29,weshowhowtoaccess
afriendfunctionofanentryofanarray,throughprintingthecomplexnumberthat
isthesecondentryofthearrayofcomplexnumberstoscreen.
| The files ComplexNumber.hpp |     | and | ComplexNumber.cpp | given in |
| --------------------------- | --- | --- | ----------------- | -------- |
Listings6.9 and 6.10 may be downloaded from http://www.springer.com/book/
9783319731315.
✞
| #include "ComplexNumber.hpp" |     |     |     |     |
| ---------------------------- | --- | --- | --- | --- |
1
2
| 3 int main(int | argc, char* | argv[]) |     |     |
| -------------- | ----------- | ------- | --- | --- |
4 {
| 5 ComplexNumber | z1(4.0, | 3.0); |     |     |
| --------------- | ------- | ----- | --- | --- |
6
| std::cout | << "z1 = | " << z1 << | "\n"; |     |
| --------- | -------- | ---------- | ----- | --- |
7
| std::cout | << "Modulus | z1 = " |     |     |
| --------- | ----------- | ------ | --- | --- |
8
|     | << z1.CalculateModulus() |     | << "\n"; |     |
| --- | ------------------------ | --- | -------- | --- |
9
| std::cout | << "Argument | z1 = " |     |     |
| --------- | ------------ | ------ | --- | --- |
10
|     | << z1.CalculateArgument() |     | << "\n"; |     |
| --- | ------------------------- | --- | -------- | --- |
11
12
| 13 ComplexNumber              | z2;      |            |                  |     |
| ----------------------------- | -------- | ---------- | ---------------- | --- |
| 14 z2 = z1.CalculatePower(3); |          |            |                  |     |
| 15 std::cout                  | << "z2 = | z1*z1*z1 = | " << z2 << "\n"; |     |
16
| ComplexNumber | z3; |     |     |     |
| ------------- | --- | --- | --- | --- |
17
| z3 = -z2; |     |     |     |     |
| --------- | --- | --- | --- | --- |
18
| std::cout | << "z3 = | -z2 = " << | z3 << "\n"; |     |
| --------- | -------- | ---------- | ----------- | --- |
19
20
| ComplexNumber | z4; |     |     |     |
| ------------- | --- | --- | --- | --- |
21
| z4 = z1 | + z2; |     |     |     |
| ------- | ----- | --- | --- | --- |
22
| std::cout | << "z1 + | z2 = " << | z4 << "\n"; |     |
| --------- | -------- | --------- | ----------- | --- |
23
24
| 25 ComplexNumber | zs[2]; |     |     |     |
| ---------------- | ------ | --- | --- | --- |
| 26 zs[0] =       | z1;    |     |     |     |
| 27 zs[1] =       | z2;    |     |     |     |

6.5 SomeAdditionalRemarksonOperatorOverloading 125
std::cout << "Second element of zs = "
28
<< zs[1] << "\n";
29
30
return 0;
31
}
32
6.5 SomeAdditionalRemarksonOperatorOverloading
InSect.6.4.1,weintroducedtheconceptofoperatoroverloading.Thisconceptwas
demonstrated in Sect.6.4.2 using the example class of complex numbers. In this
exampleclass,wedemonstratedhowtooverloadtheassignmentoperator,andboth
unaryandbinaryadditionandsubtractionoperators.Manymoreoperatorsmaybe
overloaded, as will be demonstrated in later chapters. In Sect.8.1, we show how
the square bracket operator may be overloaded. In Sect.8.3.2, we show how the
“lessthan”operatorcanbeoverloaded:extendingthistothe“greaterthan”operator,
the “less than or equals to” operator, the “greater than or equals to” operator, the
“notequalto”operator,andtheequalityoperatorthenfollowsthesamepattern.In
Sect.10.3.4,wedemonstratehowtooverloadtheroundbracketoperator.
6.6 Tips:CodingtoaStandard
Manyprogrammingorganisationsandprojectsusecodingstandardsinanattemptto
ensurethatthesoftwarewrittenisofanappropriatequality.AfamousC++coding
stylecalledJSF(JointStrikeFighter)wasdraftedforaninternationalaviationproject
andhasnowbeenadoptedbymanycommercialsoftwarehouses.Someorganisations
useautomaticcheckstoensurethattheircodecompliestothestandard(totheextent
thatemployeesarereprimandediftheirworkfallsshort),whileotherorganisations
usethestandardasaguideline.
Codingstandardsarebasicrulesforprogramming.Somerulesdictatehowpro-
gramsshouldbelaidout(intermsofwherecomments,newlinesandspacesshould
appear).Otherrulesareaboutthenamingofvariables,classes,functionsandmeth-
ods. Still other rules outlaw various programming practises which, although legal
in the language, are considered dangerous (such as returning a pointer to locally
allocatedmemory).Thereasonsforadoptingcodingstandardsarevarious,butitis
generally believed that they promote code which is more reliable, portable, main-
tainable,readableandextensible.
We believe that a few simple coding rules make programs much more readable
(and therefore more maintainable). For this reason, we have used a small set of
coding standard rules throughout this book. We don’t always follow these rules
rigidly,especiallywhenwepresentsmallfragmentsofprograms,butonceyouare

126 6 AnIntroductiontoClasses
familiar with some of the rules we are using then our presentation of code should
makemoresense.
1. Codewithinblocks(suchasthoseintroducedinSect.5.1,aswellasfunctions,
loops,branchesofifstatements,andotherplaceswhichmayhavecurlybrack-
ets) is indented. The curly brackets ({ and }) are always used, even in single-
statementblocks(seeSect.2.1.1),andtheyappearonalineoftheirown.
2. Linesofcodewhicharetoolongtofitcomfortablywithinthewidthofaneditor
aresplitacrossmultiplelineswithasuitableindentation.
3. Names for variables and functions are meaningful (e.g., local_index or
numberOfNodes) but are not so verbose that they become too long and
unwieldy.
4. Variablesaredeclaredclosetowheretheyareused,ratherthanatthebeginning
of a function. This is so that the context is clear (see Sect.5.1). Loop counter
variablesaredeclaredinthecontextoftheloop,thatis,wewrite
✞
for (int i=0; i<10; i++)
1
{
2
std::cout << i << "\n";
3
}
4
ratherthan
✞
int i;
1
for (i=0; i<10; i++)
2
{
3
std::cout << i << "\n";
4
}
5
5. Locallydeclaredvariablenameshaveunderscores(e.g.,total_sum).
6. Wheretypesarepointersorreferencesthe“*”or“&”characteriswrittenadjacent
tothenativetype,withnospacebetween,thatis,
✞
int* i;
ratherthan
✞
int *i;
AsexplainedinSect.4.1.2,aconsequenceofthisruleisthateachpointervariable
declarationshouldappearonitsownline.

6.6 Tips:CodingtoaStandard 127
7. Pointernamesbeginwith“p”(e.g.,p_return_resultorpLastResult).
Oneexceptiontothisruleiswhenthepointerisusedforanarrayofvaluesstored
indynamicallyallocatedmemory.
8. Functionnamesareincamel-case(i.e.,wherecapitallettersbegineachword)
andthefirstwordisaverb,toindicatewhatitisthattheydo(e.g.GetSize()or
InitialisePreconditioner()).Thisappliestoclassmethodsaswell
astoregularfunctions.
9. Namesofargumentstofunctions(andclassmethods)areinalsocamel-case,but
they begin in lower-case (e.g., firstDimension).The same format is also
appliedtomemberdataofclasses,butthefollowingrulehelpsustodistinguish
them.
10. Classdatawhichhaveaccesscontrolsarealsoincamel-casewith“m”(for“my”)
todenote“private”or“protected”(e.g.,mSizeormpQuadraticMeshwhere
thelatterisaprivatepointer).Sinceitisadvisableformemberdatatobeprivate,
thisnamingconventionallowsustodistinguish,inthebodyofaclassmethod,
betweenthemethodargumentsandtheclassvariables.
11. Classnamesarealsoincamel-case(asarefunctionnames),buttheycanbedis-
tinguishedbythecontext(e.g.,FiniteElementSolverorPopSinger).
12. ThereshouldbelotsofdescriptivecommentsasdiscussedinSect.5.10.
6.7 Exercises
Inalloftheexercisesbelow,testyourcodeusingsuitablychosentestcases.
6.1 The files ComplexNumber.hpp and ComplexNumber.cpp given in
Listings6.9 and 6.10 may be downloaded from http://www.springer.com/book/
9783319731315.Extendthisclasstoincludethefollowingfeatures.
1. Methods called GetRealPart and GetImaginaryPart that allow us to
accessthecorrespondingprivatemembers.Intheclassofcomplexnumbers,the
members representing the real and imaginary parts of the complex number—
called mRealPart and mImaginaryPart—are private members. These
membersmaybesetthroughusingaconstructor,butthereisnowaytoaccess
them.
2. Friend functions RealPart and ImaginaryPart so one may either write
z.GetImaginaryPart()orImaginaryPart(z).
3. Anoverriddencopyconstructor.
4. Aconstructorthatallowsustospecifyarealnumberincomplexformthrough
aconstructorthatacceptsonedoubleprecisionfloatingpointvariableasinput,
setstherealpartofthecomplexnumbertotheinputvariable,andtheimaginary
parttozero.
5. AconstmethodCalculateConjugatewhichreturnsthecomplexconju-
gatex - iyofacomplexnumberx + iy.

128 6 AnIntroductiontoClasses
6. AmethodSetToConjugatewhichhasavoidreturntypeandsetsthecomplex
numberx + iytoitscomplexconjugatex - iy.
7. Writecodetodynamicallyallocatememoryfora3×3matrixofcomplexnum-
bers.Extendthiscodetocalculatetheexponentialofthematrix,wheretheexpo-
nentialofamatrixAisgivenby
∞
An
exp(A)= (cid:2) n! ,
n=0
where, in practice, the infinite sum above is truncated at a suitably large value
ofn.Havingallocatedthememoryforthisarraydynamicallywhatshouldyou
nowdo?SeeSect.4.3.3ifyoudon’tknow.
8. Testtheclasstoensurethatspecialcasesgivesensibleresults.Forexample(0+0i)n
shouldequal zeroformost values ofn, butany numberraised byn =0 should
return1.
6.2 Developaclassof2×2 matricesofdoubleprecisionfloatingpointvariables
thathasthefeatureslistedbelow.
1. Anoverriddendefaultconstructorthatinitialisesallentriesofthematrixtozero.
2. Anoverriddencopyconstructor.
3. A constructor that specifies the four entries of the matrix and allocates these
entriesappropriately.
4. Amethod(function)thatreturnsthedeterminantofthematrix.
5. Amethodthatreturnstheinverseofthematrix,ifitexists.
6. Overloadingoftheassignmentoperator,allowingustowritecodesuchasA =
B;forinstancesoftheclassAandB.
7. Overloadingoftheunarysubtractionoperator,allowingustowritecodesuchas
A = -B;forinstancesoftheclassAandB.
8. Overloading of the binary addition and subtraction operators, allowing us to
writecodesuchasA = B + C;orA = B - C;forinstancesoftheclassA,
BandC.
9. Amethodthatmultipliesamatrixbyaspecifieddoubleprecisionfloatingpoint
variable.

7
InheritanceandDerivedClasses
InSect.6.1.1,weexplainedhowobject-orientedprogrammingallowedforamore
reliable programming paradigm than was possible using modules. One reason for
this,whichwetouchedonbriefly,istheavailabilityofinheritance.Inheritanceallows
us to extend the functionality of a class by introducing a new class, known as the
derivedclass,thatcontainsallthefeaturesoftheoriginalclass,knownasthebase
class.
7.1 Inheritance,ExtensibilityandPolymorphism
Perhapsthemostimportantfeatureofobject-orientedprogrammingisinheritance.
Thisconceptallowsthefunctionalityofclassestobebuiltintoa“familytree”.The
data,operationandfunctionalityofagivenclass(thebaseclass,sometimescalled
theparentclass)maybedirectlyreused,extendedandmodifiedinanotherclass(the
derivedorchildclass).Theoperationofonebaseclasscanbeinheritedbyseveral
derivedclasses.1Inturn,thesederivedclassesmaybecomethebaseclassesoffurther
inheritance,givingrisetofurthergenerations.
Supposewehavewrittenaclassthatallowsustosolvelinearsystems.Suppose
furtherthatwenowwanttowriteaclassforsolvinglinearsystemsthatmaybeused
only when the matrix in the linear system is symmetric and positive definite, thus
1AfeatureofC++isthatitalsoallowsmultipleinheritance,notavailableinotherobject-oriented
languages,wherederivedclassesmayinheritfrommorethanonebaseclass.Thisfeaturecauses
someseasonedC++programmersdifficulty,andhenceisbeyondthescopeofthisbook,although
wedobrieflydiscussthistopicinAppendixB.
©SpringerInternationalPublishingAG,partofSpringerNature2017 129
J.Pitt-FrancisandJ.Whiteley,GuidetoScientificComputing
inC++,UndergraduateTopicsinComputerScience,
https://doi.org/10.1007/978-3-319-73132-2_7

130 7 InheritanceandDerivedClasses
allowingustosolvethesystemusingtheveryeffectiveconjugategradienttechnique
discussed in Sect. A.2.3. Much of the functionality required—such as specifying
thevectors,matrixandtolerance,andprovidingafunctionforcalculatingthescalar
productbetweentwovectors—willalreadybeimplementedintheclassthathasbeen
writtentosolvemoregenerallinearsystems.Inheritanceallowsustowriteanewclass
forsolvingaspecialcategoryoflinearsystemsthatuses—orinherits—allfeaturesof
theclassforsolvinggenerallinearsystems.Ifwewantedtoextendthefunctionality
of the class that uses the conjugate gradient scheme to include Successive Over–
Relaxation(SOR),2 wesimplyinheritagainsothattheSORvariantisagrandchild
derivedclassoftheoriginal.
Inheritance gives rise to two important concepts first mentioned in Sect. 1.1.1:
extensibilityandpolymorphism.Extensibilityistheidea,notjustthatthecodecan
beextended,butthatitcanbeextendedeasily,andwithoutchanginganyoftheorig-
inalfunctionalbehaviourofthebaseclass.Polymorphismistheabilitytoperform
thesameoperationsonawidevarietyofdifferenttypesofobjects.So,forexample,
the Solve method of the generic linear solver outlined above will perform a cer-
tain set of operations. This method of the base class is then redefined in a derived
classforsymmetric,positivedefinitematrices,withoutchangingitsarguments.At
run-time,theprogramisabletodetectwhichobjectithasandthereforewhichver-
sion of Solve to run. This version of polymorphism is also known as dynamic
polymorphismorrun-timepolymorphism.
7.2 Example:AClassofE-booksDerivedfromaClassofBooks
Wenowdemonstratethebasicfeaturesofinheritancethroughextendingtheclassof
booksdevelopedinSect.6.2.Supposetheownerofabookshopalsorunsawebsite
whereshenotonlysellstraditional(paper)books,butalsoelectronice-books.The
advantageofthee-bookoveratraditionalbookisthatitdoesnotneedtobeparcelled
upandsentthroughthemail.Thee-bookmaybedeliveredbygivingthecustomer
accesstoaprivateURLfromwhichtheymaydownloadit.Thebooksellermaywish
to update her computer system so that a URL attribute is added to each instance
ofhere-books.ShecoulddothisbyderivingaclassEbookfromtheclassBook
giveninListings6.6and6.7.TheclassEbookwillhavethesamemembersasthe
classBook,butwithtwodifferences.Thefirstdifferenceisthattheclassmember
format will be set to “electronic”. The second difference is that instances of the
classEbookwillhaveanadditionalclassmember hiddenUrlthatcontainsthe
privateURL.Theheaderfileforthisclassisgivenbelow.
2SORisaniterativetechniqueforsolvinglinearsystems:see,forexample,Iserles[1].

7.2 Example:AClassofE-booksDerivedfromaClassofBooks 131
AstheclassEbookisderivedfromtheclassBook,weincludetheheaderfile
fortheclassBookintheheaderfilefortheclassEbookbelow.Line7ofthislisting
specifiesthattheclassEbookisindeedderivedfromtheclassBook,andtheword
“public”inthislinehastheeffectthat:
1. publicmembersof Bookarepublicmembersof Ebook;
2. protectedmembersof Bookareprotectedmembersof Ebook;and
3. privatemembersof Bookarehiddenfrom Ebook,andsomaynotbeusedby
thederivedclass.
This is known as public inheritance. We will discuss access privileges for derived
classesinmoredetailinSect.7.3.
Listing7.1 ThefileEbook.hpp
✞
#ifndef EBOOKHEADERDEF
1
#define EBOOKHEADERDEF
2
3
#include <string>
4
#include "Book.hpp"
5
6
class Ebook: public Book
7
{
8
public:
9
Ebook();
10
std::string hiddenUrl;
11
};
12
13
#endif
14
Basedonthediscussionabove,allpublicandprotectedmembersoftheclassBook
definedinListing6.6areavailabletoinstancesoftheclassEbook.Thishasthepos-
sibly unintended effect that the member mYearOfPublication is not directly
availabletothederivedclassEbook,asthismemberisprivateandthereforenotavail-
abletothederivedclass.Thismemberis,however,stillavailableindirectlythrough
thepublicmethodsofthebaseclassSetYearOfPublicationandGetYear-
OfPublication—asthesemembersarepublictheyareavailabletothederived
class,andcanbeusedtoaccessthemembermYearOfPublication.Theother
difference between the derived class and the parent class is that we have declared
twoadditionalmembersinthelistingabove:anoverriddendefaultconstructor,and
astringmemberrepresentingthehiddenURL.
The overridden default constructor is given below, where the format is set to
“electronic”asrequired.Notethesyntaxforoverriddendefaultconstructorsbelow:
thisallowsthedefaultconstructorforthebaseclassBooktobecalledfirst,setting
the author, the title, and the publisher to “unspecified”. The format is then set to
“electronic”insidetheoverriddendefaultconstructorforthederivedclass.

| 132 |     |     | 7 InheritanceandDerivedClasses |     |
| --- | --- | --- | ------------------------------ | --- |
✞
| #include | "Ebook.hpp" |     |     |     |
| -------- | ----------- | --- | --- | --- |
1
2
| Ebook::Ebook() | : Book() |     |     |     |
| -------------- | -------- | --- | --- | --- |
3
{
4
| format | = "electronic"; |     |     |     |
| ------ | --------------- | --- | --- | --- |
5
}
6
Example code using the class Ebook is given below. Note that the member
formatofaninstanceoftheclassEbookisautomaticallysettoelectronic.
✞
| 1 #include | <iostream>  |     |     |     |
| ---------- | ----------- | --- | --- | --- |
| 2 #include | "Ebook.hpp" |     |     |     |
3
| int main(int | argc, char* | argv[]) |     |     |
| ------------ | ----------- | ------- | --- | --- |
4
{
5
| Ebook | holiday_reading; |     |     |     |
| ----- | ---------------- | --- | --- | --- |
6
| holiday_reading.title |     | = "The skull | beneath the | skin"; |
| --------------------- | --- | ------------ | ----------- | ------ |
7
| holiday_reading.author |     | = "P D James"; |     |     |
| ---------------------- | --- | -------------- | --- | --- |
8
| std::cout | << "The author | is " << | holiday_reading.author |     |
| --------- | -------------- | ------- | ---------------------- | --- |
9
| 10           | << "\n";       |         |                        |     |
| ------------ | -------------- | ------- | ---------------------- | --- |
| 11 std::cout | << "The title  | is " << | holiday_reading.title  |     |
| 12           | << "\n";       |         |                        |     |
| 13 std::cout | << "The format | is " << | holiday_reading.format |     |
<< "\n";
14
15
holiday_reading.SetYearOfPublication(1982);
16
| std::cout | << "Year | of publication | is " |     |
| --------- | -------- | -------------- | ---- | --- |
17
<< holiday_reading.GetYearOfPublication()
18
<< "\n";
19
20
| 21 holiday_reading.hiddenUrl |                                          | =    |          |     |
| ---------------------------- | ---------------------------------------- | ---- | -------- | --- |
| 22                           | "http://ebook.example.com/example-book"; |      |          |     |
| 23 std::cout                 | << "The URL                              | is " |          |     |
| 24                           | << holiday_reading.hiddenUrl             |      | << "\n"; |     |
25
| return | 0;  |     |     |     |
| ------ | --- | --- | --- | --- |
26
}
27
Figure7.1 shows, in schematic form, a representation of how the class Ebook
relatestoitsparentclassBook.ThisrepresentationisgivenintheUnifiedModelling
Language(UML)formatwhereeachclassisshownasabox.Spaceinsideeachbox
isdividedintothreecomponents:theclassname,alistofthedatacontainedinthe
class and a list of the class methods. A + sign signifies data and methods which
arepublic.Privatedataormethods(mYearOfPublicationinthiscase)carrya
−sign,whileprotectedmemberswouldbegivena#sign.

7.2 Example:AClassofE-booksDerivedfromaClassofBooks 133
Fig.7.1 Aninheritance
graph,showingthatEbookis
derivedfromtheBookbase
class
The arrow between the boxes shows the child–parent inheritance relationship.
The reason for the repetition of “+ Book()” in the base class is to show that
Bookhasthreedifferentconstructors:thedefaultconstructor,thecopyconstructor
and a specialised Book constructor for setting the title attribute. These three
constructorswereintroducedinSect.6.2.7.Ebookhasonlyoneconstructorwhichis
theoverriddendefault(noargument)constructorgivenabovewhichsetstheformat
attribute.
7.3 AccessPrivilegesforDerivedClasses
Whendevelopingaclass,wespecifyallclassmembersasbeingpublic,protectedor
privatemembers.Whenaclassisderivedfromthisbaseclass,weneedtoknowwhat
accessprivilegesthemembersofthebaseclasshaveinthederivedclass.Intheclass
EbookthatwederivedfromtheclassBookinSect.7.2,weusedpublicinheritancein
line7ofListing7.1.Therearetwoothertypesofinheritance:protectedinheritance;
and private inheritance. These three different types of inheritance determine the
access privileges of the base class members in the derived class. In Table 7.1, we
statetheseaccessprivileges.

134 7 InheritanceandDerivedClasses
Table7.1 Accessprivilegesforderivedclasses
Accessprivilegeinbaseclass Typeofinheritance
Public Protected Private
Public Public Protected Private
Protected Protected Protected Private
Private Hidden Hidden Hidden
7.4 ClassesDerivedfromDerivedClasses
Wemayderiveclassesfromclassesthatarethemselvesderivedclasses,asdiscussed
inSect.7.1.IfClass2isderivedfromClass1,wemayderiveanewclassClass3
from Class2inexactlythesamewayasinSect.7.2,asshownintheheaderfile
forClass3shownbelow.
✞
#ifndef CLASS3DEF
1
#define CLASS3DEF
2
3
#include "Class2.hpp"
4
5
class Class3: public Class2
6
{
7
public:
8
double newMember;
9
};
10
11
#endif
12
7.5 Run-TimePolymorphism
Polymorphism may be used when a number of classes are derived from the base
class,andforsomeofthesederivedclasseswewanttooverrideone—ormore—of
the methods of the base class. Suppose we have developed a class of guests who
stay at a hotel. This class will include members such as name, room type, arrival
date,numberofnightsbooked,andamembermethodthatcomputesthetotalbill.
It is likely that the hotel has negotiated special nightly rates for individuals from
particularorganisations.Toreflectthis,themethodthatcomputesthetotalbillmust
act differently on guests from these organisations. This may be incorporated into
software in a very elegant manner through the use of virtual methods where the
method does different things for different derived classes. This is implemented by
theuseofthevirtualkeyword,shownintheheaderfilefortheclassofhotelguests
shownbelow.Thevirtualkeywordisasignaltothecompilerthatamethodhas
thepotentialtobeoverriddenbyaderivedclass.

7.5 Run-TimePolymorphism 135
✞
#ifndef GUESTDEF
1
#define GUESTDEF
2
3
#include <string>
4
5
class Guest
6
{
7
public:
8
std::string name, roomType, arrivalDate;
9
int numberOfNights;
10
double telephoneBill;
11
virtual double CalculateBill();
12
};
13
14
#endif
15
The implementation of the method CalculateBill is given in the listing
below,wherethetotalbillisgivenbymultiplyingthenumberofnightsthataguest
stayed in the hotel by a nightly rate of £50, and adding the telephone bill to this
figure.Eventhoughthismethodisavirtualmethod,itiswritteninexactlythesame
wayasifitwerenotdeclaredasvirtual.
✞
#include "Guest.hpp"
1
2
double Guest::CalculateBill()
3
{
4
5
return telephoneBill + ((double)(numberOfNights))*50.0;
}
6
Supposenowthatthehotelhavenegotiatedadealwithacompanythatreduces
the room rate to £45 for the first night that a guest stays, and £40 for subsequent
nights,andoffersfreetelephonecalls.Thismaybeimplementedbyderivingaclass
SpecialGuestfromtheclassGuestasshownbelow.
✞
#ifndef SPECIALGUESTDEF
1
#define SPECIALGUESTDEF
2
3
#include "Guest.hpp"
4
5
class SpecialGuest: public Guest
6
{
7
public:
8
double CalculateBill();
9
};
10
11
#endif
12

| 136 |     |     |     | 7 InheritanceandDerivedClasses |
| --- | --- | --- | --- | ------------------------------ |
ThemethodCalculateBillforthisderivedclassisthenimplementedusing
thecodebelow.
✞
| #include | "SpecialGuest.hpp" |     |     |     |
| -------- | ------------------ | --- | --- | --- |
1
2
| double | SpecialGuest::CalculateBill() |     |     |     |
| ------ | ----------------------------- | --- | --- | --- |
3
{
4
| 5 return | 45.0 + | ((double)(numberOfNights-1))*40.0; |     |     |
| -------- | ------ | ---------------------------------- | --- | --- |
6 }
NotethatdeclaringthemembermethodCalculateBillasvirtualintheclass
Guestdoesnotrequirethatthemethodmustbeoverridden(redefined)inderived
classes:itsimplygivesustheoptiontooverrideit.
Therealpowerofrun-timepolymorphismcanbeseenwhenweuseonlypointers
tothebaseclassinafamilytreeofobjects.Itmightnotbeobviouswhattheexact
typeofeachobjectinourprogramis,buttherun-timesystemisabletofindout.In
thefollowingcode,therearethreepointerstoGuestobjects,butoneofthemisin
actualityaSpecialGuestandthereforehasareducedbill.Onemightimaginea
larger-scaleprogramrunningoveranarrayof Guestpointers—representingthose
guestswhoarecheckingout—eachofwhichhastheirownmechanismforcalculating
thebill.TheprogrammerdoesnotneedtobeawarewhichoftheseGuestobjects
mightbeactuallybeaSpecialGuest.3
✞
| 1 #include | <iostream>         |     |     |     |
| ---------- | ------------------ | --- | --- | --- |
| 2 #include | "Guest.hpp"        |     |     |     |
| 3 #include | "SpecialGuest.hpp" |     |     |     |
4
| int main(int | argc, | char* | argv[]) |     |
| ------------ | ----- | ----- | ------- | --- |
5
{
6
| Guest* | p_gu1 | = new | Guest; |     |
| ------ | ----- | ----- | ------ | --- |
7
| Guest* | p_gu2 | = new | Guest; |     |
| ------ | ----- | ----- | ------ | --- |
8
| Guest* | p_gu3 | = new | SpecialGuest; |     |
| ------ | ----- | ----- | ------------- | --- |
9
10
| 11 //Set                 | the three | guests | identically |     |
| ------------------------ | --------- | ------ | ----------- | --- |
| 12 p_gu1->numberOfNights |           |        | = 3;        |     |
| 13 p_gu1->telephoneBill  |           |        | = 0.00;     |     |
| p_gu2->numberOfNights    |           |        | = 3;        |     |
14
| p_gu2->telephoneBill |     |     | = 0.00; |     |
| -------------------- | --- | --- | ------- | --- |
15
| p_gu3->numberOfNights |     |     | = 3; |     |
| --------------------- | --- | --- | ---- | --- |
16
| p_gu3->telephoneBill |     |     | = 0.00; |     |
| -------------------- | --- | --- | ------- | --- |
17
18
| std::cout | <<  | "Bill | for Guest 1 | = " |
| --------- | --- | ----- | ----------- | --- |
19
|     | <<  | p_gu1->CalculateBill() |     | << "\n"; |
| --- | --- | ---------------------- | --- | -------- |
20
3The
advanced programmer can test if a Guest is a SpecialGuest using a feature called
dynamiccasting.

7.5 Run-TimePolymorphism 137
| std::cout | << "Bill | for Guest 2 | = " |
| --------- | -------- | ----------- | --- |
21
|     | << p_gu2->CalculateBill() |     | << "\n"; |
| --- | ------------------------- | --- | -------- |
22
| 23 std::cout | << "Smaller               | bill for | Guest 3 = " |
| ------------ | ------------------------- | -------- | ----------- |
| 24           | << p_gu3->CalculateBill() |          | << "\n";    |
| 25 delete    | p_gu1;                    |          |             |
| delete       | p_gu2;                    |          |             |
26
| delete | p_gu3; |     |     |
| ------ | ------ | --- | --- |
27
| return | 0;  |     |     |
| ------ | --- | --- | --- |
28
}
29
7.6 TheAbstractClassPattern
Supposewewanttowriteanobject-orientedprogramforcalculatingthenumerical
solutionofinitialvalueordinarydifferentialequationsoftheform
dy
|     | =   |          | )=Y       |
| --- | --- | -------- | --------- |
|     |     | f (t,y), | y(T 0 0 , |
dt
wheref(t,y)isagivenfunction,andT ,Y aregivenvalues.Manymethodsexist
0 0
forcalculating thenumerical solutionof equationssuch asthese, forexample, the
forwardEulermethod,Heun’smethod,variousRunge–Kuttamethods,andvarious
multistepmethods.Onewayofimplementingthesenumericalmethodswouldbeto
writeaclasscalledAbstractOdeSolverthathasmembersthatwouldbeused
by all of these numerical methods, such as variables representing the stepsize and
initialconditions,amethodthatrepresentsthefunctionf(t,y)ontheright-handside
of the equation above, and a virtual method SolveEquation for implementing
one of the numerical techniques described above. We would then implement each
ofthenumericalmethodsusingaclassderivedfromAbstractOdeSolver,and
overridingthevirtualfunctionSolveEquation.Thederivedclasseswouldthen
containmembersthatallowaspecificnumericalalgorithmtobeimplemented,aswell
asthemembersofthebaseclassAbstractOdeSolverthatwouldberequired
byallofthenumericalsolvers.
Usingtheclassstructuredescribedabove,thebaseclassAbstractOdeSolver
wouldnotactuallyincludeanumericalmethodforcalculatinganumericalsolution
of a differential equation, and so we would not want to ever create an instance of
this class. We can automatically enforce this by making AbstractOdeSolver
an abstract class. This is implemented by setting the virtual functions Solve-
EquationandRightHandSidetobepurevirtualfunctionsasshowninlines15
and16ofthelistingforAbstractOdeSolver.hppbelow.Weindicatethatthese
functionsarepurevirtualfunctionsbycompletingthedeclarationofthesemembers
with“= 0”asshowninthelistingbelow.Shouldwemistakenlyattempttocreate
aninstanceoftheclassAbstractOdeSolverwewouldgetacompilationerror.
AninvestigationintopurevirtualfunctionsismadeinExercise7.2.

| 138 |     |     |     | 7 InheritanceandDerivedClasses |     |
| --- | --- | --- | --- | ------------------------------ | --- |
ThefileAbstractOdeSolver.hpp
Listing7.2
✞
| #ifndef | ABSTRACTODESOLVERDEF |     |     |     |     |
| ------- | -------------------- | --- | --- | --- | --- |
1
| 2 #define | ABSTRACTODESOLVERDEF |     |     |     |     |
| --------- | -------------------- | --- | --- | --- | --- |
3
| 4 class | AbstractOdeSolver |     |     |     |     |
| ------- | ----------------- | --- | --- | --- | --- |
{
5
protected:
6
| double | stepSize; |     |     |     |     |
| ------ | --------- | --- | --- | --- | --- |
7
| double | initialTime; |     |     |     |     |
| ------ | ------------ | --- | --- | --- | --- |
8
| double | finalTime; |     |     |     |     |
| ------ | ---------- | --- | --- | --- | --- |
9
| double | initialValue; |     |     |     |     |
| ------ | ------------- | --- | --- | --- | --- |
10
public:
11
| void       | SetStepSize(double     |                      |            |           |         |
| ---------- | ---------------------- | -------------------- | ---------- | --------- | ------- |
| 12         |                        | h);                  |            |           |         |
| 13 void    | SetTimeInterval(double |                      | t0, double | t1);      |         |
| 14 void    | SetInitialValue(double |                      | y0);       |           |         |
| 15 virtual | double                 | RightHandSide(double |            | y, double | t) = 0; |
| virtual    | double                 | SolveEquation()      | =          | 0;        |         |
16
};
17
18
#endif
19
A class is an abstract class if it contains one or more pure virtual methods. We
donotdiscussimplementationoftheclassAbstractOdeSolverorthederived
classes further here: these classes are developed in the exercises at the end of this
chapter.
7.7 Tips:UsingaDebugger
InSect.1.7wegaveafewtipsabouthowtodebugyourcodeusingsimpletechniques
suchasprintinginformationouttothescreen,andwealsopromisedtogivealittle
moreinformationonusingadebuggertoinspectyourcode.Thereisawide-range
ofopensourceandcommercialtoolstosupportyou,shouldyouwishtodothis.
Theeasiestdebuggerstousearethosewhichareintegratedwithyourdevelopment
environment (such as Visual Studio or Eclipse). These integrated debuggers allow
you to set breakpoints (places where you wish to temporarily pause execution) by
clickingandselectingindividuallinesofcodeinyoureditingwindow.Inthecaseof
Eclipse,thedebuggingoptionsbasicallyprovideapointandclickfront-endinterface
ontopofalessuser-friendlytext-baseddebuggersuchasgdb.
Thenextlevelofsophisticationisagraphicalstandalonedebugger.Manyofthose
availableareactually afront-endtoatext-based debugger,whereassome, suchas
upsarecompletelyself-containeddebuggers.Apopularopensourcegraphicalfront-
end debugger is ddd which is a graphical interface to gdb, although it can also
interface with a range of low-level debugging tools for a variety of programming
languages. There are many other graphical front-end debuggers available such as
KDbgandXxgdb.

7.7 Tips:UsingaDebugger 139
The lowest level of sophistication is the text-based debugger. The most widely
usedoftheseistheopensourceGNUdebuggergdb,butmanycommercialcompilers
offertheirowndebuggingenvironments.
Allthedebuggingtoolsmentionedwillallowyoutowalkthroughthecodeline
by line, function call by function call, or to the next break point. If your program
abortswithasegmentationfault,thenthedebuggerwillstopattheplacewherethe
faulthappened,allowingyoutoseethelinewhichcausedtheerror.Atanystagein
execution,youwillbeabletoinspectthevaluesoftheprogramvariablesandclasses.
Youwillalsobeabletoinspecttheback-trace(orstack)whichshowsthefunction
callingsequencewhichledfromthemainfunctiontoaparticularlineofcode.
Ouradviceistodebugyourcodewithagraphicalfront-endtogdb,suchasthe
popular ddd. Such tools are easy to download and install. The fact that they have
agraphicalinterfacewithabuilt-inhelpsystemwillallowyoutorapidlyseewhat
thecapabilitiesare.Wealsoneedtostressatthispointthatdebuggersdonotcope
wellwithoptimisedcode.Beforeyouloadtheprogramintothedebugger,youmust
remembertofirstcompileyourcodewiththe“-g”flag(seeSect.1.3.3).
7.8 Exercises
7.1 Inthisquestion,wewilldevelopclassestodescribethestudentsatauniversity.
1. Writeaclassofstudentsattheuniversitythathasthefollowingpublicmembers:
(cid:129) astringforthestudent’sname;
(cid:129) adoubleprecisionfloatingpointvariablethatstoresthelibraryfinesowedby
thestudent;
(cid:129) adoubleprecisionfloatingpointvariablethatstoresthetuitionfeesowedby
thestudent;
(cid:129) amethodthatreturnsthetotalmoneyowedbythestudent,thatis,thesumof
thelibraryfinesandtuitionfeesassociatedwithagivenstudent;
(cid:129) afewconstructorsthattakedifferentarguments.
2. The library fines owed by the students must be a nonnegative number. Enforce
thisbymakingastudent’slibraryfinesaprivatememberoftheclass.Writeone
methodthatallowstheusertosetthisvariableonlytononnegativevalues,and
another method that can be used to access this private variable. Both methods
shouldbepublicmembersoftheclass.
3. Studentsattheuniversityareeithergraduatestudentsorundergraduatestudents.
Allundergraduatestudentsarefull-timestudents.Graduatestudentsmaybefull-
timestudentsorpart-timestudents.Deriveaclassofgraduatestudentsfromthe
classofstudentsthatyouhavealreadywrittenwithanadditionalmembervariable
thatstoreswhetherthestudentisfull-timeorpart-time.
4. Graduatestudentsdonotpaytuitionfees.Usepolymorphismtowriteamethod
thatcalculatesthetotalmoneyowedbyagraduatestudent.Thiswillrequirethe
methodforcalculatingthetotalmoneyowedtobeavirtualfunctionoftheparent
class.

| 140 |     |     | 7 InheritanceandDerivedClasses |
| --- | --- | --- | ------------------------------ |
5. Ph.D. students are a special class of graduate students who do not pay library
fines.DeriveaclassofPh.D.studentsfromtheclassofgraduatestudents.Write
amethodthatcalculatesthetotalmoneyowedbyaPh.D.student.
7.2 Thisexerciseisaninvestigationintoproperuseofthevirtualkeywordand
intosafewaysofmakingabstractclasses.
The following program presents a small hierarchy of classes using the abstract
classpatterndescribedinSect.7.6.ThereisanabstractclassAbstractPerson,
which is intended never to be instantiated, and two derived classes, Mother and
Daughter.Thecodeinthemainfunctiondemonstratesthepowerofpolymorphic
inheritance.Itshowsthatitispossibletohaveavarietyofobjectsofthesamefamily
stored as pointers to a generic abstract type, each of which could be a different
concreteclass.TheAbstractPersonclasspromisesaPrintmethod,butitis
only at run-time that the system inspects the class pointed to by p_mother and
worksoutwhichPrintmethodtoinvoke.
✞
| #include <iostream> |     |     |     |
| ------------------- | --- | --- | --- |
1
2
| class AbstractPerson |     |     |     |
| -------------------- | --- | --- | --- |
3
{
4
public:
5
| virtual | void Print(){std::cerr<<"Never |     | instantiate\n";} |
| ------- | ------------------------------ | --- | ---------------- |
6
};
7
8
| 9 class Mother | : public | AbstractPerson |     |
| -------------- | -------- | -------------- | --- |
10 {
11 public:
| virtual | void Print(){std::cout<<"Mother\n";} |     |     |
| ------- | ------------------------------------ | --- | --- |
12
};
13
14
| class Daughter | : public | Mother |     |
| -------------- | -------- | ------ | --- |
15
{
16
public:
17
| void Print(){std::cout<<"Daughter\n";} |     |     |     |
| -------------------------------------- | --- | --- | --- |
18
19 };
20
| 21 int main(int | argc, char* | argv[]) |     |
| --------------- | ----------- | ------- | --- |
22 {
| AbstractPerson* | p_mother | = new Mother; |     |
| --------------- | -------- | ------------- | --- |
23
| AbstractPerson* | p_daughter | = new Daughter; |     |
| --------------- | ---------- | --------------- | --- |
24
p_mother->Print();
25
p_daughter->Print();
26
| delete | p_mother; |     |     |
| ------ | --------- | --- | --- |
27
| delete | p_daughter; |     |     |
| ------ | ----------- | --- | --- |
28
}
29

7.8 Exercises 141
1. Copy, save, compile and run the above program. The output from the Print
methodcallsinlines25and26oughttobe:
✞
Mother
1
Daughter
2
2. Investigatewhathappensifyouremovethe publickeywordfromtheinheri-
tancedeclarationofeitherderivedclass(lines9and15).Thiswillmakethebase
classinaccessiblefromthederivedclass.
3. Investigate what happens if you remove either of the virtual keywords in
lines6and12.Alsoinvestigateaddingthevirtualkeywordonline18.How
doestheoutputchangeaftereachofthesechanges?
4. What happens if you use the code fragment below to instantiate an instance of
theabstractclassinthemainfunction?
✞
29
AbstractPerson* p_abstract = new AbstractPerson;
p_abstract->Print();
30
delete p_abstract;
31
5. Thepreferredmethodofmakinganabstractclasswithapurevirtualmethod(so
thatitcannotbeinstantiated)istogivenoimplementationofthatmethodinthe
class.Thisisdonebyreplacingline6withtheratherstrangesyntaxwhichwas
introducedintheAbstractOdeSolverofSect.7.6:
✞
public:
5
virtual void Print() = 0;
6
6. AftermakingthePrintmethodof AbstractPersonpurevirtualasabove,
repeattheexerciseinpart3ofremovingthevirtualkeywordsinlines6and12.
7. AlsoaftermakingthemethodAbstractPerson::Print()purevirtualas
above,repeattheexerciseinpart4ofattemptingtoinstantiateaninstanceofthe
abstractclass.
7.3 InSect.7.6,wediscussedhowabstractclassescouldbeusedtowritealibrary
forcalculatingthenumericalsolutionofinitialvalueordinarydifferentialequations,
i.e.ordinarydifferentialequationsoftheform
dy
= f (t,y),
dt
forsomeuserspecifiedfunctionf(t,y),wherey=Y att=T foraninitialvalueY
0 0 0
atsomeinitialtimeT .Wewanttocalculateanumericalsolutioninthetimeinterval
0

| 142 |     |     | 7 InheritanceandDerivedClasses |     |
| --- | --- | --- | ------------------------------ | --- |
T <t<T whereT isthefinaltime.Tosolvethisequationnumerically,werequire
| 0 1 | 1   |     |     |     |
| --- | --- | --- | --- | --- |
the user to specify an integration step size, which we denote by h. A large variety
ofnumericalmethodsexistforsolvingequationssuchastheseandinSect.7.6we
explainedthat,asthesemethodsallrequiredverysimilarinputs,theycouldbecoded
veryeffectivelyusinganabstractclasspattern.Wewillbasethelibrarydevelopedin
thisexerciseontheabstractclassinListing7.2:youshouldsavethisfile,andensure
thatyouunderstandhowtheclassmembersrelatetothediscussionabove.
In this exercise, we will develop the library to allow you to solve initial value
ordinarydifferentialequationsusingtwomethods:theforwardEulermethod;anda
Runge–Kuttamethod.Usingastepsizeh,wedefinethepointst,i=0,1,2,...,N i
by
t i =T 0 +ih,
wherehischosensothatt =T .Thenumericalsolutionatthesepointsisdenotedby
N 1
y,i=0,1,2,...,N.Thesevaluesofy
i aredeterminedbythenumericaltechnique
i
chosen.
| (cid:129)                       |     |          | .Fori=1,2,...,N,y |             |
| ------------------------------- | --- | -------- | ----------------- | ----------- |
| FortheforwardEulermethod,wesety |     | 0 =Y 0   |                   | i isgivenby |
|                                 | y = | y +h f(t | ,y ).             |             |
|                                 | i   | i−1 i−1  | i−1               |             |
(cid:129) ForthefourthorderRunge–Kuttamethod,wesety =Y .Fori=1,2,...,N,
0 0
| wecalculatey | usingthefollowingformulae: |     |     |     |
| ------------ | -------------------------- | --- | --- | --- |
i
|     | k =hf(t | ,y ),         |           |     |
| --- | ------- | ------------- | --------- | --- |
|     | 1       | i−1 i−1       |           |     |
|     |         | 1             | 1         |     |
|     | =hf     | +             | +         |     |
|     | k 2     | t i−1 h,y i−1 | k 1 ,     |     |
|     | (cid:2) | 2             | 2 (cid:3) |     |
|     |         | 1             | 1         |     |
|     | k =hf   | t + h,y       | + k ,     |     |
|     | 3       | i−1 i−1       | 2         |     |
|     | (cid:2) | 2             | 2 (cid:3) |     |
|     | =hf(t   | +h,y +k       |           |     |
|     | k 4     | i−1 i−1       | 3 ),      |     |
1
|     | y = y i−1 | + (k +2k | +2k +k ). |     |
| --- | --------- | -------- | --------- | --- |
|     | i         | 6 1 2    | 3 4       |     |
More details on numerical methods for initial value problems may be found in
Kreyszig,[2].
1. WritethemethodsassociatedwiththeclassAbstractOdeSolverandsave
these as the file AbstractOdeSolver.cpp. Note that you do not have to
writethepurevirtualfunctions,asthe“= 0”whentheyaredeclaredinthefile
AbstractOdeSolver.hppmeansthatthesearealreadywritten.
2. Derive a class called FowardEulerSolver that allows the user to specify
thefunctionRightHandSide,andcontainsamethodSolveEquationthat
usestheforwardEulermethodtocalculatethevaluesofy i asdescribedabove,
andwritesthevaluesoft andy tofile.YoumaywanttoreferbacktoSect.5.7
|     | i   | i   |     |     |
| --- | --- | --- | --- | --- |
toremindyourselfhowtoallowausertospecifyafunction.

7.8 Exercises 143
3. TesttheclassFowardEulerSolverusingtheinitialvalueordinaryequation
dy
=1+t,
dt
for the time interval 0<t <1, and with initial condition y =2 at t =0. This
equation has solution y =(t2+2t +4)/2. Investigate how the choice of step
sizeaffectstheaccuracyofthesolution.
4. Repeat the two sub-parts above using the fourth order Runge–Kutta method to
calculatethevaluesofy.
i

8
Templates
Ifwewanttowriteafunctionthatreturnsthelargeroftwonumbers,andwewant
thisfunctiontobeusedforbothintegervariablesanddoubleprecisionfloatingpoint
variables,thenwecouldusefunctionoverloadingandwritetwofunctions:onefor
integervariablesandtheotherfordoubleprecisionfloatingpointvariables.Bothof
thesefunctionswouldrequireonlyafewlinesofcode,anditwouldnotbedifficult
tomaintainbothfunctions.Forlargerfunctionsmaintainingmorethanonefunction
todothesameoperationsmaybeproblematic.Thismaybeavoidedbytheuseof
templates,afeatureoftheC++languagethatallowsverygeneralcodetobewritten.
Webeginthischapterbydiscussingtemplatesandtheflexibilitythattheypermit.
OnelibraryassociatedwithC++istheStandardTemplateLibrary(STL):wecon-
cludethischapterbygivingabriefsurveyofthislibrary,andotherfunctionalitythat
hasbeenintroducedinrecentC++standards.
8.1 TemplatestoControlDimensionsandVerifySizes
Many scientific computing applications are underpinned by vectors and matrices.
We have seen earlier that these are represented in C++ by arrays. Under normal
circumstances there is no check, when we attempt to access elements of an array,
thattheindexisavalidindex.Forexample,inthecodefragmentbelowweattempt
toaccesstheelementwithindex7whenthearrayonlyhas5elements.Althoughthis
isclearlyanerror,itmaynottriggeracompilerorrun-timeerror.Themostlikely
outcomewhencodeincludingtheselinesisexecutedisasegmentationfaultoran
incorrectanswer.
©SpringerInternationalPublishingAG,partofSpringerNature2017 145
J.Pitt-FrancisandJ.Whiteley,GuidetoScientificComputing
inC++,UndergraduateTopicsinComputerScience,
https://doi.org/10.1007/978-3-319-73132-2_8

146 8 Templates
✞
double A[5];
1
A[7] = 5.0;
2
Ifthisfragmentispartofalargeprogram,itcouldbedifficulttolocatethiserror.
Itwouldbethereforebeusefulifwecouldusearrayswithanadditionalfeaturethat
acheckforvalidityoftheindexisperformedeachtimeanelementofthearrayis
accessed.Thismaybeachievedusingtheclassshownbelow,whichisreferredtoas
atemplatedclass.
Listing8.1 DoubleVector.hpp
✞
#include <cassert>
1
2
template<unsigned int DIM> class DoubleVector
3
{
4
private:
5
double mData[DIM];
6
7
public:
8
double& operator[](int index) // overloading the []
9
// operator
10
{
11
assert(index < DIM);
12
assert(index > -1);
13
return(mData[index]);
14
}
15
};
16
TheclassinthelistingaboveallowsustodeclareinstancesofDoubleVector,
specifyingthelengthofthearray.Theentriesofthearrayareprivatemembersofthis
classandsocan’tbeaccessedinthenormalwaythatwewouldaccesselementsof
anarray.Insteadweaccessmembersofthisclassbyoverloadingthesquarebracket
operator.Overloadingthisoperatorallowsustocheckthattheindexisavalidindex
beforereturningthevariablerequested.
Useoftheclassaboveisdemonstratedinthecodebelow.Note(inline6)howusing
this class requires us to declare the array v as an instance of a DoubleVector,
withthesizeofthisarraybeingenclosedwithinpointedbrackets.Subsequentlythis
arrayisaccessedinexactlythesamewayasanormalarray,butwiththeadditional
featurethatacheckiscarriedoutontheindexeverytimeanelementofthearrayis
accessedthroughtheoverloadingofthesquarebracketoperator.

8.1 TemplatestoControlDimensionsandVerifySizes 147
Listing8.2 UseDoubleVector.cpp
✞
#include <iostream>
1
#include "DoubleVector.hpp"
2
3
4
int main(int argc, char* argv[])
{
5
DoubleVector<5> v;
6
v[0] = 1.0; // This is OK
7
v[7] = 5.0; // Will trip assertion
8
9
return 0;
10
}
11
8.2 TemplatesforPolymorphism
ThereareverygoodreasonsinC++,andmanyotherprogramminglanguages,for
distinguishingbetweenintegervariablesandfloatingpointvariables.Forexample,
theargument(s)usedtoaccessanelementofanarraymayonlytakeintegervalues
whichprovidesonelevelofvalidationthattheindexiscorrect.Furthermore,inte-
gersmay be stored much more efficiently than floating point variables. One slight
drawbackinhavingtodistinguishbetweenthesevariablesisthatifwewanttowrite
afunctionthatisvalidforallnumericalvariables—thatis,bothintegersandfloat-
ingpointvariables—wehavetowritemorethanoneinstanceofthesamefunction.
Templates,however,provideawayaroundthis.
TheprogrambelowdemonstrateshowafunctionGetMaximumthatreturnsthe
maximumoftwonumbers,eitherintegersorfloatingpointvariables,maybewritten.
Thecodeisverysimilartothecodethatwewouldwritetocalculatethemaximum
of two numbers, although there are two important differences. The first difference
is that the function prototype in line 3 of the listing specifies that the function is
definedforageneralclassT,andthatthereturntypeandbothfunctionarguments
willbeinstancesofthesameclassT.Tocallthefunction,wehavetoputthedata
typeusedinangledbracketsasisshowninlines7and8ofthelisting.Thefunction
GetMaximumdemonstratespolymorphism,becauseitcanperformthesameoper-
ationondifferenttypesofinputargument.Thistypeofpolymorphismisalsocalled
static polymorphism or compile-time polymorphism, because when the compiler
seesline7or8ofthelistingitmakesaspecificversionof GetMaximumreadyfor
theintordoubletype.
✞
#include <iostream>
1
2
template<class T> T GetMaximum(T number1, T number2);
3
4
5
int main(int argc, char* argv[])

148 8 Templates
{
6
std::cout << GetMaximum<int>(10, -2) << "\n";
7
std::cout << GetMaximum<double>(-4.6, 3.5) << "\n";
8
9
return 0;
10
}
11
12
template<class T> T GetMaximum(T number1, T number2)
13
{
14
T result;
15
if (number1 > number2)
16
{
17
result = number1;
18
}
19
else
20
{
21
//number1 <= number2
22
result = number2;
23
}
24
return result;
25
}
26
8.3 ABriefSurveyoftheStandardTemplateLibrary
TheStandardTemplateLibrary(STL)containsmanycommonlyusedpatternsthat
maybereusedfordifferenttypesofobjects.Inthissurvey,wegiveasummaryof
thefeaturesavailablethatareparticularlyrelevanttowritersofscientificsoftware.
Containers, such as random-access vectors and sets, are dynamic arrays where
the STL is responsible for memory management. We now demonstrate how these
twocontainersmaybeused.OthercontainersthatareavailableintheSTLaremaps,
multimaps,multisets,listsanddeques(double-endedqueues,pronounced“decks”).
There are also many more algorithms that may be performed on these containers
otherthanthosepresentedhere.Someoftheseothercontainersandalgorithmsdo
nothaveapplicationinscientificcomputingsoftwareandsowedonotdiscussthem
here.Nevertheless,itisusefulforreaderstobeawarethattheyexist.
8.3.1 Vectors
TheSTLvectorclassisaveryusefulcontainerbecauseitisanextensibleclasswhich
hasasimilarinterfacetotheregularC++array.Thefactthatitisextensiblemeans
thatitssizeisnotfixed(eitheratcompiletimeoratthetimethatitiscreated)and
thatitwillgrowtoaccommodatenewitemsasnecessary.Onecaneitherdeclarean
emptySTLvectorofminimalcapacitywhichthengrowsbyaddingnewitemstoit,

8.3 ABriefSurveyoftheStandardTemplateLibrary 149
oronecanexploitefficiencysavingsbyknowingthemaximumsizeatcompiletime
orruntime.
IfyouexploreavailableSTLcontainers,youwillnoticethattheinterfaceforthe
STLvectorisverysimilartotheinterfacefortheotherbasiccontainertypesdeque
and list. This is a good example of object abstraction, because the details which
distinguish these container types from each other are not exposed to the user. The
maindifferencesbetweenthesetypesofcontainersareintheefficiencywhichSTL
guarantees for various operations: it is possible to retrieve an item from an STL
vectorviaitsindexinasingleoperation,butthisisnotpossiblefromanSTLlist.
It is generally only efficient to insert and delete elements to the back of a vector
objectandtothefrontorbackofadeque.Thelisttypeallowsefficientconstanttime
insertionanddeletionanywhereinthecontainer.
Theuseofthevectorcontainerisshowninthelistingbelow.Severalfeaturesof
theSTLareincludedinthislistingwhichwenowhighlight.
(cid:129) To use the vector container, we must include the vector header file (line 2).
ForsomealgorithmsthatmaybeusedonSTLvectors,suchassorting,wemust
includethealgorithmheaderfile(line3).
(cid:129) Inline8,wedeclareavectorofstringscalleddestinations.Notethatwedo
nothavetostatethesizeofthevector:theSTLwillhandlethisforus.Wecanwrite
std::vector<std::string> destinations(50); if we wished to
beginwithavectorof50emptystringsratherthananemptyvector.
(cid:129) Inline9,wereserve6elements.Thissetsthevector’scapacitywithoutchanging
thenumberofitemsinthevector.Althoughthislineisunnecessary,itmayproduce
efficiency savings in more memory-intensive code because it establishes that 6
itemscanbestoredinthevectorwithouthavingtoreallocateanymemorylater.
(cid:129) In line 10, we introduce our first entry to the vector, the string “Paris”. The
memberfunctionpush_backappendsacopyofthisstringtothecurrentvector,
whichiscurrentlyempty.
(cid:129) In line 11, we append anotherentry to the end of thevector, that is, the second
entryofthisvectoris“NewYork”.
(cid:129) Inline12,weappendafurtherentrytothevector,thatis,thethirdentryofthis
vectoris“Singapore”.
(cid:129) In lines 13 and 14, we demonstrate the use of the member function size for
accessingthenumberofelementsofthevector.
(cid:129) Inlines17–20,weshowthatentriesofthevectormaybeaccessedinthesame
wayasforastandardvector.
(cid:129) Lines 22–26 demonstrate how to access entries of the vector using an iterator.
Theiteratorisdeclaredinline22,wherewedefinewhattypeofvectortheiterator
isassociatedwith,thatis,inthiscaseavectorofstrings.Inline23,weconstruct
aforloopthatiteratesfromthestartofthevectortotheendofthevectorusing
thisiterator.Theentriesareprintedusingline25,whichprintsoutthecontents
ofthevectorentrythattheiteratorispointingat.Notetheuseoftheoverloaded
*operatorwhichlookslikeapointerde-reference.
(cid:129) Inline28,weaddastringtothestart ofavectorbyusingtheinsertmethod,
andinsertingatthestartofthevectorusingthe beginmethod:allsubsequent
entriesarenowmovedoneplaceback.

| 150 |     |     |     | 8 Templates |
| --- | --- | --- | --- | ----------- |
(cid:129) In line 29, we add a string to the vector, and place it in the second position: all
subsequententriesareagainmovedoneplaceback.
(cid:129) In line 30, we add another entry to the end of the vector. We then print out the
numberofentriesofthevector,andtheentries,usinglines31–38.
(cid:129) In lines 40 and 41, we erase all entries of the vector that appear after the third
entry,andthenprintoutthenumberofentriesofthevector,andtheentries,using
lines42–49.
(cid:129) Inline51,weusethealgorithmsort:thisalgorithmwillsortavectorofstrings
into alphabetical order and requires the header file algorithm as described
above.Thisisverifiedbyprintingtheentriesofthevectorusinglines52–59.
| Listing8.3 Exampleuseofstd::vector |     |     |     |     |
| ---------------------------------- | --- | --- | --- | --- |
✞
| 1 #include | <iostream>  |     |     |     |
| ---------- | ----------- | --- | --- | --- |
| 2 #include | <vector>    |     |     |     |
| #include   | <algorithm> |     |     |     |
3
| #include | <string> |     |     |     |
| -------- | -------- | --- | --- | --- |
4
5
| int main(int | argc, char* | argv[]) |     |     |
| ------------ | ----------- | ------- | --- | --- |
6
{
7
| std::vector<std::string> |     | destinations; |     |     |
| ------------------------ | --- | ------------- | --- | --- |
8
destinations.reserve(6);
9
10 destinations.push_back("Paris");
| 11 destinations.push_back("New |     |     | York"); |     |
| ------------------------------ | --- | --- | ------- | --- |
12 destinations.push_back("Singapore");
| 13 std::cout | << "Length             | of vector | is "     |     |
| ------------ | ---------------------- | --------- | -------- | --- |
|              | << destinations.size() |           | << "\n"; |     |
14
| std::cout | << "Entries | of vector | are\n"; |     |
| --------- | ----------- | --------- | ------- | --- |
15
16
| for (int | i=0; i<3; | i++) |     |     |
| -------- | --------- | ---- | --- | --- |
17
{
18
| std::cout | << destinations[i] |     | << "\n"; |     |
| --------- | ------------------ | --- | -------- | --- |
19
}
20
21
22 std::vector<std::string>::const_iterator c;
| 23 for (c=destinations.begin(); |     |     | c!=destinations.end(); | c++) |
| ------------------------------- | --- | --- | ---------------------- | ---- |
24 {
| std::cout | << *c | << "\n"; |     |     |
| --------- | ----- | -------- | --- | --- |
25
}
26
27
destinations.insert(destinations.begin(), "Sydney");
28
destinations.insert(destinations.begin()+1, "Moscow");
29
destinations.push_back("Frankfurt");
30
| std::cout | << "Length | of vector | is " |     |
| --------- | ---------- | --------- | ---- | --- |
31
| 32           | << destinations.size() |           | << "\n"; |     |
| ------------ | ---------------------- | --------- | -------- | --- |
| 33 std::cout | << "Entries            | of vector | are\n";  |     |
34
| for (c=destinations.begin(); |     |     | c!=destinations.end(); | c++) |
| ---------------------------- | --- | --- | ---------------------- | ---- |
35
{
36
| std::cout | << *c | << "\n"; |     |     |
| --------- | ----- | -------- | --- | --- |
37
}
38

| 8.3 | ABriefSurveyoftheStandardTemplateLibrary |     |     |     |     |     | 151 |
| --- | ---------------------------------------- | --- | --- | --- | --- | --- | --- |
39
destinations.erase(destinations.begin()+3,
40
| 41  |           |                        | destinations.end()); |     |          |     |     |
| --- | --------- | ---------------------- | -------------------- | --- | -------- | --- | --- |
| 42  | std::cout | <<                     | "Length of vector    | is  | "        |     |     |
| 43  |           | << destinations.size() |                      |     | << "\n"; |     |     |
|     | std::cout | <<                     | "Entries of vector   |     | are\n";  |     |     |
44
45
|     | for (c=destinations.begin(); |     |     | c!=destinations.end(); |     |     | c++) |
| --- | ---------------------------- | --- | --- | ---------------------- | --- | --- | ---- |
46
{
47
|     | std::cout | <<  | *c << "\n"; |     |     |     |     |
| --- | --------- | --- | ----------- | --- | --- | --- | --- |
48
}
49
50
| 51  | sort(destinations.begin(), |                        |                    | destinations.end()); |          |     |     |
| --- | -------------------------- | ---------------------- | ------------------ | -------------------- | -------- | --- | --- |
| 52  | std::cout                  | <<                     | "Length of vector  | is                   | "        |     |     |
| 53  |                            | << destinations.size() |                    |                      | << "\n"; |     |     |
| 54  | std::cout                  | <<                     | "Entries of vector |                      | are\n";  |     |     |
55
|     | for (c=destinations.begin(); |     |     | c!=destinations.end(); |     |     | c++) |
| --- | ---------------------------- | --- | --- | ---------------------- | --- | --- | ---- |
56
{
57
|     | std::cout | <<  | *c << "\n"; |     |     |     |     |
| --- | --------- | --- | ----------- | --- | --- | --- | --- |
58
}
59
60
|     | return | 0;  |     |     |     |     |     |
| --- | ------ | --- | --- | --- | --- | --- | --- |
61
62 }
8.3.2 Sets
AsetisanSTLcontainerwherenewentriesareonlystorediftheyaredistinctfromthe
entriesalreadystored.Themachineryformaintainingthedistinctnessoftheentriesis
abstractedfromtheuser.Onemightimplementasetasanunorderedlistofelements,
sothateachinsertionrequiresamembershiptestthatmayinvolveanequalitycheck
withallelementsoftheexistingset.Onemightmakeamoreefficientimplementation
usinganorderedlist,sothatmembershiptestsinvolvefewerequalitychecksagainst
existingmembers.TheSTLsetactuallyusesamoreefficientstructure1 sothatitis
abletoguaranteetheefficiencyofallpossiblesetoperations.Itisonlypossibleto
makeanefficientsetimplementationiftheelementsofthesetcanbeordered.We
will demonstrate the set container by using the class of points in two dimensions
whosemembershavecoordinatesthattakeintegervalues.Astheitemsinasethave
tobecomparable,weneedtodefineanorderingonpointsintwodimensions,which
wedobyoverloadingthe“lessthan”operatorforthesepoints.Ifwearecomparing
twopoints P and P ,whichrepresentthepoints(x ,y )and(x ,y ),wesaythat
|     | 0   | 1   |     |     | 0 0 | 1   | 1   |
| --- | --- | --- | --- | --- | --- | --- | --- |
|     | <   | <   | >   | >   | =   |     | <   |
P 0 P 1 ifx 0 x 1 ,and P 0 P 1 ifx 0 x 1 .Onlyifx 0 x 1 wesaythat P 0 P 1
1TheSTLsetisimplementedasatreestructureknownasared-blacksearchtree.

| 152 |     |     | 8   | Templates |
| --- | --- | --- | --- | --------- |
if y < y ,and P > P if y > y .Ifx = x and y = y thenthepoints P and
| 0   | 1 0 1 0 | 1 0 1 | 0 1 | 0   |
| --- | ------- | ----- | --- | --- |
P 1 areidentical:thesetwouldonlystoreoneinstanceofthesetwo.
TheclassPoint2drepresentingtheclassofpointsintwodimensionsisgivenin
thelistingbelow.Thisclasshastwomembervariables,xandy,thatstorethex-andy-
coordinates.Thereisalsoaconstructorthatallowsustoinitialisethecoordinates,and
anoverloaded“lessthan”<operatorthatallowsustoorderpointsintwodimensions
asdescribedabove.
✞
| class | Point2d |     |     |     |
| ----- | ------- | --- | --- | --- |
1
{
2
public:
3
| int | x, y; |     |     |     |
| --- | ----- | --- | --- | --- |
4
| Point2d(int | a, int | b)  |     |     |
| ----------- | ------ | --- | --- | --- |
5
{
6
| 7   | x = a; |     |     |     |
| --- | ------ | --- | --- | --- |
| 8   | y = b; |     |     |     |
9 }
| 10 bool | operator<(const | Point2d& other) | const |     |
| ------- | --------------- | --------------- | ----- | --- |
{
11
|     | if (x < other.x) |     |     |     |
| --- | ---------------- | --- | --- | --- |
12
{
13
return true;
14
}
15
|     | else if (x > other.x) |     |     |     |
| --- | --------------------- | --- | --- | --- |
16
{
17
| 18  | return false; |     |     |     |
| --- | ------------- | --- | --- | --- |
19 }
| 20  | else if (y < other.y) |     |     |     |
| --- | --------------------- | --- | --- | --- |
21 {
// x == other.x
22
return true;
23
}
24
else
25
{
26
|     | // x == other.x | and |     |     |
| --- | --------------- | --- | --- | --- |
27
// y >= other.y
28
| 29  | return false; |     |     |     |
| --- | ------------- | --- | --- | --- |
30 }
31 }
32 };
In the listing below, we create a set of instances of the class Point2d. When
using the set container, we must include the set header file (line 1). In line 7 we
createaset,madeupofinstancesoftheclassPoint2d,thatiscalledpoints.In
lines9–12,weattempttoinsertfourpointsintothissetusingtheinsertmethod
associated with sets. Two of these points—the origin and the point (0, 0)—are
identical,andsoonlyoneisstored.Thisisseeninlines14and15whereweprint
outthesizeoftheset,whichis3.Notehowtheiteratormaybeusedinlines17–21
ofthecodetoprintthemembervariablesoftheclassofpointsinline20.

8.3 ABriefSurveyoftheStandardTemplateLibrary 153
✞
|     | #include | <set> |     |     |     |     |
| --- | -------- | ----- | --- | --- | --- | --- |
1
|     | #include | <iostream> |     |     |     |     |
| --- | -------- | ---------- | --- | --- | --- | --- |
2
|     | #include | "Point2d.hpp" |     |     |     |     |
| --- | -------- | ------------- | --- | --- | --- | --- |
3
4
|     | int main(int |     | argc, char* | argv[]) |     |     |
| --- | ------------ | --- | ----------- | ------- | --- | --- |
5
{
6
|     | std::set<Point2d> |     |     | points; |     |     |
| --- | ----------------- | --- | --- | ------- | --- | --- |
7
| 8   | Point2d | origin(0, |     | 0); |     |     |
| --- | ------- | --------- | --- | --- | --- | --- |
9 points.insert(origin);
| 10  | points.insert(Point2d(-2, |     |     | 1));  |     |     |
| --- | ------------------------- | --- | --- | ----- | --- | --- |
| 11  | points.insert(Point2d(-2, |     |     | -5)); |     |     |
|     | points.insert(Point2d(0,  |     |     | 0));  |     |     |
12
13
|     | std::cout | <<  | "Number | of points | in  | set = " |
| --- | --------- | --- | ------- | --------- | --- | ------- |
14
|     |     | <<  | points.size() | <<  | "\n"; |     |
| --- | --- | --- | ------------- | --- | ----- | --- |
15
16
|     | std::set<Point2d>::const_iterator |     |     |     |     | c;  |
| --- | --------------------------------- | --- | --- | --- | --- | --- |
17
|     | for (c=points.begin(); |     |     | c!=points.end(); |     | c++) |
| --- | ---------------------- | --- | --- | ---------------- | --- | ---- |
18
19 {
| 20  |     | std::cout | <<  | c->x << " | " << c->y | << "\n"; |
| --- | --- | --------- | --- | --------- | --------- | -------- |
21 }
22
|     | return | 0;  |     |     |     |     |
| --- | ------ | --- | --- | --- | --- | --- |
23
}
24
8.4 ASurveyofSomeNewFunctionalityinModernC++
AtthecloseofChap.4wethoughtitpertinenttogiveyouanindicationthatsome
features of C++ have moved on since the first edition of this book was written. In
Sect.4.4 we introduced two of the new smart pointer constructs which have been
implementedincompilersthatconformtomodernC++standards.Thisenabledus
toindicatethat,whereasinformerdaysalldynamicallyallocatedmemorywasthe
responsibilityoftheprogrammer,therearenowwaystoensurethatcertainpointers
are not aliased (via the unique_ptr type) and to automatically garbage collect
certainvariables(viashared_ptr).
Now, towards the close of this chapter, we would like to introduce a selection
of some of the other features available in modern C++ standards such as C++11.
Withtheexceptionofsmartpointers,wehavedeferredwritingaboutanyofthese
newfeaturesuntilnowbecausemostofthefeaturesaretemplated overatype.By
introducing modern C++ features here we only intend to scratch the surface. As
inSect.8.3,thissectionisintendedonlyasabriefsurveyofsomeoftheavailable
features. We have deliberately selected those features which we have found most
helpfulintheyearssincewewrotethefirsteditionofthisbook—inthebeliefthat
thesefeatureswillproveusefultoothercomputationalscientists.

154 8 Templates
NotethatwithacurrentversionoftheGNUC++compiler,allcodefragmentsin
thissectionrequirethatthecompilerisexplicitlytoldthatitiscompilingcodethat
conformstoanewerstandardofC++thanitsdefault.Thismaymeaninvoking
✞
g++ -std=c++11 -o TestingCode TestingCode.cpp
orsomethingsimilaronthecommand-line.
8.4.1 TheautoType
AfterreadingSect.8.3youmayhavebeenleftbelievingthattemplatesarealldouble
colonsandanglebrackets.Worse,thatwheneveryouwanttoiterateoveravectoror
setwhichyouhavecreated,thenyouwillneedtoremembertheexactformofthe
iteratortype.Thegoodnewsisthatmuchofthewritingofthesetypescannowbe
simplifiedviaautomatictypeinference.Thisnotonlysavesonwriting,butitalso
makestemplatedcodemorereadable,byremovingsomeofthelengthytypenames.
Thisreliesononesimplerule.
Rule:ifthetypeofanewvariablecanbeinferredbythecompileratthepointof
itsinitialisationthenthetypemaybereplacedbyauto.
Forexample,inthecodefragmentbelow,thereisenoughinformationforthecompiler
toinferthatioughttobeanintegervariable:atitsinitialisationitisgiventhevalue
1(aninteger).Meanwhilethevariablexwhichisinitialisedtoafloatingpointvalue
isgiventheinferredtype double.Notethateachofthesetwolinescontainboth
the auto type and an assignment. Neither of these lines can itself be split across
twolines,becauseifthetypeisseparatedfromtheinitialisationthenthetypecanno
longerbeinferred.
✞
// Requires C++11 or above
1
auto i = 1;
2
auto x = 22.5;
3
Itisworthpointingoutthatthefullpowerofautomatictypeinferenceisnotdemon-
strated by the above example and, furthermore, that inferring simple types as in
thisexampleispotentiallydangerousbecausetheprogrammermayfindunexpected
behaviour if the compiler infers a different type to the type presumed by the pro-
grammer.Forexample,thecodebelowwillprinttoconsolethatxcontainsthevalue
22whichmaynotbewhattheprogrammerintended.Thisisbecause,online1,the
compilerwillinferthatthetypeof xoughttobeint.Aprogrammer,readingline
2,mayassumethatxoughttobeoftypedouble,butatthispointit’stoolate—the
typeisfixed.Theprogrammercouldrepairthisissueeitherbyinitialisingthevalue
of xto22.0orbyusingdoubleastheexplicittypeforx.

8.4 ASurveyofSomeNewFunctionalityinModernC++ 155
✞
auto x = 20; // Compiler infers x as int
1
x += 2.5; // Programmer might assume x is double
2
std::cout << "x = "<<x<<"\n"; // x = 22
3
The real power of the auto keyword comes in places where the onus used to
beontheprogrammertowriteoutalengthytypename.ForexampleinListing8.3,
loopsbeginningatlines23,35,46and56allrelyonaconst_iteratorwhich
isdeclaredoncegloballyinline22.Thiswaslargelydonetokeepthecodecompact.
Note though that the style of globally declaring a loop iterator in Listing8.3 is in
directcontraventiontopoint4inourtipsoncodingstyle(giveninSect.6.6).Inthe
codebelowwehaveindicatedhowthecodeinanyoftheseforloopsoverthevector
destinationsmaybereplacedconciselywithonewhichhasalocally-declared
iteratoroftypeauto.
✞
std::vector<std::string> destinations;
8
// (Fill the vector with names...)
9
10
for (auto c=destinations.begin();
11
c!=destinations.end(); c++)
12
{
13
14
std::cout << *c << "\n";
}
15
8.4.2 SomeUsefulContainerTypeswithUnifiedFunctionality
Modern C++ provides std::array which is a useful replacement for the small
size, statically allocated array (as found in Sect.1.4.5). The idea behind this array
typeistoprovideauniformwaytoaccessandusearrays.Itistemplatedbythetype
of object it contains and its size. In terms of access to its elements it can behave
exactly like the old style plain array: the element index in square brackets is used
toreadorwriteindividualelements.Thisisdemonstratedbelowwhereanold-style
array and a new-style array are created on lines 1 and 2 respectively. In the assert
statementonline3,elementsofthetwoarraysarecomparedusingthesamesyntax.
✞
int odd[4] = {1,3,5,7}; // Old style
1
std::array<int, 4> even = {2,4,6,8}; // New style
2
assert( odd[3] + 1 == even[3] );
3
However,therearetwomainwaysinwhichthenewstd::arrayisverydif-
ferenttotheoldarray.Inbothoftheserespectsitbehavesalotmorelikeafixed-size
versionofstd::vector.Thefirstdifferenceisthatmanyofthevectorfunctions,

| 156 |     |     |     |     |     |     | 8 Templates |
| --- | --- | --- | --- | --- | --- | --- | ----------- |
suchasbegin()andsize(),areavailableinthetemplatedarrayclass.Thesec-
onddifferenceisthatarrayscannowbepassedintofunctionsasfirst-classobjects.
Thatis,whereasold-stylearraysarealwayssenttofunctionsaspointers(afactwe
exploitedinSect.5.2.4)thenewtypecaneitherbecopiedorsentasareference.
Becausethenew-stylearrayisbuiltaroundthesameinfrastructureastheprevious
STL structures it interacts with many of them in the way one might expect. Many
structures may be initialised using the initialiser list style (a list of elements in
curlybraces).Onecanalsoconvertbetweenmanyofthestructuresbycopyingdata
betweenobjects.
In the code below, after initialising an array in line 1, we then copy the array
contentsintobothavectorandasetinlines2–4.Notethatthesyntaxforthetwo
operationsisthatsamebutthatthedataareconvertedtodifferentunderlyingrepre-
sentations.Finallytherepresentationistestedinline5,whereweexpectthattheset,
whichhasnoduplicates,willcontainfewermembers.
✞
| std::array<int, |     | 4>  | num_array | = {1, | 3, 5, | 3}; |     |
| --------------- | --- | --- | --------- | ----- | ----- | --- | --- |
1
| std::vector<int> |     |     | num_vector(num_array.begin(), |     |     |     |     |
| ---------------- | --- | --- | ----------------------------- | --- | --- | --- | --- |
2
num_array.end());
3
| std::set<int> |     | num_set(num_array.begin(), |     |     |     | num_array.end()); |     |
| ------------- | --- | -------------------------- | --- | --- | --- | ----------------- | --- |
4
| assert( | num_set.size() |     | <   | num_vector.size() |     | );  |     |
| ------- | -------------- | --- | --- | ----------------- | --- | --- | --- |
5
ModernC++alsocontainsalight-weightmixed-typetuple.Thisallowsustoput
piecesofdatatogetherinoneplaceinamodularway,sothatitissimilartoasmall
classwithnomethods.ThetupleisageneralisationoftheexistingSTLdatastructure
pair (which was restricted to having exactly two pieces of data). An example of
theuseofatupleisgivenbelow.Thenewtupleexplorerisrequiredtorepresent
informationaboutabookviatwostringsandanumber.Itisclearfromlines4and
5 that access to the member data in the tuple is possible (though the syntax may
look a little strange). Finally in line 7 we tidy up some of this new strange syntax
byusingthekeywordautowhichenablesustoinitialiseareasonablycomplicated
mixed-typetupleinasingleline.
✞
| std::tuple<std::string, |     |     | std::string, |     | int> | explorer | =   |
| ----------------------- | --- | --- | ------------ | --- | ---- | -------- | --- |
1
|     |     | std::make_tuple("The |     | explorer", |     |     |     |
| --- | --- | -------------------- | --- | ---------- | --- | --- | --- |
2
|     | "Katherine |     | Rundell", | 2017); |     |     |     |
| --- | ---------- | --- | --------- | ------ | --- | --- | --- |
3
| std::cout<<"Title |     |     | is "<<std::get<0>(explorer)<<"\n"; |     |     |     |     |
| ----------------- | --- | --- | ---------------------------------- | --- | --- | --- | --- |
4
| std::cout<<"Published: |     |     | "<<std::get<2>(explorer)<<"\n"; |     |     |     |     |
| ---------------------- | --- | --- | ------------------------------- | --- | --- | --- | --- |
5
6
| 7 auto h=std::make_tuple("The |     |     |     | hobbit", | "JRR | Tolkien", | 1937); |
| ----------------------------- | --- | --- | --- | -------- | ---- | --------- | ------ |

8.4 ASurveyofSomeNewFunctionalityinModernC++ 157
8.4.3 Range-basedforLoops
A very useful feature of modern C++ is the range-based loop. This is sometimes
knowninotherlanguagesasa“foreach”loopbut,aswewillseelater,“foreach”has
areservedmeaninginmodernC++.Therange-basedloopprovidestheprogrammer
withawayofiteratingovereachandeverymemberofaparticularcontainer(array
orvector,forexample)withouthavingtoworryabouthowmanymembersthereare,
orabouttheexactmechanismofiteration.
Themostsimplewaytodemonstratethisiswithaniterationoveranintialiserlist.
Herethevariableeven,whichislocaltotheforlooptakesonallthevaluesinthe
givenlistupto,andincludingthevalue8:
✞
for (int even : {2,4,6,8})
1
{
2
std::cout << even << "\n";
3
}
4
Therange-basedloopisavailableforallstructureswhichmightbeiteratedover:
arrays,vectors,sets,mapsandsoon.Ineachcasethemeaningoftherange-based
loop is to iterate over the container in the same way that the container’s regular
iteratormightbehave(butwithafarmorecompactsyntax).Ifweusearange-based
looponastd::setthenweexpecttoseeeachelementofthesetexactlyonce,but
withnoguaranteeontheorderinwhichtheyappear.Ifweusearange-basedloop
ona std::vectorthenwewillseeeachitemaccordingtotheirpositioninthe
vector.
We can now re-visit the example code for the STL vector type in Listing8.3
and again re-write those loops which are iterating over the members of the vector
andprintingthemout.Notethatinthecodebelowwehavetakenadvantageofthe
arrayinitialiserinlines8–9inordertorapidlyfillthevectordestinationswith
content.
Inlines11–15weshowthenormalusageforarange-basedloopoveravector.On
eachiterationofthisloopthevariablecity,whichislocaltotheloop,isassigned
a value which is a copy of an item in the vector. This means that the content of
theunderlyingvectorcannotbechanged:anymodificationstothecopiedstringin
thevariablecitywillstaylocaltotheloop.If,ontheotherhand,weintendedto
changethecontentsof destinations,thenwewoulddosobyusingareference
totheitems.Theuseofareferenceinarange-basedloopisdemonstratedinlines
16–21. Here each of the city names in the vector is modified using simple string
concatenation.Finally,inline23,weshowthatacombinationofarange-baseloop,
theautokeyword,andwritingtheloopwithoutbracesleadstoahighlycompact
waytoexpressthesamecode.Theloopinline23isequivalenttothatinlines11–15.
Ifwewantedtomakemodificationstothevectorthenwecouldinsistthatthelocal
variablewereareferencebywritingauto&insteadof autoforthetypename.

158 8 Templates
✞
std::vector<std::string> destinations =
8
{"Paris", "New York", "Singapore"};
9
10
// Range-based loop
11
for (std::string city : destinations)
12
{
13
std::cout << city << "\n";
14
}
15
// Use a reference to alter the members
16
for (std::string& r_city : destinations)
17
{
18
r_city = r_city + " (modified)";
19
std::cout << r_city << "\n";
20
}
21
// A very compact form
22
for (auto city:destinations) std::cout<<city<<"\n";
23
8.4.4 MappingLambdaFunctions
Weclosethissurveywiththe“foreach”function,whichisintendedtotakeafunction
and apply it to every member of a container (for example a vector). This type of
functionalityiscalleda“map”insomelanguages.Itworksbytakingasarguments
the beginning and end of a range to be iterated over, and the function that should
beapplied.Inthemoststraightforwardformthe“function”mightjustbethename
offunctionwhichhasbeendefinedelsewhere,butitbecomesmorepowerfulwhen
the function can be declared locally: inside the current scope, or even within the
for_eachfunctionitself.Thelocaldeclarationofafunctionisknownasalambda
closurebycomputerscientists.
Inthefollowingcodefragment,weapplyfunctionswhichdoubleeachelement
ofavector.Thefirsttimethishappensisonline7wherethefunctionnametwice
appearsinthethirdargument.Nowthistwicefunctionmighthavebeendeclared
externally(asindicatedbythecommentonline4)but,instead,itisdeclaredonline
6.Squarebracketshereindicatethatwhatfollowsisafunction,withroundbrackets
around the argument, braces around the function body, and a final semicolon. We
haveusedautoforthetypeoftwicebecauseitsrealtypeisafunctionfromint&
tovoid.Lines10–11showthatthefunctiondoesnotneedaname.Insteadwecan
justdeclaretheformanddefinitionofthefunctioninplace.Thisisaverycompact
form,butperhapsrendersthecodelessreadable.
✞
std::vector<int> evens = {2,4,6,8};
1
2
// Locally declare the equivalent of
3
4
// void twice(int& n){ n*=2; }
5
6
auto twice = [](int& n){n *= 2;};

| 8.4 ASurveyofSomeNewFunctionalityinModernC++ |     |     |              |         | 159 |
| -------------------------------------------- | --- | --- | ------------ | ------- | --- |
| std::for_each(evens.begin(),                 |     |     | evens.end(), | twice); |     |
7
8
| 9 //                            | Compact | form         |              |     |     |
| ------------------------------- | ------- | ------------ | ------------ | --- | --- |
| 10 std::for_each(evens.begin(), |         |              | evens.end(), |     |     |
| 11                              |         | [](int& n){n | *= 2;} );    |     |     |
8.5 Tips:TemplateCompilation
InSect.8.1wepresentedatemplatedclassDoubleVectorinwhichthesizeof
thevectorisspecifiedatcompiletime.SincethesizeofthevectorinUseDouble-
Vector.cpp (Listing 8.2) is known at compile time, the memory allocation is
static.
When building a program to use a templated class such as DoubleVector
we might follow the pattern laid down in Sect. 6.2.4.1 of placing the definition of
DoubleVector.hpp
| the class | in the file |     | and the implementation |     | of the class |
| --------- | ----------- | --- | ---------------------- | --- | ------------ |
in the file DoubleVector.cpp. We would write a main program to test it and
write the rules for compilation into a Makefile. There is an unfortunate snag
with this plan, because when we instantiate a vector (DoubleVector<5>, say)
in our main program and compile it, the compiler has no access to the implemen-
tationfromDoubleVector.cpp.Thecompilerneedstocompilecodefromthe
DoubleVector.cppfile,inwhichalltheinstancesof DIMarereplacedby“5”.
Therearethreestrategieswhichcanbeusedtoovercomethistemplateinstantia-
tionproblem.
1. Each file which uses the class may include the implementation of the entire
|       |             | #include | "DoubleVector.cpp". |     |            |
| ----- | ----------- | -------- | ------------------- | --- | ---------- |
| class | through the | use of   |                     |     | This means |
the code compilation may be slower since the entire class must be compiled
everytimeitisused.Italsomeansthatcaremustbetakentoensurethatthefile
DoubleVector.cpp is included at most once. (The #define mechanism
introducedinSect.6.2.2maybesuitablyadaptedforthispurpose.)
2. AsimilarsolutionistoplacetheentireclassinthefileDoubleVector.hpp,
aswedidfor DoubleVectorinListing8.1ofSect.8.1.This,again,hasthe
disadvantagethattheentireclassmustbecompiledeverytimeitisused.
3. Amoreadvancedsolutiontotheproblemisexplicitinstantiation.Ifitisknown
that we only use DoubleVector with a small set of sizes, then we can
force the compiler to produce exactly the ones which are needed as it com-
piles DoubleVector.cpp into the object file DoubleVector.o. This is
donebymakinganunnamedinstanceoftheclassofeachrequiredsizeinthefile
DoubleVector.cpp,asthecodefragmentbelowillustrates.
✞
| #include | "DoubleVector.hpp" |     |     |     |     |
| -------- | ------------------ | --- | --- | --- | --- |
1
2
| template   | class |                  |     |     |     |
| ---------- | ----- | ---------------- | --- | --- | --- |
| 3          |       | DoubleVector<5>; |     |     |     |
| 4 template | class | DoubleVector<7>; |     |     |     |

160 8 Templates
8.6 Exercises
8.1 Theprobabilityofrainforeachofthenext Ndaysistobestoredinadouble
precisionfloatingpointarrayofsizeN.Astheentriesofthisarrayareprobabilities
theyshouldalltakevaluesbetween0and1inclusive.However,astheyhavebeen
calculatedusinganumericalalgorithm,theseprobabilitiesareonlycorrecttowithin
anabsoluteerrorof10−6:thatis,inrealitythesenumbersmaybebetween−10−6
and1+10−6inclusive.UsingtheideaspresentedinSect.8.1,usetemplatessothat
whenaccessinganindividualentryofthearray:
1. thevaluestoredbythearrayisreturnedifitisbetween0and1inclusive;
2. thevalue0isreturnedifthevaluestoredisbetween−10−6and0inclusive;
3. thevalue1isreturnedifthevaluestoredisbetween1and1+10−6 inclusive;
and
4. anassertionistrippedotherwise.
8.2 Usetemplatestowriteasinglefunctionthatmaybeusedtocalculatetheabsolute
valueofanintegeroradoubleprecisionfloatingpointnumber.
8.3 Use the class of complex numbers given in Sect. 6.4 to create an STL vec-
tor of complex numbers. Investigate the functionality of the STL demonstrated in
Sect.8.3.1usingthisvectorofcomplexnumbers.Notethatwhenyouaddanobjectto
anSTLvectoritisacopywhichisadded,soitisimperativethatthecopyconstructor
isworkingasexpected.
8.4 ModifytheexampleofanSTLsetgiveninSect.8.3.2sothatthecoordinatesof
thepointarenowgivenbydoubleprecisionfloatingpointvariables.Youwillnow
need to think a bit more carefully about what it means for two coordinates to be
equal:seethetiponcomparingtwofloatingpointnumbersgiveninSect.2.6.5.
8.5 Usethecontainerstd::map<std::string, int>(amappingfromkeys
oftypestringtovaluesoftypeint)torepresentaphonebook.Ifyouhaveaccess
to a compiler which is compatible with C++11 or higher then you might consider
someofthefollowingideas.
1. Useaninitialiserlisttopopulatethephonebookwithasmalllistofname-number
pairs.SeeSect.8.4.2forexamplesofstructuresinitialisedinthisway,butbeaware
thatamapneedstobeinitialisedwithalistoflists.
2. Write a for loop to iterate over the contents of the phone book and output all
name-number pairs. Try this with the range-based loop that was introduced in
Sect.8.4.3.
3. Writeouttheentirecontentsofthephonebookusingastd::for_eachloop
andalambdafunction,inasimilarmannertotheloopsshowninSect.8.4.4.
4. Writefunctionalitytogetallnamesfromthemapandstoretheminavector.
5. Writefunctionalitytogetallthenumbersfromthemapintoavector.Thenuse
std::settodetectwhethertwoormorepeoplesharethesamenumber.

8.6 Exercises 161
6. Writethe“reverse”maptolookupanamewhengivenanumber.Ifyouhavetwo
peoplewhosharethesamenumberthenyoumayfindthatstd::multimapis
useful.
7. Re-write the map so that, instead of each name mapping to a single number
value,itmapstoastd::tupleconsistingofanumberandanemailaddress.
SeeSect.8.4.2forexampleuseoftuples.

9
Errors,ExceptionsandTesting
InSect.1.6weintroducedtheconceptofanassertstatement.Thisisawayofforcing
your program to terminate execution, should something unexpected happen. The
programwhichmotivatedtheuseofassertioninSect.1.6wasonewhichcalculated
thesquarerootofanumberenteredatthecommand-line.Hereisaversionofthat
programwheretheassertionhasbeenremovedbyturningitintoacomment.
✞
| #include | <iostream> |     |     |     |
| -------- | ---------- | --- | --- | --- |
1
| #include | <cassert> |     |     |     |
| -------- | --------- | --- | --- | --- |
2
| #include | <cmath> |     |     |     |
| -------- | ------- | --- | --- | --- |
3
4
| int main(int | argc, char* | argv[]) |     |     |
| ------------ | ----------- | ------- | --- | --- |
5
{
6
| double | a;  |     |     |     |
| ------ | --- | --- | --- | --- |
7
| 8 std::cout  | << "Enter          | a non-negative |        | number\n"; |
| ------------ | ------------------ | -------------- | ------ | ---------- |
| 9 std::cin   | >> a;              |                |        |            |
| 10 //Run     | without assertion: | assert(a       |        | >= 0.0);   |
| 11 std::cout | << "The            | square root    | of "<< | a;         |
| std::cout    | << " is            | " << sqrt(a)   | <<     | "\n";      |
12
| return | 0;  |     |     |     |
| ------ | --- | --- | --- | --- |
13
}
14
Whathappenswhenauserignorestherequestandentersanegativenumberatthe
commandline?Withouttheassertstatementonline10itislikelythattheprogram
willcompletewithouterror.Thisisbecausethecomputer’sfloatingpointunitrenders
theresultofsomecalculationssuchassqrt(-1.0)as“notanumber”ornanfor
short.
©SpringerInternationalPublishingAG,partofSpringerNature2017 163
J.Pitt-FrancisandJ.Whiteley,GuidetoScientificComputing
inC++,UndergraduateTopicsinComputerScience,
https://doi.org/10.1007/978-3-319-73132-2_9

164 9 Errors,ExceptionsandTesting
✞
Enter a non-negative number
-1
The square root of -1 is -nan
Other examples of floating point operations which produce the answer nan
include 0.0/0.0 and log(0.0). Some calculations such as 1.0/0.0 will
resolvetoafloatingpointrepresentationofinfinity(inf).Inascientificprogram,
onceonevariablehasbeensettonanorinfthenthisvalueislikelytopropagate
tolaterpartsofthecalculation.Itisnormallybesttocheckforthissortoferrorat
theearliestpossiblestagesothatcomputationisnotwasted.Inthiscontext,itwould
beprudenttocheckinanypieceofcodethatusesdivision,squareroot,logarithms
etc.thatthevaluesofalltheargumentsareinasensiblerange.Aswehavealready
seen,assertionsareonemethodofcheckingsucharguments.Inthischapter,wewill
seethatexceptions areanothermethodofcheckingthataremoreflexibleinsome
ways.Wewillalsointroducetechniquesfortestingsoftware,toallowsoftwaretobe
developedinasustainablemannerwithasfewerrorsaspossible.
9.1 Preconditions
Everysectionofaprogram(wherea“section”couldbeafunction,method,block,
for-loop iteration body etc.) can be thought of as having the task to produce a
postcondition when given a valid precondition. The postcondition of the program
above(thethingwhichitistaskedtodo)isthatitprintsthesquarerootofagiven
number.Itdoesthissubjecttothepreconditionthatthenumberisnonnegative.
Consideramethodwhichfindsalltherootsofafunction f(x)inthehalf-open
range x ≤ x < x . This method might need to assume as a precondition that
min max
thefunctionf iscontinuousanddifferentiableoverthesamerangex ≤ x < x .
min max
Moretrivially,itmightalsoneedtoassumethatx < x .Whatshouldhappenif
min max
x > x orx = x ?Ifthepreconditionforcorrectfunctionalityisnotmet
min max min max
thenwhatshouldhappen?Beforeweanswerthisquestion,wewillfirstconsidera
specificcase.
9.1.1 Example:TwoImplementationsofaGraphicsFunction
Inaparticulargraphicslibrary,thereisafunctionforrenderinga2-Dannulus.This
functiontakesfourinputarguments:theinnerradius,theouterradiusandthenumber
ofradialandaxialsegments.Thespecificationofthelibrarysaysthattheouterradius
mustbebiggerthantheinnerradiusandbothshouldbenonnegative.Italsosaysthat
thesegmentnumbersmustbestrictlypositive.Thespecificationfurthersaysthatit
isvalidtogivetheinnerradiusaszero,inwhichcasetheannuluswillberendered
asa2-Ddiskwithnohole.

9.1 Preconditions 165
Thereisacautionarystoryaboutaprofessorwhowroteaprogramforhisstudents
whichusedthisgraphicsfunctiontodrawdisks.Hemisreadthespecificationandset
theradiusvaluesthewrongwayroundsothattheoutervaluewas0.0andtheinner
valuewas1.0.Withoutrealisinghismistake,hedistributedtheprogramsourcecode
tohisstudents,someofwhombegantocomplainthatitwouldnotrun.
Theproblemwasthatthestudentswhosecodewouldnotrunwereusingadif-
ferentimplementationofthelibrary.Thetwodifferentimplementationsofthesame
specificationweredealingwitherrorsindifferentways.Theimplementationofthis
function in the graphics library as used by the professor contained a check for his
typeoferrorwhichsilentlyfixedtheproblembyinterchangingvaluesinamanner
similartothecodegivenbelow.
✞
#include <cassert>
1
void RenderAnnulus(double innerRadius, double outerRadius,
2
int slices, int segments)
3
{
4
//A "helpful" implementation fixes the input
5
//so RenderAnnulus(1.0, 0.0, 30, 3); will work
6
if (innerRadius > outerRadius)
7
{
8
//The arguments are the wrong way round
9
//Swap them
10
double temp = innerRadius;
11
innerRadius = outerRadius;
12
outerRadius = temp;
13
}
14
//...then render the annulus
15
}
16
Meanwhile,thestudentswhocomplainedthattheprogramwasnotrunningprop-
erlywereusingalibraryimplementationinwhichtheannulusfunctionterminatedon
reachingthistypeoferror.Thelistingbelowshowsthatthisterminationbehaviour
caneasilybeimplementedbycheckingthepreconditionwithanassertion.
✞
#include <cassert>
1
void RenderAnnulus(double innerRadius, double outerRadius,
2
int slices, int segments)
3
{
4
//Another implementation only checks the input
5
//so RenderAnnulus(1.0, 0.0, 30, 3); trips an assertion
6
assert (innerRadius < outerRadius);
7
//...then render the annulus
8
}
9
The“helpful”implementation,asusedbytheprofessor,wasinrealitymakinga
buginhiscodeinvisible—onlyforittobecomeembarrassinglyvisibleintheother
implementation.Bothimplementationsarecorrect inthesensethattheyfollowthe

166 9 Errors,ExceptionsandTesting
specificationandperformthecorrectoperationsprovidedthatthepreconditionsare
met.Unfortunately,thelibraryspecificationleftthehandlingthiskindoferroropen
tointerpretation.
9.2 ThreeLevelsofErrors
Some of the most important decisions that a programmer has to make are about
howerrorsshouldbetreated.Whatshouldhappeniftheusermisreadsapromptand
enterssomeinvalidinput?Whatshouldhappeniftheapplicationwriteraccidentally
permutes the input arguments of a library function? What should happen if some
numericalschemehasgeneratedinfornanbecauseofdivergence?
The answer to all these questions is the same: “It depends”. It’s good to treat
errorsdifferently depending on their severity, both in termsof how likely they are
to happen and in terms of how easy it might be to fix the problem and carry on.
Thedifficultbalanceofknowinghowsevereanerrormightbeisillustratedbythe
RenderAnnulusstoryinSect.9.1.1wheretheprogrammersofdifferentlibrary
implementationschosetodealwiththesameerrorincompletelydifferentways.One
setofprogrammersdecidedtheerrorwastrivialtofix,whiletheothersetdecided
toaborttheprogram.
Weproposeastrategyforhandlingerrorswhichisbuiltonaframeworkofthree
levelsoferrors.
1. Iftheerrorcanbefixedsafely,thenfixit.Ifneedbe,warntheuser.
2. Iftheerrorcouldbecausedbysomereasonableuserinputthenthrowanexception
uptothecallingcode,sincethecallingcodeshouldhaveenoughcontexttofix
theproblem.
3. Iftheerrorshouldnothappenundernormalcircumstancesthentripanassertion.
These three basic levels could be further refined. You may distinguish between
errorsthattripassertions(whicharenormallyremovedinoptimisedcode)anderrors
thatshouldhalttheprogramunderallcircumstances.Attheotherendofthescale,
youmightdistinguishbetweenerrorfixeswhicharesilentandthosewhichshould
warntheuserthatsomethinghasbeenchanged.
The exception level of error is a compromise between patching the problem to
carryon,andstoppingcompletely.Itisusedincircumstanceswherethecallerofa
functionmayhaveenoughinformationtobeabletodealwiththeerror.Forexample,
anonlinearNewtonrootfindermaydivergeandhencesignalanerror,butthepro-
grammermayknowthattheoriginaltaskinquestioncanstillbesolvedbycallingthe
samefunctionwithadifferentinitialguess,orbycallingitwithadampingfactor,or
bycallingabisectionrootfinder.ThelogicwouldbetofirsttrytheNewtonsolver,
but if that function signalled an error then to find the root using a more expensive
bisectionroutine.

9.3 IntroducingtheException 167
9.3 IntroducingtheException
An exception in C++ is a way of interrupting the normal flow of control of a pro-
gramandthrowingabundleofinformationbacktothecallingcode.Thisbundleof
informationisencapsulatedinsideanobject.Wedefineinthissectionaclasscalled
Exception,but objects ofany class may be thrown between functions to signal
anerror.
Theuseofexceptionsrequiresthekeywordstry,throwandcatch.
• tryisusedinthecallingcodeandtellstheprogramtoexecutesomestatements
intheknowledgethatsomeerrormighthappen.
• throwisusedwhentheerrorisidentified.Thefunctioncalledwillencapsulate
informationabouttheerrorintoanExceptionobjectandthrowitbacktothe
caller.
• catchisusedinthecallingcodetoshowhowtoattempttofixtheerror.Every
blockofcodethathasthetrykeywordmustbematchedbyacatchblock.
• Exceptionswhicharenotcaughtbythecallingcodemaycausetheprogramto
halt.
When an error occurs we want the code to “throw” two pieces of information:
a one-word summary of the problem type and a more lengthy description of the
error. We write a class Exception (shown below) to store these two pieces of
information,andwiththeabilitytoprintthisinformationwhenrequired.
Listing9.1 Exception.hpp
✞
#ifndef EXCEPTIONDEF
1
#define EXCEPTIONDEF
2
3
#include <string>
4
5
class Exception
6
{
7
private:
8
std::string mTag, mProblem;
9
public:
10
Exception(std::string tagString, std::string probString);
11
void PrintDebug() const;
12
};
13
#endif //EXCEPTIONDEF
14
Listing9.2 Exception.cpp
✞
#include <iostream>
1
#include "Exception.hpp"
2
//Constructor
3
Exception::Exception(std::string tagString,
4
std::string probString)
5

| 168 |     |     |     |     |     | 9 Errors,ExceptionsandTesting |
| --- | --- | --- | --- | --- | --- | ----------------------------- |
{
6
|     | mTag = | tagString; |     |     |     |     |
| --- | ------ | ---------- | --- | --- | --- | --- |
7
| 8   | mProblem | = probString; |     |     |     |     |
| --- | -------- | ------------- | --- | --- | --- | --- |
9 }
10
|     | void Exception::PrintDebug() |     |     |     | const |     |
| --- | ---------------------------- | --- | --- | --- | ----- | --- |
11
{
12
|     | std::cerr | << "** | Error | ("<<mTag<<") |     | **\n"; |
| --- | --------- | ------ | ----- | ------------ | --- | ------ |
13
|     | std::cerr | << "Problem: |     | "   | << mProblem | << "\n\n"; |
| --- | --------- | ------------ | --- | --- | ----------- | ---------- |
14
}
15
9.4 UsingExceptions
InListing3.4,wereadfromanamedfileOutput.dat.Weassumedthatthisfile
existedandtrippedanassertionifitdidnot.Inthecodebelow,wepresentamore
sophisticatedprogramforopeningafilewhichusesexceptionstoattempttofixthe
problem.Ifthe filecannot beopenedby the ReadFilefunction, anexception is
thrown.Thisiscaughtbycodethatpromptstheusertoenteranalternativefilename.
NotethatReadFiletakesthenameofthefileasaC++stringwhichisconverted
toaCstringonline8(usingc_strwhichwasintroducedinSect.1.4.8).
✞
|     | #include <iostream> |     |     |     |     |     |
| --- | ------------------- | --- | --- | --- | --- | --- |
1
| 2   | #include <fstream>       |     |     |     |     |     |
| --- | ------------------------ | --- | --- | --- | --- | --- |
| 3   | #include "Exception.hpp" |     |     |     |     |     |
4
|     | void ReadFile(const |     | std::string& |     | fileName, | double x[], |
| --- | ------------------- | --- | ------------ | --- | --------- | ----------- |
5
|     |     | double | y[]) |     |     |     |
| --- | --- | ------ | ---- | --- | --- | --- |
6
{
7
|     | std::ifstream |     | read_file(fileName.c_str()); |     |     |     |
| --- | ------------- | --- | ---------------------------- | --- | --- | --- |
8
|     | if (read_file.is_open() |     |     | ==  | false) |     |
| --- | ----------------------- | --- | --- | --- | ------ | --- |
9
{
10
|     | throw | (Exception("FILE", |     |     | "File | can’t be opened")); |
| --- | ----- | ------------------ | --- | --- | ----- | ------------------- |
11
12 }
| 13  | for (int | i=0; | i<6; | i++) |     |     |
| --- | -------- | ---- | ---- | ---- | --- | --- |
14 {
| 15  | read_file | >>  | x[i] | >> y[i]; |     |     |
| --- | --------- | --- | ---- | -------- | --- | --- |
}
16
read_file.close();
17
18
|     | std::cout | << fileName |     | <<" | read successfully\n"; |     |
| --- | --------- | ----------- | --- | --- | --------------------- | --- |
19
}
20
21
|     | int main(int | argc, | char* | argv[]) |     |     |
| --- | ------------ | ----- | ----- | ------- | --- | --- |
22
23 {
| 24  | double | x[6], y[6]; |     |     |     |     |
| --- | ------ | ----------- | --- | --- | --- | --- |
25 try

9.4 UsingExceptions 169
{
26
ReadFile("Output.dat", x, y);
27
}
28
catch (Exception& error)
29
{
30
error.PrintDebug();
31
std::cout << "Couldn’t open Output.dat\n";
32
std::cout << "Give alternative location\n";
33
std::string file_name;
34
std::cin >> file_name;
35
ReadFile(file_name, x, y);
36
}
37
}
38
9.5 TestingSoftware
It is often the case that you need to take a program which has been developed in
thepastandseektoextenditsfunctionality,perhapstoaddresssomenewresearch
question.Assumingthatyouareabletounderstandtheworkingoftheoriginalcode
becauseitiswell-documented(assuggestedinthetipsgiveninSect.5.10)andhas
a literate coding style (as suggested in the tips given in Sect.6.6), there is still a
potential pitfall. Suppose you add the new functionality, use it to solve your new
research problem, but later discover that the original functionality of the code has
changed.Perhapsyouarenolongerabletoreproducetheresultswhichareneeded
for a publication. This pitfall may have been avoided had an appropriate software
testingstrategybeenusedfortheoriginalcode.
Forreasonsincludingthosegivenabove,itisuniversallyacceptedthatsoftware
should always be tested to give confidence in the output when a code is executed.
There is, however, less agreement on how much effort should be put into testing,
andonthemethodologytobeusedfortestingsoftware.Onereasonfortheabsence
ofaunifiedviewisthattherigourrequireddependsonmanycharacteristicsofthe
softwarewhichwenowexplainwiththeaidofexamples.
Suppose we have a file that contains many 2×2 matrices that are believed to
represent rotations, that has been generated from a piece of software. If Q is one
of these matrices, then Q must be an orthogonal matrix and so we must have
QQ⊤ = I, where I is the 2×2 identity matrix, and det(Q)=1. Suppose further
thatacolleaguewantstousethisfile,providedheorshecanbereasonablycertain
thatthematricesareindeedorthogonal.Ifweweretoallowthiscolleaguetousethis
fileofmatricesthenweshouldfirstcheckthatthematricesreallyareorthogonal.We
maycheckthisbywritingashortprogramthatreadsthesematricesinandchecks
thattheyareorthogonal(subjecttoroundingerrors)byprintingtoscreenanywarn-
ingsthatamatrixisn’torthogonal.Inthiscaseitcanbearguedthatthisrudimentary
methodfortestingthesoftwareisappropriate,aswearecheckingthatthefilethat
wesharewithourcolleaguedoesindeedcontainmatricesthatrepresentrotations.

170 9 Errors,ExceptionsandTesting
Nevertheless we should be aware of the limitations of testing software in such an
unsophisticated manner. This method does not ensure that the original software is
error free; all we have done is to confirm that the given file does indeed contain
orthogonal matrices. For example, if the file is believed to represent 1000 distinct
matrices we have not checked that there really are 1000 matrices, or that they are
distinct—wemayonlyhave500distinctmatrices,orwemayhaveonematrixthat
has been printed 1000 times. It is also possible that an error exists in the software
usedtogeneratethematrices,andthatasubsequentexecutionofthesoftwaregen-
eratessomematricesthatarenotorthogonal.Manyotherpotentialsourcesoferror
alsoexist.
Consider,bycontrast,apieceofsoftwarecontainingmanylinesofcodethatcon-
trolsamechanicalventilatorintheclinicalsetting.Itisclearlyofcriticalimportance
thatasmanyerrorsaspossibleareeradicatedfromthesoftwarebeforeitisused,and
somuchmorerigoroustestingofthecodeisrequired.Furthermore,itislikelythat
thesoftwaremaybeupdatedforfuturegenerationsofventilators.Itissurprisingly
easytobreaktheoriginalfunctionalityofsoftwarewhenmakingwhatappearstobe
asmallextension.Itisthereforeextremelyusefultobeabletotestthewholecode
aftermakingevenasmallmodificationtothiscode.Thebasictechniqueoftesting
softwaredescribedaboveforthefileofmatricesisnotappropriateinthiscase,and
moresophisticatedtechniquesshouldbeused.Thetestingofsafety-criticalsoftware
systemsisaresearchtopicinitsownright.
Thetwoexamplesaboveillustratethattheeffortthatshouldbededicatedtotesting
softwaredependsonmanyfactors.Thefirst,simplercaserequirednothingmorethan
ashort,disposableC++programthatmayeasilybewrittenbyacompetentprogram-
merandrequiresnomorediscussion.Thesecondcaserequiresfarmoreattentionto
thetestingstrategy.Wewillnowdescribesomecommontestingstrategies.
9.5.1 UnitTesting
Aneffectivetechniquefortestingsoftware,thatisparticularlyusefulforsoftwarethat
maybeextendedinthefuture,isknownasunittesting.Whenusingthistechnique,a
collectionoftestsarewritten,knownasunittests.Eachunittestisdesignedtotesta
particularsectionofthecode,forexampleasinglemethodofaclass.Eachtestshould
thenbeexecutedwhennewfunctionalityisadded;shouldatestfailthenitisclear
thatthenewfunctionalityhasbrokenanexistingpartoftheoriginalfunctionality.
Unit testing is particularly effective when: (i) each unit test covers only a very
smallnumberoflinesoftheoriginalcode;and(ii)eachlineoftheoriginalcodeis
coveredbyatleastonetest.Wheneverweaddasmallamountofnewfunctionality
we can then re-run each test. If we have broken any existing functionality at least
onetestwouldhopefullyfail(aseachlineofcodeiscoveredbyatleastonetest).
Furthermore,aseachtestcoversonlyafewlinesofcode,knowingwhichtestshad
failedshouldhelpuspinpointthelinesofcodewheretheoriginalfunctionalityhad
beenbroken.
In the previous paragraph we explained that, when using unit testing, should
existing functionality be broken then at least one test will “hopefully” fail. The

9.5 TestingSoftware 171
readermayexpectthat,ratherthanonetesthopefullyfailing,atleastonetestwould
definitely fail. Unfortunately this assumes that we fully understand the algorithm
beingusedbythesoftware,andhavewrittenourunitteststocovereverypossible
causeofthisalgorithmfailing.Foreffectiveunittesting,allpossiblescenariosmust
betested.Suppose,forexample,wearewritingagraphicsapplication.Aspartofthis
applicationwemaywanttoknowwheretwolinesinthe(x,y)-planeintersect.This
caneasilybedonebysolvingtwosimultaneousequationstocalculatethecoordinates
of the points where the lines meet. We should obviously write a test to check that
thesecoordinatesareaccuratelycalculatedfortwoexamplelineswithauniquepoint
of intersection. Despite having written a test that has passed in the example case,
therearepossibilitieswherethismethoddoesnotbehaveasexpected.First,suppose
thetwolinesareidentical.Theywillthenintersectateverypoint.Amethodwritten
to calculate the intersection of these lines will either fail, or will return one point
on the line. A second case is when the lines are parallel, but don’t intersect. Any
methodusedtocalculatetheintersectionoftheselineswouldnotbeabletogivea
correctanswer.Tofullytestthiscodeweshouldwriteteststhatcoverallpossibilities
highlightedhere.Ifwedon’tdothisthenitispossiblethattheerrorsdescribedhere
may occur, and will propagate into other parts of the code. This may cause other
teststofail,identifyingthataproblemexists.Howeverthecauseofthefailingtest
willnotbeasclearlylocated,andmayrequiremanytediousandfrustratinghours
of debugging to pinpoint. We therefore encourage programmers to write tests that
coverallpossiblescenarios.
Onehighlyrecommendedstrategyforwritingunittestsistowritethetestsfornew
functionalitybeforeaddingthisnewfunctionality.Thistestwillclearlyfailinitially.
Alltests—includingthenewtest—arethenrunwhenthenewfunctionalityhasbeen
added,ensuringthatboththenewfunctionalityhasbeencorrectlyimplementedand
thattheexistingsoftwarehasnotbeenbroken.Thismethodofsoftwaredevelopment
isknownastestdrivendevelopment.
SeveralC++testingframeworklibrariesexist,suchasCxxTest,Boost.Test
and googletest.Thesearedesignedtohelpyoustructureyourtesting,andwe
recommendusingoneoftheselibrarieswhenwritingasuiteoftests.
9.5.2 ExtendingSoftware
It is very rare that a software package is written from scratch. It is more common
forexistingsoftwaretobeextended.Forexample,youmaybeexpectedtoextend
thefunctionalityofsoftwarewrittenbyacolleague.Alternativelyyoumaydevelop
softwarethatisunderpinnedbylibrariesfromexternalsources.Eveniftheexisting
softwareisbelievedtobereliable,theusershouldatleasttesttheirownimplementa-
tionofthefunctionalityoffered.Thiscanbedonebysimplytestingallfunctionality
ofthesoftware,withoutunderstandingtheimplementationofthefunctionality—this
isknownasblackboxtesting.Thisisappropriateforwell-supported,maturelibraries,
thatarewidelyacceptedtoberobustandreliable.Thereare,however,potentialpit-
fallsassociatedwithblackboxtesting.Supposeweareusingsomeexternallywritten

172 9 Errors,ExceptionsandTesting
softwarethatcontainsthefunctionalitytosolvealinearsystem.Whenusingblack
boxtesting,wewouldsimplycheckthatthisfunctionalityworksforagivenlinear
system. However, if we had taken a course in linear algebra, we would know that
thereisnosolutiontosomelinearsystems,andanon-uniquesolutiontootherlinear
systems. To limit errors from the externally written software propagating into the
codewedevelop,wemaywanttoknowhowthesoftwarehandlesthesecases;this
will depend on the implementation of the functionality for these special cases. In
thesecaseswewoulddeliberatelytesttheexternallywrittensoftwarebychoosing
oneexamplelinearsystemwithnosolution,andoneexamplelinearsystemwitha
non-uniquesolution.Inthiscasewemayalsoinvestigatethealgorithmthatunderpins
the functionality of the system, allowing us to understand how the given software
handles these systems of equations. This variety of testing is known as white box
testing.
We now explain how both black box testing, white box testing and test driven
developmentmaybecarriedout.Weillustratetheconceptsdiscussedaboveusing
theCxxTestlibrary,appliedtotheclassofcomplexnumbersdevelopedinSect.6.4.
Wefocusontheprinciplesoftesting,thusallowingthereadertoapplytheseprinciples
to other testing libraries. As such, we do not focus heavily on the details of using
CxxTest;auserguideforthislibrarymaybefoundathttp://www.cxxtest.com.
9.5.3 BlackBoxTesting
We illustrate black box testing using the class of complex numbers developed in
Sect.6.4.Asexplainedearlier,whenusingblackboxtestingwecheckthatthefunc-
tionalityworkscorrectlywithoutinspectingtheimplementation.InListing9.3we
havewrittenasuiteoftestsforsomeofthepublicmethodscontainedintheheader
file for this class (given in Listing 6.9); we leave the remainder of the black box
testingofthesepublicmethodsasanexercise.Asexplainedearlier,weusetheC++
testingframeworklibraryCxxTestforwritingthesetests.Wereiteratethatweare
focusing on how suitable tests may be written, rather than explaining how to use
theCxxTestlibrary.Nevertheless,afewcommentsonthislibraryarenecessaryto
allowthereadertounderstandthetestswritten.First,lines5–6and78maybeconsid-
eredtobeawrapperthatallowsustousethefunctionalityofthislibrary(afterithas
beeninstalled).Withinthiswrapperwehavewrittenacollectionofunittests:Test-
DefaultConstructor(line8);TestCustomisedConstructor(line17);
TestCalculatePower(line36);andTestAgainstStdLibrary(line61).
Withinthesetests,wetestthatafloatingpointvariableresultingfromacalculationis
equaltothetruevalue,subjecttoignoringtheeffectsofroundingerrorsasdescribed
in Sect.2.6.5. If, for example, we were using assertions to check that two double
precisionvariablesxandydifferedbylessthansomevalueepsilon,wewould
write
✞
assert( x-y < epsilon && x-y > -epsilon);

9.5 TestingSoftware 173
or,slightlymorecompactly
✞
assert(fabs(x-y) < epsilon);
To write this as a test using the CxxTest library, rather than an assert statement,
wewouldusethespeciallydefinedCxxTestassertion
✞
TS_ASSERT_DELTA(x, y, epsilon);
which,ratherthanactingasanassertion,wouldsimplyreportafailureif xand y
differbyatleastsomevalueepsilon.Manyothertestassertionsareofferedbythe
CxxTestlibrary.Whenthetestshavebeenwritten,thelibrarymaythenbeusedto
generateatestrunnerthatmaybecompiledsothatthetestsmaybeexecuted.This
executable would then report which tests had passed, and which tests had failed.
Furtherdetailsonthefeaturesavailable,andinstructionsonhowtoinstallanduse
these libraries may be found at http://www.cxxtest.com. We now explain why the
testsgiveninListing9.3aresuitableforblackboxtestingofbothconstructors,and
themembersCalculateModulus,CalculateArgumentandCalculate-
Power.
We begin by testing the default constructor. This constructor was written with
the intention that both the real part and the imaginary part of a complex number
created using this constructor should be initialised to zero. A suitable test for this
constructor is to check that an instance of a complex number created using this
constructorhaszeromodulus.ClearlythisassumesthatthemethodCalculate-
Moduluscorrectlycalculatesthemodulusofthiscomplexnumber.Assuch,this
testmaybeconsideredtoalsotestthemethodCalculateModulus,albeitwith
a particularly simple input. This test may be found in lines 8–15 of the listing.
Line8 defines atest called TestDefaultConstructor.Line12 then defines
aninstance ofacomplex number thatis createdusing thedefault constructor,and
line13calculatesthemodulusofthiscomplexnumber.Finally,inline14,weusethe
function TS_ASSERT_DELTAto test that the calculated modulus really is within
10−16 of the true value of zero remembering, as discussed in Sect.2.6.5, that two
floatingpointnumbersthatshould(mathematically)beequalmaydifferslightlydue
toroundingerrors.
Thetestbetweenlines17and34isintendedtotestthecustomisedconstructor.This
constructorallowsaninstanceofacomplexnumbertobegeneratedinitialisingthe
realandimaginarypartstospecifiedvalues(lines21–23).Astherealandimaginary
parts of the complex number are private members with no methods that allow us
to access these members, we may only confirm the real and imaginary parts of
the complex number are correctly initialised by confirming that both the modulus
(lines26–28)andtheargument(lines31–33)ofthecomplexnumberarecorrect.We
note that this test also allows testing of the members CalculateModulus and

174 9 Errors,ExceptionsandTesting
CalculateArgument. It is also worth noting that, as we are treating the class
asablackbox,wehavenotcopiedcodefromtheoriginalclassandweareinstead
calculatingthemodulusandargumentviaindependentmeans.
Our next test is to test the member CalculatePower (lines 36–60). In this
test we use the customised constructor to create a complex number with non-zero
realandimaginaryparts(lines40–42),andcalculatethemodulusandargumentof
thisnumber(lines43and44).Wetest CalculatePowerbyraisingtheoriginal
complexnumbertothepowerof2,andcalculatingthemodulusandargumentofthis
squaredcomplexnumber(lines48–50).Wethenusepropertiesofcomplexnumbers
to check that the modulus of the squared complex number is correct (lines 54 and
55)andthattheargumentofthesquaredcomplexnumberiscorrect(line59).
Ourfinaltestinthissectionistotestsomeofourfunctionalityagainstatrusted
complexnumberclassstd::complex(lines61–77).TheC++libraryversionof
3−4i,std_z,isinitialisedonline64.Notethatthestd::complexistemplated
withafloatingpointnumbertypeinanglebrackets.Hereweusedouble,tomatch
thetypeoftheprivatedatainourownclass,buttheclassalsoallowsforcomplex
numberswitharestoredasfloat.Noticethatthesyntaxofthefunctionsonstd_z
iscompletelydifferenttoourown.Despitethis,themathematicalspecificationisthe
sameand,consequently,wemayperformthesametestsonthemintandem.
Listing9.3 Blackboxtestingoftheclassofcomplexnumbers
✞
#include <cmath>
1
#include <cxxtest/TestSuite.h>
2
#include "ComplexNumber.hpp"
3
4
class ComplexNumberTestSuite : public CxxTest::TestSuite
5
{
6
public:
7
void TestDefaultConstructor(void)
8
{
9
// Test default constructor sets complex
10
// number to zero
11
ComplexNumber z;
12
double mod_z = z.CalculateModulus();
13
TS_ASSERT_DELTA(mod_z, 0.0, 1.0e-16);
14
}
15
16
void TestCustomisedConstructor(void)
17
{
18
// Use constructor that allows us to specify
19
// real and imaginary parts of a complex number
20
double real = 4.0;
21
double imaginary = -3.0;
22
ComplexNumber z(real, imaginary);
23
24
// Test that modulus is correct
25
double modulus = z.CalculateModulus();
26
double true_modulus = 5.0; // (3,4,5) triangle
27

9.5 TestingSoftware 175
|     | TS_ASSERT_DELTA(modulus, |     |     |     | true_modulus, |     | 1.0e-8); |     |
| --- | ------------------------ | --- | --- | --- | ------------- | --- | -------- | --- |
28
29
| 30  | // Test                   | argument      |     | is correct               |                   | via different |          | function |
| --- | ------------------------- | ------------- | --- | ------------------------ | ----------------- | ------------- | -------- | -------- |
| 31  | double                    | argument      |     | = z.CalculateArgument(); |                   |               |          |          |
| 32  | double                    | true_argument |     |                          | = -asin(3.0/5.0); |               |          |          |
|     | TS_ASSERT_DELTA(argument, |               |     |                          | true_argument,    |               | 1.0e-8); |          |
33
}
34
35
|     | void TestCalculatePower(void) |     |     |     |     |     |     |     |
| --- | ----------------------------- | --- | --- | --- | --- | --- | --- | --- |
36
{
37
|     | // Specify |     | a complex |     | number, | z, and | calculate | the |
| --- | ---------- | --- | --------- | --- | ------- | ------ | --------- | --- |
38
|     | // modulus |     | and | argument |     |     |     |     |
| --- | ---------- | --- | --- | -------- | --- | --- | --- | --- |
39
double
| 40  |               | real       | = 4.0;  |                          |             |     |     |     |
| --- | ------------- | ---------- | ------- | ------------------------ | ----------- | --- | --- | --- |
| 41  | double        | imaginary  |         | = -3.0;                  |             |     |     |     |
| 42  | ComplexNumber |            | z(real, |                          | imaginary); |     |     |     |
| 43  | double        | modulus_z  |         | = z.CalculateModulus();  |             |     |     |     |
|     | double        | argument_z |         | = z.CalculateArgument(); |             |     |     |     |
44
45
|     | // Calculate |     | z*z | and | calculate | the modulus |     | and |
| --- | ------------ | --- | --- | --- | --------- | ----------- | --- | --- |
46
|     | // argument |     | of  | z*z |     |     |     |     |
| --- | ----------- | --- | --- | --- | --- | --- | --- | --- |
47
|     | ComplexNumber |     | z_squared |     | = z.CalculatePower(2.0); |     |     |     |
| --- | ------------- | --- | --------- | --- | ------------------------ | --- | --- | --- |
48
|     | double | mod_z_squared |     |     | = z_squared.CalculateModulus(); |     |     |     |
| --- | ------ | ------------- | --- | --- | ------------------------------- | --- | --- | --- |
49
|     | double | arg_z_squared |     |     | = z_squared.CalculateArgument(); |     |     |     |
| --- | ------ | ------------- | --- | --- | -------------------------------- | --- | --- | --- |
50
51
| 52  | // Test                        | that:   |     |       |          |                      |     |       |
| --- | ------------------------------ | ------- | --- | ----- | -------- | -------------------- | --- | ----- |
| 53  | //                             | modulus | of  | z*z = | (modulus | of z)*(modulus       |     | of z) |
| 54  | TS_ASSERT_DELTA(mod_z_squared, |         |     |       |          | modulus_z*modulus_z, |     |       |
1.0e-8);
55
56
|     | // Test | that: |     |     |     |     |     |     |
| --- | ------- | ----- | --- | --- | --- | --- | --- | --- |
57
|     | //  | argument | of  | z*z = | 2*(argument | of  | z)  |     |
| --- | --- | -------- | --- | ----- | ----------- | --- | --- | --- |
58
|     | TS_ASSERT_DELTA(arg_z_squared, |     |     |     |     | 2.0*argument_z, |     | 1.0e-8); |
| --- | ------------------------------ | --- | --- | --- | --- | --------------- | --- | -------- |
59
}
60
|     | void TestAgainstStdLibrary() |     |     |     |     |     |     |     |
| --- | ---------------------------- | --- | --- | --- | --- | --- | --- | --- |
61
62 {
| 63  | ComplexNumber                          |     | z(4.0, |             | -3.0);     |        |     |     |
| --- | -------------------------------------- | --- | ------ | ----------- | ---------- | ------ | --- | --- |
| 64  | std::complex<double>                   |     |        |             | std_z(4.0, | -3.0); |     |     |
| 65  | TS_ASSERT_DELTA(z.CalculateArgument(), |     |        |             |            |        |     |     |
|     |                                        |     |        | arg(std_z), |            | 1e-8); |     |     |
66
TS_ASSERT_DELTA(z.CalculateModulus(),
67
|     |     |     |     | abs(std_z), |     | 1e-8); |     |     |
| --- | --- | --- | --- | ----------- | --- | ------ | --- | --- |
68
|     | // Raise | both | numbers |     | to power | 5   |     |     |
| --- | -------- | ---- | ------- | --- | -------- | --- | --- | --- |
69
|     | ComplexNumber |     | z_5=z.CalculatePower(5.0); |     |     |     |     |     |
| --- | ------------- | --- | -------------------------- | --- | --- | --- | --- | --- |
70
|     | std::complex<double> |     |     |     | std_z_5 | = pow(std_z, |     | 5.0); |
| --- | -------------------- | --- | --- | --- | ------- | ------------ | --- | ----- |
71
|     | // Check | they | are | the | same |     |     |     |
| --- | -------- | ---- | --- | --- | ---- | --- | --- | --- |
72
| 73  | TS_ASSERT_DELTA(z_5.CalculateArgument(), |     |     |               |     |        |     |     |
| --- | ---------------------------------------- | --- | --- | ------------- | --- | ------ | --- | --- |
| 74  |                                          |     |     | arg(std_z_5), |     | 1e-8); |     |     |
| 75  | TS_ASSERT_DELTA(z_5.CalculateModulus(),  |     |     |               |     |        |     |     |
| 76  |                                          |     |     | abs(std_z_5), |     | 1e-8); |     |     |
}
77
};
78

176 9 Errors,ExceptionsandTesting
Usingtheblackboxtestingabovehasgivenussomeconfidencethatthemembers
oftheclassofcomplexnumbersthathavebeentestedhavebeenimplementedcor-
rectly.Note,however,thatwehaveonlyusedarbitrarychoicestotestthesemembers.
Werewetoconsidertheimplementationofthesememberswemaydiscoversome
cases that could give unexpected results. We now discuss such an instance when
describingwhiteboxtesting.
9.5.4 WhiteBoxTesting
Intheclassofcomplexnumbers,therealpartandtheimaginarypartofaninstance
ofacomplexnumberarebothprivatemembersofthisclass.Thismadeitdifficultto
blackboxtestthecustomisedconstructorofthisclassinSect.9.5.3,wherewecreate
aninstanceoftheclassofcomplexnumbersandsimultaneouslyinitialiseboththe
realpartandimaginaryparttospecifiedvalues.Thedifficultyarosebecause,within
the test we wrote, we were unable to access the private members of the class, and
were therefore unable to test directly that these had been set to the correct values.
Instead, we tested these values were correct indirectly by testing that the modulus
andtheargumentofthecomplexnumberwerecorrect.This,however,reliesonthe
publicmethodsusedtocalculatethemodulusandtheargumentofacomplexnumber
beingcorrect.Shouldthetestofthecustomisedconstructorfail,wewouldnotknow
whetherthetestfailedbecauseofanerrorinthecustomisedconstructor,orinoneof
themethodsusedtocalculatethemodulusandtheargumentofacomplexnumber.
This may be avoided by white box testing where, in contrast to black box testing,
weinspecttheimplementationofthefunctionalityofferedbytheclassofcomplex
numbers.WesimplymakethetestsuiteinListing9.3(whichisaclass)afriendofthe
classofcomplexnumbers,allowingustoaccess—andtestforcorrectness—thereal
andimaginarypartsofacomplexnumber.InListing9.4wehavegivenanexample
whiteboxstyletestofthedefaultconstructor.Thistestmaybeusedtoreplacethe
original test (lines 8–15 in Listing 9.3) provided that the test suite itself is given
accesstotheprivatemembersofthecomplexnumberclassvia“friend class
ComplexNumberTestSuite;”.
Listing9.4 Extractfromwhiteboxtestingoftheclassofcomplexnumbers
✞
void TestDefaultConstructorWhiteBox(void)
8
{
9
// Test default constructor sets to zero.
10
// Add to ComplexNumber.hpp :
11
// friend class ComplexNumberTestSuite;
12
ComplexNumber z;
13
TS_ASSERT_DELTA(z.mRealPart, 0.0, 1.0e-16);
14
TS_ASSERT_DELTA(z.mImaginaryPart, 0.0, 1.0e-16);
15
}
16

9.5 TestingSoftware 177
Aseconduseofwhiteboxtestingmaybeillustratedbycreatinganinstanceofthe
classofcomplexnumbersusingthedefaultconstructor.Thisdefaultconstructorwill
setboththerealandtheimaginarypartofthiscomplexnumbertozero.Themodulus
of this complex number is clearly zero. However, the argument of this complex
numberisgivenbyatan2(0.0,0.0).Mathematically,thisisarctan(0/0).As0/0
isnotdefined,itisnotimmediatelyclearwhattheresultof atan2(0.0,0.0)is.
Tofindout,wevisittheC++referencepageathttp://www.cplusplus.com/reference/
cmath/atan2/,wherewediscoverthatadomainerroroccurs.1Thisistobeavoided,
andsoweshouldupdatethemethodCalculateArgumentgiveninListing6.10
totakeaccountofthisspecialcase.Anappropriatecourseofaction,thatisfollowed
by the scientific computing environment Matlab, is to set the argument of the
complexnumberzeroto0.Weleavetheimplementation,andtesting,ofthisasan
exercise.
9.5.5 TestDrivenDevelopment
We have already recommended using test driven development to extend software.
Whenusingthistechniquewefirst writetheteststhatarerequiredtotest thenew
functionality,forcingustobeveryclearaboutwhatweexpectourmodifiedsoftware
toachieve.Thesenewtestswillclearlyfailinitially,asthenewfunctionalitydoesnot
yetexist.Thenewfunctionalitywillusuallyfirstrequiresomerefactoringofexisting
code, for example modifying an existing constructor to take account of extra data
thatisnowassociatedwithaclasstoimplementthenewfunctionality.Ifyouhavea
wellwrittenandmaintainedsuiteoftestsyoucanthenruntheseteststoensurethat
youhaven’tbrokenanyexistingfunctionality.Thenewfunctionalityisthenadded,
andthetestsoriginallywrittenareruntoensurethatthenewfunctionalitybehaves
asexpected.
Forsomeapplicationsofcomplexnumbers—forexample:thecalculationofpow-
ersofcomplexnumbers;investigationofthestabilityofanumericalmethodforsolv-
inginitialvalueordinarydifferentialequations;andintegrationofcomplexnumbers
around poles—it is convenient to have access to the modulus and argument of a
complex number. Rather than calculate these quantities every time they are used
by using the methods CalculateModulus and CalculateArgument that
alreadyexistwithintheclassofcomplexnumbers,wecouldmodifytheclasssothat
the class contains the private members mModulus and mArgument to represent
thesequantities.Shouldwedothis,wewouldthenhavetodecidewhethertointro-
duce the members mModulus and mArgument instead of the existing members
mRealPartandmImaginaryPart,orinadditiontotheseexistingmembers.
Ifwemodifytheclassofcomplexnumberssothatweincludetheprivatemembers
mRealPart,mImaginaryPart,mModulusandmArgumentwewillhaveto
1IfyouweretousetheCversionofthetrigonometryfunctions,ratherthantheC++one,thenyou
willfindthatatan2(0.0,0.0)givesnoerrorandisdefinedtobe0.

178 9 Errors,ExceptionsandTesting
modifyothermethodsintheclasssothatallofthesemembersarespecifiedwhenever
anoperationisperformedonaninstanceoftheclass.Ifwedecidetoonlyincludethe
membersmModulusandmArgumentwewillhavetomodifyothermethodsinthe
classtospecifythesemembers,ratherthanmRealPartandmImaginaryPart,
wheneveranoperationisperformedonaninstanceoftheclass.Whateverchoiceis
made, much of the existing functionality of the class will need to be altered. That
is, we will have to refactor the code. This illustrates the importance of having a
collection of well written unit tests that each cover a small fraction of the whole
functionality. Should any of the existing functionality be broken when the code is
refactored,atleastonetestshouldfail.Thelocationoftheerror(s)shouldthenbe
highlighted.
Weleavetheimplementationofthisnewfunctionalityasanexercise.
9.6 Tips:WritingAppropriateTests
Inthischapterwehaveattemptedtoconvinceyouthatanappropriateacollection
ofunittestswillincreasethereliabilityandlongevityofyoursoftware.Theseunit
testsshouldeachtestaverysmallpartofyourcode,andeachlineofsoftwareshould
be covered by at least one test. This testing strategy is, however, underpinned by
theassumptionthatthetestsaresuitable.Thefollowingtipsmayhelpyoutowrite
appropriatetests,andtogetthemostoutofthistechnique.
1. Use a C++ testing framework library, such as CxxTest, Boost.Test or
googletest.Thiswillhelpyoustructureyourtests.
2. Addoneormoretestsforeverynewpieceoffunctionality,nomatterhowsmall
theaddedfunctionalityis.
3. Maketestsdefinitive—theyshouldeitherpassorfail.However,bewareoffloating
pointtolerancesandallowforroundingerrorsincalculations.
4. Remembertowritetestsforcornercases.Thesearetestinputswhichmayberare,
but might cause problems—collinear triangles, singular matrices, the complex
number0+0i etc.
5. Ratherthanspreadingtestinputparametersrandomlyorevenly,itismoreefficient
toconcentrateontheboundarybetweentypesofinput.Forexample,ifatestinput
p is supposed to be a probability (0 ≤ p ≤ 1) then check that p = 1 gives the
correctanswer,butthatp=1.0001givesanerror.
6. Reviewyourtestsfromtimetotime.Addnewtestsasnecessaryandremoveonly
thosewhichyouknowtoberedundant.
7. Automateyourtesting,sothatyoudonothavetoremembertorunthetestsor
remembertochecktheresults.

9.7 Exercises 179
9.7 Exercises
9.1 Extend the Exception class given in Listings 9.1 and 9.2 by creating two
inherited classes OutOfRangeException and FileNotOpenException.
EachofthesetwonewinheritedclasseswillderivefromtheExceptionclassina
similarmannertothewaytheEbookclassderivedfromtheBookclassinSect.7.1.
The constructors for each of the two classes should take only the probString
argument to set the mProblem member. Each constructor should ensure that the
mTag member is automatically set in a similar manner to the way the format
memberwassetintheconstructoroftheEbookclass.Writeacatchblockwhichis
abletocatchagenericexceptionbutcanalsodifferentiatebetweenthesetwotypes
oferror.
9.2 AnearliertipinSect.4.3.2showedhowitwaspossibleforbadmemoryallo-
cationtoterminateyourprogram.Ifyouwantyourprogramtocontinuethrougha
memoryallocationerrortherearetwowaystocopewiththeexception:toturnthe
exceptionoff(andcheckthevalueofthepointer)ortocatchtheexception.Hereis
somecodewhichdemonstrateshowtoturnofftheexceptionmessagebutstilldetect
badallocationofmemory,withoutterminatingtheprogram.
✞
1
double* p_x;
p_x = new (std::nothrow) double[1000000000];
2
if (p_x == NULL)
3
{
4
std::cout << "Allocation failed\n";
5
}
6
delete p_x;
7
Theproperwaytodealwiththisissueis,ofcourse,tocatchtheexception.Rewrite
thecodefragmentabovesothatthereisatryblockaroundthelineofcodewhich
attempts toallocate a large vector to p_xand demonstrate that you can catch this
exception.
[Hint:ThenameoftheexceptionclasswhichyouneedtocatchisnotException.
Itisstd::bad_alloc.]
9.3 In Exercise 7.3 in Chap. 7, we developed a library for solving initial value
ordinarydifferentialequations.Letussupposethatthesolutionoftheordinarydif-
ferentialequationrepresentsaprobabilityofsomeeventhappeningastimeevolves.
The true solution of this equation should therefore be nonnegative, and no greater
thanone.Ofcourse,duetobothroundingerrorsanderrorsinducedbythenumerical
approximationusedtocalculatethenumericalsolution,thisnumericalsolutionmay
violatetheserestrictionsslightly.Inthisexercise,wewillsuggesthowtoextendthe
librarydevelopedinSect.7.3tohandletheserequirementsinawaythatisconsistent
withthediscussionofdealingwitherrorsgiveninSect.9.2.

180 9 Errors,ExceptionsandTesting
We will assume that an acceptable value for the absolute error is 10−6. When
solving the differential equation, we therefore won’t be concerned if the solution
for a value of y in Exercise 7.3 lies in the interval −10−6 < y <0. Under these
i i
circumstances,wewouldsimplywritethevalue0.0tofilecontainingthesolution
at each time t instead of the value y. Similarly, if the solution lies in the interval
i i
1< y <1+10−6 we would write 1.0 to file rather than the value y. This is an
i i
instanceofanerroroftype#1inthelistgiveninSect.9.2.
Now suppose the value of y lies further outside the range of acceptable values
i
thancanbeattributedtoroundingerror.Themostlikelycauseofthiserrorisastep
sizehthatistoolarge.Underthesecircumstances,anexceptionshouldbethrown
explaining this. The code that calls the library for solving initial value ordinary
differentialequationswouldthenknowtoreducethestepsize:asuitablenewstep
size would be half of the step size currently being used. This is an instance of an
erroroftype#2inthelistgiveninSect.9.2.
Itis,ofcourse,possiblethatanerrorhasbeenmadeelsewhereinthelibraryorin
thecodeusedtocallthelibrary.Underthesecircumstancespersistingwithmaking
thestepsizesmallermaynotsolvetheproblem.Wethereforewanttoterminatethe
codeifthestepsizehfallsbelowsomecriticalvalue.Thisisaninstanceofanerror
oftype#3inthelistgiveninSect.9.2.
Incorporate the error handling procedure described above into the library for
solving initial value ordinary differential equations developed in Exercise 7.3 in
Chap.7.Testthiserrorhandlingusingtheexampleinitialvalueproblem
dy
=−100y,
dt
withinitialcondition y =0.8whent =0,forthetimeinterval0<t <100.Inves-
tigatehowdifferentvaluesofthestepsizehaffecttheerrorhandlingimplemented.
9.4 InSect.9.5wediscussedhowunittestscouldbewrittenfortheclassofcomplex
numbersdevelopedinSect.6.4.Inthisexercisewewillcompletethesetofunittests
thatwestartedinSect.9.5.3.
1. ExtendtheunittestsgiveninListing9.3sothatallthepublicmethodsintheclass
of complex numbers—listed in the header file given in Listing 6.9—are tested
usingblackboxtesting.
2. Thedefaultconstructorfortheclassofcomplexnumbersinitialisesboththereal
and imaginary parts of an instance of a complex number to zero. We noted in
Sect. 9.5.4 that the method CalculateArgument, as implemented in List-
ing6.10,willgiveadomainerrorwhenappliedtothecomplexnumberzero.By
usingwhiteboxtesting,asdescribedinSect.9.5.4,wesuggestedasuitablefixfor
thisproblem.Implementthisfix,andwriteatesttoensureyouhaveimplemented
thisfixcorrectly.
3. Suppose we are writing a piece of software for investigating the stability of a
givennumericalmethodforsolvinganinitialvaluesystemofordinarydifferen-
tialequations.Thissoftwarewillrequireustoevaluatepolynomialfunctionsof

9.7 Exercises 181
a given complex number, and to confirm that the modulus of a complex num-
ber is less than unity. We decide to implement this additional functionality by
firstmodifyingtheclassofcomplexnumberssothattheclassalsocontainsthe
privatemembersmModulusand mArgumentthatrepresentthemodulusand
argumentofaninstanceofacomplexnumber.InSect.9.5.5weexplainedthat
wecouldaddthesememberseitherinadditiontothemembersmRealPartand
mImaginaryPart,orinsteadoftheseexistingmembers.
In this exercise you should use test-driven development to implement the new
functionality. First decide whether or not to include the existing members
mRealPart and mImaginaryPart in addition to the new members
mModulusandmArgument,andrefactortheexistingcodeasnecessary.Hav-
ingdonethat,introducenewfunctionalitythatusesthenewmembersmModulus
andmArgumenttoevaluatepolynomialfunctionsofagivencomplexnumber,
andtodeterminewhetherthemodulusofacomplexnumberislessthanunity.

10
DevelopingClassesforLinearAlgebra
Calculations
In this chapter, we will apply the ideas introduced earlier in this book to develop
acollectionofclassesthatallowustoperformlinearalgebracalculations.Wewill
describe the design of a class of vectors in the body of this chapter. The exercises
at the end of the chapter will focus on developing this class further, developing a
companionclassofmatrices,anddevelopingalinearsystemclassthatallowsusto
solvematrixequations.
10.1 RequirementsoftheLinearAlgebraClasses
As explained above, we will develop a class of vectors called Vector, a class of
matricescalledMatrixandalinearsystemclasscalledLinearSystem.Thevec-
torandmatrixclasseswillincludeconstructorsanddestructorsthathandlememory
management.Theseclasseswilloverloadtheassignment,addition,subtractionand
multiplicationoperators,allowingustowritecodesuchas“u = A*v;”whereu
andvarevectors,andAisamatrix:theseoverloadedoperatorswillincludechecks
that the vectors and matrices are of the correct size. The square bracket operator
willbeoverloadedforthevectorclasstoprovideacheckthattheindexofthearray
lieswithinthecorrectrange,andtheroundbracketoperatorwillbeoverloadedto
allowtheentriesofthevectorormatrixtobeaccessedusingMatlabstylenotation,
indexingfrom1ratherthanfromzero.
Theremainderofthischapterwillfocusonthedevelopmentofaclassofvectors.
TheheaderfileforthisclassisgiveninListing10.1,andtheimplementationofthe
methodsisgiveninListing10.2.Thetwovariablesthateachinstanceoftheclass
arebuiltuponareapointertoadoubleprecisionfloatingpointvariable,mData,and
thesizeofthearray,mSize.Wehavemadebothoftheseprivatemembersofthe
©SpringerInternationalPublishingAG,partofSpringerNature2017 183
J.Pitt-FrancisandJ.Whiteley,GuidetoScientificComputing
inC++,UndergraduateTopicsinComputerScience,
https://doi.org/10.1007/978-3-319-73132-2_10

184 10 DevelopingClassesforLinearAlgebraCalculations
class.Weclearlyneedtowritemethodstobothaccessandsetvaluesofthearray.
We shall insist that the size of the array is set through a constructor. As such, we
shallnotallowtheusertochangethisvariablethroughanymethod,butwillwritea
publicmethodthatallowsustoaccessthesizeofagivenvector.
Listing10.1 Vector.hpp
✞
#ifndef VECTORHEADERDEF
1
#define VECTORHEADERDEF
2
3
class Vector
4
{
5
private:
6
7
double* mData; // data stored in vector
int mSize; // size of vector
8
public:
9
Vector(const Vector& otherVector);
10
Vector(int size);
11
~Vector();
12
int GetSize() const;
13
double& operator[](int i); // zero-based indexing
14
// read-only zero-based indexing
15
double Read(int i) const;
16
double& operator()(int i); // one-based indexing
17
// assignment
18
Vector& operator=(const Vector& otherVector);
19
Vector operator+() const; // unary +
20
Vector operator-() const; // unary -
21
Vector operator+(const Vector& v1) const; // binary +
22
Vector operator-(const Vector& v1) const; // binary -
23
// scalar multiplication
24
25
Vector operator*(double a) const;
// p-norm method
26
double CalculateNorm(int p=2) const;
27
// declare length function as a friend
28
friend int length(const Vector& v);
29
};
30
31
// Prototype signature of length() friend function
32
int length(const Vector& v);
33
34
#endif
35
Listing10.2 Vector.cpp
✞
#include <cmath>
1
#include <iostream>
2
#include <cassert>
3
#include "Vector.hpp"
4
5
// Overridden copy constructor
6
// Allocates memory for new vector, and copies
7

10.1 RequirementsoftheLinearAlgebraClasses 185
// entries of other vector into it
8
Vector::Vector(const Vector& otherVector)
9
{
10
mSize = otherVector.GetSize();
11
mData = new double [mSize];
12
for (int i=0; i<mSize; i++)
13
{
14
mData[i] = otherVector.mData[i];
15
}
16
}
17
18
// Constructor for vector of a given size
19
// Allocates memory, and initialises entries
20
// to zero
21
Vector::Vector(int size)
22
{
23
assert(size > 0);
24
mSize = size;
25
mData = new double [mSize];
26
for (int i=0; i<mSize; i++)
27
{
28
mData[i] = 0.0;
29
}
30
}
31
32
// Overridden destructor to correctly free memory
33
Vector::~Vector() {
34
delete[] mData;
35
}
36
37
// Method to get the size of a vector
38
int Vector::GetSize() const
39
{
40
return mSize;
41
}
42
43
// Overloading square brackets
44
// Note that this uses ‘zero-based’ indexing,
45
// and a check on the validity of the index
46
double& Vector::operator[](int i)
47
{
48
assert(i > -1);
49
assert(i < mSize);
50
return mData[i];
51
}
52
53
// Read-only variant of []
54
// Note that this uses ‘zero-based’ indexing,
55
// and a check on the validity of the index
56
double Vector::Read(int i) const
57
{
58

| 186      |        | 10 DevelopingClassesforLinearAlgebraCalculations |     |     |
| -------- | ------ | ------------------------------------------------ | --- | --- |
| assert(i | > -1); |                                                  |     |     |
59
| assert(i | < mSize); |     |     |     |
| -------- | --------- | --- | --- | --- |
60
| 61 return | mData[i]; |     |     |     |
| --------- | --------- | --- | --- | --- |
62 }
63
| // Overloading | round | brackets |     |     |
| -------------- | ----- | -------- | --- | --- |
64
| // Note that | this uses | ‘one-based’ | indexing, |     |
| ------------ | --------- | ----------- | --------- | --- |
65
| // and a check | on the | validity | of the index |     |
| -------------- | ------ | -------- | ------------ | --- |
66
| double& Vector::operator()(int |     |     | i)  |     |
| ------------------------------ | --- | --- | --- | --- |
67
{
68
| assert(i | > 0); |     |     |     |
| -------- | ----- | --- | --- | --- |
69
| assert(i | < mSize+1); |     |     |     |
| -------- | ----------- | --- | --- | --- |
70
return
| 71  | mData[i-1]; |     |     |     |
| --- | ----------- | --- | --- | --- |
72 }
73
| 74 // Overloading               | the assignment |     | operator |              |
| ------------------------------- | -------------- | --- | -------- | ------------ |
| Vector& Vector::operator=(const |                |     | Vector&  | otherVector) |
75
{
76
| assert(mSize | == otherVector.mSize); |     |     |     |
| ------------ | ---------------------- | --- | --- | --- |
77
| for (int | i=0; i<mSize; | i++) |     |     |
| -------- | ------------- | ---- | --- | --- |
78
{
79
mData[i] = otherVector.mData[i];
80
}
81
| 82 return | *this; |     |     |     |
| --------- | ------ | --- | --- | --- |
83 }
84
| 85 // Overloading          | the unary | + operator |     |     |
| -------------------------- | --------- | ---------- | --- | --- |
| Vector Vector::operator+() |           | const      |     |     |
86
{
87
| Vector | v(mSize); |     |     |     |
| ------ | --------- | --- | --- | --- |
88
| for (int | i=0; i<mSize; | i++) |     |     |
| -------- | ------------- | ---- | --- | --- |
89
{
90
v[i] = mData[i];
91
}
92
| 93 return | v;  |     |     |     |
| --------- | --- | --- | --- | --- |
94 }
95
| 96 // Overloading          | the unary | - operator |     |     |
| -------------------------- | --------- | ---------- | --- | --- |
| Vector Vector::operator-() |           | const      |     |     |
97
{
98
| Vector | v(mSize); |     |     |     |
| ------ | --------- | --- | --- | --- |
99
| for (int | i=0; i<mSize; | i++) |     |     |
| -------- | ------------- | ---- | --- | --- |
100
{
101
v[i] = -mData[i];
102
}
103
| 104 return | v;  |     |     |     |
| ---------- | --- | --- | --- | --- |
105 }
106
| 107 // Overloading             | the binary | +   | operator    |       |
| ------------------------------ | ---------- | --- | ----------- | ----- |
| Vector Vector::operator+(const |            |     | Vector& v1) | const |
108
{
109

10.1 RequirementsoftheLinearAlgebraClasses 187
| assert(mSize |     | ==  | v1.mSize); |     |     |     |     |
| ------------ | --- | --- | ---------- | --- | --- | --- | --- |
110
| Vector | v(mSize); |     |     |     |     |     |     |
| ------ | --------- | --- | --- | --- | --- | --- | --- |
111
| 112 for | (int | i=0; i<mSize; |     | i++) |     |     |     |
| ------- | ---- | ------------- | --- | ---- | --- | --- | --- |
113 {
| 114 | v[i] = | mData[i] | +   | v1.mData[i]; |     |     |     |
| --- | ------ | -------- | --- | ------------ | --- | --- | --- |
}
115
| return | v;  |     |     |     |     |     |     |
| ------ | --- | --- | --- | --- | --- | --- | --- |
116
}
117
118
| // Overloading |     | the | binary | -   | operator |     |     |
| -------------- | --- | --- | ------ | --- | -------- | --- | --- |
119
| Vector | Vector::operator-(const |     |     |     | Vector& v1) | const |     |
| ------ | ----------------------- | --- | --- | --- | ----------- | ----- | --- |
120
{
121
| 122 assert(mSize |           | ==            | v1.mSize); |      |     |     |     |
| ---------------- | --------- | ------------- | ---------- | ---- | --- | --- | --- |
| 123 Vector       | v(mSize); |               |            |      |     |     |     |
| 124 for          | (int      | i=0; i<mSize; |            | i++) |     |     |     |
125 {
|     | v[i] = | mData[i] | -   | v1.mData[i]; |     |     |     |
| --- | ------ | -------- | --- | ------------ | --- | --- | --- |
126
}
127
| return | v;  |     |     |     |     |     |     |
| ------ | --- | --- | --- | --- | --- | --- | --- |
128
}
129
130
| // Overloading |     | scalar | multiplication |     |     |     |     |
| -------------- | --- | ------ | -------------- | --- | --- | --- | --- |
131
| Vector | Vector::operator*(double |     |     |     | a) const |     |     |
| ------ | ------------------------ | --- | --- | --- | -------- | --- | --- |
132
133 {
| 134 Vector | v(mSize); |               |     |      |     |     |     |
| ---------- | --------- | ------------- | --- | ---- | --- | --- | --- |
| 135 for    | (int      | i=0; i<mSize; |     | i++) |     |     |     |
136 {
v[i] = a*mData[i];
137
}
138
| return | v;  |     |     |     |     |     |     |
| ------ | --- | --- | --- | --- | --- | --- | --- |
139
}
140
141
| // Method | to  | calculate |     | norm | (with default | value | p=2) |
| --------- | --- | --------- | --- | ---- | ------------- | ----- | ---- |
142
| // corresponding |     |     | to the | Euclidean | norm |     |     |
| ---------------- | --- | --- | ------ | --------- | ---- | --- | --- |
143
| 144 double | Vector::CalculateNorm(int |     |     |     | p) const |     |     |
| ---------- | ------------------------- | --- | --- | --- | -------- | --- | --- |
145 {
| 146 double | norm_val, |               | sum | = 0.0; |     |     |     |
| ---------- | --------- | ------------- | --- | ------ | --- | --- | --- |
| 147 for    | (int      | i=0; i<mSize; |     | i++)   |     |     |     |
{
148
|     | sum += | pow(fabs(mData[i]), |     |     | p); |     |     |
| --- | ------ | ------------------- | --- | --- | --- | --- | --- |
149
}
150
| norm_val |     | = pow(sum, |     | 1.0/((double)(p))); |     |     |     |
| -------- | --- | ---------- | --- | ------------------- | --- | --- | --- |
151
| return | norm_val; |     |     |     |     |     |     |
| ------ | --------- | --- | --- | --- | --- | --- | --- |
152
}
153
154
| 155 // MATLAB | style        | friend |         | to get | the size of | a vector |     |
| ------------- | ------------ | ------ | ------- | ------ | ----------- | -------- | --- |
| 156 int       | length(const |        | Vector& | v)     |             |          |     |
157 {
| 158 return | v.mSize; |     |     |     |     |     |     |
| ---------- | -------- | --- | --- | --- | --- | --- | --- |
}
159

188 10 DevelopingClassesforLinearAlgebraCalculations
Thefilesrequiredforthevectorclassaregivenabove.Thesefilesmaybedown-
loadedfromhttps://www.springer.com/9783319731315.Subsequentsectionsofthis
chapterprovideacommentaryonwhywehavechosentowritethemethodsinthe
wayinwhichtheyappear.
10.2 ConstructorsandDestructors
InthetipgiveninSect.4.3.3,weencouragedthereadertoensurethat,whendynami-
cally allocatingmemory,everynewstatementwasmatchedbyadeletestatement.
Weexplainedthatifthisisnotdone,thenthecodemayconsumelargeamountsof
theavailablememory.Eventuallythecomputerwillrunoutofmemory,preventing
thecode(andanyotherapplicationrunning)fromproceedinganyfurther.Wehave
repeatedthistiponseveraloccasions.Writingappropriateconstructorsanddestruc-
torsforthevectorandmatrixclassesallowsustoautomaticallymatcha delete
statement (through the calling of a destructor when the object goes out of scope)
withevery newstatement(hiddenfromtheuseroftheclassinaconstructor).We
nowdescribeappropriateconstructorsandadestructorfortheclassofvectors.
10.2.1 TheDefaultConstructor
We want a constructor for the Vector class to allocate the memory required to
storeagiven vectorwhen itis called.The defaultconstructor takesno arguments,
andthereforethisconstructorhasnowayofknowinghowmanyentriesthevector
requires.Assuch,itcannotallocateanappropriatesizetothevector,andsoweensure
thatadefaultconstructorisneverusedbynotsupplyingadefaultconstructor.The
automaticallygenerateddefaultconstructorwillnotbeavailabletotheuserbecause
wearesupplyinganalternativespecialisedconstructor.
10.2.2 TheCopyConstructor
LetussupposewehaveaninstanceoftheclassVectorcalledu.Ifweweretouse
theautomaticallygeneratedcopyconstructortocreateanothervectorcalledv,then
thisconstructorwouldnotperformthetasksthatwerequireofthecopyconstructor.
ThemembermSizewouldbecorrectlyset.However,theautomaticallygenerated
copyconstructorwouldnotallocateanymemoryforthenewcopyofthedata,and
soitwouldbeimpossiblefortheentriesofthevectortobecopiedcorrectly.What
wouldactuallyhappenisthatthepointer mDataintheoriginalvector uwouldbe
assignedtothepointer mDatainthenewvector v.Asnonewmemorywouldbe
allocated,thiswouldhavetheeffectthat vwouldsimplybecomeadifferentname
fortheoriginalvector u:therewouldonlybeonevectorstored,andchangingthe
entriesof vwouldthereforehavetheunintendedeffectofchangingthoseof u,and
vice versa. A further complication of not overriding the default copy constructor

10.2 ConstructorsandDestructors 189
wouldbethat,becausetwovectorsaliastheirmDatapointerswiththesamepiece
ofmemory,bothvectorswouldattempttode-allocateit(bycallingdeleteintheir
destructor,seeSect.10.2.4)whentheywentoutofscope.
Whatweactuallywanttohappenwhenthecopyconstructoriscalledisforthe
member mSizeofthenewvector vtobesettothesamevalueasfortheoriginal
vectoru.Memoryshouldthenbeallocatedforthenewvectorsothatvhasthesame
numberofentriesasu,andtheentriesofuthencopiedintothecorrectpositioninthe
new vector v. We therefore override the automatically generated copy constructor
sothatitsetsthesizeof vtothesizeof u,allocatesmemoryforthevectorvofthe
correctsize,andthencopiestheentriesof uintov.
10.2.3 ASpecialisedConstructor
Wehavesuppliednodefinitionforthedefaultconstructortoensurethatitisnever
used,andhaveoverriddenthecopyconstructorsothatifwealreadyhaveavector
we may create a copy of that vector. We also include a constructor that requires a
positiveintegerinputthatrepresentsthesizeofthevector.Thisconstructorsetsthe
member mSize to this value, allocates memory for the vector, and initialises all
entriestozero.
10.2.4 Destructor
TheautomaticallygenerateddestructorwilldeletethepointermDataandtheinteger
mSizewhenaninstanceoftheclassVectorgoesoutofscope,butwillnotfree
the memory allocated to this instance of the class: this would be similar to not
providingamatchingdeletestatementforanewstatement.Wethereforeoverride
theautomaticallygenerateddestructortofreethememoryallocatedforaninstance
oftheclassVectorwhenitgoesoutofscope.
10.3 AccessingPrivateClassMembers
InSect.10.1weexplainedthatweweregoingtomakeboththesizeofthevector,
mSize,andthepointertotheentriesofthevector,mData,privatemembersofthe
class.Thishastheadvantagethatwecanonlysetthesizeofthevectorthroughthe
constructor(ensuringthatthismemberisapositiveinteger,andpreventingusfrom
inadvertentlychangingitwhileacodeisbeingexecuted),andallowsustoperforma
validationthattheindexofanentryofavectoriscorrectbeforeattemptingtoaccess
thatentry.Inthissection,weexplainhowwehavewrittenthemethodsthatallowus
toaccesstheseprivatemembers.

190 10 DevelopingClassesforLinearAlgebraCalculations
10.3.1 AccessingtheSizeofaVector
The size, or length, of a vector is accessed through the public method GetSize.
Thismembertakesnoarguments,andreturnstheprivatemembermSize.
10.3.2 OverloadingtheSquareBracketOperator
Weoverloadthesquarebracketoperatorsothat,if visavector,thenv[i]returns
theentryofvwithindexiusingzero-basedindexing.Thismethodfirstchecksthat
the index falls within the correct range—that is, a nonnegative integer that is less
than mSize—and then returns a reference to the value stored in this entry of the
vector.
10.3.3 Read-OnlyAccesstoVectorEntries
Theoverloadedsquarebracketoperatorcanbeusedforbothreadingdatafromthe
vector and for changing entries of the vector, through a reference. Since we may
needtoguaranteethatsomefunctionswhichreadfromavectordonotchangeit,we
alsosupplyaread-onlyconstversion.ThispublicmethodReadissimilartothe
squarebracketoperator.Ituseszero-basedindexingandfirstchecksthattheindex
fallswithinthecorrectrangeandthenreturnsacopyofthevaluestoredinthisentry
ofthevector.
10.3.4 OverloadingtheRoundBracketOperator
Theroundbracketoperatorisoverloadedtoallowustoaccessentriesofavectorusing
one-basedindexing.Wehavechosentheroundbracketoperatorforthispurposeas
thisallowssimilarnotationtothatemployedbyFortranandMatlab,bothofwhich
use one-based indexing. In common with the overloaded square bracket operator
describedinSect.10.3.2,thismethodfirstvalidatestheindexbeforereturningthe
appropriateentryofthevector.
10.4 OperatorOverloadingforVectorOperations
ReaderswithexperienceofprogramminginMatlabwillappreciatethefeatureof
thissystemthatallowstheusertowritestatementssuchas“v = -w;”and“a =
b + c;”wherev,w,a,b,carevectorsofasuitablesize.Wewillallowsimilar
lookingcodetobewrittenforthevectorsdevelopedinthischapterthroughoperator
overloading:i.e.wewilldefinetheassignmentoperator,andvariousunaryandbinary
operators.Thiswillbeverysimilartotheoperatoroverloadingforcomplexnumbers

10.4 OperatorOverloadingforVectorOperations 191
inSect.6.4.Anadditionalfeaturerequiredfortheclassbeingwrittenhereisacheck
that the vectors are all of the correct size: this will be enforced using assert
statements.
10.4.1 TheAssignmentOperator
Theoverloadedassignmentoperatorfirstchecksthatthevectorontheleft-handside
oftheassignmentstatementisofthesamesizeasthevectorontheright-handside.
If this condition is met, the entries of the vector on the right-hand side are copied
intothevectorontheleft-handside.
10.4.2 UnaryOperators
The overloaded unary addition and subtraction operators first declare a vector of
thesamesizeasthevectorthattheunaryoperatorisappliedto.Theentriesofthe
newvectorarethensettotheappropriatevaluebeforethisvectorisreturned.Note
that in the example statement “v = -w;” above, it is the assignment operator’s
responsibilitytocheckthatsizesof vand wmatchandtheunarysubtractionneed
donoerrorchecking.
10.4.3 BinaryOperators
Theoverloadedbinaryoperatorsfirstcheckthatthetwovectorsthatareoperatedon
areofthesamesize.Iftheyare,anewvectorofthesamesizeiscreated.Theentries
ofthisnewvectorareassigned,andthisnewvectoristhenreturned.Intheexample
statement“a = b + c;”above,itisthebinaryadditionoperator’sresponsibility
tocheckthatthesizesofthevectorsband cmatch,buttheassignmentoperator’s
responsibilitytocheckthattheresultcansafelybeassignedtoa.
10.5 Functions
Afunctiontocalculatethep-normofavectorisincludedinourclassofvectors.See
Sect. A.1.5 for a definition of the p-norm of a vector. This implementation allows
theusertocallthefunctionwithanoptionalargumentp:ifthisisnotspecifiedthe
defaultvalue p =2(correspondingtotheEuclideannorm)willbeused.
10.5.1 MembersVersusFriends
Wenotethatmostfunctionality intheclassisgivenviamembermethodsandmember
operators.Inordertocalculatethe2-normofavectorortoinspectitssize,wemust

| 192 |     | 10 DevelopingClassesforLinearAlgebraCalculations |
| --- | --- | ------------------------------------------------ |
write “u.CalculateNorm();” or “u.GetSize();”, respectively. This may
beconsideredaclumsysyntaxbysomeusers,especiallythosewithexperienceof
Matlab, and so we provide an alternative length function to complement the
GetSize method. The length function is declared as a friend within the class
whichenablesittoreadtheprivatemSizemember.Notethatwhereasmanyofthe
members of the class are declared const at the end of the signature—to ensure
they do not change the class itself—the length function guarantees that the vector
whichitisgivenasanargumentwillremainconstantthroughmakingtheargument
aconstantreferencevariable.
10.6 Tips:MemoryDebuggingTools
Westressedinaprevioustip(Sect.4.3.3)thateverynewshouldbematchedwitha
delete.Thisisespeciallyimportantwhenaprogramallocatesmemorywithina
loop.Ifalong-runningprogramrepeatedlyallocatesmemorywithoutde-allocating
it,theneventuallythatprogramwillunnecessarilyoccupyalltheavailablememory
of the computer. This problem—known as a memory leak—will eventually cause
theprogramtofail.
Therearememory-relatedproblemsotherthanmemoryleakage.Thefollowing
codeillustratessomecommonmemoryerrors.Theloopinlines8–11hasanincorrect
upperboundandthustheprogramattemptstowritetox[10]whichdoesnotmatch
x z
the 10 elements allocated to in line 3. The variable is never initialised, which
meansthattheflowoftheprogramattheifstatementonline15isunpredictable.
The second delete statement—on line 23—is in error since it attempts to de-
allocatememorywhichhasalreadybeende–allocatedonthepreviousline.Finally,
thememoryforywhichwasallocatedonline4isneverdeleted.
| Listing10.3 Broken.cpp |     |     |
| ---------------------- | --- | --- |
✞
| 1 int main(int | argc, char* | argv[]) |
| -------------- | ----------- | ------- |
{
2
| double* | x = new double[10]; |     |
| ------- | ------------------- | --- |
3
| double* | y = new double[10]; |     |
| ------- | ------------------- | --- |
4
5
| // Error: | x[10] is | accessed |
| --------- | -------- | -------- |
6
| // May | cause a run-time | error |
| ------ | ---------------- | ----- |
7
| for (int | i=0; i<=10; | i++) |
| -------- | ----------- | ---- |
8
9 {
| 10 x[i] | = i; |     |
| ------- | ---- | --- |
11 }
12
| // Error: | z is not | set |
| --------- | -------- | --- |
13
| int z; |     |     |
| ------ | --- | --- |
14
| if (z == | 0)  |     |
| -------- | --- | --- |
15
{
16
| y[0] | = x[0]; |     |
| ---- | ------- | --- |
17
}
18
19

10.6 Tips:MemoryDebuggingTools 193
| // Error: | x de-allocated | twice |     |     |
| --------- | -------------- | ----- | --- | --- |
20
| // May | cause a run-time | error |     |     |
| ------ | ---------------- | ----- | --- | --- |
21
| 22 delete[]  | x;                |     |     |     |
| ------------ | ----------------- | --- | --- | --- |
| 23 delete[]  | x;                |     |     |     |
| 24 // Error: | y still allocated |     |     |     |
}
25
The four problems in the program above will not prevent the code from being
compiled.Theprogrammayalsorunasexpecteduntilthefinaldeletestatement,
butcrashatthatpoint.So,inthisprogram,mostofthememoryerrorsareundetectable
innormalcircumstances.
These errors can be detected with a memory debugging tool such as the open
sourceprogramsValgrindorElectricFence.Thesetoolsrunanexecutablefilewhile
inspectingallthememoryaccesscalls.Sometools(suchasElectricFence)dothis
byreplacingtheusualmemorylibrarieswithoneswhichinterceptthecalls.Others
tools (such as Valgrind) run the program inside a virtual machine and externally
monitor the memory accesses—a slower process, but one which does not require
recompilationoftheprogram.
OnrunningtheprogramgiveninListing10.3throughValgrindallfourmemory
problemsaredetected.AsummaryoftheValgrindoutputisgivenbelow.
✞
| Invalid write  | of size              | 8          |                  |          |
| -------------- | -------------------- | ---------- | ---------------- | -------- |
| at 0x4006BA:   | main (Broken.cpp:10) |            |                  |          |
| Conditional    | jump or move         | depends    | on uninitialised | value(s) |
| at 0x4006D1:   | main (Broken.cpp:15) |            |                  |          |
| Invalid free() | / delete             | / delete[] |                  |          |
| by 0x4006F8:   | main (Broken.cpp:23) |            |                  |          |
| 80 bytes       | in 1 blocks are      | definitely | lost...          |          |
| by 0x40069A:   | main (Broken.cpp:4)  |            |                  |          |
10.7 Exercises
TheexercisesinthischapterguideyoutobuildontheVectorclasswithanaddi-
tionalMatrixclass.TheseclassesarethencombinedintoaLinearSystemclass
(or,inthefinalexercise,analternativeclassderivedfromit)whichhasamethodfor
solvingsystemsoftheform Ax =bfor x.Examplesolutionsfortheseclassesare
giveninSect.C.1.Figure10.1illustratesatypicalsolutiontotheseexerciseswitha
collaborationdiagramforalltheclassesproducedbytheseexercises.Thisdiagram
usesthesameUMLsyntaxasFig.7.1,asdescribedinSect.7.2.

194 10 DevelopingClassesforLinearAlgebraCalculations
Fig.10.1 Class
collaborationdiagramfor
PosDefSymmLinearSystem
#
# A
#
#

10.7 Exercises 195
ThefilesVector.hppand Vector.cppgiveninListings10.1and10.2,as
wellastheexampleMatrixandLinearSystemclassesgiveninSect.C.1,may
bedownloadedfromhttps://www.springer.com/9783319731315.
10.1 Writeasuitablesuiteofteststoblackboxtesttheclassofvectors.
10.2 Makeanyimprovementsyoumightdeemappropriatetotheclassofvectors.
Youmightbehelpedinthistaskbythefollowinglist.
(cid:129) Theassertionsfortheroundbracketoperatorarealmostidenticaltothoseofthe
squarebracketoperatorandthoseoftheReadmethod.RewritetheReadmethod
andoneoftheseoperatorsinsuchawaythattheycalltheremainingoperator(with
asuitableoffset,asnecessary)andallthechecksaregiveninoneplace.
(cid:129) Therearemanyassertionsintheclassasitstands.Thesemeanthatitisveryeasy
towriteprogramswhichterminatewitharun–timeerror.Canyouturnanyofthe
assertionsintoexceptionsorwarnings(seeChap.9)?
(cid:129) Write an output operator for vectors using the pattern given in Sect. 6.4 for the
operator<<inthecomplexnumberclass.
10.3 Inthisexercise,wewilldevelopaclassofmatricescalledMatrixforusewith
theclassofvectorsdevelopedinthischapter.Theclassofmatricesshouldinclude
thefeatureslistedbelow.YourclassshouldhaveprivatemembersmNumRowsand
mNumColsthatareintegersandstorethenumberofrowsandcolumns,andmData
thatisapointertoapointertoadoubleprecisionfloatingpointvariable,whichstores
theaddressofthepointertothefirstentryofthefirstrow.SeeAppendixAfordetails
ofthelinearalgebrathatunderpinstheseoperations.Useasuitabletestingstrategy
whendevelopingthisclass.
1. AnoverriddencopyconstructorthatcopiesthevariablesmNumRowsandmNum-
Cols,allocatesmemoryforanewmatrix,andcopiestheentriesoftheoriginal
matrixintothenewmatrix.
2. Aconstructorthatacceptstwopositiveintegers—numRowsandnumCols—as
input, assigns these values to the class members mNumRows and mNumCols,
allocatesmemoryforamatrixofsizemNumRowsbymNumCols,andinitialises
allentriestozero.
3. An overridden destructor that frees the memory that has been allocated to the
matrix.
4. Publicmethodsforaccessingthenumberofrows,andthenumberofcolumns.
5. Anoverloadedroundbracketoperatorwithone-basedindexingforaccessingthe
entriesofthematrixsothat,provided iand jarevalidindicesforthematrix,
A(i,j)maybeusedtoaccessmData[i-1][j-1].
6. Overloadedassignment,unaryandbinaryoperatorstoallowaddition,subtraction
andmultiplicationofsuitablysizedmatrices,vectorsandscalars.Youshoulduse
assertstatementstoensurethematricesandvectorsareofthecorrectsize.
7. Apublicmethodthatcomputesthedeterminantofagivensquarematrix.

196 10 DevelopingClassesforLinearAlgebraCalculations
10.4 Inthisexercise,wewilldevelopaclasscalledLinearSystemthatmaybe
used to solve linear systems. Assuming the system is nonsingular, a linear system
isdefinedbythesizeofthelinearsystem,asquarematrix,andvector(representing
the right-hand side), with the matrix and vector being of compatible sizes. The
dataassociatedwiththisclassmaybespecifiedthroughanintegervariablemSize,
apointertoamatrixmpA,andapointertothevectorontheright-handsideofthelinear
systemmpb.Wesuggestonlyallowingtheusertosetupalinearsystemthroughthe
useofaconstructorthatrequiresspecificationofthematrixandvector:themember
mSize may then be determined from these two members. If you do not wish to
provideacopyconstructor,thentheautomaticallygeneratedcopyconstructorshould
beoverriddenandmadeprivatetopreventitsuse.Aswiththeclassofvectors,we
recommendthatuseoftheautomaticallygenerateddefaultconstructorisprevented
byprovidingaspecialisedconstructorbutnodefaultconstructor.Apublicmethod
SolveshouldbewrittentosolvethislinearsystembyGaussianeliminationwith
pivoting, as described in Sect. A.2.1.3. This method should return a vector that
containsthesolutionofthelinearsystem.
Testyourclassusingsuitableexamples.Wesuggestthatyouwriteasetautomated
testsinatestingframeworksuchasCxxTest.Anoutlinemodeltest-suitefortesting
thelinearalgebraclassesisgiveninListingC.5inSectionC.1.Whenconsidering
whattotestthinkaboutthefollowing.
(cid:129) Howyoumighttestthevariousconstructors.
(cid:129) Howyouwillblackboxtestsolvingproblemswhenthematrixispoorlycondi-
tioned.
(cid:129) How to test that the Gaussian Elimination routine is performing pivoting when
smallvaluesappearonthediagonal.
(cid:129) HowtotestvariousMatrixandVectormethods.
10.5 Derive a class called PosDefSymmLinearSystem (or similar) from the
classLinearSystemthatmaybeusedforthesolutionofpositivedefinitesymmet-
riclinearsystems.MakethemethodSolveavirtualmethodoftheclassLinear-
System, and override this method in the class PosDefSymmLinearSystem
so that it uses the conjugate gradient method for solving linear systems described
in Sect. A.2.3. If you declared LinearSystem member data as private in
theprevious exercises, thenthis shouldnow bedeclared protected.Your class
PosDefSymmLinearSystem should perform a check that the matrix used is
symmetric:testingthatthematrixispositivedefinitewouldberatherdifficultandso
wedon’tsuggestperformingacheckforthisproperty.Testyourclassusingsuitable
examples.

11
AnIntroductiontoParallel
ProgrammingUsingMPI
ThischapterservesasanintroductiontotheMessagePassingInterface(MPI),which
isawidelyusedlibraryofcodeforwritingparallelprogramsondistributedmemory
architectures.Itisnotintendedthatyouwilllearnmuchaboutparallelprogramming
fromreadingthischapter—wewouldrecommendthatyouuseadedicatedtextbook
(suchasthoselistedintheFurtherReadingsectionattheendofthisbook[9,10])or
tutorialifyouwishtogainadetailedknowledge.However,thischaptershouldgive
youabasicguidetocompilingandrunningparallelprogramswrittenusingMPI.If
you are likely to use a scientific library built on MPI (such as PETSc1) then what
youlearnhereinthischaptershouldhelptodemystifysomeofthelibrarycalls,and
enableyoutobegintoeditparallelprogramswrittenbyotherprogrammers.
11.1 DistributedMemoryArchitectures
Thereareseveralwaysofclassifyingparallelcomputersandparallelprogramsbut
themostbasiconeisthatofsharedmemory versusdistributedmemory machines.
In the shared memory architecture several processing units (often called “cores”
nowadays),shareaccesstoacommonpoolofmemory,asshowninFig.11.1.This
architecture has the advantage that a part of a program running on one core can
easilycommunicatewithanother,sinceitcanreadorwriteinthememoryspaceof
the other part of the program. Programming for shared memory can be quite easy
andtheprogramsaregenerallyveryquick,buthistoricallysharedmemorymachines
1The Portable Extensible Toolkit for Scientific Computing (PETSc, pronounced “pet see”) is a
libraryprovidingfunctionalityforthesolutionoflinearandnonlinearsystemsofequationsonboth
sequentialandparallelarchitectures.
©SpringerInternationalPublishingAG,partofSpringerNature2017 197
J.Pitt-FrancisandJ.Whiteley,GuidetoScientificComputing
inC++,UndergraduateTopicsinComputerScience,
https://doi.org/10.1007/978-3-319-73132-2_11

198 11 AnIntroductiontoParallelProgrammingUsingMPI
Fig.11.1 Asharedmemoryparallelarchitecture:theprocessors/coresareco-locatedandsharea
commonmemory
Fig.11.2 Adistributedmemoryparallelarchitecture:eachprocessorhassoleaccesstoitslocal
memoryandthemachinesareconnectedonthesamenetwork
havebeenexpensive,requirespecialisedhardware,andphysicalconstraintslimitthe
totalnumberofcores.Thissituationis,however,nowchangingasmostnewdesktop
computershavetwoormorecores.
Theothermainarchitecturecommonlyusedforparallelprogrammingisthedis-
tributedmemoryarchitecture(seeFig.11.2),whereeachprocessingunithasalocal
memory space where it can read and write with ease, but the memory of other
processorsiscompletelyhidden.Theprocessorsareconnected—allowingdatatobe
communicatedbetweenprocessors—onanetworkwhichcouldbeadedicatedfast
switch network (in the case of a cluster computer) or could be the wider Internet.
Theexistenceofthenetworkbetweentheprocessingunitsmeansthatprogramming
for this architecture is likely to be more complicated, and that programs that rely
heavilyoncommunicationbetweenprocessorsarelikelytobeslower.However,as
weshallnowexplain,distributedmemoryprogramsareversatile.
Theversatilityofdistributedmemoryprogramsisevidencedbythefactthatitis
possibletotakeaprogramintendedforadistributedmemoryarchitectureandrun
itonasharedmemoryarchitecture.Inthiscase,theindividualpartsoftheparallel
programwillhaveseparatememoryspaceswithinthesharedmemorysystem(sothat
theycannotdirectlyaccesseachothers’memory),butwillbeabletocommunicate
viathememorysystem.Communicationisthereforemuchfasterthanoveranetwork.
Distributedmemoryprogramscanreadilybeexecutedonsharedmemorymachines

11.1 DistributedMemoryArchitectures 199
and are fast, but are also memory-hungry. The reverse is not true: you cannot, in
general,runasharedmemoryprogramonadistributedmemorycluster.2
You can even run distributed memory programs on a computer with a single
processor. All the parallel processes will be run as what are known as individual
threads, and will communicate via the memory system with the operating system
responsible for context switching between the threads. There is no performance
advantagetodoingthis,sincethereisanoverheadtorunmanythreadsonasingle
processor. The advantage is that you can write and debug a program on a low-
powered laptop, tune it on a shared memory desktop, and then deploy exactly the
sameprogramonasupercomputer.
11.2 InstallingMPI
MPIisactuallyasetofstandardsforperformingdistributedcomputing.TheMPI-1
standard documents the primary core of MPI (basic point-to-point and collective
communication)whiletheMPI-2standardaddsotherusefulbutadvancedfeatures
such as parallel file access (through the input and output operations provided by
MPIIO)andremotememoryaccess(one-sidedcommunication).BecauseMPIisa
set of open standards there are various implementations available to choose from.
The most commonly used are the MPICH and Open MPI implementations. The
currentversionsofMPICHandOpenMPI(formerlyLAM/MPI)bothimplementall
thefunctionalityinboththeMPI-1andMPI-2standards.
BothMPICHandOpenMPIareopensourceprojects,underactivedevelopment
and freely available to download. They may be run on a wide variety of machine
architectures,operatingsystemsandcommunicationinfrastructures.TheOpenMPI
libraryimplementationiscurrentlyavailablefrommajorLinuxdistributionreposi-
toriesandisthereforeeasytoinstallonLinuxsystems.Itisconfiguredsothatitcan
beusedeitheronastand-alonesystem(inthemannerofashared-memorysystem)
oracrossstandardEthernetusingthesecureshellsshprotocol.
11.3 AFirstProgramUsingMPI
JustasinSect.1.2,weintroducetheMPIlibrarybyusingaprogramthatprintsthe
text“HelloWorld”tothescreen.Thistime,itrunsandprintsinparallel.Thissimple
exampleC++MPIprogramisshownbelow.
2Thereareseveralprogramminglibrarieswhichallowtheprogrammeraccesstoadistributedshared
memorycomputerwheremachinesoveranetworkactasiftheywerepartononecontiguoussystem.
Therehas,however,notbeenwide-spreaduseoftheselibrariesatthetimeofwriting.

| 200 |     | 11 AnIntroductiontoParallelProgrammingUsingMPI |     |     |
| --- | --- | ---------------------------------------------- | --- | --- |
Before explaining the purpose of the individual statements in this program, we
needtoexplainwhatwemeanbythetermprocess.Looselyspeakingaprocessis
apartofaparallelprogramthatmaybeexecutedindependentlyoftheotherparts,
providedthatdatacanbecommunicatedthroughMPIcallswhenrequired.Assuch,
aprocesscanbethoughtofasacomponentoftheprogramthatcanbeexecutedon
oneoftheprocessorsshowninFig.11.2.(However,wemakeadistinctionbetween
processesandphysicalprocessors—orcores—becauseitispossibletorunmultiple
processesonasingleprocessor.)Ifacodehaspprocesses,theneachprocessisgiven
arankwhichisauniqueintegerintherange0≤rank<p.
| Listing11.1 MpiHelloWorld.cpp |     |     |     |     |
| ----------------------------- | --- | --- | --- | --- |
✞
| #include <iostream> |     |     |     |     |
| ------------------- | --- | --- | --- | --- |
1
| #include <mpi.h> |     |     |     |     |
| ---------------- | --- | --- | --- | --- |
2
3
| 4 int main(int | argc, char* | argv[]) |     |     |
| -------------- | ----------- | ------- | --- | --- |
5 {
| 6 MPI::Init(argc, | argv); |     |     |     |
| ----------------- | ------ | --- | --- | --- |
7
| int num_procs | = MPI::COMM_WORLD.Get_size(); |     |     |     |
| ------------- | ----------------------------- | --- | --- | --- |
8
| int rank | = MPI::COMM_WORLD.Get_rank(); |     |     |     |
| -------- | ----------------------------- | --- | --- | --- |
9
| std::cout | << "Hello | world from | process | " << rank |
| --------- | --------- | ---------- | ------- | --------- |
10
|     | << " of | " << num_procs | << "\n"; |     |
| --- | ------- | -------------- | -------- | --- |
11
MPI::Finalize();
12
| return | 0;  |     |     |     |
| ------ | --- | --- | --- | --- |
13
14 }
ThereareseverallinesoftheprogramabovewhichmentionMPI.Thefirstofthese
istheextraincludeonline2whichallowstheprogramtoseethefullfunctionality
|                     |               |           | MPI::Init | MPI::Finalize |
| ------------------- | ------------- | --------- | --------- | ------------- |
| of the MPI library. | Subsequently, | there are |           | and           |
statementsonlines6and12whichstartandstoptheparallelpartofthecode.All
MPI calls must lie between these two statements. The method Get_size allows
ustoaccessthenumberofprocessestakingpartintheprogramexecution,andthe
method Get_rank allows us to identify the process which is executing a given
statement.TheCOMM_WORLDobjectrepresentsacommunicationsgroupinvolving
alltheprocessesrunningthecurrentcalculation.Itispossibletosplitthiscommuni-
cationgroupupintosmallergroupssothatsubsetsoftheprocessescanshareprivate
data.
It should be noted that all the calls to MPI in program above use calls to spe-
Finalize
cific C++ bindings to the MPI library. So is a function in the MPI
namespace(seeSect.B.4)andGet_sizeisamethodofthecommunicationobject
COMM_WORLD. Some C++ programmers prefer not to use these bindings, but opt
insteadfortheplainCfunctionsMPI_Init,MPI_Get_size,etc.whichhavea
slightlydifferentsyntax.BothversionsarevalidinC++programsandcanevenbe
mixed.

11.3 AFirstProgramUsingMPI 201
11.3.1 EssentialMPIFunctions
ThefunctionsMPI::InitandMPI::Finalizeonlines6and12ofListing11.1
arerequiredcallsinanyMPIprogram.Online6,MPI::Initisabletopromotethe
programfromasingleexecutabletoaparallelprogramrunningasseveralprocesses.
In order to do this, it needs to know how many processes to launch and on which
machines they should be run—as we shall see in Sect. 11.3.2 this is information
thatcanbemadeavailableviacommand-linearguments.MPI::Initinspectsthe
command-lineargumentsprovidedbyargcandargv,actingonanyitrecognises.
SomeMPIimplementationsofMPI::Initupdatetheirargumentsbyremoving
thosewhichhavebeenactedupon.Therefore,ifyouwantanMPIprogramtoread
somespecificargumentsfromthecommand-lineforuseinyourcalculation,thebest
placetodothisisafterMPI::Initsince,atthatpoint,allMPI-specificarguments
havebeenreadandupdatedasnecessary.
TheMPI::Finalizemakessurethattheprogramclosesdownneatly,closing
anyremoteconnectionsandterminatingallprocesses.
11.3.2 CompilingandRunningMPICode
So far when we have compiled C++ programs we have included code either from
standard locations (through including files such as cmath) or from other parts of
ourowncode(suchasBook.hpp).MPI,asathird-partylibrary,isnotpartofthe
standardC++distribution.
Normally when you compile against a third-party library, you would have to
includeextracompilerflagsspecifyingthelocationoftheheaderfiles,thelocation
ofthelibrariesthemselves,andnamesofsomeofthelibrarydependencies.Thiscan
bealittleonerous.Addedtothis,onsomelargecomputingfacilitiestheremaybe
several versions of MPI available which make it possible to accidentally compile
some of your program with one version, and the remainder of the program with
another, possibly incompatible, version. To ameliorate these difficulties, the MPI
distributions have provided “wrapper compilers” for C++ (as well as for C and
Fortran).Thewrappercompilerautomaticallyaddsthecorrectcompilerflagswhen
itcallstheactualcompiler.TheC++MPIcompileronmostsystemswillbecalled
mpiCC,mpic++or mpicxx.Itisprobablythecasethatitexistswithmorethan
onesynonym.
ThestandardLinuxdistributionoftheOpenMPIpackagehasanmpiCCcompiler
whichisawrappertotheGNUg++C++compiler.Toensurethatthiscompileris
installed,openaterminalwindowandtype“which mpiCC”followedbyreturn.
Hopefullythecomputerwillrespondbyreportingthelocationofthiscompiler,for
example,

202 11 AnIntroductiontoParallelProgrammingUsingMPI
✞
$ which mpiCC
/usr/bin/mpiCC
$
TocompilethecodegiveninListing11.1,openaterminalwindowandcreatea
directorywherecodemaybesaved.Moveintothisdirectory,andsavethecodeas
“MpiHelloWorld.cpp”. The MPI wrapper compiler may have some compiler
flags of its own, but most flags are passed on to the normal g++ compiler. In the
samedirectorytype,
✞
mpiCC -o MpiHelloWorld MpiHelloWorld.cpp
Itispossible(butuninteresting)toruntheexecutablewhichyouhavejustproduced
as a standalone program. That is, without any of the MPI machinery and with no
coderuninparallel.IfthisisthecasethenGet_sizewillreturn1,and,because
thereisonlyoneprocess,Get_rankonthatprocesswillreturn0.Justasinarray
numbering, the process rank numbering starts at zero, so each process is given a
unique integer rank in the range 0 ≤ rank < p, where p is the total number of
processes.
✞
$ ./MpiHelloWorld
Hello world from process 0 of 1
Toruninparalleleitheronthesamemachineoracrossanetworkorcluster,usethe
mpiruncommand(alsoknownasmpiexeconsomeMPIimplementations).This
commandwill,ifnecessary,launchaservice(calledadaemon)onallthemachines
involvedinthecalculation.Itwillthenmakesurethatcopiesoftheexecutablecan
berunoneverymachine.
Toruntheprogramlocally,usethe“numberofprocesses”-npflag.
✞
$ mpirun -np 2 ./MpiHelloWorld
Hello world from process 0 of 2
Hello world from process 1 of 2
To run the program across a network you can give a list of machines in a host
file, or alternatively list the machine names on the command-line. It is imperative
thatyouhaveanaccountontheremotemachines,thatyouareabletoconnectvia
ssh(preferablywithoutbeingpromptedforapassword),thatthemachineshavethe
same MPI implementation installed on them, and that they are capable of running

11.3 AFirstProgramUsingMPI 203
theexecutablefilewhichyouaresending.Intheexamplebelow,ranks0and2ofa
3-processjobarelaunchedonremotemachines.Therank1processwillrunonthe
localmachine,fromwherethejobhasbeenlaunched.Notethatinthiscasebuffered
outputfromthelocalmachinehasappearedonthescreenbeforeoutputwhichhas
beensentfromtheremotemachines.3
✞
$ mpirun -host remote1.org,localhost,remote2.org ./MpiHelloWorld
Hello world from process 1 of 3
Hello world from process 2 of 3
Hello world from process 0 of 3
If you are running your program on a large cluster or a supercomputer, then it
is likely that the program will be launched from a script via a queueing system.
Inthiscase,thelocationsoftheprocessorsavailabletoyouwillbedeterminedby
the job queue manager. You should obtain detailed instructions from the system
administrators about which arguments to give to the mpirun command in your
script.
11.4 BasicMPICommunication
While the parallel “Hello World” program used the MPI libraries, it did not make
anyuseofthecommunicationfeaturesofferedbytheselibraries.Morespecifically,
itdidnotdoanymessagepassing,whichisthemainfeatureofMPI.Inthissection,
wegiveabriefsurveyofsomeofthecommoncommunicationpatternsavailablein
theMPIlibrarythroughprovidingasampleofthelargerangeofavailablefunction
calls.
11.4.1 Point-to-PointCommunication
TheessentialpartofMPIfunctionalityisbeingabletosendasinglemessagebetween
processes,whereoneprocesssendswhileanotherprocessreceives.Thesetwofunc-
tionsarecalledSendandRecv.Theirfunctionprototypesare:
✞
void Comm::Send(const void* buf, int count,
const Datatype& datatype,
int dest, int tag) const
3MPIimplementationsvaryinhowtheyreturnconsoleinputfromtheindividualprocessestothe
consolefromwhichtheprogramwaslaunched.Evenwhenflushiscalledonthecoutstream
itmaystillbethecasethattheMPImachineryisbufferingoutput.

204 11 AnIntroductiontoParallelProgrammingUsingMPI
void Comm::Recv(void* buf, int count,
const Datatype& datatype,
int source, int tag) const
The Sendmethodtakesdataonthecurrentprocessfromthelocationgivenby
thepointerbuf.Thesedataareassumedtobeincontiguousmemory(asanarrayof
countvariables),but bufmaybeapointertoasinglevariable.Notetheconst
keywordnext tothebufferargument:MPI ismakingaguaranteenot toalteryour
data during the message sending. The datatype field tells the system what the
typeofthedatais(sothatthecorrectnumberofbytesaresentinthecorrectformat).
The last two arguments of the Send method give the destination process number
(thisistherankoftheprocesswewishtosendto)andatag.Themessagetagcanbe
anynonnegativeintegervalueanditspurposeistoallowtheusertoeasilyidentify
thecontextofamessage.Negativetagvaluesarereservedbythelibraryforspecial
valuessuchasMPI::ANY_TAGwhichisintroducedbelow.
TheRecvmethodhasthesamebasicarguments:apointertoabufferinwhichto
storethemessage,anintegercountthatgivestheexpectednumberofitemsinthe
message,thedata-typefortheseitems,therankofthesourceprocesswhichissending
the message and the tag value of a message. The receiver is allowed to use wild-
cardsforeitherthesourceofthemessage,orthemessagetag,orboth.Thewild-card
MPI::ANY_SOURCE4 isusefulif,forexample,wewishtoreceivealltheresults
of one phase of computation (tagged with phase_1_tag, for example) before
moving on to the next phase. Messages sent with the next tag (phase_2_tag)
can then be queued until the receiving process is ready for them. The wild-card
MPI::ANY_TAGisusefulifweknowwhichprocessissendingthedata,butdonot
knowwhatthetagwillbe.
ThecorrespondingMPIDatatypesignaturesforthetypesintroducedinChap.1
areMPI::BOOL,MPI::CHAR,MPI::INTandMPI::DOUBLE.5ThereisnoMPI
typeforstringsbecausestd::stringisaC++classratherthanaplaindata-type.
It is possible to send entire C++ classes in MPI messages by using advanced pro-
grammingfeaturestointroduceuser-defineddata-types,butthisisnotrecommended.
Classescanreadilybetransferredbypackingtherawdataintoamessageatoneend
andunpackingitintoawaitingclassattheotherend.
Thefollowingcodefragmentillustratessendingonemessageconsistingoftwo
floating-pointnumbersfromprocess0toprocess1.Notethatcodeinvolvingpoint-
to-point communication is necessarily nonsymmetric: both processes are running
exactly thesame program with thesame code, butparts of theprogram which are
intendedonlyforoneprocessareplacedinspecificblocksguardedbytheirprocess
rank.
4MPI::ANY_TAGand MPI::ANY_SOURCEareC++namesforthesewild-cardvalues.Many
codesusetheinterchangeableCnames:MPI_ANY_TAGandMPI_ANY_SOURCE.
5NotethatthesearetheC++objectnamesforthesetypes—theyarealsocalledsynonymouslyby
theirCnames:MPI_BOOL,MPI_CHAR,MPI_INTandMPI_DOUBLE.

11.4 BasicMPICommunication 205
Listing11.2 ExamplecodeforsendingandreceivingusingtheMPIlibraries
✞
|     | int tag | = 30; |     |     |     |
| --- | ------- | ----- | --- | --- | --- |
1
| 2   | if (MPI::COMM_WORLD.Get_rank() |     |     | == 0) |     |
| --- | ------------------------------ | --- | --- | ----- | --- |
3 {
| 4   | //Specific | send code      | for       | process | 0   |
| --- | ---------- | -------------- | --------- | ------- | --- |
|     | double     | send_buffer[2] | = {100.0, | 200.0}; |     |
5
|     | MPI::COMM_WORLD.Send(send_buffer, |     |     |     | 2,  |
| --- | --------------------------------- | --- | --- | --- | --- |
6
|     |     |     | MPI::DOUBLE, |     | 1, tag); |
| --- | --- | --- | ------------ | --- | -------- |
7
}
8
|     | if (MPI::COMM_WORLD.Get_rank() |     |     | == 1) |     |
| --- | ------------------------------ | --- | --- | ----- | --- |
9
{
10
|     | //Specific | receive | code for | process | 1   |
| --- | ---------- | ------- | -------- | ------- | --- |
11
double
| 12  |                                   | recv_buffer[2]    | = {0.0,          | 0.0};    |                 |
| --- | --------------------------------- | ----------------- | ---------------- | -------- | --------------- |
| 13  | MPI::COMM_WORLD.Recv(recv_buffer, |                   |                  |          | 2, MPI::DOUBLE, |
| 14  |                                   |                   | MPI::ANY_SOURCE, |          | MPI::ANY_TAG);  |
| 15  | std::cout                         | << recv_buffer[0] |                  | << "\n"; |                 |
|     | std::cout                         | << recv_buffer[1] |                  | << "\n"; |                 |
16
}
17
| 11.4.1.1 | BlockingandBufferedSends |     |     |     |     |
| -------- | ------------------------ | --- | --- | --- | --- |
The default means of sending point-to-point messages with Send and Recv rep-
resentsonecombinationinaspectrumofavailablecommunicationprotocols.Both
functionsareknownasblockingfunctionsbecausetheydonotallowtheexecution
oftheprogramtocontinueuntilitissafetodoso.TheSendmethodnotonlyguar-
anteesthatitwillnotchangethecontentsofthedatabuffer,butthatanysubsequent
changestothedatabufferwillnotaffectthemessagethatisbeingsent.Soifcom-
putationisallowedtoproceedfromaSendcalliteithermeansthatthemessagehas
alreadybeendeliveredorthatthedatahasbeencopiedintoanotherbufferreadyfor
delivery.
ThedefaultSendisacompromisebetweenthesafetyofwaitingtobesurethat
amessagehasbeendeliveredandtheefficiencyofgettingonwithothertasksafter
sending the message immediately. The other send functions have similar function
prototypes, but slightly different names. We briefly describe these send functions
below: the interested reader should consult a dedicated MPI programming book
(suchas[9,10])formoredetails.
• Theverysafest,butpossiblymostinefficient,meansofsendingamessageistouse
ablockingsynchronoussend,Ssend.Thisfunctionguaranteesnottocontinue
untilthemessagehasbeendelivered.Thisisalittlelikedeliveringamessageby
telephoneconversation,becausewecannotgetonwithourlivesuntilthecallhas
beenmadeandtheinformationhasbeenrelayed.
• AslightlymoreconfigurableversionisBsend,thebufferedsend.Liketheplain
Send, it allows the program to continue when safe, but this may happen faster
sincethemessageiscopiedtoaseparatebuffer.Thisbuffermustbesuppliedand
configuredbytheuser.

206 11 AnIntroductiontoParallelProgrammingUsingMPI
• Atthetopendofthespectrum,themostefficientmeansofsendingamessageis
theimmediatesend Isend,whichreturnscontroltotheprogramimmediately,
whether themessage hasbeen delivered, buffered ornot yetactedon. Thisis a
little like communicating via SMS text message in which we are able to press
“send”andgetonwithotherthingssafeintheknowledgethattherecipientwill
get the information some time soon. Because it may be dangerous to overwrite
the original data contained in the message, MPI provides functions for testing
whetherornotthemessagehasbeendelivered.TheIsendcommandgivesback
a handle (called an MPI::Request) which has a Wait method: this method
instructsexecutionto“waithere”untilthemessagehasbeensent.
• Thereareafewotherflavoursof Sendincludingcompatiblecombinations:an
immediatesendcanmakeuseofauser-suppliedbufferusingthebufferednon-
blockingcombinationIbsend.
ThedefaultRecvfunctionisalsooneofaspectrumoffunctions.Itistechnically
ablockingfunction,becauseexecutioncannotcontinueuntilasuitablemessagehas
beenreceived.ThereisalsoanonblockingimmediatereceiveIrecvtogetherwith
someutilitiesforprobingwhetherthereareanyqueuedmessageswhichmatchcertain
sourcesortags.Thismeansthatyourprogram,ratherthanwaitingformessagesto
be received, could get on with useful work, occasionally going back to check for
newinformation.
11.4.2 CollectiveCommunication
Codeforpoint-to-pointcommunicationisnotsymmetric:oneprocesssendswhile
anotherreceives.MPIprovidesspecialisedcollectivecallsinwhichalltheprocesses
takepartbyexecutingthesamecommands.Thereareseveralmajordifferentflavours
ofthesecommunicationpatterns:thecombinedsend-receive(whereeveryprocess
sends a message to another, while also receiving a remote message); one-to-many
operations such as broadcast where data from one process are sent to the entire
group;andmany-to-oneoperationssuchasreductioninwhichanoperationisused
tocombineresultsfromallprocessesintoasingleresult.
ThesecollectivecallshavetheadvantagethattheycanbehighlytunedinanMPI
implementation to fit the local architecture. The broadcast of a single number to
allpprocessesfromprocess0couldbeachievedbysendingp−1messagesfrom
process0,onemessagetoeachoftherecipients.However,ifprocess0sendstoonly
twoprocesseswhoeachsendtotwomore,thentheinformationisbroadcasttoall
recipients in about log p rounds of message sending. If a supercomputer consists
2
ofseveralmulticorecomputersconnectedbyEthernet,thenthebroadcastalgorithm
canbetunedtominimisethenumberofEthernetmessageswhilepossiblyincreasing
thenumberoffastermessagesbetweencoresinthesamemachine.

11.4 BasicMPICommunication 207
11.4.2.1 Barrier
ThesimplestcollectivemethodisBarrier.Itsaysthateveryprocessshouldwait
hereuntilallprocessesarereadytoproceed.Barriersareusefulwhenyouaretiming
certainpartsofthecode,printingoutinformationtotheconsole,ordebuggingthe
code.Inthefollowingcodeexamplethereisa Barrieratline3,thepurposeof
whichistoensurethatallprocesseshavecompletedwritingtheiroutput(fromline1)
beforetheyarepermittedtoproceed.
✞
std::cout << "Processes may arrive at any time\n";
1
std::cout.flush();
2
MPI::COMM_WORLD.Barrier();
3
std::cout << "All processes continue together\n";
4
std::cout.flush();
5
11.4.2.2 CombinedSendandReceive
Therearemanycaseswhenwemightwishtosendandreceivemanypoint-to-point
messages at the same point in a computation, and where every process should be
involved.
Forexample,considersolvingapartialdifferentialequation(PDE)usingafinite
differenceschemeoveraregulargrid(suchagridisillustratedintwodimensions
in Fig.12.2) where the value of a variable at one position on the grid depends on
the value of that variable at a few neighbouring grid points. A similar example
from a different field is that of image processing: many image processing filters,
suchasedgedetectionorblurring,areimplementedasweightedaveragesofimage
intensitiesoverasmallpatchofneighbouringpixels.Suchproblemsmaybereadily
parallelised by dividing the grid or image into a number of identical vertical (or
horizontal)stripsandassigningonestriptoeachparallelprocess.Eachprocesscan
computeitspartitionindependently,exceptattheedgeswhereinformationatgrid-
pointsorpixelsassignedtotheneighbouringprocessisrequired.Awaytoprovide
thisinformationistokeepalocalcopyoftherequiredneighbouringgrid-pointdata
and to update these data from the neighbouring process by message-passing. The
localcopyofremoteneighbouringdataiscalledhalodataandthemessagepassing
processiscalledhaloexchange.
HaloexchangeisdemonstratedinFig.11.3usingtheexampleofanimageprocess-
ingfilter.Thisfilterproducesanimagewheretheimageintensityintheprocessed
imageatagivenpixelistheaverageoftheimageintensitiesintheoriginalimageat
fivepixels:thepixelofinterest;thepixeltotheleft;thepixeltotheright;thepixel
directly above; and the pixel directly below. The pixels allocated to process n are
thoseintheshadedareainFig.11.3.Wemaycalculatetheprocessedimageatthe
pixelsrepresentedbyopencirclesinthisshadedregionusingonlypixelintensities
stored by process n. Before we may calculate the filtered image at the pixels rep-
resentedbysolidcirclesontheleftedgeofprocessn,however,werequireaccess
to the pixels represented by solid circles on the right edge of the pixels stored by

| 208         | 11 AnIntroductiontoParallelProgrammingUsingMPI |             |     |
| ----------- | ---------------------------------------------- | ----------- | --- |
| Process n−1 | Process n                                      | Process n+1 |     |
Fig.11.3 Haloexchangebetweenprocesses
processn-1:thesepixelsarereferredtoasthehalo,andweneedtocopytheseto
processnbeforewecancalculatethewholeprocessedimage.Similarly,thenodes
along the left-hand boundary of process n must be copied to process n-1 before
theprocessedimagemaybecalculated.Thisprocedureofsendingedgedatainboth
directionsbetweenprocessesnand n-1isknownashaloexchange.Forthesame
reasons,two-wayhaloexchangeisalsorequiredbetweenprocessesnandn+1.
Thepartitioningofdatabetweenprocessesshouldideallyminimisetheamount
ofdatathathastobepassedinhaloexchanges:thisisimportantwhenfine-tuning
yourcodetoproduceoptimumefficiency,butisbeyondthescopeofthisbook.
Forthesetypesofproblem,amoresophisticatedversionofpoint-to-pointmes-
Sendrecv.
sage passing is the combined send and receive, called Its function
prototypeis:
✞
| void Comm::Sendrecv(const | void            | *sendbuf, int  | sendcount, |
| ------------------------- | --------------- | -------------- | ---------- |
|                           | const Datatype& | sendtype,      |            |
|                           | int dest,       | int sendtag,   |            |
|                           | void *recvbuf,  | int recvcount, |            |
|                           | const Datatype& | recvtype,      |            |
|                           | int source,     | int recvtag)   | const      |
Notethatthetenargumentsaredividedintotwosetsoffive:asetofsendarguments
about the outgoing message and a set of receive arguments about the incoming
message.Thesearesimilartotheargumentsgiventothepoint-to-pointversionsin
Sect. 11.4.1 and they are interpreted relative to the local process: if each process
is sending to the rank above, by symmetry, each must be receiving from the rank
below.Itispossibletomixthetypesofmessages(bothintermsof DataTypeand

11.4 BasicMPICommunication 209
Fig.11.4 Messagepassingbetweenprocessesinaringusingcombinedsend-receive
thelengthofthemessages)sothat,forexample,odd-rankedprocessesaresending
integermessagestotheprocessabove,buteven-rankedprocessesaresendingdouble
precision floating point data. In this circumstance, on any given process the types
of send and receive data will differ. As with the Recv functions, we can use the
wild-cardsforthesourceprocessidentityandthereceivedmessagetag.
Thefollowingcodeshowsallprocessescommunicatinginaring.Eachprocess
(withrankgivenbythevariablerank)sendsamessagetoitsright-handneighbour
(rank + 1). Modular arithmetic—see Sect. 1.4.3—ensures that the left_rank
andright_rankvariablesaresetinsidetherange0≤rank<num_procssothat
thetop-mostprocessisabletosendamessagetotherank0process.Thismessage
passingisillustratedschematicallyinFig.11.4forfourprocesses:thearrowindicates
thedirectioninwhichthemessageispassed.
✞
|     | int tag | = 30; |     |     |     |     |     |
| --- | ------- | ----- | --- | --- | --- | --- | --- |
1
| 2   | int rank      | = MPI::COMM_WORLD.Get_rank(); |                               |     |         |       |     |
| --- | ------------- | ----------------------------- | ----------------------------- | --- | ------- | ----- | --- |
| 3   | int num_procs |                               | = MPI::COMM_WORLD.Get_size(); |     |         |       |     |
| 4   | // left_rank  |                               | is rank-1                     |     |         |       |     |
| 5   | // Note       | modular                       | arithmetic,                   |     | so that | 0 has |     |
|     | // neighbour  |                               | num_procs-1                   |     |         |       |     |
6
|     | int left_rank |     | = (rank-1+num_procs)%num_procs; |     |     |     |     |
| --- | ------------- | --- | ------------------------------- | --- | --- | --- | --- |
7
|     | int right_rank |     | = (rank+1)%num_procs; |     |     |     |     |
| --- | -------------- | --- | --------------------- | --- | --- | --- | --- |
8
|     | int recv_data; |     |     |     |     |     |     |
| --- | -------------- | --- | --- | --- | --- | --- | --- |
9
|     | // Communicate |     | in a | ring | ...->0->1->2... |     |     |
| --- | -------------- | --- | ---- | ---- | --------------- | --- | --- |
10
|     | MPI::COMM_WORLD.Sendrecv(&rank, |     |     |     | 1,  | MPI::INT, |     |
| --- | ------------------------------- | --- | --- | --- | --- | --------- | --- |
11
|     |     |     |     |     | right_rank, | tag, |     |
| --- | --- | --- | --- | --- | ----------- | ---- | --- |
12
| 13  |           |     |           |      | &recv_data, | 1, MPI::INT, |        |
| --- | --------- | --- | --------- | ---- | ----------- | ------------ | ------ |
| 14  |           |     |           |      | left_rank,  | tag);        |        |
| 15  | std::cout | <<  | "Process  | " << | rank <<     | " received   | from " |
|     |           | <<  | recv_data | <<   | "\n";       |              |        |
16
Therearecases,suchasthehaloexchangesituationoutlinedabove,wherenearly
everyprocesswillsendhalodatafromtheright-handedgeofitsdomainuptothenext
processtobecomealeft-handhalo,butthetop-mostprocessdoesnotneedtosend
any data and the bottom-most process needs no left-edge halos. This is illustrated
in Fig. 11.5 where four processes are taking part in the communication with the
arrowsindicatingthedirectioninwhichinformationispassed.Inaseparatesend-
receiveeventtheleft-edgeswouldalsobesentdownthechaintobecomeright-edge
halos, but again there is no need to send data from the bottom-most process. For
thisreason,MPIprovidesaspecialprocessnameMPI::PROC_NULLwhichmeans
thatthisprocessdoesnotparticipatewithasendand/orreceive.Thisprocessname

| 210 |     |     | 11  | AnIntroductiontoParallelProgrammingUsingMPI |     |     |
| --- | --- | --- | --- | ------------------------------------------- | --- | --- |
Fig.11.5 Messagepassingbetweenprocessesinachainusingcombinedsend-receive.Onprocess
3themessagedestinationissettoPROC_NULL
Sendrecv
is illustrated in the following code, which is similar to the previous
example,exceptthatthereisnoclosedloop:thetop-mostprocessdoesnotsendto
process0.
✞
|     | int tag | = 30; |     |     |     |     |
| --- | ------- | ----- | --- | --- | --- | --- |
1
|     | int rank | = MPI::COMM_WORLD.Get_rank(); |     |     |     |     |
| --- | -------- | ----------------------------- | --- | --- | --- | --- |
2
|     | int num_procs | = MPI::COMM_WORLD.Get_size(); |     |     |     |     |
| --- | ------------- | ----------------------------- | --- | --- | --- | --- |
3
|     | int right_rank | = rank+1; |     |     |     |     |
| --- | -------------- | --------- | --- | --- | --- | --- |
4
|     | // Top-most | sends nowhere |     |     |     |     |
| --- | ----------- | ------------- | --- | --- | --- | --- |
5
|     | if (rank | == num_procs | - 1) |     |     |     |
| --- | -------- | ------------ | ---- | --- | --- | --- |
6
7 {
| 8   | right_rank | = MPI::PROC_NULL; |     |     |     |     |
| --- | ---------- | ----------------- | --- | --- | --- | --- |
9 }
|     | int left_rank | = rank-1; |     |     |     |     |
| --- | ------------- | --------- | --- | --- | --- | --- |
10
|     | // Bottom-most | receives | nothing |     |     |     |
| --- | -------------- | -------- | ------- | --- | --- | --- |
11
|     | if (rank | == 0) |     |     |     |     |
| --- | -------- | ----- | --- | --- | --- | --- |
12
{
13
|     | left_rank | = MPI::PROC_NULL; |     |     |     |     |
| --- | --------- | ----------------- | --- | --- | --- | --- |
14
}
15
|     | int recv_data | = 999; | //This | will be | unchanged | on proc 0 |
| --- | ------------- | ------ | ------ | ------- | --------- | --------- |
16
| 17  | // Communicate                  | 0->1->2... |     | Final process | sends          | nowhere |
| --- | ------------------------------- | ---------- | --- | ------------- | -------------- | ------- |
| 18  | MPI::COMM_WORLD.Sendrecv(&rank, |            |     | 1,            | MPI::INT,      |         |
| 19  |                                 |            |     | right_rank,   | tag,           |         |
| 20  |                                 |            |     | &recv_data,   | 1, MPI::INT,   |         |
|     |                                 |            |     | left_rank,    | MPI::ANY_TAG); |         |
21
|     | std::cout | << "Process | " << | rank << | " received | from " |
| --- | --------- | ----------- | ---- | ------- | ---------- | ------ |
22
|     |     | << recv_data | <<  | "\n"; |     |     |
| --- | --- | ------------ | --- | ----- | --- | --- |
23
| 11.4.2.3 | BroadcastandReduce |     |     |     |     |     |
| -------- | ------------------ | --- | --- | --- | --- | --- |
Thecollectiveoperationsbroadcastandreduceareprimarilyone-to-manyandmany-
to-one operations. In a broadcast (Bcast) operation, data from one process are
sharedwithallotherprocessesinthecommunicationgroup.Inareductionoperation
allthedataisconcentratedtoasingleprocess.Thisreductionoperationislikelyto
beofoneofastandardsetavailablefornumericaldata(MPI::MAX,MPI::MIN,
MPI::SUM, and MPI::PROD). There are other predefined reduction operations
availableincludingsomebit-wiseoperations,andthereisalsoopportunitytodefine
extra operations. The prototype signatures of the broadcast and reduce operations
aregivenbelow.Notethattheargumentrootisthesourceofthebroadcastbutthe
destination of the reduction. MPI also provides a many-to-many reduction opera-
tionAllreducewhichmaybethoughtofasareductionoperationfollowedbya
broadcasttoallprocesses.

11.4 BasicMPICommunication 211
✞
void Comm::Bcast(void* buffer, int count,
const MPI::Datatype& datatype,
int root) const
void Comm::Reduce(const void* sendbuf, void* recvbuf,
int count, const MPI::Datatype& datatype,
const MPI::Op& op, int root) const
AnexamplereductionoperationisgiveninSect.11.5.1wherethepartialsumsof
aseriesaresummedtogetherinasinglereductionstep.Fornow,hereisabroadcast
example in which one process—process 0—mimics throwing three dice by gen-
erating integer random numbers from 1–6 inclusive, and broadcasts the results of
allthreethrows.Eachprocessthenaddstheirownranktothevalueshownonthe
firstdie,andareductionoperationreportsonthemaximumvalueattainedafterthis
operation.
✞
int dice[3] = {0, 0, 0};
1
//Proc 0 sets the dice (#sides)
2
if (MPI::COMM_WORLD.Get_rank() == 0)
3
{
4
for (int i=0; i<3; i++)
5
{
6
dice[i] = (rand()%6)+1;
7
}
8
}
9
//Proc 0 broadcasts
10
MPI::COMM_WORLD.Bcast(dice, 3, MPI::INT, 0);
11
//Every process adds their rank to dice[0]
12
dice[0] += MPI::COMM_WORLD.Get_rank();
13
//Reduce the first value to get the maximum
14
int max;
15
MPI::COMM_WORLD.Reduce(dice, &max, 1,
16
MPI::INT, MPI::MAX, 0);
17
//On Proc 0: max = dice[0]+MPI::COMM_WORLD.Get_size()-1
18
11.4.2.4 ScatterandGather
Thescatterandgatheroperationsareextensionstobroadcastandreductionopera-
tions.Theyarethemostadvancedoperationswhichwecoverinthisbook,andwedo
sobecausethegatheroperationisusefulfortakingdatawhichhasbeendistributed
acrossprocessesandconcentratingitontoasingleprocess.Forexample,ifavector
is split across processes in a similar manner to a PETSc vector we might wish to
writeittoafileusingasinglewriteoperationusingonlyoneprocess.6
6Thereareafewstandardwaysofgettingdatatofilefromaparallelprogram:concentration,where
oneprocessdoesallthewriting,assuggestedabove;round-robinwhereprocessestakeitinturnsto

| 212 |     |     | 11 AnIntroductiontoParallelProgrammingUsingMPI |     |     |     |
| --- | --- | --- | ---------------------------------------------- | --- | --- | --- |
The scatter operation Scatter is similar to the broadcast operation in that it
is one-to-many with one process being responsible for sending the message to all
other processors. Unlike the broadcast operation, where the same entries of data
(ofsizecount)aresenttoallprocesses,thefirst countelementsaresendtothe
firstprocess,thenextcounttothenextandsoon.MPIalsoprovidesascatterfor
variablesizeddata(wherethecountsizecanbedifferentfordifferentdestinations)
whichiscalledScatterv.
The gather operation is similar to the reduce operation in that it is many-to-
one with each process contributing some data to the result. The difference is that
the data is not reduced but rather it is concatenated. If each process contributes
countelementsofdata,thenthegatheringprocessmusthavespacetostorecount
num_procselements.Thereisavariable-sizeddataversionofthe
multipliedby
gather,Gathervinwhichthenumbersofelementscontributedperprocessmaybe
different.MPIalsoprovidesAllgatherandAllgathervinwhichtheresultof
thegatherendsuponalltheprocessesinvolvedinthecommunication.Thesemay
bethoughtofasaregularGatherorGathervoperationfollowedbyabroadcast.
Belowaretheprototypesignaturesofthescatterandgatheroperations.Forcom-
pletenesswealsogivethesignatureofAllgathervsincewewilldemonstratethe
useof AllgatherandAllgathervinSect.11.5.2.
✞
| void Comm::Scatter(const    |                      |               | void* | sendbuf,       | int       | sendcount,     |
| --------------------------- | -------------------- | ------------- | ----- | -------------- | --------- | -------------- |
|                             | const MPI::Datatype& |               |       | sendtype,      |           | void* recvbuf, |
|                             | int recvcount,       |               | const | MPI::Datatype& |           | recvtype,      |
|                             | int root)            | const         |       |                |           |                |
| void Comm::Gather(const     |                      |               | void* | sendbuf,       | int       | sendcount,     |
|                             | const MPI::Datatype& |               |       | sendtype,      |           | void* recvbuf, |
|                             | int recvcount,       |               | const | MPI::Datatype& |           | recvtype,      |
|                             | int root)            | const         |       |                |           |                |
| void Comm::Allgatherv(const |                      |               | void* | sendbuf,       |           | int sendcount, |
|                             | const MPI::Datatype& |               |       | sendtype,      |           | void* recvbuf, |
|                             | const int            | recvcounts[], |       |                | const int | displs[],      |
|                             | const MPI::Datatype& |               |       | recvtype)      |           | const          |
Mostoftheargumentsintheabovemethodsshouldbereadilyunderstood,since
theyaresimilartotheargumentsofthepreviouslessadvancedmethods.Theargu-
mentrootalwaysrefersthescatterer(sender)ortothegatherer(receiver).Inmost
cases,thetypesandcountsofthesendandreceivedatashouldbeidentical,withthe
countsreferringtothesizeofthearraysentto(orreceivedfrom)eachprocess.In
thevariablesizegather,theintarrayargumentsrecvcountsanddisplsare
usedtocommunicatethevariabledatacountsanddisplacementsforeachprocess(so
openandclosethesamefile;parallelfilelibrariessuchasMPI’sMPIIO;andseparatefileswhere
eachprocesswritesdatatodifferentplacestobere-assembledlater.Thechoiceofoutputmethod
islargelydependentonthedatastructureandsize.

11.4 BasicMPICommunication 213
recvcounts[rank]shouldbeequalsendcountforthatprocess).Thevalue
displs[rank]containstheindexinthegatheredarrayrecvbufwherethedata
fromprocessrankshouldbegin.Thereissomeredundancybetweenthecountsand
displacementssinceonemightexpectthedisplacementofeachprocess’datatobe
equal to the sum of the counts of the data from lower ranked processes. However,
thisredundancyallowstheretobegapsinthegathereddata.
11.5 ExampleMPIApplications
In this section, we give two examples of parallel programs written with MPI. The
designsoftheparallelalgorithmsshownherearenotuniquetotheproblemswhich
theysolve.Ingeneral,thechoiceofparallelalgorithmdependsonhowitrelatestoan
equivalentsequentialalgorithm(ifthereisone)andhowthedataispartitioned.One
usuallyseekstopartitionthedataandcomputationbetweentheprocessesinsucha
waythatcommunicationbetweenprocessesisminimisedandthattheprocessesare
givenanequivalentamountofcomputationalwork.Thetaskofgivingtheprocesses
thesameamountofworkisknownasloadbalancing.
However,merelygivingeachprocessasimilaramountofworkisnoguarantee
of a successful parallel algorithm if the combined computational load of parallel
processes is much more than that of the sequential program, or if communication
dominatestheprogram.Themeasuresofsuccessinproducingparallelprogramsare
parallelspeedupandparallelefficiency.Theparallelspeedupistheratioofthetime
ittakestorunthecodesequentiallyonacertainproblemtotimeittakestorunon
p processes (S = T1). In an ideal case, a problem can be partitioned such that it
p Tp
is well load balanced with minimal extra overhead, so we expect S ≃p. Parallel
p
efficiencyscalesthisvaluebyp:E = T1 sothatE isgenerallyintherangefrom
p pTp p
0to1with1beingtheidealvalue.Itisuncommon,butnotunusual,foraparticular
problemtoscaleinparallelsuchthatE >1.Thisfortunatesituationnormallyarises
p
when a given problem has memory constraints when run on a small numbers of
processesanditisknownassuper-linearspeedup.
11.5.1 SummationofSeries
Thesummationofaseriescanbetakenasanabstractionofarangeofproblemsin
whichitismoderatelyeasytopartitionworkbetweenprocessesandthereisminimal
communication.Suchproblemsaretermedembarrassinglyparallel.Inthefollowing
example,thecalculationistrivialbutthiscaseisrepresentativeoftaskswhichare
possiblymorelabourintensive,suchasMonteCarlointegration(seeExercise11.4).
Considertheproblemofsummingaseries,suchastheapproximationtoπ
π ∞ (−1)n
= ,
4 2n+1
(cid:2)n=0

214 11 AnIntroductiontoParallelProgrammingUsingMPI
credited to Gottfried Wilhelm Leibniz. Given that we cannot compute the sum to
infinity, we approximate this summation with a finite sum from n =0 to
n =max −1 for some value max (which may be assumed to be divisible by the
number of processes, p). In dividing the max contributions between the processes
evenly, we might choose to allocate this work in blocks, so that the first max/p
contributions to the series go to process zero, and so on, or we might distribute in
such a way as to interleave processor contributions. In the following example, the
contributionsareinterleaved.Notethattheonlyparallelcommunicationneededin
thiscodeisareductionoperation,whichcombinesthesubtotalsfromtheprocesses
intoagrandtotalfortheentirecalculationonprocess0.
✞
#include <mpi.h>
1
#include <cmath>
2
#include <iostream>
3
4
//Program to sum Pi using Leibniz formula:
5
6 // Pi = 4 * Sum_n ( (-1)**n/(2*n+1) )
7
int main(int argc, char* argv[])
{
8
int max_n = 1000;
9
double sum = 0;
10
MPI::Init(argc, argv);
11
12
int num_procs = MPI::COMM_WORLD.Get_size();
13
int rank = MPI::COMM_WORLD.Get_rank();
14
15
for (int n=rank; n<max_n; n+=num_procs)
16
{
17
18
double temp = 1.0/(2.0*((double)(n))+1.0);
if (n%2 == 0) // n is even
19
{
20
sum += temp;
21
}
22
else
23
{
24
// n is odd
25
sum -= temp;
26
}
27
}
28
29
double global_sum;
30
MPI::COMM_WORLD.Reduce(&sum, &global_sum, 1,
31
MPI::DOUBLE, MPI::SUM, 0);
32
if (rank == 0)
33
{
34
35
std::cout << "Pi is about " << 4.0*global_sum
36
<< " with error " << 4.0*global_sum-M_PI
<< "\n";
37
}
38
MPI::Finalize();
39
return 0;
40
}
41

| 11.5 ExampleMPIApplications |     |     |     |     |     |     |     | 215 |
| --------------------------- | --- | --- | --- | --- | --- | --- | --- | --- |
11.5.2 ParallelLinearAlgebra
Inthissection,wegiveanoutlineoftheoperationsrequiredforperformingparallel
linearalgebraoperations.Itisbeyondthescopeofthisbooktoprovideacomplete
parallel linear algebra library, but we outline some of the issues arising when we
design such a system. A fundamental question to ask is how matrices and vectors
might be partitioned across the processes. We choose to use the matrix-row parti-
tioning (which will be described later) favoured by the PETSc library—although
other parallel linear algebra systems, such as Mondriaan, use more sophisticated
techniques.
Webeginbydiscussingparallelimplementationoftheproductbetweenamatrix
andavectorofsuitablesizes.Usingthematrix-rowpartitioningscheme,thematrix-
vectorproductv=AuwhereAisaN×Nmatrix,andu,varevectorsoflengthN,
canbepartitionedinsuchawaythatthefirstN/prowsofmatrixAareonlyknownto
process0,asarethefirstN/pelementsofthevectorsuandv.Ifweareperforminga
simplematrix-vectorcalculationusingrow-wisepartitioningover3processesthen
itcanbeseefromtheschematic
|      |               | v      | A       | A     | A     | ··· | A         | u       |
| ---- | ------------- | ------ | ------- | ----- | ----- | --- | --------- | ------- |
|      |               | 0      |         | 00 01 |       | 02  | 0,N−1     | 0       |
|      |               | v      | A       | A     | A     | ··· | A         | u       |
| Proc | 0⎧ ⎛          | 1 ⎞    | ⎛       | 10 11 |       | 12  | 1,N−1 ⎞⎛  | 1 ⎞     |
|      | ⎨             | . .    | . .     | ...   | ...   | ... | . .       | . .     |
|      |               | .      | .       |       |       |     | .         | .       |
|      | ⎜             | ⎟      | ⎜       |       |       |     | ⎟⎜        | ⎟       |
|      | ⎩ ⎜           | . ⎟ =⎜ | .       |       |       |     | . ⎟       | ⎜ . ⎟ , |
| Proc | ⎜             | . ⎟    | ⎜ .     | ...   | ...   | ... | . ⎟       | ⎜ . ⎟   |
|      | 1 ⎜           | . ⎟    | ⎜ .     |       |       |     | . ⎟       | ⎜ . ⎟   |
|      | (cid:6) ⎜     | ⎟      | ⎜       |       |       |     | ⎟⎜        | ⎟       |
|      |               | .      | .       |       |       |     | .         | .       |
|      | ⎜             | . ⎟    | ⎜ .     | ...   | ...   | ... | . ⎟       | ⎜ . ⎟   |
|      | ⎜             | . ⎟    | ⎜ .     |       |       |     | . ⎟       | ⎜ . ⎟   |
| Proc | ⎜             | ⎟      | ⎜       |       |       |     | ⎟⎜        | ⎟       |
|      | 2 (cid:6) ⎜ v | ⎟      | ⎜ A     | A     | A     | ... | A ⎟       | ⎜ u ⎟   |
|      | ⎝             | N−1 ⎠  | ⎝ N−1,0 | N−1,1 | N−1,2 |     | N−1,N−1 ⎠ | ⎝ N−1 ⎠ |
that in order for process 0 to compute the first N/p elements of v it is required to
knowonlythefirstN/prowsof A(whichareheldlocally)andalltheelementsof u
(mostofwhicharenotlocaltoprocess0).
More generally, in order to solve the linear system Ax = b using an iterative
approach(suchastheconjugategradientmethoddescribedinSect.A.2.3)thereare
alimitednumberofoperationswhichwillbeneeded:
• scalar-vectormultiplication—anoperationonlocally-helddata;
•
vector-vectoradditionandsubtraction—operationsonlocally-helddata;
• avectorEuclideannorm—asumofsquaresonlocaldata,followedbyaglobal
sumofsquares(aparallelreduction),followedbyasquare-root;and
• matrix-vectormultiplication—inwhich,asoutlinedabove,datafromthevector
mustbecommunicatedbetweenalltheprocesses.
Weillustrateanimplementationofthisfashionofparallellinearalgebrabygivinga
bare-bonesworkingMpiVectorclass.Thisclasscontainsthefeatureslistedbelow,
whichwillaidbuildingaparallelconjugategradientsolver.
• OnconstructingavectorofsizeN,thecomponentsareautomaticallydistributed
betweenpprocesses.EachprocessisassignedN/pelements.Thisdivisionmay
beroundeddownsothattherewillbeashortfallincaseswherepdoesnotdivide

| 216 | 11  | AnIntroductiontoParallelProgrammingUsingMPI |
| --- | --- | ------------------------------------------- |
N.Thisshortfallispickedupbythetop–mostprocess.EachprocessholdsmSize
elementscorrespondingtoindicesintherangemLo≤i
<mHi.
• There is an overloaded [] operator for accessing elements of the vector. This
operatorconvertsbetweenaglobalindexintothevectorandthelocalindexinto
theprocess’privatedata.Anyout-of-rangeindexingtripsanassertion.
• HelpermethodsGetHiandGetLoenablethecallertoprobetherangeoflocally
helddata,thusamelioratingthefactthatthepartitioningcodeishiddenfromthe
callerwhichwouldmakeiteasytotripindexviolationassertions.
• There is a CalculateNorm method which calculates the 2-norm (see Sect.
A.1.5)bycalculatingalocalsumofsquares,usingreductiontosumthelocalsums
intoaglobalsum,andtakingthesquareroot.NotetheuseofAllreducewhich
ensuresthattheresultofthereduction(andthereforeofthenorm)isavailableto
allprocesses.
• ThereisamethodUpdateGlobalforgatheringallelementsofthevectorfrom
theremoteprocesses.
ThemethodUpdateGlobalusesmorethanonegatheroperationasintroduced
inSect.11.4.2.4,andgatherstheentirevectorintoprivatestorageoneveryprocess.
Thefirsttwogatheroperationsassembleinformationaboutthenumberoflocallyheld
dataandtheirdisplacements.Theseoperationsareheretoillustrateacommonuseof
fixed-andvariable-sizedgathersbuttheyareredundantformultiplereasons:(i)the
sizesanddisplacementsarefixedinconstructoranddonotneedtobere-calculated
on every communication, (ii) the sizes and displacements are not independent—
one can be calculated from the other, (iii) the algorithm for calculating sizes and
displacementsintheconstructorisquitesimpleandcouldberepeatedhere.
✞
| #include | <mpi.h> |     |
| -------- | ------- | --- |
1
| #include | <cmath> |     |
| -------- | ------- | --- |
2
| #include | <cassert> |     |
| -------- | --------- | --- |
3
4
| class MpiVector |     |     |
| --------------- | --- | --- |
5
{
6
7 private:
| 8 //Store  | components       |     |
| ---------- | ---------------- | --- |
| 9 int      | mLo, mHi, mSize; |     |
| 10 double* | mData;           |     |
| double*    | mGlobalData;     |     |
11
public:
12
| MpiVector(int | vecSize) |     |
| ------------- | -------- | --- |
13
{
14
| int | num_procs = MPI::COMM_WORLD.Get_size(); |     |
| --- | --------------------------------------- | --- |
15
int rank = MPI::COMM_WORLD.Get_rank();
16
| int | ideal_local_size | = vecSize/num_procs; |
| --- | ---------------- | -------------------- |
17
18
| 19 assert | (ideal_local_size  | > 0);       |
| --------- | ------------------ | ----------- |
| 20 mLo    | = ideal_local_size | * rank;     |
| 21 mHi    | = ideal_local_size | * (rank+1); |

| 11.5 | ExampleMPIApplications |     |     |     |     |     | 217 |
| ---- | ---------------------- | --- | --- | --- | --- | --- | --- |
22
|     | //Top | processor |     | picks | up extras |     |     |
| --- | ----- | --------- | --- | ----- | --------- | --- | --- |
23
| 24  | if (rank |     | == num_procs-1) |     |     |     |     |
| --- | -------- | --- | --------------- | --- | --- | --- | --- |
| 25  | {        |     |                 |     |     |     |     |
| 26  | mHi      | =   | vecSize;        |     |     |     |     |
}
27
|     | assert(mHi |     | > mLo); |     |     |     |     |
| --- | ---------- | --- | ------- | --- | --- | --- | --- |
28
|     | mData | = new | double[mHi |     | - mLo]; |     |     |
| --- | ----- | ----- | ---------- | --- | ------- | --- | --- |
29
|     | mGlobalData |     | =   | new | double[vecSize]; |     |     |
| --- | ----------- | --- | --- | --- | ---------------- | --- | --- |
30
|     | mSize | = vecSize; |     |     |     |     |     |
| --- | ----- | ---------- | --- | --- | --- | --- | --- |
31
}
32
~MpiVector()
33
34 {
| 35  | delete[] |     | mData;       |     |     |     |     |
| --- | -------- | --- | ------------ | --- | --- | --- | --- |
| 36  | delete[] |     | mGlobalData; |     |     |     |     |
37 }
38
|     | double& | operator[](int |     |     | globalIndex) |     |     |
| --- | ------- | -------------- | --- | --- | ------------ | --- | --- |
39
{
40
|     | //Make | sure | that | this | on the local | vector |     |
| --- | ------ | ---- | ---- | ---- | ------------ | ------ | --- |
41
|     | assert(mLo<=globalIndex |     |     |     | && globalIndex<mHi); |     |     |
| --- | ----------------------- | --- | --- | --- | -------------------- | --- | --- |
42
return mData[globalIndex-mLo];
43
}
44
45
| 46  | int GetHi() |     |     |     |     |     |     |
| --- | ----------- | --- | --- | --- | --- | --- | --- |
47 {
| 48  | return | mHi; |     |     |     |     |     |
| --- | ------ | ---- | --- | --- | --- | --- | --- |
}
49
50
|     | int GetLo() |     |     |     |     |     |     |
| --- | ----------- | --- | --- | --- | --- | --- | --- |
51
{
52
return mLo;
53
}
54
55
| 56  | double | CalculateNorm() |     |     | const |     |     |
| --- | ------ | --------------- | --- | --- | ----- | --- | --- |
57 {
| 58  | double | local_sum |      | =          | 0.0; |     |     |
| --- | ------ | --------- | ---- | ---------- | ---- | --- | --- |
| 59  | for    | (int      | i=0; | i<mHi-mLo; | i++) |     |     |
{
60
|     | local_sum |     | +=  | mData[i]*mData[i]; |     |     |     |
| --- | --------- | --- | --- | ------------------ | --- | --- | --- |
61
}
62
double global_sum;
63
|     | MPI::COMM_WORLD.Allreduce(&local_sum, |     |     |     |     | &global_sum, | 1,  |
| --- | ------------------------------------- | --- | --- | --- | --- | ------------ | --- |
64
|     |     |     |     |     | MPI::DOUBLE, | MPI::SUM); |     |
| --- | --- | --- | --- | --- | ------------ | ---------- | --- |
65
return sqrt(global_sum);
66
67 }
| 68  | void UpdateGlobal() |     |     |     |     |     |     |
| --- | ------------------- | --- | --- | --- | --- | --- | --- |
69 {
| 70  | int | num_procs |     | = MPI::COMM_WORLD.Get_size(); |     |     |     |
| --- | --- | --------- | --- | ----------------------------- | --- | --- | --- |
71
|     | int* | num_per_proc |     | =   | new int[num_procs]; |     |     |
| --- | ---- | ------------ | --- | --- | ------------------- | --- | --- |
72

| 218 |     |            | 11 AnIntroductiontoParallelProgrammingUsingMPI |     |     |     |
| --- | --- | ---------- | ---------------------------------------------- | --- | --- | --- |
|     | int | local_size | = mHi-mLo;                                     |     |     |     |
73
|     | MPI::COMM_WORLD.Allgather(&local_size, |     |     |     | 1, MPI::INT, |     |
| --- | -------------------------------------- | --- | --- | --- | ------------ | --- |
74
| 75  |     |     |     | num_per_proc, | 1,  | MPI::INT); |
| --- | --- | --- | --- | ------------- | --- | ---------- |
76
| 77  | int*                            | lows_per_proc | = new | int[num_procs]; |     |     |
| --- | ------------------------------- | ------------- | ----- | --------------- | --- | --- |
|     | MPI::COMM_WORLD.Allgather(&mLo, |               |       | 1, MPI::INT,    |     |     |
78
|     |     |     |     | lows_per_proc, | 1,  | MPI::INT); |
| --- | --- | --- | --- | -------------- | --- | ---------- |
79
80
|     | MPI::COMM_WORLD.Allgatherv(mData, |     |     | local_size, |     |     |
| --- | --------------------------------- | --- | --- | ----------- | --- | --- |
81
|     |     |     | MPI::DOUBLE, | mGlobalData, | num_per_proc, |     |
| --- | --- | --- | ------------ | ------------ | ------------- | --- |
82
|     |     |     | lows_per_proc, | MPI::DOUBLE); |     |     |
| --- | --- | --- | -------------- | ------------- | --- | --- |
83
|     | delete | [] num_per_proc; |     |     |     |     |
| --- | ------ | ---------------- | --- | --- | --- | --- |
84
delete
| 85  |     | [] lows_per_proc; |     |     |     |     |
| --- | --- | ----------------- | --- | --- | --- | --- |
86 }
87 };
✞
| 1   | #include | <iostream>      |     |     |     |     |
| --- | -------- | --------------- | --- | --- | --- | --- |
| 2   | #include | <mpi.h>         |     |     |     |     |
| 3   | #include | "MpiVector.hpp" |     |     |     |     |
4
|     | int main(int | argc, | char* argv[]) |     |     |     |
| --- | ------------ | ----- | ------------- | --- | --- | --- |
5
{
6
|     | MPI::Init(argc, |     | argv); |     |     |     |
| --- | --------------- | --- | ------ | --- | --- | --- |
7
|     | MpiVector | all_ones(9); |     |     |     |     |
| --- | --------- | ------------ | --- | --- | --- | --- |
8
|     | std::cout | << "Local | has [" | << all_ones.GetLo() |     | <<  |
| --- | --------- | --------- | ------ | ------------------- | --- | --- |
9
|     |     | ",  | " << all_ones.GetHi() | <<  | ")\n"; |     |
| --- | --- | --- | --------------------- | --- | ------ | --- |
10
| 11  | for (int | i=all_ones.GetLo(); |     | i<all_ones.GetHi(); |     | i++) |
| --- | -------- | ------------------- | --- | ------------------- | --- | ---- |
12 {
| 13  | all_ones[i] |     | = 1.0; |     |     |     |
| --- | ----------- | --- | ------ | --- | --- | --- |
14 }
|     | assert( | fabs(all_ones.CalculateNorm()-3.0) |     |     | < 1.0e-6 | );  |
| --- | ------- | ---------------------------------- | --- | --- | -------- | --- |
15
16
all_ones.UpdateGlobal();
17
MPI::Finalize();
18
|     | return | 0;  |     |     |     |     |
| --- | ------ | --- | --- | --- | --- | --- |
19
}
20
11.6 Tips:DebuggingaParallelProgram
WehavediscusseddebuggingsequentialcodeinSects.1.7and7.7.Messagepassing
clearlyintroducesthepotentialfordifferenterrorstobeinsertedintoyourcode.We
discusssomemethodsfordebuggingparallelprogramsbelow.

11.6 Tips:DebuggingaParallelProgram 219
| 11.6.1 | Tip1:MakeanAbstractProgram |     |     |     |     |
| ------ | -------------------------- | --- | --- | --- | --- |
Aswithsequentialprogramming,itisveryrareforaprogrammertobeginbuilding
a parallel program from scratch. In many cases, you may be given a sequential
programwhichhasbeenwrittenbysomeoneelse,oryoumaybestartingfromyour
ownprogram.Atsuchtimes,itishardtoseethecommunicationpatternsunderlying
theparallelcode—theycaneasilygetlostinthedetailsofthecalculations.
Ouradviceistofirsttakethetimetodesignaroughideaofthecommunication
patternsneededinyournewparallelprogram,andthenstartafresh.Writeasimplified
abstractprogramwhichconcentratesonthecommunication,butneglectsthemain
calculation. This will give you the opportunity to ensure the safe working of the
parallelcommunicationintheabsenceofdetailsoftheparticulars.Oncethemessage
passingisworkingcorrectly,itcaneasilybeintegratedintothemaincode.
| 11.6.2 | Tip2:DatatypeMismatch |     |     |     |     |
| ------ | --------------------- | --- | --- | --- | --- |
Inthefollowingcode,copiedincorrectlyfromListing11.2,theprocess0blockhas
been amended so that the type of the data is now int and the message is sent as
MPI::INT.However,thischangehasnotbeenreflectedinthecodeforthereceiving
processwherethemessageisreceivedasMPI::DOUBLE.
✞
| 1   | int tag                        | = 30; |     |       |     |
| --- | ------------------------------ | ----- | --- | ----- | --- |
|     | if (MPI::COMM_WORLD.Get_rank() |       |     | == 0) |     |
2
{
3
|     | //Specific | send code | for | process | 0   |
| --- | ---------- | --------- | --- | ------- | --- |
4
|     | int | send_buffer[2] | = {100, | 200}; |     |
| --- | --- | -------------- | ------- | ----- | --- |
5
|     | MPI::COMM_WORLD.Send(send_buffer, |     |     |     | 2,  |
| --- | --------------------------------- | --- | --- | --- | --- |
6
|     |     |     | MPI::INT, | 1,  | tag); |
| --- | --- | --- | --------- | --- | ----- |
7
}
8
| 9   | if (MPI::COMM_WORLD.Get_rank() |     |     | == 1) |     |
| --- | ------------------------------ | --- | --- | ----- | --- |
10 {
| 11  | //Specific                        | receive        | code for | process | 1               |
| --- | --------------------------------- | -------------- | -------- | ------- | --------------- |
| 12  | double                            | recv_buffer[2] | = {0.0,  | 0.0};   |                 |
|     | MPI::COMM_WORLD.Recv(recv_buffer, |                |          |         | 2, MPI::DOUBLE, |
13
|     |     |     | MPI::ANY_SOURCE, |     | MPI::ANY_TAG); |
| --- | --- | --- | ---------------- | --- | -------------- |
14
|     | std::cout | << recv_buffer[0] |     | << "\n"; |     |
| --- | --------- | ----------------- | --- | -------- | --- |
15
|     | std::cout | << recv_buffer[1] |     | << "\n"; |     |
| --- | --------- | ----------------- | --- | -------- | --- |
16
}
17
Themessagepassinginthisprogrammayworkcorrectly—intermsofthecommu-
nicationpattern—butthedatareceivedonprocess1willprobablybeincorrect.This
maybebecauseofmismatchesinthesizeofthedata(onmostarchitecturesintuses
32bitswhereasdoubleuses64bits)oritmaybeduetoerrorsintheconversion
ofthedata.

220 11 AnIntroductiontoParallelProgrammingUsingMPI
Problemswheremessagedatatypes(orsizes)donotmatchcanbehardtosee,
especially when the send and receive components are in separate methods or in
separatefiles.
11.6.3 Tip3:IntermittentDeadlock
Deadlock is the technical term for the situation in which all processes are waiting
for some event to happen before proceeding but no process can supply that event
because they are waiting for another process. This situation is illustrated simply
by four cars arriving simultaneously at a junction where the traffic signals have
failed:withnothingtotellthemhowtoproceedallfourdriversplaysafeandwait
for someone else to make the first move. In most cases, it is possible to find code
whichcausesdeadlockbyheavilyinstrumentingtheprogram,thatis,byprintingout
lotsofinformationandflushingtheoutput.Wewilldeliberatelyinducedeadlockin
Exercise11.2byneverreceivinganysentmessagessothateventuallythesenderis
notabletoproceedbecauseitisunabletosendanymoremessages.
Problemsinvolvingintermittentdeadlockarehardertodiagnose.Thesearesitu-
ationswheretheprogramdeadlocksonsomerunsofthecodebutrunsnormallyon
others.Perhapstheprogramrunswithoutencounteringproblemswithsometrivial
exampletestinput,butwhenitisfedwiththereal-lifeinputitthendeadlocks.When
this happens, it is an indication that the problem is to do with the size or timing
of messages. In Exercise 11.2 we demonstrate that small amounts of data can be
buffered—which hides the fact that a non-buffered blocking send would produce
deadlock—butlargeamountsofdatacannotbebuffered.Inotherwords,foragiven
programtheremaybesizesandtimingsofmessageswheredeadlockhappens,and
somewhereitdoesnothappen.
In such situations, a good strategy is to concentrate on those situations most
likelytodeadlock.Wemakeourprogramlessefficientandmorelikelytodeadlock
byremovingbufferingandasynchronousmessages:replacingallinstancesofSend
withSsend.Onceallmessagepassingissynchronousitislikelythattheintermittent
deadlock has become predictable deadlock, allowing us to identify the problem
anddebugthecode.Aprogramcanalsobemade“moresynchronous”bysplitting
calculationstepsupwithbarriers.Theprogramcanlaterbemademoreefficientas
necessary.
11.6.4 Tip4:AlmostCollectiveCommunication
Itiscommontotreatprocesszeroasa“masterprocess”,orchestratingthetasksof
theotherprocesses,reducingdataforoutputtothescreen,andgatheringinformation
from all processes for output to a single file. In these circumstances, it is usual to
havesomeblocksofcodeorsomemethodswhichareonlyexecutedbythemaster
processandsomewhichareonlyexecutedbythe“slaveprocesses”.

11.6 Tips:DebuggingaParallelProgram 221
In Sect. 11.4.2.4, we gave the example of an output pattern in which all data
was concentrated onto a single process before being written to disk. In this case,
processzeromayexecuteablockofcodeconsistingofreceivesandwritestodisk
via an ofstream, whereas the other processes execute a block consisting of the
matchingsendcommands.Whendebuggingparallelcode,itisusuallyagoodidea
toaddbarriersinordertobreaktheprogramintomanageablesections.However,if
weweretoaddbarriersintotheslaveprocesses’blockofsendingcode,thiswould
be a recipe for instant deadlock. Since all processes except one are executing this
code,thenanycollectivecommunicationonMPI::COMM_WORLDcannotcomplete.
If collective communication is necessary in this code, then a new communication
group(includingallprocessesin MPI::COMM_WORLDexceptrankzero)mustbe
created. New communication groups can be created using relevant MPI functions
suchasMPI_Comm_split(seeMPIdocumentationformoredetails).
11.7 Exercises
11.1 AmendtheMpiHelloWorldprograminListing11.1sothattheprocesses
printinreverserankorder.Youcandothiswithadown-loopoverprocessesanda
barrier. Beware that if your implementation of MPI buffers output then you might
notbeabletoverifythatyourprocessisworkingcorrectly!
Assumingthatyourloopforoutputiscorrect,nowmodifyittodoroundrobinfile
output.Insteadofwritingprocessrankstostd::couteachprocessinturnshould:
open a named file, write the rank information to it and close the file. The second
processtowrite(andthosesubsequent)shouldnotopenthefileuntiltheprevious
processhascloseditandshouldopenthefileinappendmode(seeSect.3.2).
InvestigatetheMPI::Wtimemethod(whichreturnsahigh-precisiontime,with
units of seconds, since some fixed point of time in the past) and use it to time the
program on each process. Use Reduce to compute the average duration of the
programoverallprocesses.
11.2 TheMPIstandardallowstheSendlibrarycalltobehaveeitherlikeabuffered
send or like a blocking send. In practice, all implementations of the MPI standard
treatSendthesameway.Ifthemessageissmallenough(andthereisspace),then
it is copied into a private buffer, and the MPI library is delegated to ensure that
themessageisdeliveredandtheprogramflowcontinues—similartoBsend.Ifthe
messageislarge(orifthatprivatebufferisfull),thendeliveryofthemessagemust
waituntiltherecipientisreadyforit,sotheprogramflowwaits—similartoSsend.
Write an MPI program where the master process has one loop which attempts
to send larger messages each time, and then prints how big the message was. We
suggestthatyoudoublethesizeofthemessageoneachiteration.Allotherprocesses
should do nothing. We suggest that you have an array of length at least a million
items,tomakesurethatthereisalwayssomethingtobesent.Eventuallyyoushould
observedeadlock.

222 11 AnIntroductiontoParallelProgrammingUsingMPI
11.3 WriteanMPIcodefollowingtheinstructionsbelow.Thiscodeistobeexecuted
with only two processes, and tests the use of MPI for transferring vectors of data
betweenprocesses.
• DefineanarrayV[10][10]tostoretheentriesofa10×10matrix.Theprocess
withrank0initialisesitscopyofthearrayto
V[row][col] = 10*row+col,
whiletheprocesswithrank1initialisesitscopyofthearrayto
V[row][col] = 100+10*row+col.
Thischoiceprovidesaconvenientwayofidentifying,fromthevalueoftheentry
of V,whereithascomefromintheoriginalarrays,andfromwhichprocess:the
three-digitvaluexyzwillberowy,columnzfromprocessx.
• Transferthedatastoredinthefirstrowofthematrixstoredbyprocess0intothe
correspondingpositionsinthematrixstoredbyprocess1.Thisinvolvesprocess0
sendingthedatausingSend,andprocess1receivingthedatausingRecv.One
wayofdoingthisonthesendingsideistofirstcopythedataintoabuffervectorof
suitablelengthandthensendthisvector.Similarly,onthereceivingsidereceive
itintoabuffervectorofsuitablelengthandthencopyitintotheappropriatepart
of V.
• PrintoutthecontentsofthearrayVstoredbyprocess1tocheckthatyouhave
correctlysentthedata.
• Repeat the transfer of the first row of data without copying into a buffer on the
senderorcopyingfromabufferonthereceiver.
• Repeatthetransferofdatasendingboththerowwithindex5andtherowwith
index8betweentheprocesses.
• Transferthefirstcolumnofdatabetweentheprocesses.
11.4 Theaimofthisexerciseistogetyoustartedonwritingalgorithmswithcol-
lective communications. The exercise asks you to develop a parallel algorithm for
calculatinganapproximationtoπ usingMonteCarlointegration.
Supposewewanttoapproximatetheintegral
b
f(x) dx,
(cid:13)
a
where f(x) is a continuous function defined at all points in the closed interval
a≤x≤b.IfX,i=0,1,2,...,N−1areindependentrandomvariablesuniformly
i
distributedontheintervala≤x≤b,whereNissufficientlylarge,thenMonteCarlo
integrationallowsustoapproximatetheintegralby
b b−a N−1
f(x) dx ≈ f(X ).
i
(cid:13) N
a (cid:2)i=0

11.7 Exercises 223
Notingthat
1
1
|     |     |     |     | π =4 |     | dx, |     |
| --- | --- | --- | --- | ---- | --- | --- | --- |
1+x2
(cid:13) 0
wewilluseMonteCarlointegrationtoestimateπthroughapproximatingtheintegral
ontheright-handsideofthisequation.Sequentialcodeforthisisgivenbelow.
Therandomnumbersaregeneratedthroughtherandomnumbergeneratorrand
(line 18), and seeded through srand (line 11). The random number generator
requires the cstdlib header to be included. The random number generator is
seededdifferentlyoneveryrun:inthisexerciseyouwilldevelopthiscodetorunon
adistributedmemorymachinethroughuseofMPIstatements,andyoudon’twant
asetofparallelcomputerstoallworkonthesamesetof“random”numbers.
✞
|     | // Compute | pi  | using | Monte | Carlo | integration |     |
| --- | ---------- | --- | ----- | ----- | ----- | ----------- | --- |
1
|     | // of 1/(1+x*x) |     | on the | interval |     | 0<=x<=1 |     |
| --- | --------------- | --- | ------ | -------- | --- | ------- | --- |
2
|     | #include | <cmath> |     |     |     |     |     |
| --- | -------- | ------- | --- | --- | --- | --- | --- |
3
|     | #include | <cstdlib> |     |     |     |     |     |
| --- | -------- | --------- | --- | --- | --- | --- | --- |
4
|     | #include | <iostream> |     |     |     |     |     |
| --- | -------- | ---------- | --- | --- | --- | --- | --- |
5
|     | #include | <unistd.h> |     | //For | getpid() |     |     |
| --- | -------- | ---------- | --- | ----- | -------- | --- | --- |
6
7
|     | int main(int |     | char* |         |     |     |     |
| --- | ------------ | --- | ----- | ------- | --- | --- | --- |
| 8   |              |     | argc, | argv[]) |     |     |     |
9 {
| 10  | // seed | random | number | generator |     |     |     |
| --- | ------- | ------ | ------ | --------- | --- | --- | --- |
11 srand(getpid());
|     | int n_points |     | = 1000000; |     |     |     |     |
| --- | ------------ | --- | ---------- | --- | --- | --- | --- |
12
13
|     | double | sum | = 0; |     |     |     |     |
| --- | ------ | --- | ---- | --- | --- | --- | --- |
14
|     | for (int | i=0; | i<n_points; |     | i++) |     |     |
| --- | -------- | ---- | ----------- | --- | ---- | --- | --- |
15
{
16
|     | //  | generate | a   | random | number | on the interval | 0<=x<=1 |
| --- | --- | -------- | --- | ------ | ------ | --------------- | ------- |
17
|     | double |     | x = rand()/((double)(RAND_MAX)); |     |     |     |     |
| --- | ------ | --- | -------------------------------- | --- | --- | --- | --- |
18
double
| 19  |     |     | f = 1.0/(1.0+x*x); |     |     |     |     |
| --- | --- | --- | ------------------ | --- | --- | --- | --- |
| 20  | sum | +=  | f;                 |     |     |     |     |
21 }
| 22  | double    | pi  | = 4.0*(sum/((double)(n_points))); |                  |     |         |     |
| --- | --------- | --- | --------------------------------- | ---------------- | --- | ------- | --- |
|     | std::cout |     | << "Pi                            | is approximately |     | " << pi |     |
23
|     |     |     | << " with | error | "   | << pi-M_PI | << "\n"; |
| --- | --- | --- | --------- | ----- | --- | ---------- | -------- |
24
25
|     | return | 0;  |     |     |     |     |     |
| --- | ------ | --- | --- | --- | --- | --- | --- |
26
}
27
Compiletheprogramanditshouldprintoutananswersimilarto
✞
|     | Pi is approximately |     |     | 3.141782 | with | error 0.000355562 |     |
| --- | ------------------- | --- | --- | -------- | ---- | ----------------- | --- |
Intheexercisesbelow,wewilladdMPIfunctioncallstoenablethiscodetobe
runinparallel.

224 11 AnIntroductiontoParallelProgrammingUsingMPI
1. AddMPIfunctioncallssothat n_pointsfunctionevaluationsareperformed
oneachoftheMPIprocesses.
2. Estimateπ throughreducingtheresultoffunctionevaluations(sum)fromeach
processortoaglobalsumonprocess0andscalingappropriately.Thisissimilar
tothesummationofaseriesinSect.11.5.1.
3. Amendthecodesothatprocess0selectsavalueof n_pointsforeachofthe
processesatthebeginningprogram.Passthesevaluesoutinascatteroperation.
11.5 Write classes to enable parallel linear algebra based on the row-wise matrix
partitioning—and the MpiVector class—given Sect. 11.5.2. Your goal for this
exerciseshouldbetoperformamatrix-vectormultiplicationinparallel.
1. AddasmuchfunctionalityandoverloadedoperatorsfromtheVectorclassgiven
inSect.10.1toMpiVectorasyouwish.Includeanyimprovementswhichyou
mayhavemadetoVectoraspartofExercise10.2.
2. TheMpiVectorconstructorcontainsanassertionthattheideallocalsize(num-
beroflocalvectorelements)shouldbenonzero.Thisguardsagainstthecasewhen
thenumberofprocessesislargerthanvecSize,inwhichcasethecurrentcode
in the constructor would assign the entire vector to the top-most process. Fix
thissituationsothatwhentherearefewervectorelementsthanprocessesevery
processisassignedeitheroneorzeroelements.
3. Makeitpossibletosetelementsonremoteprocesses.Asuitableschemewould
be to construct the vector in “set up” mode, during which requests to add val-
ues to remote elements are stored for later. A user is able to call a method
FinishSetUp which communicates the stored data between processes, puts
thevectorina“usable”modeandbarsfutureattemptstosetremotedata.
4. RemovesomeoftheredundantcalculationsperformedbyUpdateGlobalmen-
tionedinSect.10.1.
5. Write an output method which uses UpdateGlobal such that one process is
abletoprinttheentirevectortoscreenortofile.
6. The UpdateGlobal method relies on memory for the private data member
mGlobalData being allocated in the constructor. Since the mGlobalData
is only required for output or for a matrix-vector product, the memory for
mGlobalDataoughttobeallocatedondemand.Makesurethatthereisalsoa
methodforde-allocatingthismemorywhenitisnolongerneeded.
7. WriteanMpiMatrixclassusingtheschemeoutlinedinSect.10.1.Itisimpor-
tantthatyoutreatthepartitiononthenumberofmatrixrowsinexactlythesame
wayasthevectorpartition,sothatlocalsizesarealwayscompatible.Performa
matrix-vectormultiplicationinparallelandoutputthesolution.

12
DesigningObject-OrientedNumerical
Libraries
Having developed classes that underpin linear algebra operations in Chap. 10 we
nowdemonstratehowtoconstructobject-orientedlibrariesforscientificcomputing
applicationsthatutilisethefunctionalityoftheseclasses.Weusethespecificexample
ofdevelopingalibrarythatusesthefinitedifferencemethodtosolveboundaryvalue,
secondorderdifferentialequations.
We begin by developing a library for problems in one spatial dimension that
are linear, constant coefficient, second order, boundary value ordinary differential
equations.Thatis,equationsoftheform
d2u du
A +B +Cu = f(x), X < x < X , (12.1)
dx2 dx 0 1
where A ((cid:2)=0), B, C, X , X (with X < X ) are given constants, f(x) is a given
0 1 0 1
function, and suitable boundary conditions are given at x = X and x = X . We
0 1
choose to use the finite difference method to underpin the library as this method
for calculating the numerical solution of differential equations is the simplest to
explain, and a method that many readers will be familiar with. This allows us to
focusontheimplementationofthismethod,withoutaneedtoexplainmoretechnical
aspectsofthemethodfromamathematicalviewpointaswouldbethecasewithmore
sophisticatedtechniquessuchasthefiniteelementmethod.Havingdiscussedhow
to develop a library for this class of equations we conclude this chapter by briefly
touching upon how a library for computing the numerical solution of Poisson’s
equationmaybeconstructed.Foreaseofexplanation,welimitourselvestoatwo-
dimensionalrectangulardomain,andapplyonlyDirichletboundaryconditions,that
is,thefollowingpartialdifferentialequation:
∂2u ∂2u
+ = f(x,y), X < x < X , Y < y <Y ,
∂x2 ∂y2 0 1 0 1
©SpringerInternationalPublishingAG,partofSpringerNature2017 225
J.Pitt-FrancisandJ.Whiteley,GuidetoScientificComputing
inC++,UndergraduateTopicsinComputerScience,
https://doi.org/10.1007/978-3-319-73132-2_12

226 12 DesigningObject-OrientedNumericalLibraries
whereX ,X ,Y ,Y arespecifiedconstantswith X < X ,Y < Y , f(x,y)isa
0 1 0 1 0 1 0 1
specifiedfunction,anduisspecifiedateachpointontheboundary.Aspartialdiffer-
entialequationsmaybebeyondthemathematicalscopeofsomereaders,thissection
isentirelyself-contained:theremainderofthischaptermaybereadindependently
ofthematerialinSect.12.3.
Theemphasisofthischapteristoexplaintheobject-orientedstructurethatmay
be used when developing a library for solving differential equations. We describe
the functionality required from the classes that we use, but give very little detail
ontheimplementationoftheseclasses:implementationoftheideaspresenteduses
C++ techniques introduced in earlier chapters, and is the focus of the exercises at
the end of the chapter. The mathematical theory of the finite difference method is
notdiscussedinmuchdetail.Readersunfamiliarwiththistechniqueshouldconsult
asuitabletextsuchasIserles[1],Kreyszig[2],orSüliandMayers[3].
12.1 DevelopingtheLibraryforOrdinaryDifferentialEquations
Whendevelopingsoftware,itisusefultoknowpreciselywhattypeofproblemsare
tobesolvedusingthissoftware.Wethereforebeginbydefiningtwoexemplarmodel
problems that contain all features commonly seen in linear, constant coefficient,
boundary value ordinary differential equations. We then explain the mathematical
theorybehindthefinitedifferencemethodfortheseboundaryvalueproblems,before
concludingthissectionbyexplaininghowtoutilisethetheorywhendevelopingthe
library.
12.1.1 ModelProblems
We use two example model problems to motivate the development of the library.
Thesemodelproblemshaveaknownsolutionandcanthereforebeusedtogivesome
verificationofthecorrectnessoftheoutputofthelibrary.Thefirstmodelproblem
isverysimple,whilstthesecondmodelproblemismorecomplicatedandusesall
thefeaturesthatwewillincludeinourlibraryforordinarydifferentialequations.
ModelProblem1. The first model problem is the following boundary value
problem:
d2u
=−1, 0< x <1,
dx2
u =0, atx =0,
u =0, atx =1.

12.1 DevelopingtheLibraryforOrdinaryDifferentialEquations 227
Thisproblemhassolution
1
| u(x)= | x(1−x). |     |
| ----- | ------- | --- |
2
Thisisaverysimpleproblem—wehavetheminimalnumberoftermsinthedif-
ferentialequation,andonlyverysimpleDirichlet(i.e.,non-derivative)boundary
conditions.
ModelProblem2. Thesecondmodelproblemisamorecomplicateddifferential
equation,withoneDirichletboundarycondition,andoneNeumann(derivative)
boundary condition. This model problem satisfies the following equation and
boundaryconditions:
d2u du
| +3 −4u | =34sin x, | 0< x <π, |
| ------ | --------- | -------- |
dx2 dx
du
|     | =−5, atx | =0, |
| --- | -------- | --- |
dx
|     | u =4, atx | =π. |
| --- | --------- | --- |
Thisdifferentialequationhassolution
4ex +e−4x
| u = | −5sinx | −3 cos x. |
| --- | ------ | --------- |
4eπ +e−4π
12.1.2 FiniteDifferenceApproximationtoDerivatives
Wenowdefinethenotationusedforthefinitedifferenceapproximationstothefirst
and second derivative of a function of one variable. Where we define a derivative
at N distinct points, we will denote these points using subscripts starting at 1 and
ending at N for consistency with the overloaded parenthesis operators used when
writingtheclassesofvectorsandmatricesdevelopedinChap.10.
LetussupposethatafunctionuisdefinedontheintervalX 0 ≤ x ≤ X 1 .Suppose
furtherthatthereisacollectionofpointsx,i =1,2,...,N,thatsatisfy
i
| x = | X ,         |     |
| --- | ----------- | --- |
| 1   | 0           |     |
| x < | x < x <···< | x , |
| 1   | 2 3         | N   |
| x = | X .         |     |
| N   | 1           |     |
Wewillrefertothepointsx 1 ,x 2 ,...,x N asthefinitedifferencegrid,andtheindi-
vidualpointsasnodes.Thenodesx andx arereferredtoastheboundarynodesof
1 N

| 228 |     |     |     | 12  | DesigningObject-OrientedNumericalLibraries |     |     |     |
| --- | --- | --- | --- | --- | ------------------------------------------ | --- | --- | --- |
ui+1
ui
ui−1
|     |     |     | xi−1 | xi  |     | xi+1 |     |     |
| --- | --- | --- | ---- | --- | --- | ---- | --- | --- |
Fig.12.1 Backward finite difference (broken line), forward finite difference (dotted line), and
central finite difference (dot-dashed line) approximations to the first derivative of the function
| representedbythesolidlineatthepointx |     |     |     | =xi |     |     |     |     |
| ------------------------------------ | --- | --- | --- | --- | --- | --- | --- | --- |
Table12.1 Numericalfinitedifferenceapproximationstothefirstderivativeatx =xi
| Type     |     | Formula                 |     |        |     | Range        |     |     |
| -------- | --- | ----------------------- | --- | ------ | --- | ------------ | --- | --- |
| Backward |     | (ui −ui−1)/(xi          |     | −xi−1) |     | i =2,3,...,N |     |     |
| Forward  |     | (ui+1−ui)/(xi+1−xi)     |     |        |     | i =1,2,...,N | −1  |     |
| Central  |     | (ui+1−ui−1)/(xi+1−xi−1) |     |        |     | i =2,3,...,N | −1  |     |
thefinitedifferencegrid,whilstallotherpointsarereferredtoasinteriornodes.We
mayevaluatethefunctionuateachnodex i ,i =1,2,...,N,whichwedenotebyu i :
|     |     |     |     | u i | =u(x i ). |     |     |     |
| --- | --- | --- | --- | --- | --------- | --- | --- | --- |
Thefirstderivativeofafunctionatagivennodemaybethoughtofasbeingthe
“slope”ofthefunctionatthatpoint:i.e.theratioofthechangeinutothechange
inx.InFig.12.1wemotivatethreedifferentapproximationstothefirstderivative
atx = x
i whicharedefinedinTable12.1.Notethatnotalloftheseapproximations
aredefinedattheboundarynodesofthefinitedifferencegrid,thatis,atx = x and
1
x = x .
N
Anumericalapproximationtothesecondderivative,notdefinedattheboundary
| nodesofthefinitedifferencegrid,x |     |     |             | =     | x andx | = x ,is        |     |     |
| -------------------------------- | --- | --- | ----------- | ----- | ------ | -------------- | --- | --- |
|                                  |     |     |             |       | 1      | N              |     |     |
|                                  |     | 2   | u i+1 −u    | i u i | −u i−1 |                |     |     |
|                                  |     |     |             | −     |        | , i =2,3,...,N |     | −1, |
|                                  | x   | −x  | (cid:2)x −x | x     | −x     | (cid:3)        |     |     |
|                                  | i+1 | i−1 | i+1         | i i   | i−1    |                |     |     |

12.1 DevelopingtheLibraryforOrdinaryDifferentialEquations 229
whichmaybewritten
|     | α i u i−1 +β | i u i +γ | i u i+1 , | i =2,3,...,N |     | −1, | (12.2) |
| --- | ------------ | -------- | --------- | ------------ | --- | --- | ------ |
where
2
|     |     | α = |     |     | ,   |     | (12.3) |
| --- | --- | --- | --- | --- | --- | --- | ------ |
i
|     |     | (x  | i+1 −x | i−1 )(x i −x | i−1 ) |     |     |
| --- | --- | --- | ------ | ------------ | ----- | --- | --- |
2
|     |     | β =− |     |     | ,   |     | (12.4) |
| --- | --- | ---- | --- | --- | --- | --- | ------ |
i
|     |     |     | (x i+1 −x | i )(x i −x | i−1 ) |     |     |
| --- | --- | --- | --------- | ---------- | ----- | --- | --- |
2
|     |     | γ = |     |         | .   |     |        |
| --- | --- | --- | --- | ------- | --- | --- | ------ |
|     |     | i   |     |         |     |     | (12.5) |
|     |     | (x  | −x  | )(x −x  | )   |     |        |
|     |     |     | i+1 | i−1 i+1 | i   |     |        |
This approximation to the second derivative follows from Taylor series expan-
sions:see,forexample,Kreyszig[2].Wenotethatwhenthereisauniformspacing
between the nodes, that is, x i+1 −x i = h,i = 1,2,3,...,N −1, for some con-
stanth,thentheapproximationtothesecondderivativegiveninEq.(12.2)maybe
simplifiedtothemorefamiliarformula
|     |     | u   | −2u | +u    |     |     |     |
| --- | --- | --- | --- | ----- | --- | --- | --- |
|     |     |     | i+1 | i i−1 |     |     |     |
.
h2
WhendevelopingourclasseswewillusetheapproximationgiveninEq.(12.2)
asitallowsmoregenerality.
12.1.3 ApplicationofFiniteDifferenceMethodstoBoundaryValue
Problems
WenowexplainhowthefinitedifferenceapproximationsgiveninSect.12.1.2maybe
usedtocalculateanumericalsolutionofthemodelproblemsgiveninSect.12.1.1.For
bothproblemsweusethefinitedifferencegridwithNnodesdescribedinSect.12.1.2.
TherearethereforeN unknownvaluesofu i todetermine.Wewilldemonstratehow
tosetupalinearsystemofsizeN thatallowsustocalculatethesevalues.
12.1.3.1 ModelProblem1
Substituting the approximation to second derivative given by Eq. (12.2) into the
differentialequationattheinteriornodesofthefinitedifferencegridyields
|       | +β    | +γ      | =−1, | =2,3,...,N |     | −1. |        |
| ----- | ----- | ------- | ---- | ---------- | --- | --- | ------ |
| α i u | i−1 i | u i i u | i+1  | i          |     |     | (12.6) |
Theboundaryconditionsimplythat
|     |     |     | u 1 =u | N =0. |     |     | (12.7) |
| --- | --- | --- | ------ | ----- | --- | --- | ------ |

| 230 |     |     | 12 DesigningObject-OrientedNumericalLibraries |     |     |     |     |
| --- | --- | --- | --------------------------------------------- | --- | --- | --- | --- |
Equations (12.6) and (12.7) may be combined and written as the linear system
Au=b,whereAisaN matrix,anduandbarevectorsoflengthN.Theentries
×N
of A,uandbarethengivenby
|     |     | 1 0   | 0 ... 0   | 0    | 0      |     |     |
| --- | --- | ----- | --------- | ---- | ------ | --- | --- |
|     |     | ⎛α β  | γ ... 0   | 0    | 0      | ⎞   |     |
|     |     | 2 2   | 2         |      |        |     |     |
|     |     | 0 α 3 | β 3 ... 0 | 0    | 0      |     |     |
|     |     | ⎜     |           |      |        | ⎟   |     |
|     | A=⎜ | 0 0   | α ... 0   | 0    | 0      | ⎟,  |     |
|     |     | ⎜     | 4         |      |        | ⎟   |     |
|     |     | . .   | . ... .   | .    | .      |     |     |
|     |     | ⎜ . . | . .       | .    | .      | ⎟   |     |
|     |     | ⎜ . . | . .       | .    | .      | ⎟   |     |
|     |     | ⎜     |           |      |        | ⎟   |     |
|     |     | ⎜ 0 0 | 0 ...α    | β    | γ N−1⎟ |     |     |
|     |     | ⎜     | N−1       | N−1  |        | ⎟   |     |
|     |     | 0 0   | 0 ... 0   | 0    | 1      |     |     |
|     |     | ⎜     |           |      |        | ⎟   |     |
|     |     | ⎝     |           |      |        | ⎠   |     |
|     |     |       | u 1       |      | 0      |     |     |
|     |     | ⎛     | u ⎞       | ⎛−1⎞ |        |     |     |
2
|     |     |     | u   |     | −1  |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- |
3
|     |     | ⎜   | ⎟     | ⎜    | ⎟     |     |     |
| --- | --- | --- | ----- | ---- | ----- | --- | --- |
|     |     | ⎜   | u 4 ⎟ | ⎜−1⎟ |       |     |     |
|     |     | u=⎜ | ⎟     | b=⎜  | ⎟     |     |     |
|     |     | ⎜   | . ⎟ , | ⎜    | . ⎟ . |     |     |
|     |     |     | . .   |      | . .   |     |     |
|     |     | ⎜   | ⎟     | ⎜    | ⎟     |     |     |
|     |     | ⎜   | ⎟     | ⎜    | ⎟     |     |     |
|     |     | ⎜u  | N−2⎟  | ⎜−1⎟ |       |     |     |
|     |     | ⎜   | ⎟     | ⎜    | ⎟     |     |     |
|     |     | ⎜u  | N−1⎟  | ⎜−1⎟ |       |     |     |
|     |     | ⎜   | ⎟     | ⎜    | ⎟     |     |     |
|     |     | ⎜   | u N ⎟ | ⎜    | 0 ⎟   |     |     |
|     |     | ⎝   | ⎠     | ⎝    | ⎠     |     |     |
Nowthatwehavewrittenthemodelproblemasalinearsystem,wemayusethe
methods associated with the vector, matrix and linear system classes to solve this
| systemandcalculatethevaluesofu |     |     | ,i =1,2,...,N. |     |     |     |     |
| ------------------------------ | --- | --- | -------------- | --- | --- | --- | --- |
i
| 12.1.3.2 ModelProblem2 |     |     |     |     |     |     |     |
| ---------------------- | --- | --- | --- | --- | --- | --- | --- |
We now write model problem 2 in matrix form. At the interior nodes of the finite
differencegrid,weuseacentralapproximationtothefirstderivative,asdefinedin
Table12.1,andtheapproximationtothesecondderivativegivenbyEq.(12.2).The
differentialequationmaythenbeapproximatedby,fori =2,3,...,N−1,
| 3            |         |           |          |       | 3   |               |     |
| ------------ | ------- | --------- | -------- | ----- | --- | ------------- | --- |
| α i −        | u       | i−1 +(β i | −4)u i + | γ i + |     | u i+1 =34sinx | i . |
| (cid:2) x −x | (cid:3) |           | (cid:2)  | x     | −x  | (cid:3)       |     |
| i+1          | i−1     |           |          |       | i+1 | i−1           |     |
(12.8)
The boundary condition at x = π may be implemented in the same way as the
Dirichletboundaryconditionsinmodelproblem1,thatis,wewrite
|     |     |     | u =4. |     |     |     | (12.9) |
| --- | --- | --- | ----- | --- | --- | --- | ------ |
N
TheNeumann(derivative)boundaryconditionatx =0requiresabitmorethought.
WeseefromTable12.1thattheonlyoneoftheseapproximationstothefirstderivative

12.1 DevelopingtheLibraryforOrdinaryDifferentialEquations 231
that is defined at the node x is the forward approximation. We therefore use this
1
approximationandimplementthisboundaryconditionbysetting
1 1
− u + u =−5. (12.10)
1 2
x −x x −x
2 1 2 1
Defining,fori =2,3,...,N −1,thequantitiesαˆ ,βˆ ,γˆ:
i i i
3
αˆ =α − ,
i i
x −x
i+1 i−1
βˆ =β −4,
i i
3
γˆ =γ + ,
i i
x −x
i+1 i−1
wemaywriteEqs.(12.8)–(12.10)asthelinearsystemAu=b,wheretheentriesof
Aandbaregivenby
−1/(x −x )1/(x −x ) 0 ... 0 0 0
2 1 2 1
⎛ αˆ 2 βˆ 2 γˆ 2 ... 0 0 0 ⎞
0 αˆ βˆ ... 0 0 0
3 3
⎜ ⎟
A=⎜ 0 0 αˆ 4 ... 0 0 0 ⎟,
⎜ ⎟
⎜
⎜
. .
.
. .
.
. .
.
... . .
.
. .
.
. .
.
⎟
⎟
⎜ ⎟
⎜ 0 0 0 ...αˆ βˆ γˆ ⎟
⎜ N−1 N−1 N−1⎟
⎜ 0 0 0 ... 0 0 1 ⎟
⎝ ⎠
u −5
1
⎛ u 2 ⎞ ⎛ 34sin(x 2 ) ⎞
u 34sin(x )
3 3
⎜ ⎟ ⎜ ⎟
⎜ u 4 ⎟ ⎜ 34sin(x 4 ) ⎟
u=⎜ ⎜ . . ⎟ ⎟ , b=⎜ ⎜ . . ⎟ ⎟ .
⎜ . ⎟ ⎜ . ⎟
⎜ ⎟ ⎜ ⎟
⎜u N−2⎟ ⎜34sin(x N−2 )⎟
⎜ ⎟ ⎜ ⎟
⎜u N−1⎟ ⎜34sin(x N−1 )⎟
⎜ ⎟ ⎜ ⎟
⎜ u N ⎟ ⎜ 4 ⎟
⎝ ⎠ ⎝ ⎠
Aswithmodelproblem1wemaynowusethelinearsystemclassalreadywritten
tosolvethislinearsystem.
12.1.4 ConcludingRemarksonBoundaryValueProblems
inOneDimension
Wehavenowexplainedhowtowritethefinitedifferenceapproximationtoalinear,
constantcoefficient,secondorderboundaryvalueprobleminmatrixnotation,thus
allowingtheclassesofvectors,matricesandlinearsystemsdevelopedinChap.10to

232 12 DesigningObject-OrientedNumericalLibraries
beusedtocalculatethefinitedifferenceapproximation.Inthenextsection,wewill
describe an object-oriented structure that allows a very general library for solving
suchproblemstobedeveloped.Weshould,however,discussthelimitationsofthis
library.
Supposewewanttosolvethefollowingequation:
d2u
+u =0, 0< x <2π,
dx2
u =0, atx =0,
u =0, atx =2π.
Thishassolutionu=sinx,anditmaybethoughtthatthelibrarywearewritingmay
beusedtosolvethisproblem.Howeveru=Asinx,whereAisanyconstantvalue,
satisfiesthedifferentialequationandbothboundaryconditions:thatis,thesolution
isnotunique.
Theequationabovehasanon-uniquesolution.Itisalsopossiblethatanequation
oftheformEq.(12.1)hasnosolution.Forexample,considertheequation
d2u
+u =0, 0< x <2π,
dx2
u =1, atx =0,
u =4, atx =2π.
Itcanbeshownthatthisequation,togetherwiththeseboundaryconditions,hasno
solution.
Proof of existence and uniqueness of solutions to boundary value differential
equationsisbeyondthescopeofthisbook.Nevertheless,thereadershouldbeaware
whenusingthislibrarythatsomeequationshavesolutionsthatarenotunique,and
solutionsdonotexistforotherequations.
12.2 DesigningaLibraryforSolvingBoundaryValueProblems
Tocalculateanumericalsolutionoftheboundaryvalueordinarydifferentialequa-
tionsdiscussedabove,wemayspecifytheproblembyspecifyingindividually:(i)the
ordinary differential equation and the interval on which the solution is valid; (ii)
theboundaryconditions;and(iii)thefinitedifferencegrid.Classeswillbewritten
forthesethreeentities,calledSecondOrderOde,BoundaryConditionsand
FiniteDifferenceGrid.ThesewillthenallbemembersofaclassBvpOde
that encapsulates a boundary value ordinary differential equation, and contains all
thefunctionalityrequiredforthenumericalsolutionofthedifferentialequation.We
nowdiscusstheindividualclasses.

12.2 DesigningaLibraryforSolvingBoundaryValueProblems 233
12.2.1 TheClassSecondOrderOde
Tospecifytheordinarydifferentialequation,weneedtospecifythecoefficientson
theleft-handsideofEq.(12.1),thefunctionontheright-handsideofthisequation,
andtheintervalonwhichtheequationisvalid.Thesewillallbemademembersof
theclassSecondOrderOde.Toensurethatallofthesearespecified,wewillonly
allowausertouseaconstructorthatspecifiesallofthesemembers.Intheexercises
attheendofthischapter,wewilldiscussdevelopingotherconstructors.Aheader
fileforthisclassisgivenbelow.
Listing12.1 SecondOrderOde.hpp
✞
#ifndef SECONDORDERODEHEADERDEF
1
#define SECONDORDERODEHEADERDEF
2
3
class SecondOrderOde
4
{
5
// The boundary value class is able to
6
// access the coefficients etc. of this equation
7
friend class BvpOde;
8
private:
9
// Coefficients on LHS of ODE
10
double mCoeffOfUxx;
11
double mCoeffOfUx;
12
double mCoeffOfU;
13
// Function on RHS of ODE
14
15
double (*mpRhsFunc)(double x);
16
// Interval for domain
17
double mXmin;
18
double mXmax;
19
public:
20
SecondOrderOde(double coeffUxx, double coeffUx,
21
double coeffU,
22
23
double (*righthandSide)(double),
double xMinimum, double xMaximum)
24
{
25
mCoeffOfUxx = coeffUxx;
26
mCoeffOfUx = coeffUx;
27
mCoeffOfU = coeffU;
28
mpRhsFunc = righthandSide;
29
mXmin = xMinimum;
30
mXmax = xMaximum;
31
}
32
};
33
34
#endif
35

| 234    |                            |     |     | 12 DesigningObject-OrientedNumericalLibraries |     |     |
| ------ | -------------------------- | --- | --- | --------------------------------------------- | --- | --- |
| 12.2.2 | TheClassBoundaryConditions |     |     |                                               |     |     |
Ontheleftboundary,wemayspecifyeitherthevalueofthefunctionu(aleftDirichlet
boundarycondition),orthederivativedu/dx(aleftNeumannboundarycondition).
Itisimportanttonotethattheremustbeeither aleftDirichletboundarycondition
or a left Neumann boundary condition: we must have one of these boundary con-
ditions but we cannot have both. Similarly, on the right boundary we must have
eitherarightDirichletboundaryconditionorarightNeumannboundarycondition.
In the class BoundaryConditions, we will declare class members mLhsBc-
| IsDirichlet, |     | mRhsBcIsDirichlet, |     | mLhsBcIsNeumann, |     | mRhsBcIs- |
| ------------ | --- | ------------------ | --- | ---------------- | --- | --------- |
NeumannthatareBooleanvariables,thusallowingustocheckthatwehavepre-
ciselyoneboundaryconditionontheleft–handboundary,andpreciselyonebound-
ary condition on the right boundary. The default constructor should be overridden
tosetthesevariablestothevalue“false”intheabsenceofanyotherinstruction.
Whatevertypeofboundaryconditionsareset,valuesfortheseareneededateither
|     |                  |       |               |            | mLhsBcValue | mRhs- |
| --- | ---------------- | ----- | ------------- | ---------- | ----------- | ----- |
| end | of the interval. | These | class members | are called |             | and   |
BcValue.Finally,werequiremethodstosetthesevalues,andsettheappropriate
Booleanvariabletothevalue“true”.ThemethodSetLhsDirichletBctakesa
doubleprecisionfloatingpointvariableasinput.ItsetsthemembervariablemLhs-
BcValuetothisinput,andsetstheBooleanvariablemLhsBcIsDirichletto
thevaluetrue.ThemethodsSetRhsDirichletBc,SetLhsNeumannBcand
SetRhsNeumannBcperformsimilartasks.
TheheaderfileBoundaryConditions.hppisshownbelow.
| Listing12.2 | BoundaryConditions.hpp |     |     |     |     |     |
| ----------- | ---------------------- | --- | --- | --- | --- | --- |
✞
| 1   | #ifndef BOUNDARYCONDITIONSHEADERDEF |     |     |     |     |     |
| --- | ----------------------------------- | --- | --- | --- | --- | --- |
|     | #define BOUNDARYCONDITIONSHEADERDEF |     |     |     |     |     |
2
3
|     | class BoundaryConditions |     |     |     |     |     |
| --- | ------------------------ | --- | --- | --- | --- | --- |
4
{
5
public:
6
|     | // The | boundary | value class | is able to |     |     |
| --- | ------ | -------- | ----------- | ---------- | --- | --- |
7
|     | // access | the | coefficients | etc. of this | equation |     |
| --- | --------- | --- | ------------ | ------------ | -------- | --- |
8
| 9   | friend | class | BvpOde; |     |     |     |
| --- | ------ | ----- | ------- | --- | --- | --- |
10 private:
| 11  | bool mLhsBcIsDirichlet; |     |     |     |     |     |
| --- | ----------------------- | --- | --- | --- | --- | --- |
|     | bool mRhsBcIsDirichlet; |     |     |     |     |     |
12
|     | bool mLhsBcIsNeumann; |     |     |     |     |     |
| --- | --------------------- | --- | --- | --- | --- | --- |
13
|     | bool mRhsBcIsNeumann; |     |     |     |     |     |
| --- | --------------------- | --- | --- | --- | --- | --- |
14
|     | double | mLhsBcValue; |     |     |     |     |
| --- | ------ | ------------ | --- | --- | --- | --- |
15
|     | double | mRhsBcValue; |     |     |     |     |
| --- | ------ | ------------ | --- | --- | --- | --- |
16
public:
17
BoundaryConditions();
18
|     | void SetLhsDirichletBc(double |     |     |                 |     |     |
| --- | ----------------------------- | --- | --- | --------------- | --- | --- |
| 19  |                               |     |     | lhsValue);      |     |     |
| 20  | void SetRhsDirichletBc(double |     |     | rhsValue);      |     |     |
| 21  | void SetLhsNeumannBc(double   |     |     | lhsDerivValue); |     |     |
| 22  | void SetRhsNeumannBc(double   |     |     | rhsDerivValue); |     |     |
};
23
24
#endif
25

12.2 DesigningaLibraryforSolvingBoundaryValueProblems 235
12.2.3 TheClassFiniteDifferenceGrid
The finite difference grid requires access to the interval on which the equation is
valid, given in the class SecondOrderOde. To create a uniform grid, we also
need specification of the number of nodes. To ensure that the number of nodes is
specified, we only allow use of a constructor that sets this through a constructor
argument. A vector of uniformly spaced nodes can then be generated. We create
a class Node that stores the coordinate of each node. Header files for the classes
FiniteDifferenceGridandNodearegivenbelow.
| Listing12.3 | Node.hpp |     |     |
| ----------- | -------- | --- | --- |
✞
| #ifndef | NODEHEADERDEF |     |     |
| ------- | ------------- | --- | --- |
1
| #define | NODEHEADERDEF |     |     |
| ------- | ------------- | --- | --- |
2
3
| 4 class Node |     |     |     |
| ------------ | --- | --- | --- |
5 {
6 public:
| double | coordinate; |     |     |
| ------ | ----------- | --- | --- |
7
};
8
9
#endif
10
| Listing12.4 | FiniteDifferenceGrid.hpp |     |     |
| ----------- | ------------------------ | --- | --- |
✞
| #ifndef | FINITEDIFFERENCEGRIDHEADERDEF |     |     |
| ------- | ----------------------------- | --- | --- |
1
| #define | FINITEDIFFERENCEGRIDHEADERDEF |     |     |
| ------- | ----------------------------- | --- | --- |
2
| #include | <vector> |     |     |
| -------- | -------- | --- | --- |
3
| #include | "Node.hpp" |     |     |
| -------- | ---------- | --- | --- |
4
5
| class FiniteDifferenceGrid |     |     |     |
| -------------------------- | --- | --- | --- |
6
7 {
8 public:
| 9 // The     | boundary value | class is able | to  |
| ------------ | -------------- | ------------- | --- |
| 10 // access | the nodes      |               |     |
| friend       | class BvpOde;  |               |     |
11
private:
12
| std::vector<Node> | mNodes; |     |     |
| ----------------- | ------- | --- | --- |
13
public:
14
| FiniteDifferenceGrid(int |     | numNodes, | double xMin, |
| ------------------------ | --- | --------- | ------------ |
15
double xMax);
16
};
17
18
19 #endif

236 12 DesigningObject-OrientedNumericalLibraries
12.2.4 TheClassBvpOde
NowwehavedescribedtheclassesSecondOrderOde,BoundaryConditions
andFiniteDifferenceGridwemaydeveloptheclassBvpOde.Weonlyallow
thisclasstobeinstantiatedthroughaconstructorthatspecifies:(i)aninstanceofthe
classSecondOrderOde;(ii)aninstanceoftheclassBoundaryConditions;
and(iii)thenumberofnodestobeusedinthefinitedifferencegrid.Oncetheseentities
havebeenspecifiedwethencreateaninstanceoftheclassFiniteDifference-
Grid,avectorthatwillcontainthesolution,avectorthatwillbeontheright–hand
sideofalinearsystem,andamatrixassociatedwiththelinearsystem.Methodswill
thenbewrittentopopulateboththematrixandthevectorassociatedwiththelinear
system,andtoapplytheboundaryconditions,asdiscussedinSect.12.1.3.Finally,
methodswillbewrittentosolvethelinearsystem,andtowritethesolutiontofile.
AheaderfileBvpOde.hppisgivenbelow.
Listing12.5 BvpOde.hpp
✞
#ifndef BVPODEHEADERDEF
1
#define BVPODEHEADERDEF
2
3
#include <string>
4
#include "Matrix.hpp"
5
#include "Vector.hpp"
6
#include "LinearSystem.hpp"
7
#include "FiniteDifferenceGrid.hpp"
8
#include "SecondOrderOde.hpp"
9
#include "BoundaryConditions.hpp"
10
11
class BvpOde
12
{
13
private:
14
// Only allow instance to be created from a PDE, boundary
15
// conditions, and number of nodes in the mesh (the
16
// copy constructor is private)
17
BvpOde(const BvpOde& otherBvpOde){}
18
19
// Number of nodes in the grid, and a pointer to a grid
20
int mNumNodes;
21
22
FiniteDifferenceGrid* mpGrid;
23
// Pointer to instance of an ODE
24
25
SecondOrderOde* mpOde;
26
// Pointer to an instance of boundary conditions
27
28
BoundaryConditions* mpBconds;
29
// Vector for solution to unknowns
30
31
Vector* mpSolVec;
32
// Right-hand side vector
33
34
Vector* mpRhsVec;

12.2 DesigningaLibraryforSolvingBoundaryValueProblems 237
35
|     | //  | Matrix | for linear | system |     |     |     |     |
| --- | --- | ------ | ---------- | ------ | --- | --- | --- | --- |
36
| 37  | Matrix* |     | mpLhsMat; |     |     |     |     |     |
| --- | ------- | --- | --------- | --- | --- | --- | --- | --- |
38
| 39  | //            | Linear | system that     | arises |     |     |     |     |
| --- | ------------- | ------ | --------------- | ------ | --- | --- | --- | --- |
|     | LinearSystem* |        | mpLinearSystem; |        |     |     |     |     |
40
41
|     | //  | Allow | user to specify |     | the output | file | or  |     |
| --- | --- | ----- | --------------- | --- | ---------- | ---- | --- | --- |
42
|     | //  | use a | default name |     |     |     |     |     |
| --- | --- | ----- | ------------ | --- | --- | --- | --- | --- |
43
|     | std::string |     | mFilename; |     |     |     |     |     |
| --- | ----------- | --- | ---------- | --- | --- | --- | --- | --- |
44
45
46
| 47  | //   | Methods                    | for setting | up  | linear | system and | solving | it  |
| --- | ---- | -------------------------- | ----------- | --- | ------ | ---------- | ------- | --- |
| 48  | void | PopulateMatrix();          |             |     |        |            |         |     |
| 49  | void | PopulateVector();          |             |     |        |            |         |     |
| 50  | void | ApplyBoundaryConditions(); |             |     |        |            |         |     |
51
public:
52
|     | //  | Sole | constructor |     |     |     |     |     |
| --- | --- | ---- | ----------- | --- | --- | --- | --- | --- |
53
|     | BvpOde(SecondOrderOde* |     |     | pOde, | BoundaryConditions* |     |     | pBcs, |
| --- | ---------------------- | --- | --- | ----- | ------------------- | --- | --- | ----- |
54
|     |     |     |     |     | int numNodes); |     |     |     |
| --- | --- | --- | --- | --- | -------------- | --- | --- | --- |
55
56
|     | //  | As memory | is dynamically |     | allocated | the | destructor |     |
| --- | --- | --------- | -------------- | --- | --------- | --- | ---------- | --- |
57
| 58  | //  | is overridden |     |     |     |     |     |     |
| --- | --- | ------------- | --- | --- | --- | --- | --- | --- |
59 ~BvpOde();
60
| 61  | void | SetFilename(const |     | std::string& |     | name) |     |     |
| --- | ---- | ----------------- | --- | ------------ | --- | ----- | --- | --- |
{
62
|     |     | mFilename | = name; |     |     |     |     |     |
| --- | --- | --------- | ------- | --- | --- | --- | --- | --- |
63
}
64
|     | void | Solve(); |     |     |     |     |     |     |
| --- | ---- | -------- | --- | --- | --- | --- | --- | --- |
65
|     | void | WriteSolutionFile(); |     |     |     |     |     |     |
| --- | ---- | -------------------- | --- | --- | --- | --- | --- | --- |
66
};
67
68
69 #endif
| 12.2.5 |     | UsingtheClassBvpOde |     |     |     |     |     |     |
| ------ | --- | ------------------- | --- | --- | --- | --- | --- | --- |
Whenusingtheclassesintroducedabove,wewouldliketowritecodesuchasthat
in Listing 12.6 to calculate a numerical solution of the model problems given in
Sect.12.1.1.Thiswillformthebasisfortheexercisesattheendofthischapter.

| 238 |     | 12  | DesigningObject-OrientedNumericalLibraries |     |
| --- | --- | --- | ------------------------------------------ | --- |
Driver.cppfortestingthecodeinSect.12.2onthemodelproblemsdis-
Listing12.6
cussedinSect.12.1.1
✞
| 1 #include <cmath>      |     |     |     |     |
| ----------------------- | --- | --- | --- | --- |
| 2 #include <string>     |     |     |     |     |
| 3 #include "BvpOde.hpp" |     |     |     |     |
4
| double model_prob_1_rhs(double |     |     | x){return | 1.0;} |
| ------------------------------ | --- | --- | --------- | ----- |
5
| double model_prob_2_rhs(double |     |     | x){return | 34.0*sin(x);} |
| ------------------------------ | --- | --- | --------- | ------------- |
6
7
| int main(int | argc, char* | argv[]) |     |     |
| ------------ | ----------- | ------- | --- | --- |
8
{
9
| SecondOrderOde | ode_mp1(-1.0, |     | 0.0, 0.0, |     |
| -------------- | ------------- | --- | --------- | --- |
10
| 11                    |     | model_prob_1_rhs, |       |     |
| --------------------- | --- | ----------------- | ----- | --- |
| 12                    |     | 0.0,              | 1.0); |     |
| 13 BoundaryConditions |     | bc_mp1;           |       |     |
14 bc_mp1.SetLhsDirichletBc(0.0);
bc_mp1.SetRhsDirichletBc(0.0);
15
16
| BvpOde | bvpode_mp1(&ode_mp1, |     | &bc_mp1, | 101); |
| ------ | -------------------- | --- | -------- | ----- |
17
bvpode_mp1.SetFilename("model_problem_results1.dat");
18
bvpode_mp1.Solve();
19
20
| SecondOrderOde | ode_mp2(1.0, |     | 3.0, -4.0, |     |
| -------------- | ------------ | --- | ---------- | --- |
21
| 22                    |     | model_prob_2_rhs, |        |     |
| --------------------- | --- | ----------------- | ------ | --- |
| 23                    |     | 0.0,              | M_PI); |     |
| 24 BoundaryConditions |     | bc_mp2;           |        |     |
25 bc_mp2.SetLhsNeumannBc(-5.0);
bc_mp2.SetRhsDirichletBc(4.0);
26
27
| BvpOde | bvpode_mp2(&ode_mp2, |     | &bc_mp2, | 1001); |
| ------ | -------------------- | --- | -------- | ------ |
28
bvpode_mp2.SetFilename("model_problem_results2.dat");
29
bvpode_mp2.Solve();
30
31
| return | 0;  |     |     |     |
| ------ | --- | --- | --- | --- |
32
33 }
12.3 ExtendingtheLibrarytoTwoDimensions
Inthissection,weassumethatthereaderisfamiliarwithpartialdifferentiation:that
is,ifadifferentiablefunctionu(x,y)dependsonthevariablesx andythenpartial
derivativeswithrespecttobothxandymaybecalculated.Readersunfamiliarwith
partialdifferentialequationsmaywishtoskipthissectionorconsultasuitabletext
onmathematicalmethodssuchasKreyszig[2].
Intheprevioussection,wedesignedalibraryforcalculatingthefinitedifference
solutionoflinear,constantcoefficient,secondorder,boundaryvalueordinarydiffer-
entialequations.Wewillnowexplainhowalibrarymaybedevelopedforthefinite

| 12.3 ExtendingtheLibrarytoTwoDimensions |     |     |     |     | 239 |
| --------------------------------------- | --- | --- | --- | --- | --- |
differencesolutionofPoisson’sequationintwospatialdimensionsonarectangular
domain,withDirichletboundaryconditions,thatis,equationsoftheform
∂2u ∂2u
| +   | = f(x,y), | X 0 < | x < X 1 ,Y 0 < y | <Y 1 , |     |
| --- | --------- | ----- | ---------------- | ------ | --- |
∂x2 ∂y2
where X 0 , X 1 , Y 0 , Y 1 are specified constants, f(x,y) is a specified function, and
boundaryconditionsforuaregivenateachpointontheboundaryoftherectangular
domainspecified.
12.3.1 ModelProblemforTwoDimensions
Aswithordinarydifferentialequationsearlierinthischapter,wewilluseamodel
problem to demonstrate the implementation of the finite difference method. The
modelproblemthatwewilluseis
∂2u ∂2u
| + =−4(1−x2−y2)e−(x2+y2), |     |     | 0< x <1,0< | y <2, | (12.11) |
| ------------------------ | --- | --- | ---------- | ----- | ------- |
∂x2 ∂y2
=e−y2
| u            | , x =0, | 0< y <2, |     |     | (12.12) |
| ------------ | ------- | -------- | --- | --- | ------- |
| u =e−(1+y2), | x =1,   | 0< y     | <2, |     | (12.13) |
=e−x2
| u   | , 0< x | <1,y =0, |     |     | (12.14) |
| --- | ------ | -------- | --- | --- | ------- |
=e−(4+x2),
| u   | 0<  | x <1, y | =2. |     | (12.15) |
| --- | --- | ------- | --- | --- | ------- |
Thismodelproblemhassolution
u =e−(x2+y2).
12.3.2 FiniteDifferenceMethodsforBoundaryValueProblems
inTwoDimensions
Todefinethefinitedifferencesthatapproximatethepartialderivativesofafunction
intwodimensions,wefirstneedtodefineafinitedifferencegrid.Wehavealready
stated that we are assuming that the function u that is to be determined satisfies a
partialdifferentialequationdefinedontheregion X ≤ x ≤ X ,Y ≤ y ≤ Y .We
|     |     |     | 0 1 | 0   | 1   |
| --- | --- | --- | --- | --- | --- |
nowsupposethattherearepointsx ,i =1,2,...,M andy , j =1,2,...,N such
|     | i   |     | j   |     |     |
| --- | --- | --- | --- | --- | --- |
that

240 12 DesigningObject-OrientedNumericalLibraries
| x = | X , |     |
| --- | --- | --- |
1 0
| x < | x < x <···< x | ,   |
| --- | ------------- | --- |
| 1   | 2 3 M         |     |
| x = | X ,           |     |
M 1
| y =Y | ,   |     |
| ---- | --- | --- |
1 0
| y <  | y < y <···< y | ,   |
| ---- | ------------- | --- |
| 1    | 2 3 N         |     |
| y =Y | .             |     |
N 1
Thenodesofthefinitedifferencegridarethenthepoints(x ,y ),i =1,2,...,M,
i j
j =1,2,...,N.Theboundarynodesarethenodeswherex = X 0 ,x = X 1 ,y =Y 0
or y = Y .Allothernodesareinteriornodes.Anexamplemeshonthesquare0<
1
x<1,0<y<2isshowninFig.12.2,wherethefilledcirclesdenotetheboundary
nodes,andtheopencirclesdenotetheinteriornodes.
Numberingofthenodesforafinitedifferencegridisslightlymorecomplicated
intwodimensionsthanitwasinonedimension.Forthefinitedifferencegridinone
dimensionallnodescouldbenumberedconsecutively,allowingthefinitedifference
approximationstobewrittendowninanintuitiveway.Towritedownfinitedifference
approximationsintwodimensions,wewilladoptthe“compasspoint”notationshown
inFig.12.3.Thenodeimmediatelyabovenodeiinthecomputationalmeshisdenoted
byi,N,where“N”correspondstonorth.Theothernodesthatareadjacenttonodei
aretheeast,southandwestnodes,denotedby“i,E”,“i,S”and“i,W”respectively.
Providediisaninteriornode,thefouradjacentnodesshowninFig.12.3allexist.
FinitedifferencestothederivativesthatappearinPoisson’sequationaregivenbelow.
2
1.5
y 1
0.5
0
| 0 0.2 | 0.4 0.6 | 0.8 1 |
| ----- | ------- | ----- |
x
Fig.12.2 Asuitablefinitedifferencegridintwodimensions.Boundarynodesaredenotedbya
filledcircle,interiornodesbyahollowcircle

| 12.3 ExtendingtheLibrarytoTwoDimensions |     |     |     |     |     |     | 241 |
| --------------------------------------- | --- | --- | --- | --- | --- | --- | --- |
y
i+1
Node i,N
|     | Node i,W |     |     | Node i |     | Node i,E |     |
| --- | -------- | --- | --- | ------ | --- | -------- | --- |
y
i
y
| i−1 |     |     |     | Node i,S |     |     |     |
| --- | --- | --- | --- | -------- | --- | --- | --- |
|     | x   |     | x   |          |     |     | x   |
|     | i−1 |     | i   |          |     |     | i+1 |
Fig.12.3 Nodeiandpointsusedtocalculatefinitedifferenceapproximationsintwodimensions
|     | ∂2u |     | 2   | u −u        | u   | −u         |         |
| --- | --- | --- | --- | ----------- | --- | ---------- | ------- |
|     |     |     |     | i,E         | i i | i,W        |         |
|     |     | ≈   |     |             | −   | ,          | (12.16) |
|     | ∂x2 | x   | −x  | (cid:2)x −x | x   | −x (cid:3) |         |
|     |     | i,E | i,W | i,E         | i i | i,W        |         |
∂2u
|     |     |     | 2   | u i,N −u    | i u i | −u i,S     |         |
| --- | --- | --- | --- | ----------- | ----- | ---------- | ------- |
|     |     | ≈   |     |             | −     | .          | (12.17) |
|     | ∂y2 | y   | −y  | (cid:2)y −y | y     | −y (cid:3) |         |
|     |     | i,N | i,S | i,N         | i i   | i,S        |         |
Wewillnowexplainhowthesefinitedifferenceapproximationsmaybeusedtoset
upalinearsystemtocalculatethenumericalsolutionofPoisson’sequation.
12.3.3 SettingUptheLinearSystemfortheModelProblem
We will now apply the theory developed in Sect. 12.3.2 to the model problem
describedinSect.12.3.1.UsingthefinitedifferencegriddescribedinSect.12.3.2,
wehaveM nodesinthex-direction,andN nodesinthey-direction:thatis,atotal
ofM×N nodes.Eachofthesenodeshasanunknownvalueofu,andsoourlinear
system comprises M×N equations, with each equation being associated with one
nodeofthemesh.
At interior nodes we may substitute the finite difference approximations given
inEqs.(12.16)and(12.17).SubstitutingtheseapproximationintoEq.(12.11)and
rearrangingyields
| α u | +α    | u +α | u       | +α u | +α      | u =b , | (12.18) |
| --- | ----- | ---- | ------- | ---- | ------- | ------ | ------- |
| i   | i i,N | i,N  | i,E i,E | i,S  | i,S i,W | i,W i  |         |

242 12 DesigningObject-OrientedNumericalLibraries
where
|      | 2         |         | 2         |     |
| ---- | --------- | ------- | --------- | --- |
| α =− |           | −       |           | ,   |
| i    | (x −x )(x | −x ) (y | −y )(y −y | )   |
|      | i,E i i   | i,W i,N | i i       | i,S |
2
| α = |     | ,   |     |     |
| --- | --- | --- | --- | --- |
i,N
|     | (y i,N −y i,S )(y i,N | −y i ) |     |     |
| --- | --------------------- | ------ | --- | --- |
2
| α i,E = |           | ,     |     |     |
| ------- | --------- | ----- | --- | --- |
|         | (x −x )(x | −x )  |     |     |
|         | i,E i,W   | i,E i |     |     |
2
| α i,S = |           | ,    |     |     |
| ------- | --------- | ---- | --- | --- |
|         | (y −y )(y | −y ) |     |     |
|         | i,N i,S i | i,S  |     |     |
2
| α =         |            | ,       |     |     |
| ----------- | ---------- | ------- | --- | --- |
| i,W         | (x −x )(x  | −x )    |     |     |
|             | i,E i,W    | i i,W   |     |     |
|             | 2−y 2)e−(x | 2+y 2). |     |     |
| b i =−4(1−x |            | i i     |     |     |
|             | i i        |         |     |     |
The value of u at each boundary node is given by the appropriate equation from
Eqs.(12.12)–(12.15).Thismaybeincorporatedintothelinearsystembytheequation
|     |     | u i =b i , |     | (12.19) |
| --- | --- | ---------- | --- | ------- |
whereiisaboundarynode,andb isthevaluethatutakesatthatnode.
i
Equations (12.18) and (12.19) fully define the linear system. We may now use
thefunctionalityoftheclassesofvectors,matricesandlinearsystemsdevelopedin
Chap. 10 to calculate the value of the finite difference approximation to u at each
node.
12.3.4 DevelopingtheClassesRequired
Wegiveonlyminimalguidanceondevelopingtheclassesrequiredforcalculatinga
numericalsolutionofPoisson’sequation.Designingandimplementingtheseclasses
isleftasanexercise(Exercise12.4).Oursuggestionsaregivenbelow.
• CreatinganinstanceoftheclassFiniteDifferenceGridshouldrequirethe
useofaconstructorthatspecifiesthenumberofnodesinthexdirectionandthe
numberofnodesintheydirection.Thegridshouldconsistofavectorofboundary
nodesthatareallinstancesoftheclassBoundaryNode(discussedbelow)anda
vectorofinteriornodesthatareallmembersoftheclassInteriorNode(also
discussedbelow).Eachofthenodesinthemeshshouldhaveaglobalnumbering
thatwillrefertotherownumberofthematrixthatwillcorrespondtotheunknown
valueofuatthatnode,u.
i
• AninstanceoftheclassBoundaryNodewillhaveanintegerrepresentingthe
globalnumbering,andadoubleprecisionfloatingpointvariablethatrepresents
thevalueofuatthatnodefromtheboundaryconditions.

12.4 Tips:UsingWell-WrittenLibraries 243
• AninstanceoftheclassInteriorNodewillhaveanintegerrepresentingthe
global numbering, and the global numbers of the north node, east node, south
nodeandwestnode:seeFig.12.3foradefinitionofthesenodes.
The classes described above, together with a class for encapsulating the partial
differential equation that is similar to SecondOrderOde in Sect. 12.2, should
enablecodetobewrittentocalculatethenumericalsolutionofPoisson’sequation.
12.4 Tips:UsingWell-WrittenLibraries
InChap.10wedevelopedalinearsystemclassthatwasbasedonclassesofvectors
andmatrices.Theseclassesallowedustoperformvariouslinearalgebraoperations.
Inthischapter,weutilisedtheseclassestoallowustodeveloplibrariesforcalculating
thenumericalsolutionofboundaryvalueordinarydifferentialequations.
Although theclassesdeveloped inChap.10do havesufficient functionalityfor
the purpose of this chapter, we would recommend that a reader who requires a
linear algebra library should consider using one of the many high quality, open-
sourcelibrariesthatareavailable.(Indeed,inSect.1.1.2,wegavethefactthatthere
is a wealth of numerical libraries for scientific computing as one of the reasons
for learning C++.) Libraries for linear algebra usually include significantly more
functionality than that developed here including, for example: sparse matrices; a
widevarietyofiterativelinearsolvers;awidevarietyofpreconditioners;interfaces
with other packages; and support for parallelisation. Indeed, as linear algebra is
suchafundamentaltopicatthecoreofscientificcomputing,itisunlikelythatany
functionality required will not be included in a widely used library. Furthermore,
suchlibrarieshavetheadvantageofbeingwell-tested,optimisedcodeandcan,as
such,betreatedasablackbox.
Oneopen-sourcelibrarythatisofparticularuseisthePortableExtensibleToolkit
for Scientific Computing (PETSc, pronounced “pet see”) which is available for
download from https://www.mcs.anl.gov/petsc/. Libraries such as PETSc include
anextremelylargeamountoffunctionalityforsystemsofbothlinearandnonlinear
equations,withsupportforparallelimplementationondistributedmemoryarchitec-
turesthroughtheMPIlibrary.
WeconcludethissectionbyremindingthereaderofourtheremarksinSect.1.1.4.
WeexplainedinthatsectionthatthisbookfocusesonaspectsoftheC++program-
minglanguagethatarecommonlyneededwhenwritingsoftwareforscientificcom-
putingapplications.Assuch,wehaven’ttouchedonthefunctionalityofthelanguage
thatisrarelyrequiredinthisfield.ShouldreaderswishtodeveloptheirC++skillsto
usemoreadvancedfeatureswehavegivenalistofsuitablereferencesintheFurther
Readingattheendofthisbook[5–10].
12.5 Exercises
12.1 DeveloptheclassesdescribedinSect.12.2forsecondorder,constantcoeffi-
cient,linearboundaryvalueordinarydifferentialequations.Testtheselibrariesusing

244 12 DesigningObject-OrientedNumericalLibraries
themodelproblemsdescribedinSect.12.1.1.ThecodeinListing12.6whichpro-
ducesoutputfilesthatcanbereadilyplottedmaybeusedasaframework.Example
solutionsforthisproblemaregiveninSect.C.2:thesefiles,togetherwiththeheader
filesgiveninthischapter,maybedownloadedfromhttp://www.springer.com/book/
9783319731315.
MakesurethattheBvpOdemethod WriteSolutionFiledoesnotattempt
towriteafileifmFilenameisuninitialisedorsettoanemptystring.(Thismaybe
achievedbysettingmFilenametoasafevalueintheconstructor.)
12.2 ExtendthelibrarydevelopedinExercise12.1sothattheusermayspecifya
nonuniformfinitedifferencegrid.AllowthistobedonethroughamethodSetGrid
of the class FiniteDifferenceGrid that allows a mesh to be specified as a
vector of ordered nodes. Ensure that the boundary nodes have the same value as
mXminandmXmaxintheclassSecondOrderOde.
12.3 SomeprogrammersmayfeelthattheconstructorgiveninListing12.1isinad-
equate.Theymayarguethatitwouldbeeasytoincorrectlyassignoneofthecoeffi-
cientsoftheequation.Onewayaroundthiswouldbetoforcetheusertouseadefault
constructor. Additional class members, such as a Boolean variable mCoeffOf-
UxxIsSetcouldbedeployed.Thedefaultconstructorwouldbeoverriddensothat
thesevariablesweresettofalsewhentheconstructorwascalled.Amethodcalled
SetCoefficientOfUxxwouldthenbewritten,whichwouldhaveasinputthe
coefficientofd2u/dx2.Thismethodwouldassignthecoefficientcorrectlyandset
theBooleanvariablemCoeffOfUxxIsSettotrue.Beforethemethodsthatcal-
culatethenumericalsolutionarecalledacheckwouldbecarriedouttoensurethat
all required data has been assigned. Design, and implement, classes to specify the
differentialequationinthisway.
12.4 IfyouunderstandthetheoryforfinitedifferencemethodsforPoisson’sequa-
tion given in Sect. 12.3.2, develop a library for solving such equations. Test this
libraryusingthemodelproblemdescribedinSect.12.3.1.
12.5 Exercise 12.1 asks you to develop the classes described in Sect. 12.2 and to
test these libraries using the model problems described in Sect. 12.1.1. For this
purposeListing12.6givesaprogram Driver.cpp.Thiswayof“testing”isnot
idealbecauseitreliesonthemanualstepofcheckingthatthedataintheoutputfiles
matchestheexpectedsolution.
AutomatetheprocessoftestingtheclassesdescribedinSect.12.2byrewritingthe
testingfunctionalitywithinatestingframeworksuchasCxxTest.Foreachmodel
problem you should produce a testing function which runs the problem, reads the
outputfilebackintoasuitabledatastructure,andteststhatthesolutioniscorrect:
thatis,thesolutionisclosetotheanalyticformgiveninSect.12.1.1.Thinkabout
whattheexpectederrormightbeforthisnumericalscheme.
AnexamplesolutiontothisproblemisgiveninListingC.9inSect.C.2.

A
LinearAlgebra
This appendix summarises the linear algebra that underpins the classes of vectors
andmatricesdevelopedinthisbook.Wepresentlittlemorethanthealgorithmsused:
areaderinterestedinadeeperunderstandingofthistheoryshouldconsultatextbook
suchasoneofthoselistedintheFurtherReadingsectionattheendofthisbook.
A.1 VectorsandMatrices
Forthepurposeofthisbook,avectorisaone-dimensionalarrayandamatrixisa
two-dimensionalarray:itis—ofcourse—possibletoworkonlywithmatrices,with
vectors having either only one column or only one row. For consistency with the
classesofvectorsandmatricesdeveloped,wetreatvectorsandmatricesasseparate
entitiesinthisdiscussion.
InthisAppendix,weusemathematicalratherthanC++notationforvectorsand
matrices.Wewilluseitalicstodenoteascalar.Vectorswillbedenotedbylowercase
bold font letters. Individual entries of a vector will be denoted by italics indexed
bysubscripts.Forexample,vrepresentsavector,andtheentryof vwithindexiis
denotedbyv .ForconsistencywithC++coding,weindexthevectorsandmatrices
i
in this Appendix so that the indices begin from 0. We assume that all vectors are
columnvectors:thatis,avectorvoflengthN isthevector
v
0
v
1
v ⎛ . ⎞.
= . .
⎜ ⎟
⎜v N 1⎟
⎜ − ⎟
⎝ ⎠
Ifarowvectorisrequired,itisdenotedusingthetransposesuperscript,thatis,v .
⊤
Matrices will be denoted by upper case bold font letters, with italics indexed by
©SpringerInternationalPublishingAG,partofSpringerNature2017 245
J.Pitt-FrancisandJ.Whiteley,GuidetoScientificComputing
inC++,UndergraduateTopicsinComputerScience,
https://doi.org/10.1007/978-3-319-73132-2

| 246 |     |     |     |     |     | AppendixA:LinearAlgebra |     |
| --- | --- | --- | --- | --- | --- | ----------------------- | --- |
subscripts used to denote the entries of the matrix. The first index corresponds to
therownumberandthesecondindexcorrespondstothecolumnnumber.Usingthis
notation,if Aisamatrix,thentheentryof Athatappearsintherowwithindexi
andthecolumnwithindexj isdenotedby A .Whererequiredforclarity,wewill
ij
| separatetheindicesbyacomma,forexample |     |     |     |     | A 1,j | .   |     |
| ------------------------------------- | --- | --- | --- | --- | ----- | --- | --- |
|                                       |     |     |     |     | i     | 1   |     |
AsquarematrixofsizeN hasbothN rowsan + dN− columns.Theidentitymatrix
isasquarematrix,denotedbyI(N),withentriesgivenby
ofsizeN
|     |     |     |       | 1, i | j,   |     |     |
| --- | --- | --- | ----- | ---- | ---- | --- | --- |
|     |     |     | I (N) |      |      |     |     |
|     |     |     | ij    | 0, i | = j. |     |     |
=
|     |     |     |     | (cid:8) | (cid:3)= |     |     |
| --- | --- | --- | --- | ------- | -------- | --- | --- |
A.1.1 OperationsBetweenVectorsandMatrices
Linearcombinationsofvectors.Supposew αu βv,whereu,v,wareallvectors
= +
| oflengthN,andα,β |     | arescalars.Theentriesof |       |               | waregivenby |     |     |
| ---------------- | --- | ----------------------- | ----- | ------------- | ----------- | --- | --- |
|                  |     | w αu                    | βv    | , i 0,1,...,N |             | 1.  |     |
|                  |     | i =                     | i + i | =             |             | −   |     |
Linear combinations of matrices. Suppose C αA βB, where A, B, C are all
|     |     |     |     |     | =   | +   |     |
| --- | --- | --- | --- | --- | --- | --- | --- |
matrices with M rows and N columns, and α,β are scalars. The entries of C are
givenby
|     | C αA | βB ,  | i 0,1,...,M |     | 1,  | j 0,1,...,N | 1.  |
| --- | ---- | ----- | ----------- | --- | --- | ----------- | --- |
|     | ij   | ij ij |             |     |     |             |     |
|     | =    | +     | =           |     | −   | =           | −   |
Multiplication of a matrix by a vector. Suppose A is a matrix with M rows and N
columns,anduisavectoroflengthN.Ifv=Au,thenvisavectoroflengthMwith
entriesgivenby
N 1
−
|     |     | v   | A u , | i 0,1,...,M |     | 1.  |     |
| --- | --- | --- | ----- | ----------- | --- | --- | --- |
|     |     | i   | ij j  |             |     |     |     |
|     |     | =   |       | =           |     | −   |     |
j 0
(cid:9)=
Similarly,if sisavectoroflengthM andt s A,thent isavectoroflengthN
⊤ ⊤
=
withentriesgivenby
M 1
−
|     |     | t   | s A , | j 0,1,...,N |     | 1.  |     |
| --- | --- | --- | ----- | ----------- | --- | --- | --- |
|     |     | j   | i ij  |             |     |     |     |
|     |     | =   |       | =           |     | −   |     |
i 0
(cid:9)=
Multiplication of a matrix by a matrix. Suppose A is a matrix with L rows and M
columns,andBisamatrixwithM rowsandN columns.IfthematrixCsatisfiesC
| =AB,thenChasLrowsandN |     |     | columns,andhasentriesgivenby |     |     |     |     |
| --------------------- | --- | --- | ---------------------------- | --- | --- | --- | --- |

AppendixA:LinearAlgebra 247
M 1
−
C A B , i 0,1,...,L 1, j 0,1,...,N 1.
ij ik kj
= = − = −
k 0
(cid:9)=
Thetransposeofamatrix.SupposeAisamatrixwithMrowsandNcolumns.Ifthe
matrixBsatisfiesB A ,thenBhasN rowsandMcolumnswithentriesgivenby
⊤
=
B A , i 0,1,...,N 1, j 0,1,...,M 1.
ij ji
= = − = −
AmatrixAissaidtobesymmetricifA A .
⊤
=
A.1.2 TheScalarProductofTwoVectors
SupposevandwarebothvectorsoflengthN.Thescalarproductbetweenvandw,
denotedbyv w,isgivenby
·
N 1
−
v w v w . (A.1)
i i
· =
i 0
(cid:9)=
A.1.3 TheDeterminantandtheInverseofaMatrix
The simplest way to specify the determinant of a square matrix of general size is
to use recursion.1 Suppose A is a square matrix of size N. The determinant of A,
denotedbydet(A),maybewritten
ˆ(00) ˆ(01) ˆ(02) ˆ(03)
det(A) A det(A ) A det(A ) A det(A ) A det(A )
00 01 02 03
= − + − +···
( 1)N − 1A 0,N 1 det(A
ˆ(0,N
−
1)
),
+ − −
ˆ(ij)
wherethesquarematrixA ,ofsize N 1,isthematrixAwithrowiandcolumn
−
jremoved.Thisdefinitionallowsustoexpressthedeterminantofasquarematrixof
sizeN asasumofdeterminantsofsquarematricesofsize N 1.Thisprocessmay
−
berepeatedrecursivelyuntilthedeterminantisexpressedasasumofdeterminants
of square matrices of size 1. To complete this definition, we need to define the
determinantofasquarematrixofsize1:undertheseconditionsdet(A) A .We
00
=
leave it to the reader to verify that this definition is consistent with the commonly
usedexpressionsforthedeterminantofmatricesofsizes2and3.
1This recursion may be mapped directly into recursive functions (discussed in Sect. 5.8) when
programming.However,itisgenerallymoreefficienttohard-codecommonlyuseddeterminants
forsmallmatricessuchas2 2and3 3.
× ×

248 AppendixA:LinearAlgebra
IfthedeterminantofasquarematrixAofsizeN isnonzero,thenAissaidtobe
1—exists,andsatisfies
invertible:auniqueinversematrix—denotedbyA −
| 1A     | 1 I(N). |     |
| ------ | ------- | --- |
| A − AA | −       |     |
| =      | =       |     |
ForthesquarematrixAofsize2givenby
a b
| A        | ,        |     |
| -------- | -------- | --- |
| =        | c d      |     |
| (cid:10) | (cid:11) |     |
thenprovidedthedeterminant,givenbyad bcisnonzero,A 1existsandisgiven
− −
by
| 1    | d b    |     |
| ---- | ------ | --- |
| A 1  | − .    |     |
| − ad | bc c a |     |
=
| −   | (cid:10)− (cid:11) |     |
| --- | ------------------ | --- |
A.1.4 EigenvaluesandEigenvectorsofaMatrix
SupposeAisasquarematrixofsizeN.Thescalarλissaidtobeaneigenvalueof
Aif
λI(N))
| det(A | 0.  |     |
| ----- | --- | --- |
| −     | =   |     |
IfλisaneigenvalueofAthenafamilyofnonzerovectors2 vthatsatisfyAv λv
=
exists:each v inthisfamilyisthensaidtobeaneigenvector correspondingtothe
eigenvalueλ.
A.1.5 VectorandMatrixNorms
SupposevisavectoroflengthN.Thep-normof v,denotedby v ,isgivenby
(cid:4) (cid:4) p
1/p
| N   | 1   |     |
| --- | --- | --- |
− p
| v                           | v .   | (A.2) |
| --------------------------- | ----- | ----- |
| (cid:4) (cid:4) p =(cid:12) | | i | |       |
(cid:13)
|     | (cid:9)= i 0 |     |
| --- | ------------ | --- |
2Avectorvsatisfiesv=0if,andonlyif,allentriesofthisvectortakethevalue0:visthensaidto
beazerovector.Ifnot,vissaidtobeanonzerovector.

AppendixA:LinearAlgebra 249
Takingthelimitas p ,thisdefinitionyields
→∞
N 1
v m−ax v
i
.
(cid:4) (cid:4)∞ = i 0 | |
=
Ofmostuseisthe2-norm:thisisknownastheEuclideannorm,andcorrespondsto
thelengthofthelinethatrepresentsavectorintwoorthreedimensions.UsingEq.
(A.1),andEq.(A.2)with p 2,weseethatwemaywritethe2-normas
=
N 1
−
v v2 √v v.
(cid:4) (cid:4) 2 =(cid:14) i = ·
(cid:15)i 0
(cid:15)(cid:9)=
(cid:16)
The p-norm of a matrix A, denoted by A , is given (in terms of the vector
p
(cid:4) (cid:4)
p-norm)by
Av
p
A max(cid:4) (cid:4) .
(cid:4) (cid:4) p = v 0 v p
(cid:3)= (cid:4) (cid:4)
Incommonwithvectornorms,themostcommonlyusednormisthe2-norm.Itcan
beshownthattheeigenvaluesofthematrixA Aareallrealandnonnegative.Letλ
⊤
bethelargestoftheseeigenvalues.Then A √λ.
2
(cid:4) (cid:4) =
A.2 SystemsofLinearEquations
Manyalgorithmsinscientificcomputingrequirethesolutionoflinearsystemsofthe
formAx=b,where:(i)Aisasquare,invertiblematrixofsizeN;(ii)thevectorsx,
barebothoflengthN;(iii)A,bareknown;and(iv)xistobecalculated.Clearlyx
satisfiesx A 1b.However,calculatingA 1isextremelycomputationallyexpen-
− −
=
siveforlargeNandthisapproachisrarelyusedtosolvesystemsoflinearequations.
Insteadaplethoraoftechniquesareavailable:welistthreerelativelysimplemethods
below.
A.2.1 GaussianElimination
Readersmayrememberbeingtaughthowtosolvetwosimultaneouslinearequations
forunknownvaluesofxandyatschool.Whenusingthistechnique,thefirststepisto
eliminateoneofthevariablesresultinginasinglelinearequationforasinglevariable
thatcaneasilybesolved.Thevalueofthisvariableisthensubstitutedbackintoone
of the original equations to allow the value of the other variable to be calculated.
Gaussian elimination is a systematic extension of this technique when solving a
systemofN linearequationsforN unknowns.TherearetwoversionsofGaussian
elimination:withorwithoutpivoting.Wenowdescribebothoftheseversions.

250 AppendixA:LinearAlgebra
A.2.1.1 GaussianEliminationWithoutPivoting
Theoriginalsystemofequationsmaybewritten
A A A ... A x b
00 01 02 0,N 1 0 0
A A A ... A − x b
10 11 12 1,N 1 1 1
⎛ A A A ... A − ⎞⎛ x ⎞ ⎛ b ⎞
20 21 22 2,N 1 2 2 .
⎜
⎜
. .
.
. .
.
. .
.
... . .
.
− ⎟
⎟
⎜
⎜
. .
.
⎟
⎟
=⎜
⎜
. .
.
⎟
⎟
⎜ ⎟⎜ ⎟ ⎜ ⎟
⎜A N 1,0 A N 1,1 A N 1,2 ... A N 1,N 1⎟⎜x N 1⎟ ⎜b N 1⎟
⎜ − − − − − ⎟⎜ − ⎟ ⎜ − ⎟
⎝ ⎠⎝ ⎠ ⎝ ⎠
Letusfirstassumethat A 0.Thisisaveryrestrictiveassumption:inSect.
00
(cid:3)=
A.2.1.3weintroducepivoting,whichallowsustodealwiththecase A 0.The
00
=
assumption A 0 allows us to eliminate x from all but the first equation: this
00 0
(cid:3)=
isachievedbysubtractingasuitablemultipleofthefirstequation,andresultsinthe
followingsystem:
A 0 00 A A ( 0 1 1 ) A A ( 0 1 2 ) . . . . . . A A 0 (1 , ) N − 1 x x 0 b b ( 0 1)
⎛ 0 A ( 2 1 1 1 1 ) A ( 2 1 1 2 2 ) ... A ( 2 1 1 , , ) N N − 1 1 ⎞⎛ x 2 1 ⎞ ⎛ b 2 1 (1) ⎞ ,
⎜ ⎜ ⎜ ⎜ ⎜ ⎜ 0 . . . A ( N 1 . . . ) 1,1 A ( N 1 . . . ) 1,2 . .. . . . A ( N 1) 1 . . . , − N 1 ⎟ ⎟ ⎟ ⎟ ⎟ ⎟ ⎜ ⎜ ⎜ ⎜ ⎜ x N . . . − 1 ⎟ ⎟ ⎟ ⎟ ⎟ =⎜ ⎜ ⎜ ⎜ ⎜ ⎜ b( N . . . 1) 1 ⎟ ⎟ ⎟ ⎟ ⎟ ⎟
⎝ − − − − ⎠⎝ ⎠ ⎝ − ⎠
where:
M A /A , i 1,2,...,N 1, usingtheassumptionthat A 0,
i0 i0 00 00
= = − (cid:3)=
(1)
A A M A , i, j 1,2,...,N 1,
ij = ij − i0 0j = −
(1)
b b M b , i 1,2,...,N 1.
i = i − i0 0 = −
(1)
Assumingnowthat A 0,wemayrepeatthisprocesstoeliminatex fromall
11 (cid:3)= 1
butthefirsttwoequations:
A 0 00 A A ( 0 1 1 ) A A ( 0 1 2 ) . . . . . . A A 0 (1 , ) N − 1 x x 0 b b ( 0 1)
⎛ 0 0 11 A 2 ( 1 2 2 2 ) ... A 2 ( 1 2 , , ) N N − 1 1 ⎞⎛ x 2 1 ⎞ ⎛ b 2 1 (2) ⎞ ,
⎜ ⎜ ⎜ ⎜ ⎜ ⎜ 0 . . . 0 . . . A ( N 2 . . . ) 1,2 . . . .. . A ( N 2) 1 . . . , − N 1 ⎟ ⎟ ⎟ ⎟ ⎟ ⎟ ⎜ ⎜ ⎜ ⎜ ⎜ x N . . . − 1 ⎟ ⎟ ⎟ ⎟ ⎟ =⎜ ⎜ ⎜ ⎜ ⎜ ⎜ b ( N 2 . . . ) 1 ⎟ ⎟ ⎟ ⎟ ⎟ ⎟
⎝ − − − ⎠⎝ ⎠ ⎝ − ⎠
where:
(1) (1) (1)
M A /A , i 2,3,...,N 1,usingtheassumptionthat A 0,
i1 = i1 11 = − 11 (cid:3)=
(2) (1) (1)
A A M A , i, j 2,3,...,N 1,
ij = ij − i1 1j = −
(2) (1) (1)
b b M b , i 2,3,...,N 1.
i = i − i1 1 = −

AppendixA:LinearAlgebra 251
(k)
Providing that at all steps we have A 0,k 0,1,...,N 1, we may
kk (cid:3)= = −
continueinthisfashionuntilwehavegeneratedanuppertriangularmatrixA(N 1):
−
A 0 00 A A ( 0 1 1 ) A A ( 0 1 2 ) . . . . . . A A 0 (1 , ) N − 1 x x 0 b b ( 0 1)
A(N − 1)x ⎛ 0 0 11 A ( 2 1 2 2 2 ) ... A ( 2 1 2 , , ) N N − 1 1 ⎞⎛ x 2 1 ⎞ ⎛ b 2 1 (2) ⎞ b(N − 1).
=⎜ ⎜ ⎜ ⎜ ⎜ ⎜ 0 . . . 0 . . . 0 . . . . .. . . . A ( N N −1 . . . 1 , − ) N 1 ⎟ ⎟ ⎟ ⎟ ⎟ ⎟ ⎜ ⎜ ⎜ ⎜ ⎜ x N . . . − 1 ⎟ ⎟ ⎟ ⎟ ⎟ =⎜ ⎜ ⎜ ⎜ ⎜ ⎜ b ( N N . . . −1 1) ⎟ ⎟ ⎟ ⎟ ⎟ ⎟ =
⎝ − − ⎠⎝ ⎠ ⎝ − ⎠
Solvingthisuppertriangularsystemisastraightforwardtask:westartwiththelast
equation in this system and work our way backwards. The first two steps in this
procedureare
(N 1) (N 1)
x N − 1 = b N − −1 /A N − −1,N − 1 ,
1
(N 2) (N 2)
x N − 2 = A ( N N −2 2 , ) N 2 (cid:17) b N − −2 − A N − −2,N − 1 x N − 1 (cid:18) .
− −
Ageneralformulaexistsforcalculatingx ,k 0,1,2,...,N 1.Assumingthat
k
= −
wehavealreadycalculatedx ,x ,...,x ,wemaycalculatex by
k 1 k 2 N 1 k
+ + −
N 1
1 (k) − (k)
x b A x . (A.3)
k = A (k) (cid:12) k − k,i i (cid:13)
k,k i k 1
=(cid:9)+
ThiscompletesthedescriptionoftheGaussianeliminationalgorithmwithoutpiv-
oting.Averyimportantpointtonoteisthatthereisnoneedtostoreallthematrices
generatedduringthisalgorithm:onlythemostrecentlygeneratedversionisrequired,
andallearliermatricesmaybediscarded.
A.2.1.2 LUDecomposition
The Gaussian elimination process described above may be used to factorise A as
theproductofalowertriangularmatrixLandanuppertriangularmatrixU,thatis,
A=LU.DefiningthematricesM ,M ,...by
0 1
1 0 0 ... 0
M 1 0 ... 0
10
⎛ − ⎞
M 0 1 ... 0
M 20 ,
0 −
=⎜
⎜
. .
.
. .
.
. .
.
... . .
.
⎟
⎟
⎜ ⎟
⎜ M N 1,0 0 0 ... 1⎟
⎜ ⎝1 − − 0 0 ... 0 ⎟ ⎠
0 1 0 ... 0
⎛ ⎞
0 M 1 ... 0
M 21 ,...,
1 −
=⎜
⎜
. .
.
. .
.
. .
.
... . .
.
⎟
⎟
⎜ ⎟
⎜0 M
N 1,1
0 ... 1⎟
⎜ − − ⎟
⎝ ⎠

252 AppendixA:LinearAlgebra
wemaywrite
A(N 1) M M M M A,
− N 1 N 2 1 0
= − − ···
or,equivalently,
A M 1M 1 M 1 M 1 A(N 1).
= −0 −1 ··· −N 2 −N 1 −
− −
WefirstnotethattheinversesofthematricesM ,M ,...,aresimply
0 1
1 0 0 ... 0
M 1 0 ... 0
10
⎛ ⎞
M 1 M 20 0 1 ... 0 ,
−0
=⎜
⎜
. .
.
. .
.
. .
.
... . .
.
⎟
⎟
⎜ ⎟
⎜M
N 1,0
0 0 ... 1⎟
⎜ − ⎟
⎝1 0 0 ... 0⎠
0 1 0 ... 0
⎛ ⎞
M 1 0 M 21 1 ... 0 ,....
−1
=⎜
⎜
. .
.
. .
.
. .
.
... . .
.
⎟
⎟
⎜ ⎟
⎜0 M
N 1,1
0 ... 1⎟
⎜ − ⎟
⎝ ⎠
Thesematricesarealllowertriangular.Itistrivialtoprovethattheproductoflower
triangularmatricesisalsolowertriangular.Writing
L M 1M 1 M 1 M 1 ,
= −0 −1 ··· −N 2 −N 1
− −
U A(N 1),
−
=
we see that we have A = LU with L a lower triangular matrix and U an upper
triangularmatrix.Anexplicitrepresentationof Lexists:directcalculationmaybe
usedtoverifythat
1 0 0 ...0
M 1 0 ...0
10
⎛ ⎞
M M 1 ...0
L 20 21 .
=⎜
⎜
. .
.
. .
.
. .
.
... . .
.
⎟
⎟
⎜ ⎟
⎜M
N 1,0
M
N 1,1
M
N 1,2
... 1⎟
⎜ − − − ⎟
⎝ ⎠
A.2.1.3 GaussianEliminationwithPivoting
(k)
TheGaussianeliminationtechniquedescribedaboverequiredthat A 0ateach
kk (cid:3)=
step.Clearlythisalgorithmwouldfailforanonsingularmatrixsuchas
1 1 1
A 1 1 2 ,
=⎛ ⎞
0 5 1
⎝ ⎠

AppendixA:LinearAlgebra 253
where
1 1 1
| A(1) | 0 0 1 , |     |
| ---- | ------- | --- |
| =⎛   | ⎞       |     |
0 5 1
|     | ⎝ ⎠ |     |
| --- | --- | --- |
andso A (1) 0,violatingoneoftheassumptionsmadeinSect.A.2.1.1.Wecan,
11
=
however,proceedfurther:inthiscasewewouldsimplyinterchangethelasttworows
ofbothA(1)andb(1).Thisisknownaspivoting.
(k)
Evenif A isnotzeroitmaybeadvisabletousepivoting.InEq.(A.3)wesee
| kk|
(k) (k)
thatcalculatingthevalueofx k requiresustodividebyA .If A issmallthenthe
kk | kk|
divisionbyasmallnumbermayintroducenumericalerrorsinthecalculationofx .To
k
avoidbothoftheseproblems,werecommendpivotingateachstep:whenconstructing
(k)
A(k),findtherownwiththelargestabsolutevalueof A ,n k,k 1,...,N 1,
nk = + −
andtheninterchangerowk andrown.Itisrelativelysimpletoincludethisinour
Gaussianeliminationalgorithm:atstepkweareworkingwiththelinearsystem
| A(k)x | b(k). |     |
| ----- | ----- | --- |
=
k n
To interchange rows and in this system of equations, we simply multiply both
sidesofthisequationbythematrixP(kn):
| P(kn)Akx | P(kn)bk, |     |
| -------- | -------- | --- |
=
whereP(kn)isasquarematrixofsizeN
withentriesgivenby
| 1, i | j, i, j k, | i, j n,  |
| ---- | ---------- | -------- |
| =    | (cid:3)=   | (cid:3)= |
| 1, i | k, j n,    |          |
P (kn)
| ij ⎧ =     | =        |     |
| ---------- | -------- | --- |
| =⎪⎪⎨ 1 , i | n , j k, |     |
| =          | =        |     |
| 0 , ot he  | rw is e. |     |
⎪⎪⎩o
For example, if we wanted t interchange the row with index 2 and the row with
index4inasquarematrixofsize5,thenthematrixP(24)wouldbegivenby
|         | 1 0 0 0 0 |     |
| ------- | --------- | --- |
|         | 0 1 0 0 0 |     |
| P(24) ⎛ |           | ⎞   |
|         | 0 0 0 0 1 | .   |
=
| ⎜0  | 0 0 1 0⎟ |     |
| --- | -------- | --- |
| ⎜   |          | ⎟   |
| ⎜0  | 0 1 0 0⎟ |     |
| ⎜   |          | ⎟   |
| ⎝   |          | ⎠   |
ThekeypointtonotewhenmodifyingtheLU-factorisation algorithmdescribed
inSect.A.2.1.1totakeaccountofpivotingisthatGaussianeliminationwithpivoting
wouldgiveexactlythesameresultsifalltherowswereinterchangedfirst,andthen
Gaussianeliminationwithnopivotingwerecarriedout.Denotingtheproductofall
thematricesrepresentingrowinterchangesbyP,weseethattheLU-decomposition
algorithmnowreducestoafactorisationofthematrixPA:thatis,forming
| LU  | PA. |     |
| --- | --- | --- |
=

254 AppendixA:LinearAlgebra
A.2.2 TheThomasAlgorithm
TheThomasalgorithmmaybeusedformatriceswithaspecificstructure.Suppose
ourmatrixAhasstructure
1 0 0 0 ... 0 0 0
p q r 0 ... 0 0 0
1 1 1
⎛− − ⎞
0 p q r ... 0 0 0
2 2 2
A = ⎜ ⎜ . . . − . . . . . . − . . . ... . . . . . . . . . ⎟ ⎟ ,
⎜ ⎟
⎜ 0 0 0 0 ... p N 2 q N 2 r N 2⎟
⎜ ⎜ 0 0 0 0 ... − 0 − 0 − − 1 − ⎟ ⎟
⎜ ⎟
⎝ ⎠
wheretheentriesof Asatisfy
p >0, q >0, r >0, q > p r , i 1,2,...,N 2.
i i i i i i
+ = −
Thisconditionissatisfied,forexample,foranimplicitfinitedifferencediscretisation
oftheheatequationinonespatialdimensionwithDirichletboundaryconditionsat
bothendsofthespatialdomain.Defining
e 0, f b ,
0 0 0
= =
e i = qi p ri iei 1 , f i = b q i i + p p i ie f i i − 1 1, i = 1,2,...,N − 2,
− − − −
thenthelinearsystemmaybesolvedusingtheexplicitrecurrencerelation
x b ,
N 1 N 1
− = −
r b p f
i i i i 1
x i x i 1 + − , i N 2,N 3,...,1,
= q i p i e i 1 + + q i p i e i 1 = − −
− − − −
x b .
0 0
=
A.2.3 TheConjugateGradientMethod
The matrices arising in many scientific computing applications—for example,
finiteelement,finitedifferenceandfinitevolumediscretisationsofpartialdifferential
equations—oftenhavealargenumberofrowsandcolumns,butveryfewnonzero
elementsineachrowofthematrix.Suchmatricesaretermedsparsematrices.
Itisoftenthecasethatstoringeveryelementofasparsematrixwouldexceedthe
memory limitations of a computational architecture, but storing only the nonzeros
of this matrix is possible within the constraints of available memory. This poses
a logistical challenge for the solution of linear systems described by this matrix:
the LU-factorisation of a sparse matrix described in Sect. A.2.1.1 does not result
in sparse matrices L and U, and so these matrices will suffer from the memory

AppendixA:LinearAlgebra 255
limitationsdescribedearlier.Tocircumventthisproblem,iterativetechniquesmay
be used for the solution of sparse linear systems, where successive iterates of the
solutionofthelinearsystemx ,k 1,2,...aregenerateduntil b Ax <εfor
k k
someuser-specifiedtoleranceε.Thisbranchofnumericallinearalgebraisalarge = (cid:4) − (cid:4)
subjectinitsownrightandweonlytouchbrieflyuponithere,givingonealgorithm
foraveryspecificclassofmatrices,namelysymmetric,positivedefinitematrices.
Algorithm1ConjugategradientmethodforsolvingAx b
=
Require: Symmetric,positivedefinitematrixA,specifiedvectorb,initialguessx0(orsetx0 0),
=
toleranceε.
| 1:k=0,r   | b Axk,p 0,β | 0   |
| --------- | ----------- | --- |
| =         | − =         | =   |
| 2:while r | εdo         |     |
(cid:4) (cid:4)≥
3: ifk>0then
r⊤r
4: β
= r ⊤prevrprev
5: endif
| 6: p r | βp  |     |
| ------ | --- | --- |
= +
7: α r⊤r
= p ⊤Ap
| 8: xk | xk αp |     |
| ----- | ----- | --- |
1
| 9: rpr + = | r + |     |
| ---------- | --- | --- |
ev
| 10: r = b | Axk |     |
| --------- | --- | --- |
1
| =       | − + |     |
| ------- | --- | --- |
| 11: k k | 1   |     |
| =       | +   |     |
12:endwhile
13:x xk
=
A matrix A is said to be positive definite if, and only if, for all vectors x of the
correctsizethefollowingtwoconditionsaremet:
x ⊤ Ax 0, and
≥
x Ax 0, onlyifx 0.
⊤
= =
If a matrix A is positive definite and symmetric, then we may solve the linear
systemusingtheconjugategradientmethod,givenbyAlgorithm1.

B
OtherProgrammingConstructsYou
MightMeet
Below we briefly describe some programming constructs that other programmers
may include in their C++ code. Many of these are constructs that were originally
designed for the C programming language. As C++ was developed from C, much
oftheClanguageislegalC++,althoughthemodificationsdevelopedfortheC++
languagearegenerallysuperior.
B.1 CStyleOutput
We devoted the whole of Chap. 3 to describing the C++ machinery for input and
output.ToexplainthecorrespondingmachineryinCwouldrequireasimilaramount
of space, and so we only touch upon C style output here, limiting ourselves to
describingoutputtotheconsole.Nevertheless,thisshouldgivetheflavourofCstyle
output commands, allowing the reader to at least recognise them should they see
them.
Inthecodebelow,weshowhowtouseCstyleoutputtoprintadoubleprecision
floatingpointvariabletothescreeninbothnormalandscientificnotation,andhow
toprintanintegertothescreen.Cstyleoutputrequiresthewholeoftheoutputto
be enclosed within double quotation marks. When a variable is to be printed it is
representedby%fforadoubleprecisionfloatingpointvariable,%iforaninteger
variable,and%eforadoubleprecisionfloatingpointvariableinscientificnotation.
Finally,thevariablestobeprintedareincludedinanorderedlistattheendofthe
statement.NotethattheincludedfileforCstyleprintingis<stdio.h>—standard
inputandoutputwhichprovidesbasicfunctionalitysimilarto<iostream>inC++.
©SpringerInternationalPublishingAG,partofSpringerNature2017 257
J.Pitt-FrancisandJ.Whiteley,GuidetoScientificComputing
inC++,UndergraduateTopicsinComputerScience,
https://doi.org/10.1007/978-3-319-73132-2

| 258 |     | AppendixB:OtherProgrammingConstructsYouMightMeet |     |     |
| --- | --- | ------------------------------------------------ | --- | --- |
✞
| #include <stdio.h> |     |     |     |     |
| ------------------ | --- | --- | --- | --- |
1
2
| int main(int | argc, char* | argv[]) |     |     |
| ------------ | ----------- | ------- | --- | --- |
3
{
4
| double | x = 105.0; |     |     |     |
| ------ | ---------- | --- | --- | --- |
5
| int j = | 500; |     |     |     |
| ------- | ---- | --- | --- | --- |
6
| printf("x | = %f and | j = %i\n", | x, j); |     |
| --------- | -------- | ---------- | ------ | --- |
7
| 8 printf("In | scientific | notation, | x = %e\n", | x); |
| ------------ | ---------- | --------- | ---------- | --- |
| 9 return     | 0;         |           |            |     |
10 }
OtherCvariationsonprintfwhichyoumightmeetarefprintfforprinting
tofile,inwhichthefirstargumentisafilepointeroftypeFILE*andsprintffor
printingtoastring.
B.2 CStyleDynamicMemoryAllocation
In Sect. 4.2 we explained how the C++ keywords new and delete could be
usedtoallocatememorydynamicallyforarrays,andthenfreethememorywhenit
was no longer needed. C also allows this, through the use of malloc (“memory
allocate”) and free. As with C style output above, we only touch briefly on the
useofthesefunctionstoallowthereadertorecognisethemshouldtheycomeacross
them.Inthecodebelow,wedeclareapointertoadoubleprecisionvariable,vector,
in line 6. In line 7, we then use the malloc function to allocate memory for 100
entriesofthearrayvector,allofthesamesizeasadoubleprecisionfloatingpoint
variable.Inlines8–13,weusetheseentriesinthesamewayasaC++array.Finally,
inline14,wefreethememoryallocatedtothisarraythroughtheuseoftheCfunction
calledfree.
✞
| #include <iostream> |     |     |     |     |
| ------------------- | --- | --- | --- | --- |
1
| 2 #include <cstdlib> |     |     |     |     |
| -------------------- | --- | --- | --- | --- |
3
| 4 int main(int | argc, char* | argv[]) |     |     |
| -------------- | ----------- | ------- | --- | --- |
5 {
| double* | vector; |     |     |     |
| ------- | ------- | --- | --- | --- |
6
| vector | = ((double*)(malloc(100*sizeof(double)))); |     |     |     |
| ------ | ------------------------------------------ | --- | --- | --- |
7
| vector[0] | = 1.0; |     |     |     |
| --------- | ------ | --- | --- | --- |
8
| vector[90] | = 3.0; |     |     |     |
| ---------- | ------ | --- | --- | --- |
9
| std::cout | << "Entry | of vector | with index | 0 = " |
| --------- | --------- | --------- | ---------- | ----- |
10
|     | << vector[0] | << "\n"; |     |     |
| --- | ------------ | -------- | --- | --- |
11
| std::cout | << "Entry | of vector | with index | 90 = " |
| --------- | --------- | --------- | ---------- | ------ |
12
| 13  | << vector[90] | <<  | "\n"; |     |
| --- | ------------- | --- | ----- | --- |
14 free(vector);
| 15 return | 0;  |     |     |     |
| --------- | --- | --- | --- | --- |
}
16

AppendixB:OtherProgrammingConstructsYouMightMeet 259
B.3 Ternary?: Operator
InSect.2.1.3wesawthatthekeywordsifandelsecouldbeusedtoexecuteone
set of statements if a condition was met, and a different set of instructions if the
conditionisnotmet,asinthecodefragmentbelow.
✞
double a, b, x;
1
if (a > b)
2
{
3
x = 100.0;
4
}
5
else
6
{
7
// a <= b
8
x = 0.0;
9
}
10
Theternary3 ?:operatorhasidenticaleffecttotheif-elsestatementsabove:
thecodeabovemaybewrittenidenticallyas
✞
double a, b, x;
1
x = (a > b) ? 100.0 : 0.0;
2
Althoughthecodewrittenaboveisshorterthantheoriginalif–elsestatements
we do not recommend it. The use of if and else makes the code much more
readable,especiallybyanyonewhoisnotanexpertinC++programming.
B.4 UsingNamespace
Youmayfindittedioustohavetowritestd::beforecoutandotherfunctionality
oftheC++language.Thereisawayaroundthis—wemayusetheusingstatement
onceinthecodeasshownbelow.
✞
#include <iostream>
1
2
using namespace std;
3
4
int main(int argc, char* argv[])
{
5
string city = "Cambridge";
6
cout << city << "\n";
7
return 0;
8
}
9
3Aternaryoperatorhasthreeinputs.

| 260 |     | AppendixB:OtherProgrammingConstructsYouMightMeet |     |
| --- | --- | ------------------------------------------------ | --- |
At first sight, the code above may appear to make a programmer’s life a little
easier.Bothstringandcouthavebeenusedherewithoutbeingprecededbythe
slightlyclunky std::.Thisapproachdoes,however,introduceasubtleproblem.
Supposewedeclaredavariablecalled“vector”.Itwouldthenbeunclearwhether
an instance of the word “vector” is referring to this variable, or the STL vector
introduced in Chap. 8, which the using statement now allows us to refer to as
vector rather than std::vector. As such, we do not recommend use of the
usingkeyword.
B.5 Structures
Astructureisacollectionofvariablesthatarecombinedtogether.Structurescanbe
thoughtofasverysimpleclasses,butwithouttheabilitytodeclarefunctions,access
privileges,oranyotherpropertiesofclassesotherthanvariables.Anexampleofa
structureisshownbelow.Notehowthevariablesareaccessedinexactlythesame
wayasclasses(using“.”foramemberor“->”toaccessamemberbyde-referencing
apointer).
✞
| #include <iostream> |     |     |     |
| ------------------- | --- | --- | --- |
1
2
struct
3 ModelParameters
4 {
| 5 double | viscosity; |     |     |
| -------- | ---------- | --- | --- |
| 6 double | density;   |     |     |
int numberOfDimensions;
7
};
8
9
| int main(int | argc, char* | argv[]) |     |
| ------------ | ----------- | ------- | --- |
10
{
11
| ModelParameters | example1; |     |     |
| --------------- | --------- | --- | --- |
12
| example1.viscosity |     | = 1.0e-4; |     |
| ------------------ | --- | --------- | --- |
13
| 14 example1.density          | =     | 1.0;         |     |
| ---------------------------- | ----- | ------------ | --- |
| 15 ModelParameters*          | p_eg1 | = &example1; |     |
| 16 p_eg1->numberOfDimensions |       | = 3;         |     |
17
| std::cout | << "Density | is " << example1.density | << "\n"; |
| --------- | ----------- | ------------------------ | -------- |
18
19
| return | 0;  |     |     |
| ------ | --- | --- | --- |
20
}
21

AppendixB:OtherProgrammingConstructsYouMightMeet 261
B.6 MultipleInheritance
AsmentionedinSect.7.1C++,unlikemanyotherobject-orientedlanguages,allows
multiple inheritance in which a derived class can be derived from multiple base
classes.Thatis,classesmayhavemorethanoneparent.
Supposewerequireaclassofmatricessothatwecancalculatethedeterminant
of given matrices, calculate the eigenvalues of these matrices, and calculate the
normofthesematrices.Onecolleaguemayhaveaclassofmatrices,MatrixDet,
that calculates the determinant of a matrix, but doesn’t have the functionality for
calculatingtheeigenvaluesorthenormofamatrix.Anothercolleaguemayhavea
classofmatrices,MatrixEigsNorm,thatdoesallowustocalculatetheeigenvalues
andnormofamatrix,butnotthedeterminant.Thefunctionalityrequiredistherefore
all available, but not in the same class. It would therefore be convenient to merge
thetwoclassestocreateanewclassthatcontainsallthefunctionalityrequired.This
ispossiblethroughmultipleinheritance.Belowweshowhowtoperformmultiple
inheritancetogenerateanewclassMatrixCombined.
✞
#include "MatrixDet.hpp"
1
#include "MatrixEigsNorm.hpp"
2
3
class MatrixCombined: public MatrixDet,
4
public MatrixEigsNorm
5
{
6
// Body of class
7
};
8
If the class MatrixDet has no member with the same name as a member of
theclassMatrixEigsNormthenmultipleinheritanceisanidealsolutiontothis
problem.SupposebothclasseshaveamethodcalledZeroEntries.Providedthis
member is made a virtual function in both the class MatrixDet and the class
MatrixEigsNormwemaypreventambiguitythrougheitherdefininganewfunc-
tionintheclassMatrixCombined,orbyexplicitlyidentifyingwhichfunctionis
tobeusedinthecallingcode.Forexample:
✞
MatrixCombined mat;
1
// use method ZeroEntries from the class MatrixDet
2
mat.MatrixDet::ZeroEntries();
3
B.7 ClassInitialisers
In many cases, the constructor of a class is a simple piece of code involving a
list of assignments. For example, the default constructor for the Book class in

| 262 |     | AppendixB:OtherProgrammingConstructsYouMightMeet |     |
| --- | --- | ------------------------------------------------ | --- |
Sect.6.2.7 set all the string fields to “unspecified” and the default constructor of
theComplexNumberclassinSect.6.4settherealandimaginarycomponentsto
zero.
✞
| 1 #include  | "ComplexNumber.hpp" |     |     |
| ----------- | ------------------- | --- | --- |
| // Override | default constructor |     |     |
2
| // Set real | and imaginary | parts | to zero |
| ----------- | ------------- | ----- | ------- |
3
ComplexNumber::ComplexNumber()
4
{
5
| mRealPart | = 0.0; |     |     |
| --------- | ------ | --- | --- |
6
| mImaginaryPart | = 0.0; |     |     |
| -------------- | ------ | --- | --- |
7
}
8
In cases where a constructor makes assignments it is more efficient to use C++
initialisers.Thesearecomma-separatedlistsofmembervariablesandvalueswhich
appearaftertheconstructor’ssignature(andacolon)butbeforethemainbodyofthe
constructorcode.CompilersforC++areabletooptimisealistofinitialisedvalues
more completely than a block of code containing assignment statements. It must
benotedthatsomecompilersinsistthattheinitialisersareorderedexactlyasthey
appearinthedefinitionoftheclass.Anexampleconstructorfortheclassofcomplex
numbersgiveninSect.6.4thatusesclassinitialisersisshownbelow.
✞
| #include | "ComplexNumber.hpp" |     |     |
| -------- | ------------------- | --- | --- |
1
| // Override | default constructor |     |     |
| ----------- | ------------------- | --- | --- |
2
| // Initialize | real and | imaginary | parts as zero |
| ------------- | -------- | --------- | ------------- |
3
| ComplexNumber::ComplexNumber() |     |     | :   |
| ------------------------------ | --- | --- | --- |
4
| 5   | mRealPart(0.0),     |     |     |
| --- | ------------------- | --- | --- |
| 6   | mImaginaryPart(0.0) |     |     |
7 {
| 8 // possibly | have more | code | in body |
| ------------- | --------- | ---- | ------- |
}
9

C
SolutionstoExercises
C.1 MatrixandLinearSystemClasses
ThecodebelowisexamplesolutionsfortheMatrixandLinearSystemclasses
developedintheExercisesattheendofChap.10.
ListingC.1 Matrix.hpp
✞
#ifndef MATRIXHEADERDEF
1
#define MATRIXHEADERDEF
2
#include "Vector.hpp"
3
4
class Matrix
5
{
6
private:
7
8
double** mData; // entries of matrix
int mNumRows, mNumCols; // dimensions
9
public:
10
Matrix(const Matrix& otherMatrix);
11
Matrix(int numRows, int numCols);
12
~Matrix();
13
int GetNumberOfRows() const;
14
int GetNumberOfColumns() const;
15
double& operator()(int i, int j); //1-based indexing
16
//overloaded assignment operator
17
Matrix& operator=(const Matrix& otherMatrix);
18
Matrix operator+() const; // unary +
19
Matrix operator-() const; // unary -
20
Matrix operator+(const Matrix& m1) const; // binary +
21
Matrix operator-(const Matrix& m1) const; // binary -
22
// scalar multiplication
23
©SpringerInternationalPublishingAG,partofSpringerNature2017 263
J.Pitt-FrancisandJ.Whiteley,GuidetoScientificComputing
inC++,UndergraduateTopicsinComputerScience,
https://doi.org/10.1007/978-3-319-73132-2

264 AppendixC:SolutionstoExercises
24
Matrix operator*(double a) const;
double CalculateDeterminant() const;
25
// declare vector multiplication friendship
26
27
friend Vector operator*(const Matrix& m,
const Vector& v);
28
29
friend Vector operator*(const Vector& v,
const Matrix& m);
30
};
31
// prototype signatures for friend operators
32
33
Vector operator*(const Matrix& m, const Vector& v);
34
Vector operator*(const Vector& v, const Matrix& m);
35
#endif
36
ListingC.2 Matrix.cpp
✞
#include <cmath>
1
#include <cassert>
2
#include "Matrix.hpp"
3
#include "Vector.hpp"
4
5
6
// Copy constructor
7
// Allocate memory for new matrix, and copy
8
// entries into this matrix
9
Matrix::Matrix(const Matrix& otherMatrix)
10
{
11
mNumRows = otherMatrix.mNumRows;
12
mNumCols = otherMatrix.mNumCols;
13
14
mData = new double* [mNumRows];
for (int i=0; i<mNumRows; i++)
15
{
16
mData[i] = new double [mNumCols];
17
}
18
for (int i=0; i<mNumRows; i++)
19
{
20
for (int j=0; j<mNumCols; j++)
21
{
22
mData[i][j] = otherMatrix.mData[i][j];
23
}
24
}
25
}
26
27
// Constructor for vector of a given length
28
// Allocates memory, and initialises entries
29
// to zero
30
Matrix::Matrix(int numRows, int numCols)
31
{
32
assert(numRows > 0);
33
assert(numCols > 0);
34
mNumRows = numRows;
35

AppendixC:SolutionstoExercises 265
mNumCols = numCols;
36
37
mData = new double* [mNumRows];
for (int i=0; i<mNumRows; i++)
38
{
39
mData[i] = new double [mNumCols];
40
}
41
for (int i=0; i<mNumRows; i++)
42
{
43
for (int j=0; j<mNumCols; j++)
44
{
45
mData[i][j] = 0.0;
46
}
47
}
48
}
49
50
// Overwritten destructor to correctly free memory
51
Matrix::~Matrix()
52
{
53
for (int i=0; i<mNumRows; i++)
54
{
55
delete[] mData[i];
56
}
57
delete[] mData;
58
}
59
60
// Method to get number of rows of matrix
61
int Matrix::GetNumberOfRows() const
62
{
63
return mNumRows;
64
}
65
66
// Method to get number of columns of matrix
67
int Matrix::GetNumberOfColumns() const
68
{
69
return mNumCols;
70
}
71
72
// Overloading the round brackets
73
// Note that this uses ‘one-based’ indexing,
74
// and a check on the validity of the index
75
double& Matrix::operator()(int i, int j)
76
{
77
assert(i > 0);
78
assert(i < mNumRows+1);
79
assert(j > 0);
80
assert(j < mNumCols+1);
81
return mData[i-1][j-1];
82
}
83
84
// Overloading the assignment operator
85
Matrix& Matrix::operator=(const Matrix& otherMatrix)
86

266 AppendixC:SolutionstoExercises
{
87
assert(mNumRows = otherMatrix.mNumRows);
88
assert(mNumCols = otherMatrix.mNumCols);
89
90
for (int i=0; i<mNumRows; i++)
91
{
92
for (int j=0; j<mNumCols; j++)
93
{
94
mData[i][j] = otherMatrix.mData[i][j];
95
}
96
}
97
98
return *this;
}
99
100
// Overloading the unary + operator
101
Matrix Matrix::operator+() const
102
{
103
Matrix mat(mNumRows, mNumCols);
104
for (int i=0; i<mNumRows; i++)
105
{
106
for (int j=0; j<mNumCols; j++)
107
{
108
mat(i+1,j+1) = mData[i][j];
109
}
110
}
111
return mat;
112
}
113
114
// Overloading the unary - operator
115
Matrix Matrix::operator-() const
116
{
117
Matrix mat(mNumRows, mNumCols);
118
for (int i=0; i<mNumRows; i++)
119
{
120
for (int j=0; j<mNumCols; j++)
121
{
122
mat(i+1,j+1) = -mData[i][j];
123
}
124
}
125
return mat;
126
}
127
128
// Overloading the binary + operator
129
Matrix Matrix::operator+(const Matrix& m1) const
130
{
131
assert(mNumRows == m1.mNumRows);
132
assert(mNumCols == m1.mNumCols);
133
Matrix mat(mNumRows, mNumCols);
134
for (int i=0; i<mNumRows; i++)
135
{
136
for (int j=0; j<mNumCols; j++)
137

AppendixC:SolutionstoExercises 267
{
138
mat(i+1,j+1) = mData[i][j] + m1.mData[i][j];
139
}
140
}
141
return mat;
142
}
143
144
// Overloading the binary - operator
145
Matrix Matrix::operator-(const Matrix& m1) const
146
{
147
assert(mNumRows == m1.mNumRows);
148
assert(mNumCols == m1.mNumCols);
149
Matrix mat(mNumRows, mNumCols);
150
for (int i=0; i<mNumRows; i++)
151
{
152
for (int j=0; j<mNumCols; j++)
153
{
154
mat(i+1,j+1) = mData[i][j] - m1.mData[i][j];
155
}
156
}
157
return mat;
158
}
159
160
// Overloading scalar multiplication
161
162
Matrix Matrix::operator*(double a) const
{
163
Matrix mat(mNumRows, mNumCols);
164
for (int i=0; i<mNumRows; i++)
165
{
166
for (int j=0; j<mNumCols; j++)
167
{
168
169
mat(i+1,j+1) = a*mData[i][j];
}
170
}
171
return mat;
172
}
173
174
// Overloading matrix multiplied by a vector
175
176
Vector operator*(const Matrix& m, const Vector& v)
{
177
int original_vector_size = v.GetSize();
178
assert(m.GetNumberOfColumns() == original_vector_size);
179
int new_vector_length = m.GetNumberOfRows();
180
Vector new_vector(new_vector_length);
181
182
for (int i=0; i<new_vector_length; i++)
183
{
184
for (int j=0; j<original_vector_size; j++)
185
{
186
187
new_vector[i] += m.mData[i][j]*v.Read(j);
}
188

| 268 |     |     |     |     |     | AppendixC:SolutionstoExercises |     |
| --- | --- | --- | --- | --- | --- | ------------------------------ | --- |
}
189
190
| 191 return |     | new_vector; |     |     |     |     |     |
| ---------- | --- | ----------- | --- | --- | --- | --- | --- |
192 }
193
| // Overloading |     |     | vector | multiplied |     | by a matrix |     |
| -------------- | --- | --- | ------ | ---------- | --- | ----------- | --- |
194
| Vector | operator*(const |     |     | Vector& |     | v, const Matrix& | m)  |
| ------ | --------------- | --- | --- | ------- | --- | ---------------- | --- |
195
{
196
| int | original_vector_size |     |     |     | = v.GetSize(); |     |     |
| --- | -------------------- | --- | --- | --- | -------------- | --- | --- |
197
| assert(m.GetNumberOfRows() |     |     |     |     | ==  | original_vector_size); |     |
| -------------------------- | --- | --- | --- | --- | --- | ---------------------- | --- |
198
| int | new_vector_length |     |     | =   | m.GetNumberOfColumns(); |     |     |
| --- | ----------------- | --- | --- | --- | ----------------------- | --- | --- |
199
| Vector |     | new_vector(new_vector_length); |     |     |     |     |     |
| ------ | --- | ------------------------------ | --- | --- | --- | --- | --- |
200
201
| 202 for | (int | i=0; | i<new_vector_length; |     |     | i++) |     |
| ------- | ---- | ---- | -------------------- | --- | --- | ---- | --- |
203 {
| 204 | for | (int | j=0; | j<original_vector_size; |     |     | j++) |
| --- | --- | ---- | ---- | ----------------------- | --- | --- | ---- |
{
205
|     |     | new_vector[i] |     | +=  | v.Read(j)*m.mData[j][i]; |     |     |
| --- | --- | ------------- | --- | --- | ------------------------ | --- | --- |
206
}
207
}
208
209
| return |     | new_vector; |     |     |     |     |     |
| ------ | --- | ----------- | --- | --- | --- | --- | --- |
210
}
211
212
| 213 // Calculate |                                | determinant |     | of  | square | matrix | recursively |
| ---------------- | ------------------------------ | ----------- | --- | --- | ------ | ------ | ----------- |
| 214 double       | Matrix::CalculateDeterminant() |             |     |     |        | const  |             |
215 {
| assert(mNumRows |     |     | ==  | mNumCols); |     |     |     |
| --------------- | --- | --- | --- | ---------- | --- | --- | --- |
216
| double |     | determinant |     | = 0.0; |     |     |     |
| ------ | --- | ----------- | --- | ------ | --- | --- | --- |
217
218
| if  | (mNumRows |     | == 1) |     |     |     |     |
| --- | --------- | --- | ----- | --- | --- | --- | --- |
219
{
220
|     | determinant |     | =   | mData[0][0]; |     |     |     |
| --- | ----------- | --- | --- | ------------ | --- | --- | --- |
221
}
222
223 else
224 {
| 225 | //  | More | than one   | entry | of                | matrix |            |
| --- | --- | ---- | ---------- | ----- | ----------------- | ------ | ---------- |
| 226 | for | (int | i_outer=0; |       | i_outer<mNumRows; |        | i_outer++) |
{
227
|     |     | Matrix | sub_matrix(mNumRows-1, |     |     |     |     |
| --- | --- | ------ | ---------------------- | --- | --- | --- | --- |
228
mNumRows-1);
229
|     |     | for (int | i=0; | i<mNumRows-1; |     | i++) |     |
| --- | --- | -------- | ---- | ------------- | --- | ---- | --- |
230
{
231
|     |     | for | (int | j=0; | j<i_outer; | j++) |     |
| --- | --- | --- | ---- | ---- | ---------- | ---- | --- |
232
{
233
| 234 |     |     | sub_matrix(i+1,j+1) |            |     | = mData[i+1][j];   |      |
| --- | --- | --- | ------------------- | ---------- | --- | ------------------ | ---- |
| 235 |     | }   |                     |            |     |                    |      |
| 236 |     | for | (int                | j=i_outer; |     | j<mNumRows-1;      | j++) |
| 237 |     | {   |                     |            |     |                    |      |
|     |     |     | sub_matrix(i+1,j+1) |            |     | = mData[i+1][j+1]; |      |
238
}
239

AppendixC:SolutionstoExercises 269
}
240
double sub_matrix_determinant =
241
sub_matrix.CalculateDeterminant();
242
243
244
determinant += pow(-1.0, i_outer)*
245
mData[0][i_outer]*sub_matrix_determinant;
}
246
}
247
return determinant;
248
}
249
ListingC.3 LinearSystem.hpp
✞
#ifndef LINEARSYSTEMHEADERDEF
1
#define LINEARSYSTEMHEADERDEF
2
#include "Vector.hpp"
3
#include "Matrix.hpp"
4
5
class LinearSystem
6
{
7
protected://private or protected for Exercise 10.5
8
int mSize; // size of linear system
9
10
Matrix* mpA; // matrix for linear system
11
Vector* mpb; // vector for linear system
12
// Only allow constructor that specifies matrix/vector
13
// to be used. Copy constructor is private or protected.
14
LinearSystem(const LinearSystem& otherLinearSystem){};
15
public:
16
LinearSystem(const Matrix& A, const Vector& b);
17
18
// destructor frees memory allocated
19
~LinearSystem();
20
21
// Method for solving system
22
virtual Vector Solve();
23
};
24
25
#endif
26

270 AppendixC:SolutionstoExercises
ListingC.4 LinearSystem.cpp
✞
#include <cmath>
1
#include <cassert>
2
#include "LinearSystem.hpp"
3
#include "Matrix.hpp"
4
#include "Vector.hpp"
5
6
// Copy matrix and vector so that original matrix and vector
7
// specified are unchanged by Gaussian elimination
8
LinearSystem::LinearSystem(const Matrix& A, const Vector& b)
9
{
10
// check matrix and vector are of compatible sizes
11
int local_size = A.GetNumberOfRows();
12
assert(A.GetNumberOfColumns() == local_size);
13
assert(b.GetSize() == local_size);
14
15
// set variables for linear system
16
mSize = local_size;
17
mpA = new Matrix(A);
18
mpb = new Vector(b);
19
}
20
21
// Destructor to free memory
22
LinearSystem::~LinearSystem()
23
{
24
delete mpA;
25
delete mpb;
26
}
27
28
// Solve linear system using Gaussian elimination
29
// This method changes the content of the matrix mpA
30
Vector LinearSystem::Solve()
31
{
32
Vector m(mSize); //See description in Appendix A
33
Vector solution(mSize);
34
35
// We introduce references to make the syntax readable
36
37
Matrix& rA = *mpA;
38
Vector& rb = *mpb;
39
// forward sweep of Gaussian elimination
40
for (int k=0; k<mSize-1; k++)
41
{
42
// see if pivoting is necessary
43
double max = 0.0;
44
int row = -1;
45
for (int i=k; i<mSize; i++)
46
{
47
if (fabs(rA(i+1,k+1)) > max)
48
{
49
row = i;
50

AppendixC:SolutionstoExercises 271
max=fabs(rA(i+1,k+1));
51
}
52
| 53  | }          |     |     |     |     |     |
| --- | ---------- | --- | --- | --- | --- | --- |
| 54  | assert(row | >=  | 0); |     |     |     |
55
|     | //  | pivot if necessary |     |     |     |     |
| --- | --- | ------------------ | --- | --- | --- | --- |
56
|     | if  | (row != k) |     |     |     |     |
| --- | --- | ---------- | --- | --- | --- | --- |
57
{
58
|     |     | // swap matrix | rows | k+1 with | row+1 |     |
| --- | --- | -------------- | ---- | -------- | ----- | --- |
59
|     |     | for (int i=0; | i<mSize; | i++) |     |     |
| --- | --- | ------------- | -------- | ---- | --- | --- |
60
{
61
|     |     | double | temp = rA(k+1,i+1); |     |     |     |
| --- | --- | ------ | ------------------- | --- | --- | --- |
62
| 63  |     | rA(k+1,i+1)    | = rA(row+1,i+1); |       |            |     |
| --- | --- | -------------- | ---------------- | ----- | ---------- | --- |
| 64  |     | rA(row+1,i+1)  | =                | temp; |            |     |
| 65  |     | }              |                  |       |            |     |
| 66  |     | // swap vector | entries          | k+1   | with row+1 |     |
|     |     | double temp    | = rb(k+1);       |       |            |     |
67
|     |     | rb(k+1) = | rb(row+1); |     |     |     |
| --- | --- | --------- | ---------- | --- | --- | --- |
68
|     |     | rb(row+1) | = temp; |     |     |     |
| --- | --- | --------- | ------- | --- | --- | --- |
69
}
70
71
|     | //  | create zeros | in lower | part | of column | k   |
| --- | --- | ------------ | -------- | ---- | --------- | --- |
72
|     | for | (int i=k+1; | i<mSize; | i++) |     |     |
| --- | --- | ----------- | -------- | ---- | --- | --- |
73
| 74  | {   |                                   |                        |      |     |     |
| --- | --- | --------------------------------- | ---------------------- | ---- | --- | --- |
| 75  |     | m(i+1) = rA(i+1,k+1)/rA(k+1,k+1); |                        |      |     |     |
| 76  |     | for (int j=k;                     | j<mSize;               | j++) |     |     |
| 77  |     | {                                 |                        |      |     |     |
|     |     | rA(i+1,j+1)                       | -= rA(k+1,j+1)*m(i+1); |      |     |     |
78
}
79
|     |     | rb(i+1) -= | rb(k+1)*m(i+1); |     |     |     |
| --- | --- | ---------- | --------------- | --- | --- | --- |
80
}
81
}
82
83
|     | // back | substitution |     |     |     |     |
| --- | ------- | ------------ | --- | --- | --- | --- |
84
| 85  | for (int | i=mSize-1; | i>-1; | i--) |     |     |
| --- | -------- | ---------- | ----- | ---- | --- | --- |
86 {
| 87  | solution(i+1) |             | = rb(i+1); |      |     |     |
| --- | ------------- | ----------- | ---------- | ---- | --- | --- |
| 88  | for           | (int j=i+1; | j<mSize;   | j++) |     |     |
{
89
|     |     | solution(i+1) | -= rA(i+1,j+1)*solution(j+1); |     |     |     |
| --- | --- | ------------- | ----------------------------- | --- | --- | --- |
90
}
91
|     | solution(i+1) |     | /= rA(i+1,i+1); |     |     |     |
| --- | ------------- | --- | --------------- | --- | --- | --- |
92
}
93
94
|     | return | solution; |     |     |     |     |
| --- | ------ | --------- | --- | --- | --- | --- |
95
96 }

272 AppendixC:SolutionstoExercises
ListingC.5 LinearSystemTestSuite.hpp
✞
#include <cmath>
1
#include <cxxtest/TestSuite.h>
2
#include "Vector.hpp"
3
#include "Matrix.hpp"
4
#include "LinearSystem.hpp"
5
6
// An outline solution for Exercise 10.4
7
class LinearSystemTestSuite : public CxxTest::TestSuite
8
{
9
public:
10
// Test constructors (using norm etc.)
11
void TestDefaultConstructors(void)
12
{
13
Matrix squ(5,5);
14
TS_ASSERT_DELTA(squ.CalculateDeterminant(), 0.0, 1e-8);
15
Matrix nonsquare(7,13);
16
TS_ASSERT_EQUALS(nonsquare.GetNumberOfRows(), 7);
17
TS_ASSERT_EQUALS(nonsquare.GetNumberOfColumns(), 13);
18
Vector vec(25);
19
TS_ASSERT_DELTA(vec.CalculateNorm(), 0.0, 1.0e-8);
20
TS_ASSERT_EQUALS(vec.GetSize(), 25);
21
TS_ASSERT_EQUALS(length(vec), 25);
22
}
23
// Empty test
24
void TestSomeExceptions(void)
25
{
26
// Our code uses assertions for error checking.
27
// If you use Exception then test:
28
// Matrix a(3,3); Matrix b(4,4);
29
// TS_ASSERT_THROWS_ANYTHING(a+b);
30
}
31
// Test with cond(a) ~= 1e7
32
void TestLargeConditionNumber(void)
33
{
34
Matrix a(3,3); Vector b(3); Vector x(3);
35
a(1,1) = 1; a(1,2) = 0; a(1,3) = 1e7;
36
a(2,1) = 1; a(2,2) =-1; a(2,3) = 0;
37
a(3,1) = 1; a(3,2) = 0; a(3,3) = 1;
38
b(1) = 1e7+1; b(2) = 0; b(3) = 2;
39
double det = a.CalculateDeterminant();
40
TS_ASSERT_DELTA(det, 1.0e7-1.0, 1e-8);
41
LinearSystem ls(a, b);
42
x = ls.Solve();
43
for (int i=1; i<=3; i++)
44
{
45
TS_ASSERT_DELTA( x(i), 1.0, 1e-8);
46
}
47
}
48
// Gaussian Elimination without pivoting would fail:
49
void TestZeroPivot(void)
50

AppendixC:SolutionstoExercises 273
{
51
Matrix a(3,3); Vector b(3); Vector x(3);
52
a(1,1) = 0; a(1,2) = 1; a(1,3) = 1;
53
a(2,1) = 1; a(2,2) =-1; a(2,3) = 0;
54
a(3,1) = 1; a(3,2) = 1; a(3,3) = 1;
55
b(1) = 2; b(2) = 0; b(3) = 3;
56
TS_ASSERT_DELTA( a.CalculateDeterminant(), 1.0, 1e-8);
57
LinearSystem ls(a, b);
58
x = ls.Solve();
59
for (int i=1; i<=3; i++)
60
{
61
TS_ASSERT_DELTA( x(i), 1.0, 1e-8);
62
}
63
TS_ASSERT_DELTA( x.CalculateNorm(1), 3.0, 1e-8);
64
TS_ASSERT_DELTA( x.CalculateNorm(2), sqrt(3.0), 1e-8);
65
}
66
};
67
C.2 ODESolverLibrary
The code below is example solutions for the classes developed in the Exercises at
theendofChap.12.
ListingC.6 FiniteDifferenceGrid.cpp
✞
#include <cassert>
1
#include "FiniteDifferenceGrid.hpp"
2
#include "Node.hpp"
3
4
FiniteDifferenceGrid::FiniteDifferenceGrid(int numNodes,
5
double xMin, double xMax)
6
{
7
double stepsize = (xMax-xMin)/((double)(numNodes-1));
8
for (int i=0; i<numNodes; i++)
9
{
10
Node node;
11
12
node.coordinate = xMin+i*stepsize;
mNodes.push_back(node);
13
}
14
assert(mNodes.size() == numNodes);
15
}
16

| 274 |     |     |     | AppendixC:SolutionstoExercises |     |
| --- | --- | --- | --- | ------------------------------ | --- |
BvpOde.cpp
ListingC.7
✞
|     | #include | <iostream> |     |     |     |
| --- | -------- | ---------- | --- | --- | --- |
1
| 2   | #include | <fstream>    |     |     |     |
| --- | -------- | ------------ | --- | --- | --- |
| 3   | #include | <cassert>    |     |     |     |
| 4   | #include | "BvpOde.hpp" |     |     |     |
5
|     | BvpOde::BvpOde(SecondOrderOde* |     |     | pOde, |     |
| --- | ------------------------------ | --- | --- | ----- | --- |
6
|     |     |     | BoundaryConditions* | pBcs, int | numNodes) |
| --- | --- | --- | ------------------- | --------- | --------- |
7
{
8
|     | mpOde | = pOde; |     |     |     |
| --- | ----- | ------- | --- | --- | --- |
9
|     | mpBconds | =   | pBcs; |     |     |
| --- | -------- | --- | ----- | --- | --- |
10
11
| 12  | mNumNodes | =     | numNodes;                       |     |              |
| --- | --------- | ----- | ------------------------------- | --- | ------------ |
| 13  | mpGrid    | = new | FiniteDifferenceGrid(mNumNodes, |     | pOde->mXmin, |
| 14  |           |       | pOde->mXmax);                   |     |              |
15
|     | mpSolVec | =   | new Vector(mNumNodes); |     |     |
| --- | -------- | --- | ---------------------- | --- | --- |
16
|     | mpRhsVec | =   | new Vector(mNumNodes); |     |     |
| --- | -------- | --- | ---------------------- | --- | --- |
17
|     | mpLhsMat | =   | new Matrix(mNumNodes, | mNumNodes); |     |
| --- | -------- | --- | --------------------- | ----------- | --- |
18
19
|     | mFilename | =   | "ode_output.dat"; |     |     |
| --- | --------- | --- | ----------------- | --- | --- |
20
|     | mpLinearSystem |     | = NULL; |     |     |
| --- | -------------- | --- | ------- | --- | --- |
21
}
22
23
24 BvpOde::~BvpOde()
25 {
| 26  | // Deletes |           | memory allocated | in constructor |     |
| --- | ---------- | --------- | ---------------- | -------------- | --- |
|     | delete     | mpSolVec; |                  |                |     |
27
|     | delete | mpRhsVec; |     |     |     |
| --- | ------ | --------- | --- | --- | --- |
28
|     | delete | mpLhsMat; |     |     |     |
| --- | ------ | --------- | --- | --- | --- |
29
|     | delete | mpGrid; |     |     |     |
| --- | ------ | ------- | --- | --- | --- |
30
|     | // Only | delete | if Solve has | been called |     |
| --- | ------- | ------ | ------------ | ----------- | --- |
31
|     | if (mpLinearSystem) |     |     |     |     |
| --- | ------------------- | --- | --- | --- | --- |
32
{
33
| 34  | delete | mpLinearSystem; |     |     |     |
| --- | ------ | --------------- | --- | --- | --- |
35 }
36 }
37
|     | void BvpOde::Solve() |     |     |     |     |
| --- | -------------------- | --- | --- | --- | --- |
38
{
39
PopulateMatrix();
40
PopulateVector();
41
ApplyBoundaryConditions();
42
|     | mpLinearSystem |     | = new LinearSystem(*mpLhsMat, |     | *mpRhsVec); |
| --- | -------------- | --- | ----------------------------- | --- | ----------- |
43
|     | *mpSolVec | =   | mpLinearSystem->Solve(); |     |     |
| --- | --------- | --- | ------------------------ | --- | --- |
44
45 WriteSolutionFile();
46 }
47
| 48  | void BvpOde::PopulateMatrix() |     |     |     |     |
| --- | ----------------------------- | --- | --- | --- | --- |
{
49
|     | for | (int i=1; | i<mNumNodes-1; | i++) |     |
| --- | --- | --------- | -------------- | ---- | --- |
50

| AppendixC:SolutionstoExercises |     |     |     |     |     | 275 |
| ------------------------------ | --- | --- | --- | --- | --- | --- |
{
51
|     | // xm, | x and xp | are x(i-1), | x(i) and | x(i+1) |     |
| --- | ------ | -------- | ----------- | -------- | ------ | --- |
52
| 53  | double | xm = mpGrid->mNodes[i-1].coordinate; |     |     |     |     |
| --- | ------ | ------------------------------------ | --- | --- | --- | --- |
| 54  | double | x = mpGrid->mNodes[i].coordinate;    |     |     |     |     |
| 55  | double | xp = mpGrid->mNodes[i+1].coordinate; |     |     |     |     |
|     | double | alpha = 2.0/(xp-xm)/(x-xm);          |     |     |     |     |
56
|     | double | beta = -2.0/(xp-x)/(x-xm); |     |     |     |     |
| --- | ------ | -------------------------- | --- | --- | --- | --- |
57
|     | double | gamma = 2.0/(xp-xm)/(xp-x); |     |     |     |     |
| --- | ------ | --------------------------- | --- | --- | --- | --- |
58
|     | (*mpLhsMat)(i+1,i) |     | = (mpOde->mCoeffOfUxx)*alpha |     |     | -   |
| --- | ------------------ | --- | ---------------------------- | --- | --- | --- |
59
(mpOde->mCoeffOfUx)/(xp-xm);
60
|     | (*mpLhsMat)(i+1,i+1) |     | =   | (mpOde->mCoeffOfUxx)*beta |     | +   |
| --- | -------------------- | --- | --- | ------------------------- | --- | --- |
61
mpOde->mCoeffOfU;
62
| 63  | (*mpLhsMat)(i+1,i+2) |     | =                            | (mpOde->mCoeffOfUxx)*gamma |     | +   |
| --- | -------------------- | --- | ---------------------------- | -------------------------- | --- | --- |
| 64  |                      |     | (mpOde->mCoeffOfUx)/(xp-xm); |                            |     |     |
65 }
66 }
67
| void | BvpOde::PopulateVector() |     |     |     |     |     |
| ---- | ------------------------ | --- | --- | --- | --- | --- |
68
{
69
|     | for (int | i=1; i<mNumNodes-1; |     | i++) |     |     |
| --- | -------- | ------------------- | --- | ---- | --- | --- |
70
{
71
|     | double | x = mpGrid->mNodes[i].coordinate; |     |     |     |     |
| --- | ------ | --------------------------------- | --- | --- | --- | --- |
72
|     | (*mpRhsVec)(i+1) |     | = mpOde->mpRhsFunc(x); |     |     |     |
| --- | ---------------- | --- | ---------------------- | --- | --- | --- |
73
74 }
75 }
76
| 77 void | BvpOde::ApplyBoundaryConditions() |     |     |     |     |     |
| ------- | --------------------------------- | --- | --- | --- | --- | --- |
{
78
|     | bool left_bc_applied |     | = false; |     |     |     |
| --- | -------------------- | --- | -------- | --- | --- | --- |
79
|     | bool right_bc_applied |     | = false; |     |     |     |
| --- | --------------------- | --- | -------- | --- | --- | --- |
80
81
|     | if (mpBconds->mLhsBcIsDirichlet) |     |     |     |     |     |
| --- | -------------------------------- | --- | --- | --- | --- | --- |
82
{
83
|     | (*mpLhsMat)(1,1) |     | = 1.0; |     |     |     |
| --- | ---------------- | --- | ------ | --- | --- | --- |
84
| 85  | (*mpRhsVec)(1)  | =   | mpBconds->mLhsBcValue; |     |     |     |
| --- | --------------- | --- | ---------------------- | --- | --- | --- |
| 86  | left_bc_applied |     | = true;                |     |     |     |
87 }
88
|     | if (mpBconds->mRhsBcIsDirichlet) |     |     |     |     |     |
| --- | -------------------------------- | --- | --- | --- | --- | --- |
89
{
90
|     | (*mpLhsMat)(mNumNodes,mNumNodes) |     |     | = 1.0; |     |     |
| --- | -------------------------------- | --- | --- | ------ | --- | --- |
91
|     | (*mpRhsVec)(mNumNodes) |     |     | = mpBconds->mRhsBcValue; |     |     |
| --- | ---------------------- | --- | --- | ------------------------ | --- | --- |
92
|     | right_bc_applied |     | = true; |     |     |     |
| --- | ---------------- | --- | ------- | --- | --- | --- |
93
}
94
95
| 96  | if (mpBconds->mLhsBcIsNeumann) |     |     |     |     |     |
| --- | ------------------------------ | --- | --- | --- | --- | --- |
97 {
| 98  | assert(left_bc_applied |                                  |     | == false); |     |     |
| --- | ---------------------- | -------------------------------- | --- | ---------- | --- | --- |
| 99  | double                 | h = mpGrid->mNodes[1].coordinate |     |            | -   |     |
mpGrid->mNodes[0].coordinate;
100
|     | (*mpLhsMat)(1,1) |     | = -1.0/h; |     |     |     |
| --- | ---------------- | --- | --------- | --- | --- | --- |
101

| 276 |                  |     |          |     | AppendixC:SolutionstoExercises |     |     |
| --- | ---------------- | --- | -------- | --- | ------------------------------ | --- | --- |
|     | (*mpLhsMat)(1,2) |     | = 1.0/h; |     |                                |     |     |
102
|     | (*mpRhsVec)(1) |     | = mpBconds->mLhsBcValue; |     |     |     |     |
| --- | -------------- | --- | ------------------------ | --- | --- | --- | --- |
103
| 104 | left_bc_applied |     | = true; |     |     |     |     |
| --- | --------------- | --- | ------- | --- | --- | --- | --- |
105 }
106
|     | if (mpBconds->mRhsBcIsNeumann) |     |     |     |     |     |     |
| --- | ------------------------------ | --- | --- | --- | --- | --- | --- |
107
{
108
|     | assert(right_bc_applied |     |     | == false); |     |     |     |
| --- | ----------------------- | --- | --- | ---------- | --- | --- | --- |
109
|     | double h | = mpGrid->mNodes[mNumNodes-1].coordinate |     |     |     |     | -   |
| --- | -------- | ---------------------------------------- | --- | --- | --- | --- | --- |
110
mpGrid->mNodes[mNumNodes-2].coordinate;
111
|     | (*mpLhsMat)(mNumNodes,mNumNodes-1) |     |     |     | = -1.0/h; |     |     |
| --- | ---------------------------------- | --- | --- | --- | --------- | --- | --- |
112
|     | (*mpLhsMat)(mNumNodes,mNumNodes) |     |     |     | = 1.0/h; |     |     |
| --- | -------------------------------- | --- | --- | --- | -------- | --- | --- |
113
| 114 | (*mpRhsVec)(mNumNodes) |     |         | = mpBconds->mRhsBcValue; |     |     |     |
| --- | ---------------------- | --- | ------- | ------------------------ | --- | --- | --- |
| 115 | right_bc_applied       |     | = true; |                          |     |     |     |
116 }
117
|     | // Check that | boundary | conditions |     | have been | applied |     |
| --- | ------------- | -------- | ---------- | --- | --------- | ------- | --- |
118
|     | // on both | boundaries |     |     |     |     |     |
| --- | ---------- | ---------- | --- | --- | --- | --- | --- |
119
assert(left_bc_applied);
120
assert(right_bc_applied);
121
}
122
123
|     | void BvpOde::WriteSolutionFile() |     |     |     |     |     |     |
| --- | -------------------------------- | --- | --- | --- | --- | --- | --- |
124
125 {
| 126 | std::ofstream | output_file(mFilename.c_str()); |     |     |     |     |     |
| --- | ------------- | ------------------------------- | --- | --- | --- | --- | --- |
127 assert(output_file.is_open());
| 128 | for (int i=0; | i<mNumNodes; |     | i++) |     |     |     |
| --- | ------------- | ------------ | --- | ---- | --- | --- | --- |
{
129
|     | double x | = mpGrid->mNodes[i].coordinate; |     |     |     |     |     |
| --- | -------- | ------------------------------- | --- | --- | --- | --- | --- |
130
|     | output_file | <<  | x << " | " << | (*mpSolVec)(i+1) | <<  | "\n"; |
| --- | ----------- | --- | ------ | ---- | ---------------- | --- | ----- |
131
}
132
output_file.flush();
133
output_file.close();
134
|     | std::cout<<"Solution |     | written | to  | "<<mFilename<<"\n"; |     |     |
| --- | -------------------- | --- | ------- | --- | ------------------- | --- | --- |
135
136 }
| ListingC.8 | BoundaryConditions.cpp |     |     |     |     |     |     |
| ---------- | ---------------------- | --- | --- | --- | --- | --- | --- |
✞
|     | #include <cassert> |     |     |     |     |     |     |
| --- | ------------------ | --- | --- | --- | --- | --- | --- |
1
| 2   | #include "BoundaryConditions.hpp" |     |     |     |     |     |     |
| --- | --------------------------------- | --- | --- | --- | --- | --- | --- |
3
4 BoundaryConditions::BoundaryConditions()
5 {
|     | mLhsBcIsDirichlet |     | = false; |     |     |     |     |
| --- | ----------------- | --- | -------- | --- | --- | --- | --- |
6
|     | mRhsBcIsDirichlet |     | = false; |     |     |     |     |
| --- | ----------------- | --- | -------- | --- | --- | --- | --- |
7
|     | mLhsBcIsNeumann | =   | false; |     |     |     |     |
| --- | --------------- | --- | ------ | --- | --- | --- | --- |
8
|     | mRhsBcIsNeumann | =   | false; |     |     |     |     |
| --- | --------------- | --- | ------ | --- | --- | --- | --- |
9
}
10

| AppendixC:SolutionstoExercises |     |     |     |     | 277 |
| ------------------------------ | --- | --- | --- | --- | --- |
11
| void BoundaryConditions::SetLhsDirichletBc(double |     |     |     | lhsValue) |     |
| ------------------------------------------------- | --- | --- | --- | --------- | --- |
12
13 {
14 assert(!mLhsBcIsNeumann);
| 15 mLhsBcIsDirichlet |             | = true; |     |     |     |
| -------------------- | ----------- | ------- | --- | --- | --- |
| mLhsBcValue          | = lhsValue; |         |     |     |     |
16
}
17
18
| void BoundaryConditions::SetRhsDirichletBc(double |     |     |     | rhsValue) |     |
| ------------------------------------------------- | --- | --- | --- | --------- | --- |
19
{
20
assert(!mRhsBcIsNeumann);
21
| mRhsBcIsDirichlet |     | = true; |     |     |     |
| ----------------- | --- | ------- | --- | --- | --- |
22
| 23 mRhsBcValue | = rhsValue; |     |     |     |     |
| -------------- | ----------- | --- | --- | --- | --- |
24 }
25
| 26 void BoundaryConditions:: |                        |     |                |     |     |
| ---------------------------- | ---------------------- | --- | -------------- | --- | --- |
|                              | SetLhsNeumannBc(double |     | lhsDerivValue) |     |     |
27
{
28
assert(!mLhsBcIsDirichlet);
29
| mLhsBcIsNeumann |     | = true; |     |     |     |
| --------------- | --- | ------- | --- | --- | --- |
30
| mLhsBcValue | = lhsDerivValue; |     |     |     |     |
| ----------- | ---------------- | --- | --- | --- | --- |
31
}
32
33
| 34 void BoundaryConditions:: |                        |     |                |     |     |
| ---------------------------- | ---------------------- | --- | -------------- | --- | --- |
| 35                           | SetRhsNeumannBc(double |     | rhsDerivValue) |     |     |
36 {
37 assert(!mRhsBcIsDirichlet);
| mRhsBcIsNeumann |     | = true; |     |     |     |
| --------------- | --- | ------- | --- | --- | --- |
38
| mRhsBcValue | = rhsDerivValue; |     |     |     |     |
| ----------- | ---------------- | --- | --- | --- | --- |
39
}
40
| ListingC.9 | BvpOdeTestSuite.hpp |     |     |     |     |
| ---------- | ------------------- | --- | --- | --- | --- |
✞
| #include | <cxxtest/TestSuite.h> |     |     |     |     |
| -------- | --------------------- | --- | --- | --- | --- |
1
| #include | <fstream> |     |     |     |     |
| -------- | --------- | --- | --- | --- | --- |
2
| 3 #include | "BvpOde.hpp" |     |     |     |     |
| ---------- | ------------ | --- | --- | --- | --- |
4
| 5 double | model_prob_1_rhs(double |     | x){return | 1.0;}         |     |
| -------- | ----------------------- | --- | --------- | ------------- | --- |
| 6 double | model_prob_2_rhs(double |     | x){return | 34.0*sin(x);} |     |
7
| // This | suite is an | example | solution | to Exercise 12.5 |     |
| ------- | ----------- | ------- | -------- | ---------------- | --- |
8
| class BvpOdeTestSuite |     | : public | CxxTest::TestSuite |     |     |
| --------------------- | --- | -------- | ------------------ | --- | --- |
9
{
10
private:
11
| void | ReadIn(const | char* rName, | std::vector<double>& |     | ts, |
| ---- | ------------ | ------------ | -------------------- | --- | --- |
12
|     |     |     | std::vector<double>& |     | vs) |
| --- | --- | --- | -------------------- | --- | --- |
13
14 {
| 15 std::ifstream |               | file(rName); |     |     |     |
| ---------------- | ------------- | ------------ | --- | --- | --- |
| 16 double        | time,         | value;       |     |     |     |
| 17 while         | (!file.eof()) |              |     |     |     |

| 278 |     |     | AppendixC:SolutionstoExercises |     |
| --- | --- | --- | ------------------------------ | --- |
{
18
|     | file >> | time >> value; |     |     |
| --- | ------- | -------------- | --- | --- |
19
| 20  | if (file.good())    |     |                      |     |
| --- | ------------------- | --- | -------------------- | --- |
| 21  | {                   |     |                      |     |
| 22  | ts.push_back(time); |     | vs.push_back(value); |     |
}
23
}
24
}
25
public:
26
|     | void TestModelProblem1(void) |     |     |     |
| --- | ---------------------------- | --- | --- | --- |
27
{
28
|     | SecondOrderOde | ode_mp1(-1.0, | 0.0, 0.0, |     |
| --- | -------------- | ------------- | --------- | --- |
29
| 30  |                                | model_prob_1_rhs, |       |     |
| --- | ------------------------------ | ----------------- | ----- | --- |
| 31  |                                | 0.0,              | 1.0); |     |
| 32  | BoundaryConditions             | bc_mp1;           |       |     |
| 33  | bc_mp1.SetLhsDirichletBc(0.0); |                   |       |     |
bc_mp1.SetRhsDirichletBc(0.0);
34
35
|     | BvpOde bvpode_mp1(&ode_mp1, |     | &bc_mp1, 101); |     |
| --- | --------------------------- | --- | -------------- | --- |
36
bvpode_mp1.SetFilename("model_problem_results1.dat");
37
bvpode_mp1.Solve();
38
|     | std::vector<double> | xs, | us; |     |
| --- | ------------------- | --- | --- | --- |
39
ReadIn("model_problem_results1.dat", xs, us);
40
| 41  | TS_ASSERT_EQUALS(xs.size(), |              | 101u);         |     |
| --- | --------------------------- | ------------ | -------------- | --- |
| 42  | TS_ASSERT_EQUALS(us.size(), |              | 101u);         |     |
| 43  | // Test solution            | as given     | in Sec. 12.1.1 |     |
| 44  | for (int i=0;               | i<xs.size(); | i++)           |     |
{
45
|     | TS_ASSERT_DELTA(us[i], |     | xs[i]*(1.0-xs[i])/2.0, | 1e-8); |
| --- | ---------------------- | --- | ---------------------- | ------ |
46
}
47
}
48
49
|     | void TestModelProblem2(void) |     |     |     |
| --- | ---------------------------- | --- | --- | --- |
50
{
51
| 52  | SecondOrderOde     | ode_mp2(1.0,      | 3.0, -4.0, |     |
| --- | ------------------ | ----------------- | ---------- | --- |
| 53  |                    | model_prob_2_rhs, |            |     |
| 54  |                    | 0.0,              | M_PI);     |     |
| 55  | BoundaryConditions | bc_mp2;           |            |     |
bc_mp2.SetLhsNeumannBc(-5.0);
56
bc_mp2.SetRhsDirichletBc(4.0);
57
58
|     | BvpOde bvpode_mp2(&ode_mp2, |     | &bc_mp2, 1001); |     |
| --- | --------------------------- | --- | --------------- | --- |
59
bvpode_mp2.SetFilename("model_problem_results2.dat");
60
bvpode_mp2.Solve();
61
|     | std::vector<double> | xs, | us; |     |
| --- | ------------------- | --- | --- | --- |
62
| 63  | ReadIn("model_problem_results2.dat", |              | xs, us);       |     |
| --- | ------------------------------------ | ------------ | -------------- | --- |
| 64  | TS_ASSERT_EQUALS(xs.size(),          |              | 1001u);        |     |
| 65  | TS_ASSERT_EQUALS(us.size(),          |              | 1001u);        |     |
| 66  | // Test solution                     | as given     | in Sec. 12.1.1 |     |
|     | for (int i=0;                        | i<xs.size(); | i++)           |     |
67
{
68

| AppendixC:SolutionstoExercises |        |                                   |     |     | 279 |
| ------------------------------ | ------ | --------------------------------- | --- | --- | --- |
|                                | double | u = (4*exp(xs[i])+exp(-4*xs[i]))/ |     |     |     |
69
(4*exp(M_PI)+exp(-4*M_PI))
70
| 71  |                        | - 5*sin(xs[i]) | - 3*cos(xs[i]); |          |            |
| --- | ---------------------- | -------------- | --------------- | -------- | ---------- |
| 72  | TS_ASSERT_DELTA(us[i], |                | u, 2e-3);       | // Error | ~= delta x |
| 73  | }                      |                |                 |          |            |
}
74
};
75

FurtherReading
Inearlierchapterswehavetouchedonafewissuesthatarebeyondthescopeofthis
book.Whendiscussingtheseissueswehavedirectedtheinterestedreadertowards
aselectionofvariousresources:thesearelistedbelowthematically.Forthe“Math-
ematical Methods and Linear Algebra” theme, the most comprehensive reference
for the basic material is that written by Kreyszig. The other references given are
suitableformoreadvancednumericalconcepts.Forthe“C++Programming”theme,
thewebsitehttp://www.cplusplus.comprovidesextensivepracticalguidance,whilst
thetextslistedfocusonadvancedfeaturesofthelanguage.Inthe“Message–Passing
Interface”themethetextsgiveanaccessibletutorial–basedoverviewofMPI-1and
MPI-2,respectively.ThedifferencesbetweenthesetwoMPIstandardsarediscussed
inSect.11.2.
MathematicalMethodsandLinearAlgebra
1. Iserles,A.:AFirstCourseintheNumericalAnalysisofDifferentialEquations,2ndedn.Cam-
bridgeUniversityPress,Cambridge(2009)
2. Kreyszig,E.:AdvancedEngineeringMathematics,9thedn.Wiley,Inc.,NewYork(2006)
3. Süli,E.,Mayers,D.F.:AnIntroductiontoNumericalAnalysis.CambridgeUniversityPress,
Cambridge(2006)
4. Trefethen,L.N.,Bau,D.:NumericalLinearAlgebra,SocietyforIndustrialandAppliedMath-
ematics(1997)
©SpringerInternationalPublishingAG,partofSpringerNature2017 281
J.Pitt-FrancisandJ.Whiteley,GuidetoScientificComputing
inC++,UndergraduateTopicsinComputerScience,
https://doi.org/10.1007/978-3-319-73132-2

282 FurtherReading
C++Programming
5. Cline,M.P.,Lomow,G.,Girou,M.:C++FAQs,2ndedn.Addison–Wesley,Boston(1998)
6. Meyers,S.:EffectiveC++,3rdedn.Addison–Wesley,Boston(2005)
7. Stroustrup,B.:TheC++ProgrammingLanguage,3rdedn.AT&T(2000)
8. TheWebsite,http://www.cplusplus.com
TheMessage–PassingInterface(MPI)
9. Gropp, W., Lusk, E., Skjellum, A.: Using MPI: Portable Parallel Programming with the
Message–Passing Interface, 2nd edn. Massachussetts Institute of Technology Press, Massa-
chussetts(1999)
10. Gropp,W.,Lusk,E.,Thakur,R.:UsingMPI-2:AdvancedFeaturesoftheMessage–Passing
Interface.MassachussettsInstituteofTechnologyPress,Massachussetts(1999)

Index
A Classes,99
Abstraction,2,100,101,148 abstractclasses,137
Accessprivileges,seeClasses accessprivileges,102,104,109,116,131,
Addressesofvariables,59 133,184,189
AND,seeLogicaloperators useforvalidatingdata,105
Arrays,17 classinitialisers,261
irregularlysized,65 classmembers,102
one-basedindexing,39 constructors,110,183,188
safedynamicallocation,67,179 copyconstructor,112,188
sendingtofunctions,82 customisedconstructor,112,189
staticallocationofmemory,17 defaultconstructor,110,188
initialising,17 overriding,110
zero-basedindexing,17,39 derivedclasses,129,130
ASCIIcharactervariables,18 destructors,110,183,188,189
assert,22,163 friendkeyword,116,124,191
Assertions,163 headerfiles,102,103
includingonlyonce,103
B members,101
Blackboxtesting,seeTestingsoftware methods,101,104
Blocks,75 multipleinheritance,129
Booleanvariables,19 pointersto,115
settingandaccessingvariables,104
C Closingthefilehandle,48
Cprogramminglanguage,3
cmath,14
Cstyledynamicmemoryallocation,258 Codingstandards,125
free,258 Commentingcode,5,94,125
malloc,258 Compilingcode,6
Cstyleoutput,257 atthecommandline,8
C++fileextensions,5 C++11,154
C++11,seeModernC++ compilerflags,9,107
catch,seeExceptions linking,107
cerr,47,48 Makefiles,108
cfloat,42 multiplefiles,107
cin,21,51 objectfile,107
templatecompilation,159
©SpringerInternationalPublishingAG,partofSpringerNature2017 283
J.Pitt-FrancisandJ.Whiteley,GuidetoScientificComputing
inC++,UndergraduateTopicsinComputerScience,
https://doi.org/10.1007/978-3-319-73132-2

284 Index
| Complexnumbers,117      |     |     | returningapointer,79             |
| ----------------------- | --- | --- | -------------------------------- |
| const,12                |     |     | sendingarraysto,82               |
| Constructors,seeClasses |     |     | useofargumentsthatarepointers,80 |
cout,5,20,48
G
| D   |     |     | Globalvariable,seeVariables |
| --- | --- | --- | --------------------------- |
GNUOctave,3
Debuggingcode,24,138,218
| Destructors,seeClasses |     |     | Guard,28 |
| ---------------------- | --- | --- | -------- |
Distributedmemoryarchitectures,197,198
| Divisionofintegers,16                 |     |     | I                         |
| ------------------------------------- | --- | --- | ------------------------- |
| Documentingcode,94                    |     |     | if,27,28,259              |
| double,10                             |     |     | Indentingcode,6,28,125    |
| Dynamicallocationofmemory,seePointers |     |     | Infinity,164              |
| Dynamiccasting,136                    |     |     | Inheritance,2,101,129,130 |
abstractclasses,137
| E                       |     |     | baseclass,129             |
| ----------------------- | --- | --- | ------------------------- |
| else,29,259             |     |     | childclass,129            |
| Encapsulation,2,100,101 |     |     | derivedclasses,129        |
| Exception               |     |     | parentclass,129           |
| catch,167               |     |     | privateinheritance,133    |
| threelevelsoferror,166  |     |     | protectedinheritance,133  |
| throw,167               |     |     | publicinheritance,131,133 |
| try,167                 |     |     | Input                     |
commandline,54
Extensibility,2,130,148
fromconsole,20,21
| F                                      |                   |           | fromfile,51       |
| -------------------------------------- | ----------------- | --------- | ----------------- |
| Finitedifferenceapproximations,227,239 |                   |           | rewindingafile,53 |
| application                            | to boundary value | problems, | strings,22        |
Inputstreamvariable,51
229
int,10
Floatingpointvariables,10,13
Integervariables,10,12
comparingtwofloatingpointvariables,41
longintegers,12
DBL_EPSILON,42
shortintegers,12
doubleprecision,13
signedintegers,13
Flowofcontrol,27
| Flushingoutput,49 |     |     | unsignedintegers,13                 |
| ----------------- | --- | --- | ----------------------------------- |
| for,27,35         |     |     | Integrateddevelopmentenvironments,7 |
| Fortran,3,4       |     |     | Interpretedlanguages,3              |
| fprintf,258       |     |     | iostream,5                          |
free,seeCprogramminglanguage
K
friend,seeClasses
Keywords,11
fstream,48,51
Functionoverloading,87
| Functionpointers,seeFunctions        |     |     | L                           |
| ------------------------------------ | --- | --- | --------------------------- |
| Functionprototypes,seeFunctions      |     |     | Linearalgebra,183           |
| Functions,77                         |     |     | conjugategradientmethod,254 |
| classmembers,104                     |     |     | Gaussianelimination,249     |
| defaultvaluesforfunctionarguments,86 |     |     | nopivoting,250              |
functionpointers,89
pivoting,252
| functionprototypes,77,89 |     |     | linearsystems,249       |
| ------------------------ | --- | --- | ----------------------- |
| recursivefunctions,92    |     |     | LUdecomposition,251,253 |
| returntype,77            |     |     | parallel,215            |

Index 285
Thomasalgorithm,254 communication,203
Linearalgebraalgorithms,245 blocking,205
Localvariable,seeVariables buffered,205
Logicaloperators,31 point-to-point,203
AND,31 compiling,201
NOT,31 debugging,218
OR,31 executing,202
remotemachines,202
M Gather,212
Makefiles,seeCompilingcode gather,211
malloc,seeCprogramminglanguage Ibsend,206
Mathematicaloperations,14 inputandoutput,199
absolutevalue,14 installingMPI,199
arccos,14
Irecv,206
arcsin,14
Isend,206
arctan,14 process,200
ceiling,14 rank,200
cosh,14
Recv,203,206
cosine,14 reduce,210
exponential,14 runningcode,201
floor,14
Scatter,212
logarithm,14 scatter,211
raisingvariablestoagivenpower,14
Send,203
Sendrecv,208
shorthand,15
Ssend,205
sine,14
ModernC++,69,71,153
sinh,14
array,155
squareroot,14
auto,154
tangent,14
compilation,69
tanh,14
Matlab,3,4,183 mappinglambdafunctions,158
range-basedforloops,157
Matrices,183,245
smartpointers
determinant,247
shared_ptr,71
eigenvalues,248
unique_ptr,69
inverse,247
Modularity,2,100,101
norm,248
Modules,93,99,100
operationsbetween,246
Multipleinheritance,261
positivedefinite,255
symmetric,247
transpose,247 N
MessagePassingInterface(MPI),199 Namespace,259
Allgatherv,212 NOT,seeLogicaloperators
Allreduce,210 Not–a–number,163
Barrier,207 Numericallibraries,243
Bcast,210 PETSc,243
broadcast,210
Bsend,205 O
collectivecommunication,206 Object–orientednumericallibraries
broadcast,206 ordinarydifferentialequations,232
combinedsendandreceive,207 partialdifferentialequations,239
haloexchange,207 Object-orientation,2,99
reduction,206 Object-orientednumericallibraries,225

| 286                   |      |                |                  | Index |
| --------------------- | ---- | -------------- | ---------------- | ----- |
| Operator overloading, | 118, | 125, 183, 190, | Reservedwords,11 |       |
191
| OR,seeLogicaloperators |     |     | S   |     |
| ---------------------- | --- | --- | --- | --- |
Ordinarydifferentialequations,225,226 Scientificnotation,seeVariables
| Output                     |     |     | Scope,75                      |     |
| -------------------------- | --- | --- | ----------------------------- | --- |
| appendingtoexistingfile,50 |     |     | Sharedmemoryarchitectures,197 |     |
| formatting,21              |     |     | Sharedpointers,seePointers    |     |
| redirectedtofile,47        |     |     | sprintf,258                   |     |
scientificnotation,56
StandardTemplateLibrary(STL),145,148
settingprecisionof,51,56
abstraction,148
| toconsole,20            |     |     | algorithm,150 |     |
| ----------------------- | --- | --- | ------------- | --- |
| tofile,48               |     |     | container,148 |     |
| Outputstreamvariable,48 |     |     | deque,148     |     |
iterator,149
| P   |     |     | list,148 |     |
| --- | --- | --- | -------- | --- |
push_back,149
Partialdifferentialequations,225
set,151
PointerAliasing,seePointers
vector,149
Pointerde-reference,seePointers
| Pointers                     |                  |               | vectors,148    |     |
| ---------------------------- | ---------------- | ------------- | -------------- | --- |
| arrayof,65                   |                  |               | Statements,5   |     |
| delete                       | keyword, 62, 63, | 65, 68, 113,  | stdio.h,258    |     |
| 188,189,192,258              |                  |               | Strings,19     |     |
| dynamicallocationofmemory,62 |                  |               | Structures,260 |     |
| new keyword,                 | 61, 63, 64,      | 68, 113, 188, | switch,37      |     |
189,192,258
| pointeraliasing,62,66,69,71 |     |     | T                                   |                   |
| --------------------------- | --- | --- | ----------------------------------- | ----------------- |
| pointerde–reference,61      |     |     | Templates,145                       |                   |
| pointervariables,60         |     |     | forpolymorphism,147                 |                   |
| sharedpointers,68           |     |     | StandardTemplateLibrary,seeStandard |                   |
| smartpointers,69,71         |     |     | TemplateLibrary(STL)                |                   |
| toclasses,115               |     |     | validationofindextoarray,146        |                   |
| Polymorphism,2,130          |     |     | Ternary?:operator,259               |                   |
| run–time,134                |     |     | Test driven development,            | see Testing soft- |
| static,seeTemplates         |     |     | ware                                |                   |
| templates,seeTemplates      |     |     | Testingsoftware,169                 |                   |
| Postcondition,164           |     |     | blackboxtesting,172                 |                   |
| Precondition,164            |     |     | test-drivendevelopment,177          |                   |
| printf,257,258              |     |     | whiteboxtesting,176                 |                   |
| Python,3                    |     |     | throw,seeExceptions                 |                   |
try,seeExceptions
Typeconversion,16
R
Recursivefunctions,seeFunctions
| Referencevariables,85     |     |     | U                            |     |
| ------------------------- | --- | --- | ---------------------------- | --- |
| Relationaloperators,31,32 |     |     | Unifiedmodellinglanguage,132 |     |
equalto,32
| equalityversusassignment,39 |     |     | V            |     |
| --------------------------- | --- | --- | ------------ | --- |
| greaterthan,32              |     |     | Variables,10 |     |
greaterthanorequalto,32
constantvariables,12
| lessthan,32          |     |     | declaringvariables,10    |     |
| -------------------- | --- | --- | ------------------------ | --- |
| lessthanorequalto,32 |     |     | globalvariable,76        |     |
| notequalto,32        |     |     | initialisingvariables,11 |     |

Index 287
localvariable,76 purevirtualmethod,137
scientificnotation,12 void,78
Vectors,183,245
norm,248
operationsbetween,246 W
scalarproduct,247 while,27,33
Virtualmethods,134,137 Whiteboxtesting,seeTestingsoftware