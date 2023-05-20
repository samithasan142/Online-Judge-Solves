SELECT max(Salary) AS SecondHighestSalary 
FROM Employee
WHERE Salary NOT IN(
    SELECT max(Salary) FROM Employee
)