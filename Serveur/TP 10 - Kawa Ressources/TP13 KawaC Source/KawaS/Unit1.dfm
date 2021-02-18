object Form1: TForm1
  Left = 572
  Top = 193
  Width = 1305
  Height = 675
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 128
    Top = 24
    Width = 100
    Height = 13
    Caption = 'Nb clients connect'#233's'
  end
  object Label2: TLabel
    Left = 40
    Top = 104
    Width = 25
    Height = 13
    Caption = 'client'
  end
  object Label3: TLabel
    Left = 120
    Top = 104
    Width = 81
    Height = 13
    Caption = 'Requetes re'#231'ues'
  end
  object Label4: TLabel
    Left = 384
    Top = 104
    Width = 97
    Height = 13
    Caption = 'R'#233'ponses envoy'#233'es'
  end
  object Edit1: TEdit
    Left = 232
    Top = 24
    Width = 121
    Height = 21
    TabOrder = 0
    Text = '0'
  end
  object Edit2: TEdit
    Left = 32
    Top = 120
    Width = 81
    Height = 497
    TabOrder = 1
  end
  object Edit3: TEdit
    Left = 120
    Top = 120
    Width = 257
    Height = 497
    TabOrder = 2
  end
  object Edit4: TEdit
    Left = 384
    Top = 120
    Width = 345
    Height = 497
    TabOrder = 3
  end
  object Button1: TButton
    Left = 496
    Top = 48
    Width = 75
    Height = 25
    Caption = 'Button1'
    TabOrder = 4
    OnClick = Button1Click
  end
  object ServerSocket1: TServerSocket
    Active = True
    Port = 2000
    ServerType = stNonBlocking
    OnClientConnect = ServerSocket1ClientConnect
    OnClientDisconnect = ServerSocket1ClientDisconnect
    Left = 392
    Top = 16
  end
end
