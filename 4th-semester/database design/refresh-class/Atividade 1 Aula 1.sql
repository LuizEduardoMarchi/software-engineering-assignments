-- PARTE 1 (Modelagem)

CREATE DATABASE AULA1;

CREATE TABLE cliente (
    id_cliente SERIAL PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    cidade VARCHAR(80),
    cod_cadastro VARCHAR(20) UNIQUE NOT NULL
);

CREATE TABLE tecnico (
    id_tecnico SERIAL PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    especialidade VARCHAR(80),
    ativo BOOLEAN NOT NULL DEFAULT TRUE
);

CREATE TABLE chamado (
    id_chamado SERIAL PRIMARY KEY,
    descricao TEXT NOT NULL,
    data_abertura DATE NOT NULL DEFAULT,
    valor NUMERIC(10,2) CHECK (valor >= 0),
    id_cliente INTEGER NOT NULL REFERENCES cliente(id_cliente),
    id_tecnico INTEGER REFERENCES tecnico(id_tecnico)
);

-- PARTE 2 (Inserts)

INSERT INTO cliente (nome, cidade, cod_cadastro) VALUES
('João Silva','Campo Grande','C001'),
('Maria Souza','Dourados','C002'),
('Pedro Santos','Navirai','C003'),
('Ana Lima','Cassilandia','C004');

INSERT INTO tecnico (nome, especialidade, ativo) VALUES
('Carlos Eletro', 'Elétrica', TRUE), 
('Fernanda Hidráulica', 'Hidráulica', FALSE),
('Roberto Mecânica', 'Mecânica', TRUE);

INSERT INTO chamado (descricao, data_abertura, valor, id_cliente, id_tecnico) VALUES
('Troca de disjuntor','2025-01-10', 150.00, 1, 1),
('Manutenção de quadro elétrico','2025-01-15', 200.00, 1, 1),
('Vazamento em tubulação','2025-02-02', 300.00, 2, 1),
('Reparo de bomba d''água','2025-02-20',NULL, 2, 2),
('Instalação de tomada industrial','2025-03-05', 120.00, 3, 1),
('Troca de registro hidráulico','2025-03-18', 450.00, 3, 2),
('Revisão de painel elétrico','2025-04-01',  90.00, 4, 1),
('Manutenção preventiva geral','2025-04-22', 500.00, 4, 1);

-- PARTE 3 (Consultas)

-- 1
SELECT ch.id_chamado, ch.descricao, ch.data_abertura, ch.valor, cl.nome AS cliente, te.nome AS tecnico
FROM chamado ch
JOIN cliente cl ON cl.id_cliente = ch.id_cliente
LEFT JOIN tecnico te ON te.id_tecnico = ch.id_tecnico
ORDER BY ch.id_chamado;

-- 2
SELECT te.nome AS tecnico, COUNT(ch.id_chamado) AS qtd_chamados
FROM tecnico te
LEFT JOIN chamado ch ON ch.id_tecnico = te.id_tecnico
GROUP BY te.id_tecnico, te.nome
ORDER BY qtd_chamados DESC;

-- 3
SELECT cl.nome AS cliente, SUM(ch.valor) AS total_cobrado
FROM cliente cl
LEFT JOIN chamado ch ON ch.id_cliente = cl.id_cliente
GROUP BY cl.id_cliente, cl.nome
ORDER BY total_cobrado DESC;

-- 4
SELECT ch.id_chamado, ch.descricao, cl.nome AS cliente, cl.cidade
FROM chamado ch
JOIN cliente cl ON cl.id_cliente = ch.id_cliente
WHERE cl.cidade = 'Dourados';

-- 5
SELECT te.nome AS tecnico, COUNT(ch.id_chamado) AS qtd_chamados
FROM tecnico te
JOIN chamado ch ON ch.id_tecnico = te.id_tecnico
GROUP BY te.id_tecnico, te.nome
HAVING COUNT(ch.id_chamado) > 2;

-- 6
SELECT COUNT(*) AS chamados_sem_valor
FROM chamado
WHERE valor IS NULL;

-- 7
SELECT ch.id_chamado ch.descricao, ch.valor, cl.nome AS cliente
FROM chamado ch
JOIN cliente cl ON cl.id_cliente = ch.id_cliente
ORDER BY ch.valor DESC NULLS LAST
LIMIT 1;

-- 8
SELECT te.nome AS tecnico, AVG(ch.valor) AS media_valor
FROM tecnico te
JOIN chamado ch ON ch.id_tecnico = te.id_tecnico
WHERE te.ativo = TRUE
GROUP BY te.id_tecnico, te.nome;