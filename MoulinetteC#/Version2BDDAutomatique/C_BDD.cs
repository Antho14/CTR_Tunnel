using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using MySql.Data.MySqlClient;
using MySql.Data;


namespace Version1TestCoBDD
{
    class C_BDD
    {
        private MySqlConnection connection;

        string server = "localhost";
        string database = "tunnel";
        string uid = "root";
        string password = "";
//----------------CONNECTION-------------------------
        public bool ConnexionBDD()
        {
            
            try
            {
                string connectionString = @"server=" + server + ";database=" + database + ";userid=" + uid + ";password=" + password + ";";
                connection = new MySqlConnection(connectionString);
                connection.Open();
                return true;
                //label2.Text = "Connection ok !";
            }
            catch (MySqlException ex)
            {
                //label2.Text = "Erreur connection !";
                MessageBox.Show("Erreur : " + ex);
                return false;
            }
        }
//------------DECONNECTION----------------------------------
        public bool Deconnection()
        {
            try
            {
                connection.Close();
                return true;
            }
            catch (MySqlException ex)
            {
                MessageBox.Show("Erreur : " + ex.Message);
                return false;
            }
        }
//----------------------SEUILCO2-------------------------
        public string GetSeuilCO2()
        {
                String commande = "SELECT `seuil1` FROM `t_capteur` WHERE `id`=1";
                MySqlCommand cmd = new MySqlCommand(commande, connection);
                MySqlDataReader reader = cmd.ExecuteReader();
                reader.Read();
                    
                    String resultatSeuil = reader.ToString();
                    resultatSeuil = reader.GetString(0);
                    reader.Close();
                    return resultatSeuil;
        }
//----------------------SEUILFUMEE-------------------------
        public string GetSeuilFUMEE()
        {
            String commande = "SELECT `seuil1` FROM `t_capteur` WHERE `id`=2";
            MySqlCommand cmd = new MySqlCommand(commande, connection);
            MySqlDataReader reader = cmd.ExecuteReader();
            reader.Read();

            String resultatSeuil = reader.ToString();
            resultatSeuil = reader.GetString(0);
            reader.Close();
            return resultatSeuil;
        }
//----------------------SEUILLUMINOSITE-------------------------
        public string GetSeuilLUM()
        {
            String commande = "SELECT `seuil1` FROM `t_capteur` WHERE `id`=3";
            MySqlCommand cmd = new MySqlCommand(commande, connection);
            MySqlDataReader reader = cmd.ExecuteReader();

            reader.Read();
            String resultatSeuil = reader.ToString();
            resultatSeuil = reader.GetString(0);
            reader.Close();
            return resultatSeuil;
        }
//----------------------------------------------------------
    }
}
