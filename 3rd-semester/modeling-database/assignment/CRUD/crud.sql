CREATE DATABASE Aula_20_03;

-- Entidade principal do sistema (Bar/Estabelecimento)
CREATE TABLE Bar (
    id SERIAL PRIMARY KEY,
    descricao VARCHAR(30)
);

-- Entidade Cerveja (relacionada ao Bar)
CREATE TABLE Cerveja (
    id SERIAL PRIMARY KEY,
    nome VARCHAR(20),
    preco DECIMAL(10,2),
    qtd INTEGER,
    categoria VARCHAR(20),
    descricao VARCHAR(30),
    bar_id INTEGER,
    FOREIGN KEY (bar_id) REFERENCES Bar(id)
);

-- Insere um registro na tabela Bar
INSERT INTO Bar (descricao)
VALUES ('Melhor bar da cidade!');

-- Inserção de registros na tabela cerveja
INSERT INTO cerveja (nome, preco, qtd, categoria, descricao, bar_id)
VALUES  ('Skol', 3.00, 57, 'Bebidas Alcoólicas', 'Cerveja lata Skol 300ml', 1);

INSERT INTO cerveja (nome, preco, qtd, categoria, descricao, bar_id)
VALUES ('Brahma', 3.50, 21, 'Bebidas Alcoólicas', 'Cerveja lata Brahma 300ml', 1);

INSERT INTO cerveja (nome, preco, qtd, categoria, descricao, bar_id)
VALUES ('Corona', 7.50, 10, 'Bebidas Alcoólicas', 'Cerveja garrafa Corona 355ml', 1);

INSERT INTO cerveja (nome, preco, qtd, categoria, descricao, bar_id)
VALUES ('Heineken', 6.50, 80, 'Bebidas Alcoólicas', 'Cerveja garrafa Heineken 355ml', 1);

INSERT INTO cerveja (nome, preco, qtd, categoria, descricao, bar_id)
VALUES ('Sub Zero', 2.00, 35, 'Bebidas Alcoólicas', 'Cerveja lata Sub Zero 250ml', 1);

-- Atualiza dados da tabela Cerveja
UPDATE Cerveja 
SET qtd = 80, preco = 2.39
WHERE id = 1;

update cerveja
set qtd = 138, preco = 6.39
where id = 4;

-- Remove um registro da tabela Cerveja
DELETE FROM Cerveja WHERE id = 1;