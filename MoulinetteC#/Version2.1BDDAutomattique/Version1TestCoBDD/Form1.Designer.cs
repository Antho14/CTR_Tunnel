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
            this.buttonDeconnection = new System.Windows.Forms.Button();
            this.buttonQuitter = new System.Windows.Forms.Button();
            this.textBox1 = new System.Windows.Forms.TextBox();
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
            // buttonDeconnection
            // 
            this.buttonDeconnection.Location = new System.Drawing.Point(644, 84);
            this.buttonDeconnection.Name = "buttonDeconnection";
            this.buttonDeconnection.Size = new System.Drawing.Size(186, 26);
            this.buttonDeconnection.TabIndex = 3;
            this.buttonDeconnection.Text = "Déconnection";
            this.buttonDeconnection.UseVisualStyleBackColor = true;
            // 
            // buttonQuitter
            // 
            this.buttonQuitter.Location = new System.Drawing.Point(644, 190);
            this.buttonQuitter.Name = "buttonQuitter";
            this.buttonQuitter.Size = new System.Drawing.Size(75, 23);
            this.buttonQuitter.TabIndex = 4;
            this.buttonQuitter.Text = "Quitter";
            this.buttonQuitter.UseVisualStyleBackColor = true;
            this.buttonQuitter.Click += new System.EventHandler(this.buttonQuitter_Click);
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(382, 84);
            this.textBox1.Multiline = true;
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(256, 129);
            this.textBox1.TabIndex = 6;
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
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.buttonQuitter);
            this.Controls.Add(this.buttonDeconnection);
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
        private System.Windows.Forms.Button buttonDeconnection;
        private System.Windows.Forms.Button buttonQuitter;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Timer LectureCapteurAuto;
        private System.Windows.Forms.Timer LecteurResetAuto;
    }
}

