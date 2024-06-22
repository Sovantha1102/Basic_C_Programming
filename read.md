            C Programming (basic)

C គឺជាភាសាមួយដែរជាភាសាគ្រឹះនៃភាសាផ្សេងៗ។
- Header = ជាកន្លែងយើងដាក់បញ្ចូលlibray ផ្សេង
- Main Function =កន្លែងសរសេរកូដ​ និង​run កូដបាន
- Block of Code /statment= place to store code
- Semicolon = ; 

-Variable (Lesson 2)

    =>Type of variable
        -> int num \\integer
        -> char ch \\charactor
        -> float price \\Decimal Number
        -> char name[10] \\sequence of Character
    => format variable display printf
        -> %d \\type integer
        -> %c \\type character
        -> %f  \\ type float
        -> %s  \\type string
    
    Note : 
        \n = use for start new line
        \t = use for tab

- User Input (Lesson 3)
    => syntax 
            scanf("placeholder",&<variable name>);
            ex:
                scanf("%d",&num);
    => String include space:
        ->fgets(<variable name>lenght,stdin);
        ->gets(<variable name>);
    
        ex: 
            char name[11];
             -> fgets(name,11,stdin);
            
            char name[11];
             -> gets(name);
    
- Operators (lesson 4)
 
    => Arithmetic Operator
        -> +, - ,*
        -> /
        -> % = រកសំណល់
    => Logical Operator
        -> && = and
        -> || = or
        -> ! = not
    => Relation and Equality Operator
        -> == : Compare if equal (ប្រៀបធៀបបើស្មើគ្នា)
        -> != : Compare if not equal (ប្រៀបធៀបបើមិនស្មើគ្នា)
        -> > : Greater than (ធំជាង)
        -> < : Less than (តូចជាង)
        -> >= : Greater than or equal(ធំជាងឬស្មើ)
        -> <= : Less than or equal(តូចជាងឬស្មើ)
    => Assignment operator
        -> = , += , *= , /= ,%=
        eg a +=1 a =a +1;

    => Increment and Decrement Operator
        -> ++ , -- 
            -> a++ : Post increament a = a+1
            -> a-- : Post decrement a = a -1
            -> ++a : Post increment a = a+1
            -> --a : Post decrement a =a -1

- Decision Making (lesson 5)
    => 3 type of Decision Making
        -> if
        -> if and else
        -> if with else if
    
    --> IF = condition(លក្ខខណ្ឌ) : return true/false 
            if condition true = code work
            if condition false =  no working code
        
    --> IF ELSE = confition with else
            if condtion true = code work in if
            if condtion false = code working in else blocks;
    --> IF and ELSE IF 
            syntax =
                    if (con1) {
                        code 1
                    }else if (con2) {
                        code 2
                    }
                    .
                    .
                    .
                    else {
                        code /n
                    }

Note = in C to compare function C is need to include libaray = #include<string.h>


- LOOP (រង្វិលជុំ)= បើជាcondition ពិត,​run ដដែល។
        ​​បើcondition មិនពិត,loop និងបញ្ឍប់។
    
    -> Loop have 3 =
            --> for loop
            --> while loop
            --> do-while loop
    --> for loop =
                syntax = 
                        for(instruction1; condition ; instruction2) {
                            //code;
                        }
                ** instruction1 :តម្លៃចាប់ផ្តើមដំបូង eg i=0 ,i=1 ,etc
                ** instruction2 : តម្លៃកែប្រែ eg: i++, i=i+2; etc

                ex : 
                        for(int i=0; i<3 ;i++) {
                            printf("%d",i);
                        }
    --> while loop =
                syntax =
                        while(condition) {
                            code
                        }
                eg: 
                    int i=0
                        while(i<3) {
                            printf("%d",i);
                            i++;
                        }
                -->anwser = 0 1 2
    --> do-while loop =
                syntax =
                    do {
                        your code 
                    }while(condition);

                eg :
                    int i =0;
                    do {
                        printf("%d",i);
                        i++
                    }while(i<3);
    
    --> Continue -បន្តloop
    --> Break -បញ្ចប់loop

        eg : 
            for(int i=0; i<3 ;i++) {
                if(i==0){
                    continue;
                }
                if(i==2){
                    break;
                }
                printf("%d",i);
            }

- Array 
    => Array គឺជាប្រភេទdata structure ដែលអាចផ្ទុកតម្លៃអថេរឬធាតុបានច្រើនទៅក្នុងអថេរតែមួយ។

    => ដើម្បីយកតម្លៃនីមួយៗក្នុងArray បាន,យើងហៅវាដោយប្រើindex
        -> index :ចាប់ផ្តើមពី0ដល់1...n
    
    => Type of Element in array <arrayname>[ArrayLength];

        int num[3]; //array of integer
        float score[5]; //array of float
        char ch[20]; //array of charactors;
        char name[2][10]; //array of string that have 2 elements

    => របៀបដាក់តម្លៃចូលក្នុងArray ដោយផ្ទាល់​ {value1,value2,...}
        int num[3] = {1,2,3}
        float score[2] ={1.5,2.3}
        char ch[2] ={'a','A'};
        char name[2][10]= {"james","jakson"};

- Sub-Program
    => គឺជាprogramមួយដែលអាចយកទៅប្រើក្នុងprogramមួយផ្សេងទៀត។
    ​=> 2 type of Sub Program
        -> Function : has return value (មានតម្លៃត្រលប់មកវិញ)​អនុគមន៍។
        -> Procedure : has no return value (មិនមានតម្លៃត្រលប់មកវិញ)
    => Function Syntax
        Type of function<function name>(type of parameter <parament name>) {
            your code
            return value;
        }
            -> Parameter : បង្កើតសំរាបដាក់តម្លៃចូក្នុងfunction
            -> Paramter :អាចអត់មាន,​មានមួយឬច្រើន
        
    => Procedure syntax
        void <procedure name> (type of parameter <parameter name>) {
            your code
        }