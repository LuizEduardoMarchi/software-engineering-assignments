-- =========================
-- População da Tabela de Cidades
-- =========================
INSERT INTO cidades (nome_cidade) VALUES
('Dourados'),
('Campo Grande'),
('Fatima do Sul'),
('Douradina');

-- =========================
-- População da Tabela de Cursos
-- =========================
INSERT INTO cursos (nome, carga_horaria, valor) VALUES
('Banco de Dados', 60, 850.00),
('Java Programação', 80, 1200.00),
('Desenvolvimento Web', 100, 1500.00),
('Python para Dados', 70, 1300.00),
('Redes de Computadores', 50, 900.00);

INSERT INTO CURSOS (nome, carga_horaria, valor) VALUES
('Palito',  60, 4000.00);

-- =========================
-- População da Tabela de Alunos
-- =========================
INSERT INTO alunos (nome, email, data_nascimento, id_cidade) VALUES
('Carlos Silva', 'carlos@gmail.com', '2000-05-10', 1),
('Ana Souza', 'ana@gmail.com', '1999-09-15', 2),
('Marcos Lima', 'marcos@gmail.com', '2001-02-20', 3),
('Fernanda Alves', 'fernanda@gmail.com', '1998-11-30', 4),
('Juliana Costa', 'juliana@gmail.com', '2002-07-05', 1);

-- =========================
-- População da Tabela de Status Matrícula
-- =========================
INSERT INTO status_matricula (descricao) VALUES
('Ativa'),
('Concluída'),
('Cancelada');

-- =========================
-- População da Tabela de Matrículas
-- =========================
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