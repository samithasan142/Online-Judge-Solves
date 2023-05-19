SELECT Customers.name AS 'Customers'                               
FROM Customers                                                     
WHERE customers.id NOT IN(                                            
  SELECT customerid FROM orders                                
);