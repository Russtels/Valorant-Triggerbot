get_cfg PROTO
get_screenshot PROTO :DWORD, :DWORD, :DWORD 
find_color PROTO :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD
left_click PROTO
PrintConsole PROTO :DWORD
is_key_pressed PROTO :DWORD
get_next_reaction_time PROTO ; Prototipo para Reaction_time
get_next_after_tap_time PROTO ; Prototipo para after_first_tap_time

; Ya no necesitamos EXTERN para los arrays y sus índices aquí,
; ya que están definidos y usados solo dentro de helper.asm
; y sus funciones.

CONFIG struct
    hold_key            dd ?
    scan_area           dd ?
    color_sens          dd ?
    red                 dd ?
    green               dd ?
    blue                dd ?
CONFIG ends