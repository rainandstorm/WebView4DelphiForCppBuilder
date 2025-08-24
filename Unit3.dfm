object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 635
  ClientWidth = 978
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnCreate = FormCreate
  OnShow = FormShow
  TextHeight = 15
  object WVWindowParent1: TWVWindowParent
    Left = 0
    Top = 0
    Width = 978
    Height = 635
    Align = alClient
    TabOrder = 0
    Browser = WVBrowser1
    ExplicitLeft = 24
    ExplicitTop = 24
    ExplicitWidth = 409
    ExplicitHeight = 289
  end
  object WVBrowser1: TWVBrowser
    DefaultURL = 'about:blank'
    TargetCompatibleBrowserVersion = '139.0.3405.78'
    AllowSingleSignOnUsingOSPrimaryAccount = False
    OnAfterCreated = WVBrowser1AfterCreated
    OnWebMessageReceived = WVBrowser1WebMessageReceived
    Left = 264
    Top = 192
  end
end
