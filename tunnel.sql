-- phpMyAdmin SQL Dump
-- version 5.0.3
-- https://www.phpmyadmin.net/
--
-- Hôte : 127.0.0.1
-- Généré le : mar. 09 fév. 2021 à 17:38
-- Version du serveur :  10.4.14-MariaDB
-- Version de PHP : 7.2.34

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de données : `tunnel`
--

-- --------------------------------------------------------

--
-- Structure de la table `t_actionneur`
--

CREATE TABLE `t_actionneur` (
  `id` int(11) NOT NULL,
  `nomActionneur` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Déchargement des données de la table `t_actionneur`
--

INSERT INTO `t_actionneur` (`id`, `nomActionneur`) VALUES
(1, 'Rampe 1'),
(2, 'Rampe 2'),
(3, 'Rampe 3'),
(4, 'Feu Droit'),
(5, 'Feu Gauche'),
(6, 'Capteur'),
(7, 'Ventilateur Haut'),
(8, 'Ventilateur Bas');

-- --------------------------------------------------------

--
-- Structure de la table `t_capteur`
--

CREATE TABLE `t_capteur` (
  `id` int(11) NOT NULL,
  `NomCapteur` varchar(30) NOT NULL,
  `seuil1` float NOT NULL,
  `seuil2` float NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Déchargement des données de la table `t_capteur`
--

INSERT INTO `t_capteur` (`id`, `NomCapteur`, `seuil1`, `seuil2`) VALUES
(1, 'Co2', 90, 90),
(2, 'Fumée', 90, 90),
(3, 'Lumière', 90, 90);

-- --------------------------------------------------------

--
-- Structure de la table `t_commandes`
--

CREATE TABLE `t_commandes` (
  `idCommande` int(11) NOT NULL,
  `description` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Structure de la table `t_histoique_incidents`
--

CREATE TABLE `t_histoique_incidents` (
  `id` int(11) NOT NULL,
  `dateTime` varchar(40) NOT NULL,
  `type` varchar(40) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Structure de la table `t_historiques_actionneur`
--

CREATE TABLE `t_historiques_actionneur` (
  `id` int(11) NOT NULL,
  `date` datetime NOT NULL,
  `type` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Structure de la table `t_incident`
--

CREATE TABLE `t_incident` (
  `id` int(11) NOT NULL,
  `dateDebut` datetime NOT NULL,
  `dateFin` datetime NOT NULL,
  `idType` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Structure de la table `t_type_incident`
--

CREATE TABLE `t_type_incident` (
  `id` int(11) NOT NULL,
  `description` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Structure de la table `t_utilisateur`
--

CREATE TABLE `t_utilisateur` (
  `id` tinyint(4) NOT NULL,
  `Pseudo` varchar(30) NOT NULL,
  `pass` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Déchargement des données de la table `t_utilisateur`
--

INSERT INTO `t_utilisateur` (`id`, `Pseudo`, `pass`) VALUES
(1, 'Superviseur', '123456');

-- --------------------------------------------------------

--
-- Structure de la table `t_valeurs_actionneurs`
--

CREATE TABLE `t_valeurs_actionneurs` (
  `id` int(11) NOT NULL,
  `idActionneur` int(11) NOT NULL,
  `etat` int(11) NOT NULL,
  `date` datetime NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Déchargement des données de la table `t_valeurs_actionneurs`
--

INSERT INTO `t_valeurs_actionneurs` (`id`, `idActionneur`, `etat`, `date`) VALUES
(1, 1, 0, '2021-02-01 00:00:00'),
(2, 2, 1, '2021-02-01 00:00:00'),
(3, 3, 0, '2021-02-01 00:00:00'),
(4, 4, 1, '2021-02-01 00:00:00'),
(5, 5, 0, '2021-02-01 00:00:00'),
(6, 6, 1, '2021-02-01 00:00:00'),
(7, 7, 0, '2021-02-01 00:00:00'),
(8, 8, 1, '2021-02-01 00:00:00');

-- --------------------------------------------------------

--
-- Structure de la table `t_valeurs_capteur`
--

CREATE TABLE `t_valeurs_capteur` (
  `id` tinyint(4) NOT NULL,
  `idCapteur` tinyint(4) NOT NULL,
  `date-time` date NOT NULL,
  `valeur` tinyint(4) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Déchargement des données de la table `t_valeurs_capteur`
--

INSERT INTO `t_valeurs_capteur` (`id`, `idCapteur`, `date-time`, `valeur`) VALUES
(1, 1, '2021-02-02', 90),
(2, 2, '2021-02-02', 60),
(3, 3, '2021-02-02', 30);

--
-- Index pour les tables déchargées
--

--
-- Index pour la table `t_actionneur`
--
ALTER TABLE `t_actionneur`
  ADD PRIMARY KEY (`id`);

--
-- Index pour la table `t_capteur`
--
ALTER TABLE `t_capteur`
  ADD PRIMARY KEY (`id`);

--
-- Index pour la table `t_commandes`
--
ALTER TABLE `t_commandes`
  ADD PRIMARY KEY (`idCommande`);

--
-- Index pour la table `t_histoique_incidents`
--
ALTER TABLE `t_histoique_incidents`
  ADD PRIMARY KEY (`id`);

--
-- Index pour la table `t_historiques_actionneur`
--
ALTER TABLE `t_historiques_actionneur`
  ADD PRIMARY KEY (`id`);

--
-- Index pour la table `t_incident`
--
ALTER TABLE `t_incident`
  ADD PRIMARY KEY (`id`);

--
-- Index pour la table `t_type_incident`
--
ALTER TABLE `t_type_incident`
  ADD PRIMARY KEY (`id`);

--
-- Index pour la table `t_utilisateur`
--
ALTER TABLE `t_utilisateur`
  ADD PRIMARY KEY (`id`);

--
-- Index pour la table `t_valeurs_actionneurs`
--
ALTER TABLE `t_valeurs_actionneurs`
  ADD PRIMARY KEY (`id`);

--
-- Index pour la table `t_valeurs_capteur`
--
ALTER TABLE `t_valeurs_capteur`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT pour les tables déchargées
--

--
-- AUTO_INCREMENT pour la table `t_actionneur`
--
ALTER TABLE `t_actionneur`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=9;

--
-- AUTO_INCREMENT pour la table `t_capteur`
--
ALTER TABLE `t_capteur`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT pour la table `t_commandes`
--
ALTER TABLE `t_commandes`
  MODIFY `idCommande` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT pour la table `t_histoique_incidents`
--
ALTER TABLE `t_histoique_incidents`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT pour la table `t_historiques_actionneur`
--
ALTER TABLE `t_historiques_actionneur`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT pour la table `t_incident`
--
ALTER TABLE `t_incident`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT pour la table `t_type_incident`
--
ALTER TABLE `t_type_incident`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT pour la table `t_utilisateur`
--
ALTER TABLE `t_utilisateur`
  MODIFY `id` tinyint(4) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- AUTO_INCREMENT pour la table `t_valeurs_actionneurs`
--
ALTER TABLE `t_valeurs_actionneurs`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=9;

--
-- AUTO_INCREMENT pour la table `t_valeurs_capteur`
--
ALTER TABLE `t_valeurs_capteur`
  MODIFY `id` tinyint(4) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
