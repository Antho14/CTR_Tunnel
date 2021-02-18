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
    public partial class Form1 : Form
    {

        // private MySqlConnection connection;
        C_BDD C_BDD = new C_BDD();

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
        }
//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------
        private void buttonDeconnection_Click(object sender, EventArgs e)
        {

            if (C_BDD.Deconnection() == true)
            {
                label2.Text = ("Deconnecté!");
            }
            else label2.Text = ("Erreur de Deconnection");
        }

        private void buttonQuitter_Click(object sender, EventArgs e)
        {

            C_BDD.Deconnection();
            Application.Exit();
        }
//-----------------------------Mode Automatique-------------------------------------------------------------------------------
        private void LecteurResetAuto_Tick(object sender, EventArgs e)
        {
            if (C_BDD.ConnexionBDD() == true)
            {
                label2.Text = ("Connecté!");
            }
            else label2.Text = ("Erreur de Connexion");

            String seuilCO = C_BDD.GetSeuilCO2();
            String seuilFU = C_BDD.GetSeuilFUMEE();
            String seuilLU = C_BDD.GetSeuilLUM();
            textBox1.Clear();
        }


        private void LectureCapteurAuto_Tick(object sender, EventArgs e)
        {

            if (C_BDD.ConnexionBDD() == true)
            {
                label2.Text = ("Connecté!");
            }
            else label2.Text = ("Erreur de Connexion");

            String seuilCO = C_BDD.GetSeuilCO2();
            String seuilFU = C_BDD.GetSeuilFUMEE();
            String seuilLU = C_BDD.GetSeuilLUM();
            textBox1.AppendText("seuil CO2 :" + seuilCO + Environment.NewLine + "seuil FUMEE : " + seuilFU + Environment.NewLine + "seuil LUMINOSITE : " + seuilLU);
            textBox1.AppendText(Environment.NewLine);
        }

       
        //-------------------------- Lecture Valeur seuil--------------------------------------------------
        
        //Ecriture des actionneurs 
        //Ecriture des donnée des capteur 
    }
}
