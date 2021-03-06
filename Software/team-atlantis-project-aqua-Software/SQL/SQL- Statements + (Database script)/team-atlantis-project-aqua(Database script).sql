USE [master]
GO
/****** Object:  Database [team-atlantis-project-aqua]    Script Date: 6/29/2021 6:45:58 AM ******/
CREATE DATABASE [team-atlantis-project-aqua]
 CONTAINMENT = NONE
 ON  PRIMARY 
( NAME = N'team-atlantis-project-aqua', FILENAME = N'C:\Program Files\Microsoft SQL Server\MSSQL15.SQLEXPRESS\MSSQL\DATA\team-atlantis-project-aqua.mdf' , SIZE = 8192KB , MAXSIZE = UNLIMITED, FILEGROWTH = 65536KB )
 LOG ON 
( NAME = N'team-atlantis-project-aqua_log', FILENAME = N'C:\Program Files\Microsoft SQL Server\MSSQL15.SQLEXPRESS\MSSQL\DATA\team-atlantis-project-aqua_log.ldf' , SIZE = 8192KB , MAXSIZE = 2048GB , FILEGROWTH = 65536KB )
 WITH CATALOG_COLLATION = DATABASE_DEFAULT
GO
ALTER DATABASE [team-atlantis-project-aqua] SET COMPATIBILITY_LEVEL = 150
GO
IF (1 = FULLTEXTSERVICEPROPERTY('IsFullTextInstalled'))
begin
EXEC [team-atlantis-project-aqua].[dbo].[sp_fulltext_database] @action = 'enable'
end
GO
ALTER DATABASE [team-atlantis-project-aqua] SET ANSI_NULL_DEFAULT OFF 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET ANSI_NULLS OFF 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET ANSI_PADDING OFF 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET ANSI_WARNINGS OFF 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET ARITHABORT OFF 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET AUTO_CLOSE OFF 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET AUTO_SHRINK OFF 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET AUTO_UPDATE_STATISTICS ON 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET CURSOR_CLOSE_ON_COMMIT OFF 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET CURSOR_DEFAULT  GLOBAL 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET CONCAT_NULL_YIELDS_NULL OFF 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET NUMERIC_ROUNDABORT OFF 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET QUOTED_IDENTIFIER OFF 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET RECURSIVE_TRIGGERS OFF 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET  DISABLE_BROKER 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET AUTO_UPDATE_STATISTICS_ASYNC OFF 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET DATE_CORRELATION_OPTIMIZATION OFF 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET TRUSTWORTHY OFF 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET ALLOW_SNAPSHOT_ISOLATION OFF 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET PARAMETERIZATION SIMPLE 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET READ_COMMITTED_SNAPSHOT OFF 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET HONOR_BROKER_PRIORITY OFF 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET RECOVERY SIMPLE 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET  MULTI_USER 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET PAGE_VERIFY CHECKSUM  
GO
ALTER DATABASE [team-atlantis-project-aqua] SET DB_CHAINING OFF 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET FILESTREAM( NON_TRANSACTED_ACCESS = OFF ) 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET TARGET_RECOVERY_TIME = 60 SECONDS 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET DELAYED_DURABILITY = DISABLED 
GO
ALTER DATABASE [team-atlantis-project-aqua] SET ACCELERATED_DATABASE_RECOVERY = OFF  
GO
ALTER DATABASE [team-atlantis-project-aqua] SET QUERY_STORE = OFF
GO
USE [team-atlantis-project-aqua]
GO
/****** Object:  Table [dbo].[Birds]    Script Date: 6/29/2021 6:45:58 AM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Birds](
	[Id] [int] IDENTITY(1,1) NOT NULL,
	[Ability] [nvarchar](10) NOT NULL,
	[Name] [nvarchar](50) NOT NULL,
	[Color] [nvarchar](50) NOT NULL,
	[Size] [varchar](20) NOT NULL,
	[YearsOfLife] [tinyint] NOT NULL,
	[Migration] [varchar](10) NOT NULL,
	[SizeOfEggs] [varchar](20) NOT NULL,
PRIMARY KEY CLUSTERED 
(
	[Id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Lakes]    Script Date: 6/29/2021 6:45:58 AM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Lakes](
	[Id] [int] IDENTITY(1,1) NOT NULL,
	[Type] [nvarchar](50) NOT NULL,
	[Name] [nvarchar](50) NOT NULL,
	[Fish] [varchar](10) NOT NULL,
	[Depth] [varchar](30) NOT NULL,
	[YearsOld] [tinyint] NOT NULL,
	[Length] [varchar](20) NOT NULL,
PRIMARY KEY CLUSTERED 
(
	[Id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
ALTER TABLE [dbo].[Birds]  WITH CHECK ADD  CONSTRAINT [CHK_Bird_YearsOfLife] CHECK  (([YearsOfLife]>=(8) AND [YearsOfLife]<=(28)))
GO
ALTER TABLE [dbo].[Birds] CHECK CONSTRAINT [CHK_Bird_YearsOfLife]
GO
ALTER TABLE [dbo].[Lakes]  WITH CHECK ADD  CONSTRAINT [CHK_Lake_YearsOld] CHECK  (([YearsOld]>=(5) AND [YearsOld]<=(50)))
GO
ALTER TABLE [dbo].[Lakes] CHECK CONSTRAINT [CHK_Lake_YearsOld]
GO
USE [master]
GO
ALTER DATABASE [team-atlantis-project-aqua] SET  READ_WRITE 
GO
