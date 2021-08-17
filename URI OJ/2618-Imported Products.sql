SELECT products.name, providers.name, categories.name
FROM products
INNER JOIN providers on products.id_providers=providers.id
INNER JOIN categories on products.id_categories=categories.id
WHERE providers.name='Sansul SA' and categories.name='Imported';