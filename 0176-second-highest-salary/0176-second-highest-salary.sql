# Write your MySQL query statement below
Select(
    Select Distinct Salary 
    From Employee
    Order By Salary Desc
    Limit 1 offset 1
) as SecondHighestSalary;