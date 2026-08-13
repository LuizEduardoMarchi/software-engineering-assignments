create database ATIVIDADE_DDL;

create table CEP (
	CEP char(8) primary key,
	bairro varchar(50) not null,
	cidade varchar(50) not null,
	estado char(2)  not null
);

create table endereco(
	id serial primary key,
	rua varchar(100) not null,
	numero varchar(10),
	fk_CEP char(8) not null,
	foreign key (fk_CEP) references CEP(CEP)
);

create table historico (
	id serial primary key,
	historico varchar(200)  
);

create table plano (
	id serial primary key,
	nome varchar(100) not null,
	numero varchar(30) unique
);

create table paciente (
	id serial primary key,
	cpf varchar(11 not null unique,
	fk_endereco integer not null,
	fk_historico integer,
	fk_plano integer,
	foreign key (fk_endereco) references endereco(id),
	foreign key (fk_historico) references historico(id),
	foreign key (fk_plano)  references plano(id)
);

create table especialidade(
	id serial primary key,
	nome varchar(50) not null unique
);

create table medico(
	CRM char(10) primary key,
	nome varchar(100) not null,
	fk_especialidade integer not null,
	fk_endereco integer,
	foreign key (fk_especialidade) references especialidade(id),
	foreign key (fk_endereco) references endereco(id)
);

create table tipo (
	id serial primary key,
	descricao varchar(10) not null unique
);

create table contato(
	id serial primary key,
	telefone char(11) not null unique,
	fk_tipo integer  not null,
	fk_medico char(10),
	fk_paciente integer,
	foreign key (fk_tipo) references tipo(id),
	foreign key (fk_medico) references medico(CRM),
	foreign key (fk_paciente) references paciente(id)
);

create table consultorio(
	id serial primary key,
	descricao varchar(100)  not null
);

create table consulta (
	id serial primary key, 
	horario time not null,
	data date not null,
	fk_consultorio integer not null,
	fk_paciente integer not null,
	fk_medico char(10) not null,
	foreign key (fk_consultorio) references consultorio(id),
	foreign key (fk_paciente) references paciente(id),
	foreign key (fk_medico) references medico(CRM)
);

create table prontuario(
	id serial primary key,
	descricao text,
	fk_medico char(10) not null,
	fk_consulta integer not null unique,
	fk_historico integer,
	foreign key (fk_medico) references medico(CRM),
	foreign key (fk_consulta) references consulta(id),
	foreign key (fk_historico) references historico(id)
);

create table pedido_exame(
	id serial primary key,
	data date not null,
	fk_prontuario integer not null,
	fk_consulta integer not null,
	foreign key (fk_prontuario) references prontuario(id),
	foreign key (fk_consulta) references consulta(id)
);

create table exame (
	id serial primary key,
	descricao text not null,
	fk_pedido_exame integer not null,
	fk_paciente integer not null,
	foreign key (fk_pedido_exame) references pedido_exame(id),
	foreign key (fk_paciente) references paciente(id)
);

create table receita(
	id serial primary key,
	data date not null,
	fk_prontuario integer not null,
	foreign key (fk_prontuario) references prontuario(id)
);

create table medicamento(
	id serial primary key,
	descricao varchar(100) not null,
	fk_receita integer not null,
	foreign key (fk_receita) references receita(id)
);
