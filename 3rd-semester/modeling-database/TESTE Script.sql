CREATE DATABASE controle_estoque;

-- =========================
-- CATEGORIAS
-- =========================
CREATE TABLE categorias (
    id SERIAL PRIMARY KEY,
    nome VARCHAR(100) NOT NULL
);
INSERT INTO categorias (nome) VALUES
('Eletrônicos'),
('Alimentos'),
('Bebidas'),
('Limpeza'),
('Papelaria'),
('Informática'),
('Móveis'),
('Vestuário'),
('Ferramentas'),
('Automotivo');

-- =========================
-- FORNECEDORES
-- =========================
CREATE TABLE fornecedores (
    id SERIAL PRIMARY KEY,
    nome VARCHAR(150),
    telefone VARCHAR(20),
    email VARCHAR(100)
);
INSERT INTO fornecedores (nome, telefone, email) VALUES
('Fornecedor A', '67999990001', 'a@email.com'),
('Fornecedor B', '67999990002', 'b@email.com'),
('Fornecedor C', '67999990003', 'c@email.com'),
('Fornecedor D', '67999990004', 'd@email.com'),
('Fornecedor E', '67999990005', 'e@email.com'),
('Fornecedor F', '67999990006', 'f@email.com'),
('Fornecedor G', '67999990007', 'g@email.com'),
('Fornecedor H', '67999990008', 'h@email.com'),
('Fornecedor I', '67999990009', 'i@email.com'),
('Fornecedor J', '67999990010', 'j@email.com');
-- =========================
-- PRODUTOS
-- =========================
CREATE TABLE produtos (
    id SERIAL PRIMARY KEY,
    nome VARCHAR(150),
    preco NUMERIC(10,2),
    quantidade INT,
    categoria_id INT REFERENCES categorias(id),
    fornecedor_id INT REFERENCES fornecedores(id)
    FOREIGN KEY(CATEGORIA_ID) REFERENCES CATEGORIA(ID) ON DELETE CASCADE
);
INSERT INTO produtos (nome, preco, quantidade, categoria_id, fornecedor_id) VALUES
('Notebook', 3500.00, 10, 1, 1),
('Mouse', 50.00, 100, 6, 2),
('Teclado', 120.00, 80, 6, 3),
('Cadeira', 600.00, 20, 7, 4),
('Mesa', 800.00, 15, 7, 5),
('Camiseta', 40.00, 200, 8, 6),
('Calça', 90.00, 150, 8, 7),
('Martelo', 30.00, 60, 9, 8),
('Óleo Motor', 45.00, 70, 10, 9),
('Refrigerante', 8.00, 300, 3, 10);
-- =========================
-- CLIENTES
-- =========================
CREATE TABLE clientes (
    id SERIAL PRIMARY KEY,
    nome VARCHAR(150),
    telefone VARCHAR(20),
    email VARCHAR(100)
);
INSERT INTO clientes (nome, telefone, email) VALUES
('Cliente 1', '67988880001', 'c1@email.com'),
('Cliente 2', '67988880002', 'c2@email.com'),
('Cliente 3', '67988880003', 'c3@email.com'),
('Cliente 4', '67988880004', 'c4@email.com'),
('Cliente 5', '67988880005', 'c5@email.com'),
('Cliente 6', '67988880006', 'c6@email.com'),
('Cliente 7', '67988880007', 'c7@email.com'),
('Cliente 8', '67988880008', 'c8@email.com'),
('Cliente 9', '67988880009', 'c9@email.com'),
('Cliente 10', '67988880010', 'c10@email.com');
-- =========================
-- FUNCIONARIOS
-- =========================
CREATE TABLE funcionarios (
    id SERIAL PRIMARY KEY,
    nome VARCHAR(150),
    cargo VARCHAR(100),
    salario NUMERIC(10,2)
);
INSERT INTO funcionarios (nome, cargo, salario) VALUES
('Funcionario 1', 'Vendedor', 2000),
('Funcionario 2', 'Caixa', 1800),
('Funcionario 3', 'Gerente', 4000),
('Funcionario 4', 'Vendedor', 2100),
('Funcionario 5', 'Estoquista', 1700),
('Funcionario 6', 'Vendedor', 2200),
('Funcionario 7', 'Caixa', 1850),
('Funcionario 8', 'Gerente', 4200),
('Funcionario 9', 'Estoquista', 1750),
('Funcionario 10', 'Vendedor', 2300);
-- =========================
-- VENDAS
-- =========================
CREATE TABLE vendas (
    id SERIAL PRIMARY KEY,
    cliente_id INT REFERENCES clientes(id),
    funcionario_id INT REFERENCES funcionarios(id),
    data_venda TIMESTAMP DEFAULT NOW(),
    total NUMERIC(10,2)
);
INSERT INTO vendas (cliente_id, funcionario_id, total) VALUES
(1, 1, 100),
(2, 2, 200),
(3, 3, 300),
(4, 4, 150),
(5, 5, 250),
(6, 6, 180),
(7, 7, 220),
(8, 8, 330),
(9, 9, 90),
(10, 10, 400);
-- =========================
-- ITENS DA VENDA
-- =========================
CREATE TABLE itens_venda (
    id SERIAL PRIMARY KEY,
    venda_id INT REFERENCES vendas(id),
    produto_id INT REFERENCES produtos(id),
    quantidade INT,
    preco_unitario NUMERIC(10,2)
);
INSERT INTO itens_venda (venda_id, produto_id, quantidade, preco_unitario) VALUES
(1, 1, 1, 3500),
(2, 2, 2, 50),
(3, 3, 1, 120),
(4, 4, 1, 600),
(5, 5, 1, 800),
(6, 6, 3, 40),
(7, 7, 2, 90),
(8, 8, 1, 30),
(9, 9, 2, 45),
(10, 10, 5, 8);
-- =========================
-- MOVIMENTACOES (SEM ENUM)
-- =========================
CREATE TABLE movimentacoes (
    id SERIAL PRIMARY KEY,
    produto_id INT REFERENCES produtos(id),
    tipo VARCHAR(10), -- 'entrada' ou 'saida'
    quantidade INT,
    data_movimentacao TIMESTAMP DEFAULT NOW(),
    CHECK (tipo IN ('entrada', 'saida'))
);
INSERT INTO movimentacoes (produto_id, tipo, quantidade) VALUES
(1, 'entrada', 5),
(2, 'saida', 10),
(3, 'entrada', 20),
(4, 'saida', 2),
(5, 'entrada', 3),
(6, 'saida', 15),
(7, 'entrada', 25),
(8, 'saida', 5),
(9, 'entrada', 10),
(10, 'saida', 30);

