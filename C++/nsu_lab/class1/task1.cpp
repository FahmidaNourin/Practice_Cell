abstract sig Person{
    spouse:lone Person,
    parents: set Person
    }
    sig Man,Women extends Person{}
    one sig Adam extends Man{}
    one sig Hawa extends Women{}

