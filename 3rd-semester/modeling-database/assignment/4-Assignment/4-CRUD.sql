-----------------------------------------------------------------------------------------
-- QUESTÕES – INSERT, DELETE E UPDATE
-----------------------------------------------------------------------------------------

-- 1. Insira um novo aluno chamado “Ricardo Mendes”, email "ricardomendes@gmail.com" nascido em 2001-08-12, da cidade de Dourados.
INSERT INTO alunos (nome, email, data_nascimento, id_cidade) VALUES 
('Ricardo Mendes', 'ricardo@gmail.com', '2001-08-12', 1);

-- 2. Cadastre um novo curso chamado “Machine Learning”, com carga horária de 90 horas e valor de R$ 1800,00.
INSERT INTO cursos (nome, carga_horaria , valor) VALUES
('Machine Learning', 90, 1800.00);

-- 3. Atualize o valor do curso “Banco de Dados” para R$ 950,00.
UPDATE cursos
SET valor = 950.00
WHERE nome = 'Banco de dados';

-- 4. Altere o status da matrícula de código 5 para “Ativa”.
UPDATE matriculas
SET id_status = 1
WHERE id_matricula = 5;

-- 5. Exclua o curso de código 5 e observe o efeito do ON DELETE CASCADE nas matrículas relacionadas.
DELETE FROM CURSOS 
WHERE id_curso = 5;

-----------------------------------------------------------------------------------------
-- QUESTÕES – CONSULTAS SIMPLES
-----------------------------------------------------------------------------------------

-- 6. Liste todos os alunos ordenados pelo nome em ordem alfabética.
SELECT nome -- ou poderia ser *
FROM alunos
ORDER BY nome ASC; 

-- 7. Liste os cursos com valor maior que R$ 1000,00.
SELECT nome, valor -- ou poderia ser *
FROM cursos
WHERE valor > 1000.00;

-- 8. Mostre os alunos nascidos entre 1999-01-01 e 2001-12-31.
SELECT nome, data_nascimento
FROM alunos
WHERE data_nascimento BETWEEN '1999-01-01' AND '2001-12-31';

-- 9. Liste as matrículas utilizando alias para os nomes das colunas.
SELECT 
	id_aluno AS numero_aluno,
	id_curso AS numero_curso,
	data_matricula AS data_inscricao,
	id_status AS status_atual
FROM matriculas;

-- 10. Liste os cursos ordenados do maior para o menor valor.
SELECT *
FROM cursos
ORDER BY valor DESC;

-----------------------------------------------------------------------------------------
-- QUESTÕES – FUNÇÕES, GROUP BY E HAVING
-----------------------------------------------------------------------------------------

-- 11. Mostre a quantidade total de alunos cadastrados.
SELECT COUNT (id_aluno) AS total_alunos -- ou poderia ser *
FROM alunos;

-- 12. Mostre o valor médio dos cursos.
SELECT AVG ("valor") AS valor_medio
FROM cursos;

-- 13. Mostre a quantidade de matrículas por status.
SELECT id_status, COUNT (*) AS total_matriculas
FROM matriculas
GROUP BY id_status;

-- 14. Mostre a soma total dos valores dos cursos agrupados pela carga horária.
SELECT carga_horaria, SUM  (valor) AS valor_total
FROM cursos
GROUP BY carga_horaria
ORDER BY carga_horaria;

-- 15. Liste os status de matrícula que possuem mais de 1 registro.
SELECT id_status, COUNT (*) AS matriculas 
FROM matriculas
GROUP BY id_status
HAVING COUNT (*) > 1;


-----------------------------------------------------------------------------------------
-- QUESTÕES – CONSULTAS COM JOIN
-----------------------------------------------------------------------------------------

-- 16. Liste o nome dos alunos e os cursos em que estão matriculados.
SELECT aluno.nome AS nome_aluno, curso.nome AS nome_curso
FROM matriculas mat
INNER JOIN alunos aluno ON mat.id_aluno = aluno.id_aluno
INNER JOIN cursos curso ON mat.id_curso = curso.id_curso;

-- 17. Liste os alunos, cursos e data da matrícula. (INNER)
SELECT aluno.nome AS nome_aluno, curso.nome AS nome_curso, mat.data_matricula AS data_mat
FROM matriculas mat
INNER JOIN alunos aluno	ON mat.id_aluno = aluno.id_aluno
INNER JOIN cursos curso ON mat.id_curso = curso.id_curso;

-- 18. Mostre os alunos matriculados em cursos com valor acima de R$ 1000,00. (INNER)
SELECT aluno.nome AS nome_aluno, curso.nome AS nome_curso, curso.valor AS valor_curso
FROM matriculas mat
INNER JOIN alunos aluno ON mat.id_aluno = aluno.id_aluno
INNER JOIN cursos curso ON mat.id_curso = curso.id_curso
WHERE curso.valor > 1000.00;

-- 19. Liste a quantidade de alunos por curso. (INNER) + (GROUP BY)
SELECT curso.nome AS nome_curso, COUNT(mat.id_aluno) AS total_alunos 
FROM MATRICULAS mat
INNER JOIN cursos curso ON mat.id_curso = curso.id_curso
GROUP BY curso.nome;

-- 20. Liste os cursos que possuem mais de 1 aluno matriculado. (INNER)
SELECT curso.nome AS nome_curso, COUNT(mat.id_aluno) AS total_alunos
FROM matriculas mat
INNER JOIN cursos curso ON mat.id_curso = curso.id_curso
GROUP BY mat.id_curso, curso.nome
HAVING COUNT (mat.id_aluno) > 1;

-- 21. Liste o nome dos alunos, o nome dos cursos e a data da matrícula apenas dos alunos que possuem matrícula cadastrada. (INNER)
SELECT aluno.nome AS nome_aluno, curso.nome AS nome_curso, data_matricula AS data_mat
FROM matriculas mat
INNER JOIN alunos aluno ON mat.id_aluno = aluno.id_aluno
INNER JOIN cursos curso ON mat.id_curso = curso.id_curso;

-- 22. Liste todos os cursos, incluindo aqueles que ainda não possuem alunos matriculados. (LEFT JOIN)
SELECT curso.nome
FROM cursos curso
LEFT JOIN matriculas mat ON curso.id_curso = mat.id_curso
LEFT JOIN alunos aluno ON mat.id_aluno = aluno.id_aluno;

-- 23. Liste todos os alunos, incluindo aqueles que ainda não realizaram matrícula. (LEFT)
SELECT aluno.nome AS nome_aluno, curso.nome AS nome_curso
FROM alunos aluno
LEFT JOIN matriculas mat ON mat.id_aluno = aluno.id_aluno
LEFT JOIN cursos curso ON mat.id_curso = curso.id_curso

-- 24. Liste todos os alunos e todos os cursos, incluindo: alunos sem matrícula e cursos sem alunos. (FULL)
SELECT aluno.nome AS nome_aluno, curso.nome AS nome_curso
FROM alunos aluno
FULL OUTER JOIN matriculas mat ON aluno.id_aluno = mat.id_aluno
FULL OUTER JOIN cursos curso ON  mat.id_curso = curso.id_curso;