-- 1st forma de procurar um valor em uma tabela
SELECT *
FROM itens_venda
WHERE quantidade::TEXT LIKE'%1%';

-- 2nd forma de procurar um valor em uma tabela
SELECT *
FROM itens_venda
WHERE quantidade = 1;

-- Listando uma coluna de maneira Crescente
SELECT preco_unitario
FROM itens_venda
ORDER BY PRECO_UNITARIO ASC;

-- Listando uma coluna de maneira Decrescente
SELECT preco_unitario
FROM nota_fiscal
ORDER BY PRECO_UNITARIO DESC;

-- Deletar uma coluna de uma tabela
ALTER TABLE	itens_venda
DROP COLUMN quantidade;

-- visualizar a tabela apos o DROP
SELECT * 
FROM itens_venda;

-- Adicionar uma coluna na tabela
ALTER TABLE itens_venda
ADD COLUMN quantidade INTEGER;

-- visualizar a tabela apos o ADD
SELECT * 
FROM itens_venda;

-- Modifica o tipo primitivo da coluna 
ALTER TABLE funcionarios
ALTER COLUMN cargo TYPE varchar(100);

-- visualizar a tabela apos o ADD
SELECT * 
FROM funcionarios;

-- Apaga todos os registros da tabela e reseta os ID's
TRUNCATE TABLE itens_venda RESTART IDENTITY;

-- renomear nome da tabela
DROP TABLE nota_fiscal;
ALTER TABLE itens_venda RENAME TO nota_fiscal;

SELECT *
FROM nota_fiscal
ORDER BY QUANTIDADE, PRECO_UNITARIO DESC;

SELECT *
FROM produtos;

SELECT *
FROM categorias;  

-- Deleta a tabela mesmo com outras tabelas pendentes
DROP TABLE categorias CASCADE;

-- Deleta a tabela e os registros da tabela que estao em outras tabelas

