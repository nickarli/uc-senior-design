# Viewing the Database
## Viewing the database without the application layer. Assumes MySQL Workbench was installed.

To view the database:
- Open MySQL Workbench and select "Local instance MYSQL80"
<br/>![image](workbench.PNG)
- On the left-hand sidebar, switch from the "Administration" tab to the "Schemas" tab.
<br/>![image](schemas.PNG)
- Expand the "propman" database as well as the "Tables" option to view the tables in the database.
<br/>![image](tables.PNG)
- To view the contents of a table, right-click it and select "Select Rows - Limit 1000"
<br/>![image](selectrows.PNG)
- To edit a value, double-click the field, change the value, hit the enter key, and select "Apply" at the bottom right. Make sure the data being entered follows the table's rules for that field!
<br/>![image](edit.PNG)
...a window will pop up with MySQL syntax to execute. Click "Apply" here as well and it will update the table.
<br/>![image](execute.PNG)