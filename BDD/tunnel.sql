-- phpMyAdmin SQL Dump
-- version 3.4.5
-- http://www.phpmyadmin.net
--
-- Client: 127.0.0.1
-- Généré le : Jeu 28 Janvier 2021 à 12:14
-- Version du serveur: 5.5.16
-- Version de PHP: 5.3.8

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Base de données: `tunnel`
--

-- --------------------------------------------------------

--
-- Structure de la table `t_actionneur`
--

CREATE TABLE IF NOT EXISTS `t_actionneur` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `nomActionneur` varchar(30) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 AUTO_INCREMENT=1 ;

-- --------------------------------------------------------

--
-- Structure de la table `t_capteur`
--

CREATE TABLE IF NOT EXISTS `t_capteur` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `NomCapteur` varchar(30) NOT NULL,
  `seuil1` float NOT NULL,
  `seuil2` float NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 AUTO_INCREMENT=1 ;

-- --------------------------------------------------------

--
-- Structure de la table `t_commandes`
--

CREATE TABLE IF NOT EXISTS `t_commandes` (
  `idCommande` int(11) NOT NULL AUTO_INCREMENT,
  `description` varchar(30) NOT NULL,
  PRIMARY KEY (`idCommande`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 AUTO_INCREMENT=1 ;

-- --------------------------------------------------------

--
-- Structure de la table `t_histoique_incidents`
--

CREATE TABLE IF NOT EXISTS `t_histoique_incidents` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `dateTime` varchar(40) NOT NULL,
  `type` varchar(40) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 AUTO_INCREMENT=1 ;

-- --------------------------------------------------------

--
-- Structure de la table `t_historiques_actionneur`
--

CREATE TABLE IF NOT EXISTS `t_historiques_actionneur` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `date` datetime NOT NULL,
  `type` varchar(30) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 AUTO_INCREMENT=1 ;

-- --------------------------------------------------------

--
-- Structure de la table `t_incident`
--

CREATE TABLE IF NOT EXISTS `t_incident` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `dateDebut` datetime NOT NULL,
  `dateFin` datetime NOT NULL,
  `idType` int(11) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 AUTO_INCREMENT=1 ;

-- --------------------------------------------------------

--
-- Structure de la table `t_type_incident`
--

CREATE TABLE IF NOT EXISTS `t_type_incident` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `description` varchar(50) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 AUTO_INCREMENT=1 ;

-- --------------------------------------------------------

--
-- Structure de la table `t_utilisateur`
--

CREATE TABLE IF NOT EXISTS `t_utilisateur` (
  `id` tinyint(4) NOT NULL AUTO_INCREMENT,
  `Pseudo` varchar(30) NOT NULL,
  `pass` varchar(30) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=2 ;

--
-- Contenu de la table `t_utilisateur`
--

INSERT INTO `t_utilisateur` (`id`, `Pseudo`, `pass`) VALUES
(1, 'Superviseur', '123456');

-- --------------------------------------------------------

--
-- Structure de la table `t_valeurs_actionneurs`
--

CREATE TABLE IF NOT EXISTS `t_valeurs_actionneurs` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `idActionneur` int(11) NOT NULL,
  `etat` int(11) NOT NULL,
  `date` datetime NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 AUTO_INCREMENT=1 ;

-- --------------------------------------------------------

--
-- Structure de la table `t_valeurs_capteur`
--

CREATE TABLE IF NOT EXISTS `t_valeurs_capteur` (
  `id` tinyint(4) NOT NULL AUTO_INCREMENT,
  `idCapteur` tinyint(4) NOT NULL,
  `date-time` date NOT NULL,
  `valeur` tinyint(4) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 AUTO_INCREMENT=1 ;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
