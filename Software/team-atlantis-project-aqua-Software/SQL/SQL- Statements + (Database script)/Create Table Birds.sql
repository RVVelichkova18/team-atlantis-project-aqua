USE [team-atlantis-project-aqua]

CREATE TABLE [Birds] (
	
	Id int NOT NULL PRIMARY KEY  IDENTITY(1, 1),
	Ability nvarchar(10) NOT NULL,
	[Name] nvarchar(50) NOT NULL,
	Color nvarchar(50) NOT NULL,
	Size varchar(20) NOT NULL,
	YearsOfLife tinyint NOT NULL CONSTRAINT CHK_Bird_YearsOfLife CHECK (YearsOfLife>=8 AND YearsOfLife<=28),
	Migration varchar(10) NOT NULL,
	SizeOfEggs varchar(20) NOT NULL
)
