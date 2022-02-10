object Form1: TForm1
  Left = 253
  Top = 167
  Width = 1044
  Height = 540
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 144
    Top = 48
    Width = 7
    Height = 13
    Caption = 'A'
  end
  object Label2: TLabel
    Left = 504
    Top = 48
    Width = 7
    Height = 13
    Caption = 'B'
  end
  object Label3: TLabel
    Left = 136
    Top = 136
    Width = 8
    Height = 13
    Caption = 'H'
  end
  object Label4: TLabel
    Left = 504
    Top = 128
    Width = 8
    Height = 13
    Caption = 'N'
  end
  object Edit1: TEdit
    Left = 200
    Top = 48
    Width = 121
    Height = 21
    TabOrder = 0
    Text = 'Edit1'
  end
  object Edit2: TEdit
    Left = 552
    Top = 48
    Width = 121
    Height = 21
    TabOrder = 1
    Text = 'Edit2'
  end
  object Edit3: TEdit
    Left = 200
    Top = 136
    Width = 121
    Height = 21
    TabOrder = 2
    Text = 'Edit3'
  end
  object Edit4: TEdit
    Left = 552
    Top = 128
    Width = 121
    Height = 21
    TabOrder = 3
    Text = 'Edit4'
  end
  object Memo1: TMemo
    Left = 152
    Top = 200
    Width = 857
    Height = 281
    Lines.Strings = (
      'Memo1')
    ScrollBars = ssBoth
    TabOrder = 4
  end
  object Button1: TButton
    Left = 16
    Top = 336
    Width = 129
    Height = 89
    Caption = 'START'
    TabOrder = 5
    OnClick = Button1Click
  end
end
