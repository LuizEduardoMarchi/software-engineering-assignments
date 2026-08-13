-- Crie o banco de dados (lembre-se de conectar nele antes de rodar o restante)
CREATE DATABASE escola_db;

-- =========================
-- Tabela de Cidades
-- =========================
CREATE TABLE cidades (
    id_cidade SERIAL PRIMARY KEY,
    nome_cidade VARCHAR(100) NOT NULL UNIQUE
);

-- =========================
-- Tabela de Cursos
-- =========================
CREATE TABLE cursos (
    id_curso SERIAL PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    carga_horaria INT NOT NULL,
    valor DECIMAL(10,2) NOT NULL
);

-- =========================
-- Tabela de Alunos
-- =========================
CREATE TABLE alunos (
    id_aluno SERIAL PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    email VARCHAR(100) NOT NULL UNIQUE,
    data_nascimento DATE NOT NULL,
    id_cidade INT NOT NULL,

    CONSTRAINT fk_aluno_cidade
        FOREIGN KEY (id_cidade)
        REFERENCES cidades(id_cidade)
        ON DELETE RESTRICT
        ON UPDATE CASCADE
);

-- =========================
-- Tabela de Status Matrícula
-- =========================
CREATE TABLE status_matricula (
    id_status SERIAL PRIMARY KEY,
    descricao VARCHAR(30) NOT NULL UNIQUE
);

-- =========================
-- Tabela de Matrículas
-- =========================
CREATE TABLE matriculas (
    id_matricula SERIAL PRIMARY KEY,
    id_aluno INT NOT NULL,
    id_curso INT NOT NULL,
    data_matricula DATE NOT NULL,
    id_status INT NOT NULL,

    CONSTRAINT fk_matricula_aluno
        FOREIGN KEY (id_aluno)
        REFERENCES alunos(id_aluno)
        ON DELETE CASCADE
        ON UPDATE CASCADE,

    CONSTRAINT fk_matricula_curso
        FOREIGN KEY (id_curso)
        REFERENCES cursos(id_curso)
        ON DELETE CASCADE
        ON UPDATE CASCADE,

    CONSTRAINT fk_matricula_status
        FOREIGN KEY (id_status)
        REFERENCES status_matricula(id_status)
        ON DELETE RESTRICT
        ON UPDATE CASCADE
);

-- =========================
-- Inserção de Dados (População)
-- =========================

INSERT INTO cidades (nome_cidade) VALUES
('Dourados'), -- 1
('Campo Grande'), -- 2
('Fatima do Sul'), -- 3
('Douradina'); --4

INSERT INTO cursos (nome, carga_horaria, valor) VALUES
('Banco de Dados', 60, 850.00),
('Java Programação', 80, 1200.00),
('Desenvolvimento Web', 100, 1500.00),
('Python para Dados', 70, 1300.00),
('Redes de Computadores', 50, 900.00);

INSERT INTO alunos (nome, email, data_nascimento, id_cidade) VALUES
('Carlos Silva', 'carlos@gmail.com', '2000-05-10', 1),
('Ana Souza', 'ana@gmail.com', '1999-09-15', 2),
('Marcos Lima', 'marcos@gmail.com', '2001-02-20', 3),
('Fernanda Alves', 'fernanda@gmail.com', '1998-11-30', 4),
('Juliana Costa', 'juliana@gmail.com', '2002-07-05', 1);

INSERT INTO status_matricula (descricao) VALUES
('Ativa'),
('Concluída'),
('Cancelada');

INSERT INTO matriculas (
   id_aluno,
   id_curso,
   data_matricula,
   id_status
) VALUES
(1, 1, '2025-01-10', 1),
(1, 3, '2025-02-15', 1),
(2, 2, '2025-01-20', 2),
(3, 4, '2025-03-05', 1),
(4, 5, '2025-02-01', 3),
(5, 1, '2025-03-10', 1);


------- ATIVIDADE --------
INSERT INTO alunos (nome, email, data_nascimento, id_cidade) VALUES
('Ricardo Mendes', 'palhacinho@gmail.com', '2001-08-12', 1);

INSERT INTO CURSOS (NOME, CARGA_HORARIA, VALOR) VALUES
('Machine Learning', 90, 1800.00);

SELECT *
FROM cursos;

UPDATE cursos
SET VALOR = 950.00
WHERE nome LIKE 'Banco de Dados';


