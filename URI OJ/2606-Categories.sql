SELECT id,name 
FROM products 
WHERE id_categories 
IN (SELECT id FROM Categories WHERE name LIKE 'super%')