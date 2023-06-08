object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 200
  ClientWidth = 237
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 59
    Top = 8
    Width = 126
    Height = 21
    Caption = #193'rea del Tri'#225'ngulo'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 24
    Top = 56
    Width = 27
    Height = 15
    Caption = 'Base:'
  end
  object Label3: TLabel
    Left = 24
    Top = 96
    Width = 35
    Height = 15
    Caption = 'Altura:'
  end
  object Label4: TLabel
    Left = 24
    Top = 168
    Width = 27
    Height = 15
    Caption = #193'rea:'
  end
  object Edit1: TEdit
    Left = 88
    Top = 53
    Width = 121
    Height = 23
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 88
    Top = 93
    Width = 121
    Height = 23
    TabOrder = 1
  end
  object Edit3: TEdit
    Left = 88
    Top = 165
    Width = 121
    Height = 23
    TabOrder = 2
  end
  object Button1: TButton
    Left = 88
    Top = 128
    Width = 75
    Height = 25
    Caption = 'Calcular'
    TabOrder = 3
    OnClick = Button1Click
  end
end
