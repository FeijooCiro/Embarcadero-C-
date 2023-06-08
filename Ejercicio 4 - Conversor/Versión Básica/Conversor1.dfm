object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 168
  ClientWidth = 483
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 168
    Top = 8
    Width = 158
    Height = 30
    Caption = 'Conversor a Euro'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 16
    Top = 64
    Width = 32
    Height = 15
    Caption = 'Euros:'
  end
  object Label3: TLabel
    Left = 344
    Top = 64
    Width = 42
    Height = 15
    Caption = 'D'#243'lares:'
  end
  object Edit1: TEdit
    Left = 344
    Top = 99
    Width = 121
    Height = 23
    TabOrder = 0
    Text = '0'
  end
  object Edit2: TEdit
    Left = 16
    Top = 99
    Width = 121
    Height = 23
    TabOrder = 1
    Text = '0'
  end
  object Button1: TButton
    Left = 184
    Top = 82
    Width = 118
    Height = 25
    Caption = 'Convertir a D'#243'lares ->'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 184
    Top = 113
    Width = 118
    Height = 25
    Caption = '<- Convertir a Euros'
    TabOrder = 3
    OnClick = Button1Click
  end
end
