VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   3195
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   4680
   LinkTopic       =   "Form1"
   ScaleHeight     =   3195
   ScaleWidth      =   4680
   StartUpPosition =   3  'Windows-Standard
   Begin VB.Timer Timer1 
      Interval        =   1000
      Left            =   720
      Top             =   1680
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Dim joyState As JOYSTICK_POSITION_V2
Dim counter As Long

Private Sub Form_Load()
  Debug.Print vJoyEnabled, GetvJoyVersion, GetvJoyProductString
  Debug.Print GetVJDStatus(1)
  Debug.Print AcquireVJD(1)
  Debug.Print ResetVJD(1)
  Debug.Print GetVJDStatus(1)
  
  joyState.bDevice = 1
  counter = 0
  
  Me.Show
'  Do
'    Timer1.Enabled = False
'    DoEvents
'    Timer1_Timer
'  Loop
  
End Sub

Private Sub Form_Unload(Cancel As Integer)
  ResetVJD 1
  RelinquishVJD 1
End Sub

Private Sub Timer1_Timer()
  Timer1.Interval = 10
joyState.lButtons = Second(Now)
joyState.lButtonsEx1 = Not Second(Now)
joyState.lButtonsEx3 = counter
joyState.wAxisX = (counter Mod 1024) * 32 '&H7FFF&
joyState.wAxisY = &H6FFF&
joyState.wAxisZ = &H5FFF&
joyState.wAxisXRot = &H4FFF&
joyState.wAxisYRot = &H3FFF&
joyState.wAxisZRot = &H2FFF&
joyState.wSlider = &H1FFF&
joyState.wDial = &HFFF&
joyState.bHats = &H4444&

  UpdateVJD 1, joyState
  If counter = &H7FFFFFFF Then
    counter = &H8000000
  Else
    counter = counter + 1
  End If
  
End Sub

