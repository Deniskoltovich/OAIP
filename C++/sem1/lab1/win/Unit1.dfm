object Form1: TForm1
  Left = 455
  Top = 140
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
    Left = 672
    Top = 72
    Width = 32
    Height = 13
    Caption = 'FOR Z'
  end
  object Label2: TLabel
    Left = 184
    Top = 72
    Width = 32
    Height = 13
    Caption = 'FOR X'
  end
  object Label3: TLabel
    Left = 440
    Top = 72
    Width = 32
    Height = 13
    Caption = 'FOR Y'
  end
  object Edit1: TEdit
    Left = 248
    Top = 72
    Width = 121
    Height = 21
    TabOrder = 0
    Text = 'Edit1'
  end
  object Edit2: TEdit
    Left = 504
    Top = 72
    Width = 121
    Height = 21
    TabOrder = 1
    Text = 'Edit2'
  end
  object Edit3: TEdit
    Left = 736
    Top = 72
    Width = 121
    Height = 21
    TabOrder = 2
    Text = 'Edit3'
  end
  object Memo1: TMemo
    Left = 208
    Top = 168
    Width = 633
    Height = 241
    Lines.Strings = (
      'Memo1')
    TabOrder = 3
  end
  object Button1: TButton
    Left = 408
    Top = 432
    Width = 233
    Height = 49
    Caption = 'START'
    TabOrder = 4
    OnClick = Button1Click
  end
end
