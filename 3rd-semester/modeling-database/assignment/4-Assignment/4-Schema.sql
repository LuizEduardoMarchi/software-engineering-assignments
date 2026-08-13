CREATE DATABASE AULA_REVISAO_E_JOIN;

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