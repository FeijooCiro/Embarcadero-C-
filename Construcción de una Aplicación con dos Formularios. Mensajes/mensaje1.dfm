object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 142
  ClientWidth = 364
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 32
    Top = 24
    Width = 47
    Height = 15
    Caption = 'Nombre:'
  end
  object Label2: TLabel
    Left = 32
    Top = 67
    Width = 47
    Height = 15
    Caption = 'Apellido:'
  end
  object Label3: TLabel
    Left = 32
    Top = 112
    Width = 32
    Height = 15
    Caption = 'Clave:'
  end
  object EditNombre: TEdit
    Left = 104
    Top = 21
    Width = 121
    Height = 23
    TabOrder = 0
    Text = 'EditNombre'
  end
  object EditApellidos: TEdit
    Left = 104
    Top = 64
    Width = 121
    Height = 23
    TabOrder = 1
    Text = 'EditApellidos'
  end
  object EditClave: TEdit
    Left = 104
    Top = 111
    Width = 121
    Height = 23
    TabOrder = 2
    Text = 'EditClave'
  end
  object Button1: TButton
    Left = 256
    Top = 40
    Width = 75
    Height = 25
    Caption = 'Ok'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 256
    Top = 88
    Width = 75
    Height = 25
    Caption = 'Cancel'
    TabOrder = 4
  end
end
