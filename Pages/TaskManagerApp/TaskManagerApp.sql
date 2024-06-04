-- Active: 1716497799265@@127.0.0.1@3306@bookinventorysystem
CREATE TABLE TaskManager
(
    Id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
    Content VARCHAR(255) NOT NULL,
    IsDone BIT NOT NULL DEFAULT 0
)

Select * FROM TaskManager