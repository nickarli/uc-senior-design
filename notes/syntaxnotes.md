## Personal Syntax Notes

QPushButton event handling: 
```c++
connect(ui->buttonName, &QPushButton::released, this, &::ClassItExistsIn::functionToCallInMainNoParentheses);
```

MenuBar Option event handling: 
```c++
connect(ui->buttonName, &QAction::triggered, this, &::ClassItExistsIn::functionToCallInMainNoParentheses);
```

QComboBox selection event handling:
```c++
connect(ui->comboBoxName,SIGNAL(currentTextChanged(const paramType)), this,SLOT(functionToCallWithParameterOfSelection(const paramType))));
```

Function in a class:
```c++
void ClassItExistsIn::functionName(){
    stuffToDo();
}
```

Open a new window/class instance:
```c++
ClassName *anyVarName = new ClassName(this);
anyVarName->show();
```

Get value from QLineEdit:
```c++
ui->lineEditItemName->text();
```

Connect to a database:
```c++
QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
db.setHostName("localhost");
db.setDatabaseName("propman");
db.setUserName(user);
db.setPassword(pass);
bool ok = db.open();
```

Insert something into a db:
```c++
QSqlQuery query;
query.exec("some INSERT query"); // be mindful of types
```

Get something from the db:
```c++
QSqlQuery query;
    if(query.prepare(QString("some SELECT query"))){
        if(query.exec()){
            while(query.next()){
                query.value(0); // first value, (1) is second, (2) is third, etc. be mindful of types
            }
        }
    }
```

