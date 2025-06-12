CREATE FUNCTION getNthHighestSalary(@N INT) RETURNS INT AS
BEGIN
    -- Check if @N is a valid positive number
    IF @N <= 0
        RETURN NULL;

    -- Main logic to find the Nth highest salary
    RETURN (
        SELECT TOP 1 Salary
        FROM Employee
        WHERE Salary NOT IN (
            SELECT DISTINCT TOP (@N - 1) Salary
            FROM Employee
            ORDER BY Salary DESC
        )
        ORDER BY Salary DESC
    );
END;
