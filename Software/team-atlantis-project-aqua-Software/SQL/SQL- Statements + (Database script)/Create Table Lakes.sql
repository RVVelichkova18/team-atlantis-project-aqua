USE [team-atlantis-project-aqua]

CREATE TABLE [Lakes] (
	
	Id int NOT NULL PRIMARY KEY  IDENTITY(1, 1),
	[Type] nvarchar(50) NOT NULL,
	[Name] nvarchar(50) NOT NULL,
	Fish varchar(10) NOT NULL,
	Depth varchar(30) NOT NULL,
	YearsOld tinyint NOT NULL CONSTRAINT CHK_Lake_YearsOld CHECK (YearsOld>=5 AND YearsOld<=50),
	[Length] varchar(20) NOT NULL
)
