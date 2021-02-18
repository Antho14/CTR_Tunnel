namespace Version1TestCoBDD
{
    partial class Form1
    {
        /// <summary>
        /// Variable nécessaire au concepteur.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Nettoyage des ressources utilisées.
        /// </summary>
        /// <param name="disposing">true si les ressources managées doivent être supprimées ; sinon, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Code généré par le Concepteur Windows Form

        /// <summary>
        /// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
        /// le contenu de cette méthode avec l'éditeur de code.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.buttonConnection = new System.Windows.Forms.Button();
            this.buttonDeconnection = new System.Windows.Forms.Button();
            this.buttonQuitter = new System.Windows.Forms.Button();
            this.buttonLecture = new System.Windows.Forms.Button();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.buttonSeuilCO2 = new System.Windows.Forms.Button();
            this.labelCO2 = new System.Windows.Forms.Label();
            this.boutonSeuilLU = new System.Windows.Forms.Button();
            this.boutonSeuilFU = new System.Windows.Forms.Button();
            this.labelFUMEE = new System.Windows.Forms.Label();
            this.labelLUM = new System.Windows.Forms.Label();
            this.LectureCapteurAuto = new System.Windows.Forms.Timer(this.components);
            this.LecteurResetAuto = new System.Windows.Forms.Timer(this.components);
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(467, 27);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(38, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "ETAT:";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(641, 27);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(66, 13);
            this.label2.TabIndex = 1;
            this.label2.Text = "Déconnecté";
            // 
            // buttonConnection
            // 
            this.buttonConnection.Location = new System.Drawing.Point(367, 142);
            this.buttonConnection.Name = "buttonConnection";
            this.buttonConnection.Size = new System.Drawing.Size(138, 26);
            this.buttonConnection.TabIndex = 2;
            this.buttonConnection.Text = "Connection";
            this.buttonConnection.UseVisualStyleBackColor = true;
            this.buttonConnection.Click += new System.EventHandler(this.buttonConnection_Click);
            // 
            // buttonDeconnection
            // 
            this.buttonDeconnection.Location = new System.Drawing.Point(615, 142);
            this.buttonDeconnection.Name = "buttonDeconnection";
            this.buttonDeconnection.Size = new System.Drawing.Size(186, 26);
            this.buttonDeconnection.TabIndex = 3;
            this.buttonDeconnection.Text = "Déconnection";
            this.buttonDeconnection.UseVisualStyleBackColor = true;
            // 
            // buttonQuitter
            // 
            this.buttonQuitter.Location = new System.Drawing.Point(516, 572);
            this.buttonQuitter.Name = "buttonQuitter";
            this.buttonQuitter.Size = new System.Drawing.Size(75, 23);
            this.buttonQuitter.TabIndex = 4;
            this.buttonQuitter.Text = "Quitter";
            this.buttonQuitter.UseVisualStyleBackColor = true;
            this.buttonQuitter.Click += new System.EventHandler(this.buttonQuitter_Click);
            // 
            // buttonLecture
            // 
            this.buttonLecture.Location = new System.Drawing.Point(367, 327);
            this.buttonLecture.Name = "buttonLecture";
            this.buttonLecture.Size = new System.Drawing.Size(128, 23);
            this.buttonLecture.TabIndex = 5;
            this.buttonLecture.Text = "Lecturedu seuil";
            this.buttonLecture.UseVisualStyleBackColor = true;
            this.buttonLecture.Click += new System.EventHandler(this.buttonLecture_Click);
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(545, 221);
            this.textBox1.Multiline = true;
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(256, 129);
            this.textBox1.TabIndex = 6;
            // 
            // buttonSeuilCO2
            // 
            this.buttonSeuilCO2.Location = new System.Drawing.Point(12, 104);
            this.buttonSeuilCO2.Name = "buttonSeuilCO2";
            this.buttonSeuilCO2.Size = new System.Drawing.Size(121, 23);
            this.buttonSeuilCO2.TabIndex = 9;
            this.buttonSeuilCO2.Text = "SeuilCO2";
            this.buttonSeuilCO2.UseVisualStyleBackColor = true;
            // 
            // labelCO2
            // 
            this.labelCO2.AutoSize = true;
            this.labelCO2.Location = new System.Drawing.Point(139, 114);
            this.labelCO2.Name = "labelCO2";
            this.labelCO2.Size = new System.Drawing.Size(35, 13);
            this.labelCO2.TabIndex = 10;
            this.labelCO2.Text = "label3";
            // 
            // boutonSeuilLU
            // 
            this.boutonSeuilLU.Location = new System.Drawing.Point(12, 231);
            this.boutonSeuilLU.Name = "boutonSeuilLU";
            this.boutonSeuilLU.Size = new System.Drawing.Size(121, 23);
            this.boutonSeuilLU.TabIndex = 11;
            this.boutonSeuilLU.Text = "SeuilLUM";
            this.boutonSeuilLU.UseVisualStyleBackColor = true;
            this.boutonSeuilLU.Click += new System.EventHandler(this.boutonSeuilLU_Click);
            // 
            // boutonSeuilFU
            // 
            this.boutonSeuilFU.Location = new System.Drawing.Point(12, 169);
            this.boutonSeuilFU.Name = "boutonSeuilFU";
            this.boutonSeuilFU.Size = new System.Drawing.Size(121, 23);
            this.boutonSeuilFU.TabIndex = 12;
            this.boutonSeuilFU.Text = "SeuilFUMEE";
            this.boutonSeuilFU.UseVisualStyleBackColor = true;
            this.boutonSeuilFU.Click += new System.EventHandler(this.boutonSeuilFU_Click);
            // 
            // labelFUMEE
            // 
            this.labelFUMEE.AutoSize = true;
            this.labelFUMEE.Location = new System.Drawing.Point(139, 174);
            this.labelFUMEE.Name = "labelFUMEE";
            this.labelFUMEE.Size = new System.Drawing.Size(35, 13);
            this.labelFUMEE.TabIndex = 13;
            this.labelFUMEE.Text = "label4";
            // 
            // labelLUM
            // 
            this.labelLUM.AutoSize = true;
            this.labelLUM.Location = new System.Drawing.Point(139, 236);
            this.labelLUM.Name = "labelLUM";
            this.labelLUM.Size = new System.Drawing.Size(35, 13);
            this.labelLUM.TabIndex = 14;
            this.labelLUM.Text = "label5";
            // 
            // LectureCapteurAuto
            // 
            this.LectureCapteurAuto.Enabled = true;
            this.LectureCapteurAuto.Interval = 5000;
            this.LectureCapteurAuto.Tick += new System.EventHandler(this.LectureCapteurAuto_Tick);
            // 
            // LecteurResetAuto
            // 
            this.LecteurResetAuto.Enabled = true;
            this.LecteurResetAuto.Interval = 5000;
            this.LecteurResetAuto.Tick += new System.EventHandler(this.LecteurResetAuto_Tick);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(967, 607);
            this.Controls.Add(this.labelLUM);
            this.Controls.Add(this.labelFUMEE);
            this.Controls.Add(this.boutonSeuilFU);
            this.Controls.Add(this.boutonSeuilLU);
            this.Controls.Add(this.labelCO2);
            this.Controls.Add(this.buttonSeuilCO2);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.buttonLecture);
            this.Controls.Add(this.buttonQuitter);
            this.Controls.Add(this.buttonDeconnection);
            this.Controls.Add(this.buttonConnection);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Button buttonConnection;
        private System.Windows.Forms.Button buttonDeconnection;
        private System.Windows.Forms.Button buttonQuitter;
        private System.Windows.Forms.Button buttonLecture;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Button buttonSeuilCO2;
        private System.Windows.Forms.Label labelCO2;
        private System.Windows.Forms.Button boutonSeuilLU;
        private System.Windows.Forms.Button boutonSeuilFU;
        private System.Windows.Forms.Label labelFUMEE;
        private System.Windows.Forms.Label labelLUM;
        private System.Windows.Forms.Timer LectureCapteurAuto;
        private System.Windows.Forms.Timer LecteurResetAuto;
    }
}

