SELECT TOP 1 customer_number
FROM Orders
GROUP BY customer_number
ORDER BY COUNT(order_number) DESC;