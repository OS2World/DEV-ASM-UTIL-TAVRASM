//////////////////////////////////////////////////////////////////////////////
//
//  File        : msg_ru.hh
//
//  Author      : Sergey V. Khudyakov - Copyright (C) 2002-2004
//
//  Description : RU assembler messages
//
//  E-mail	: sergey@rzi.tusur.ru
//
//////////////////////////////////////////////////////// Tom did this ////////
//
// Copyright notice:
//
// tavrasm - A GNU/Linux assembler for the Atmel AVR series
// of microcontrollers. Copyright (C) 1999 Tom Mortensen
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
// 
// Tom Mortensen
//
// E-mail : tom@tavrasm.org
// WWW    : http://www.tavrasm.org
//
//////////////////////////////////////////////////////////////////////////////

#ifndef _MSG_RU_HH_
#define _MSG_RU_HH_

// Command line info /////////////////////////////////////////////////////////

#define HELPSTR                                                 \
"�ᯮ�짮�����: tavrasm [-vwclxmihjgbafd] <��室��_䠩�> \n"  \
"[-I <����砥��_���>]... [-o <��室���_䠩�>] [-r <���>] [-e <䠩�_���⨭��>]\n" \
"       -v �뢮���� ᮮ�饭��\n"                                \
"       -w �� �뢮���� �।�०�����\n"                        \
"       -c ���뢠�� ॣ���� ��⮪/��।������\n"               \
"       -l ��࠭���� ���-䠩� �ਭ�� 80 ᨬ�����\n"           \
"       -x ࠧ���� ������� ��⪨\n"                         \
"       -m �뢮� � �ଠ� Motorola S\n"                        \
"       -i �뢮� � �ଠ� Intel HEX (�� 㬮�砭��)\n"          \
"       -h �� �����뢠�� ���७�� ���� � 䠩�� Intel HEX \n"\
"       -j �뢮� � .obj �ଠ�\n"                              \
"       -g �뢮� � ��饬 hex-�ଠ�\n"                         \
"       -b �뢮� � ����筮� �ଠ�\n"                          \
"       -a ᢥ���� �⭮�⥫�� ���室�\n"                   \
"       -f ࠧ���� org ���।\n"                              \
"       -d ᯨ᮪ �����ন������ ���ன��\n"                           

// Message strings ///////////////////////////////////////////////////////////

#ifdef _UTILS_CC_

char messages[MESSAGE_COUNT][MESSAGES_LEN]=
{
  "��� �।�०�����",
  "�訡��� ᨬ��� \'%c\' � ��室��� 䠩��",
  "�訡��� ᨬ��� 0x%02X � ��室��� 䠩��",
  "��㬥�� @%i ��।����, �� �� �ᯮ������ � �����",
  "��㬥�� @%i �� ��।����, �� �ᯮ������ � �����",
  "\'%s\' 㦥 ��।���� ��� ��⪠ � ��ப� %i � \'%s\'",
  "\'%s\' 㦥 ��।���� � ��ப� %i � \'%s\'",
  "���� १���� �㭪樨 EXP2(%i) ��⠭����� � ����",
  "���� १���� �㭪樨 LOG2(%i) ��⠭����� � ����",
  "����� ��� '\%i\' ��室�� �� �࠭��� ��������� (0-7)",
  "���� 0x%X ��室�� �� �࠭��� ��������� (0x00-0x1F)",
  "���� 0x%X ��室�� �� �࠭��� ��������� (0x00-0x3F)",
  "��⮢�� ��᪠ 0x%X ��室�� �� �࠭��� ��������� (0x00-0xFF)",
  "����⠭� 0x%X ��室�� �� �࠭��� ��������� (0x00-0x3F)",
  "����⠭� 0x%X ��室�� �� �࠭��� ��������� (0x00-0xFF)",
  "����⠭� 0x%X ��室�� �� �࠭��� ��������� (0x00-0xFFFF)",
  "���� 0x%X ��室�� �� �࠭��� ��������� (0x0-0xFFFF)",
  "���饭�� \'%X\' ��室�� �� �࠭��� ��������� (0x00 - 0x3F)",
  "���� �����祭�� \'0x%X\' ��室�� �� �࠭��� ��������� (0x0-0x3FFFFF)",
  "���祭�� %i ��室�� �� �࠭��� ��������� � .db (-128 to 255)",
  "���祭�� %i ��室�� �� �࠭��� ��������� � .dw (-32768 to 65535)",
  "���祭�� %i ᤢ����� PC ���⭮ �� ��� (�� %i ᫮�)",
  "���祭�� %i ��४�뢠�� ����� � EEPROM (�� %i ����)",
  "���祭�� %i ��४�뢠�� ����� (�� %i ����)",
  "���祭�� %i ��४�뢠�� ॣ���� ��� ������� �����/�뢮�� (�� %i ����)",
  "�ॢ�襭 ��ꥬ SRAM �� %i ����",
  "���ᯮ��㥬� ��ࠬ��� @%i � ��।������ �����",
  "��४⨢� '.listmac' �� �����ন������ (�����஢���)",
  "��४⨢� '.list' �� �����ন������ (�����஢���)",
  "��४⨢� '.nolist' �� �����ন������ (�����஢���)",
  "\'%s\' �� �����ন������ �⨬ ���ன�⢮�",
  "�������⭮� ���ன�⢮ \'%s\'",
  "����⠭� ᫨誮� ������",
  "���誮� ������ �����䨪���",
  "�ॢ�襭 ��ꥬ EEPROM �� %i ����",
  "����୮� ���쬥�筮� ESC-���祭��",
  "����୮� ��⭠����筮� ESC-���祭��",
  "���쬥�筮� ESC-���祭�� ��室�� �� �࠭��� ���������",
  "����ୠ� ᨬ���쭠� ����⠭�",
  "�ॢ�襭 ��ꥬ ��� �� %i ᫮�",
  "���誮� ������� ��� �����",

  /// Error messages /////////////////////////////////////////////////////////

  "�� ��।����� �ᯮ��㥬�� ��६�����",
  "�� ��।����� ��६�����, �ᯮ��㥬�� � ����� ���",
  "�� ��।����� ��६�����, �ᯮ��㥬�� � ���� ����",
  "�� ��।����� ��६�����, �ᯮ��㥬�� � ��⢫����",
  "�� ��।����� ��६�����, �ᯮ��㥬�� � ��⮢�� ��᪥",
  "�� ��।����� �ᯮ��㥬�� ����⠭�",
  "�� ��।����� ��६�����, �ᯮ��㥬�� � ����",
  "�� ��।����� ��६�����, �ᯮ��㥬�� � ᬥ饭��",
  "�� ��।����� ��६�����, �ᯮ��㥬�� � �⭮�⥫쭮� �맮�� ����ணࠬ��",
  "�� ��।����� ��६�����, �ᯮ��㥬�� � �⭮�⥫쭮� ���室�",
  "�� ��।����� ��६�����, �ᯮ��㥬�� � ���室�/�맮�� ����ணࠬ��",
  "�� ��।����� ����⠭�, �ᯮ��㥬�� � .db",
  "�� ��।����� ����⠭�, �ᯮ��㥬�� � .dw",
  "�� ��।����� ��६�����, �ᯮ��㥬�� � ᬥ饭��",
  "�� ��।����� ����⠭�, �ᯮ��㥬�� � .byte",
  "������� �� ����",
  "������ ॣ���� (r16-r31)",
  "������ ॣ���� %s",
  "��⢫���� ��室�� �� �࠭��� ��������� �� %i ᫮� (�����)",
  "��⢫���� ��室�� �� �࠭��� ��������� �� %i ᫮� (���।)",
  "������ ॣ���� (r24/r26/r28/r30)",
  "������ ॣ����-���筨� r%i (X/Y/Z)",
  "������ ॣ����-�ਥ���� r%i (X/Y/Z)",
  "�맮� ����ணࠬ�� ��室�� �� �࠭��� ��������� �� %i ᫮� (�����)",
  "�맮� ����ணࠬ�� ��室�� �� �࠭��� ��������� �� %i ᫮� (���।)",
  "���室 ��室�� �� �࠭��� ��������� �� %i ᫮� (�����)",
  "���室 ��室�� �� �࠭��� ��������� �� %i ᫮� (���।)",
  "��⪠ \'%s\' 㦥 ��।����� � ��ப� %i � \'%s\'",
  "��⪠ \'%s\' 㦥 ��।����� � ��ப� %i � \'%s\'",
  "��६����� \'%s\' 㦥 ��।����� ��� ��⪠ � ��ப� %i � \'%s\'",
  ".dw � DSEG (ࠧ�襭� ⮫쪮 � CSEG � ESEG)",
  ".db � DSEG (ࠧ�襭� ⮫쪮 � CSEG � ESEG)",
  "����� \'%s\' 㦥 ��।���� (��� �㡫�������� ��⪠)",
  "��� �ணࠬ�� � DSEG (ࠧ�襭� ⮫쪮 � CSEG)",
  "��� �ணࠬ�� � ESEG (ࠧ�襭� ⮫쪮 � CSEG)",
  "���������� ������� 䠩� \'%s\' - �ॢ�襭� ��㡨�� ����祭��",
  "����୮� ��� ����砥���� 䠩��",
  "���������� ������ 䠩� \'%s\'",
  "���������� ������� ����� - �ॢ�襭� ��㡨�� ��������� ���⥪��",
  "���⨣��� ����� 䠩�� ����� ��।������ �����",
  "���誮� ������� ��� 䠩�� � ��ப� %i � \'%s\'",
  "����୮� ��� 䠩��",
  "������ ���� ॣ����",
  "����୮� ��।������ ॣ����",
  "������ ॣ���� ��� �����।�⢥���� ���祭��",
  "����ୠ� �����।�⢥���� ����⠭�",
  "���।������� ��㬥���",
  "��������� ��� ����樨",
  "�㦭� 㪠���� �����䨪��� = ॣ����",
  "�㦭� 㪠���� ���祭�� (,���祭�� ,...) ",
  "��㬥��� �� ������ ���� ��।�����",
  "�㦭� 㪠���� ���祭��/����",
  "�㦭� 㪠���� �����䨪��� = ��ࠦ����",
  "�㦭� 㪠���� ��� ���ன�⢠",
  "��।������ ��६����� � CSEG",
  "����ﭭ� �����",
  "����।������� ESC-��᫥����⥫쭮��� %s",
  "�� ��।����� ��� 䠩��",
  "����� �ᯮ������ �� ��� ��।������",
  "����।������� ESC-��᫥����⥫쭮��� \'\\%c\'",
  "����������� ��४⨢� .endmacro",
  "��।������ ����� ����� ����� �� ����᪠����",
  "�㦭� 㪠���� ॣ����, ᬥ饭��",
  "�㦭� 㪠���� ᬥ饭��, ॣ����",
  "�� ����� ���� ��।����� ᬥ饭�� ��� X (�ᯮ���� Y/Z)",
  "������ ॣ���� r%d (�㦭� 㪠���� r23-r31)",
  "����� �� ����� ���� ��।����� ᬥ饭��",
  "��।���� ������ ॣ����, ������ ���� 'Z'",
  "�।���६��� ����� �ᯮ�짮���� ����� (�ᯮ���� 'Z' ��� 'Z+')",
  "������ ॣ���� r%d (�㦭� 㪠���� r%d-r%d)",
  "������ ॣ���� r%d (�㦭� 㪠���� r0, r2, ...)",
  "�� ��।����� ����⠭�, �ᯮ��㥬�� � .align",
  "���祭�� � .align �� ࠢ�� �⥯��� �᫠ ���",

  /// Fatal errors ///////////////////////////////////////////////////////////

  "��� ����᪨� �訡��",
  "��墠⪠ �����",
  "���誮� ������� ��ப� � \'%s\'",
  "��ப� ����� ᫨誮� ������� � ��ப� %i � \'%s\'",
  "���������� ������ �室��� 䠩� \'%s\'",
  "���������� ������ ᯨ᮪ 䠩��� \'%s\'",
  "���������� ������ ��室��� 䠩� \'%s\'",
  "���������� ������ 䠩� ��� \'%s\'",
  "����祭� ᫨誮� ����� 䠩���",
  "�ॢ�襭 ��ꥬ ����� �ணࠬ�",
  "�ॢ�襭 ��ꥬ EEPROM",
  "�ॢ�襭� ���ᨬ��쭠� ��㡨�� ���������� ����ᮢ",

  /// Messages ///////////////////////////////////////////////////////////////

  "��� ᮮ�饭��",
  "���� ��� ����",
  "�� ���� ��࠭��� 䠩� ��� � �ଠ� .obj",
  "�� ��।����� ��� �室���� 䠩��",
  "�������⭠� ���� '%s'",
  "��।����� ����� ������ m/i/j/b/h",
  "�� ��।����� ��� 䠩�� ���",
  "��� 䠩�� ��� ᫨誮� �������",
  "����୮� ��� 䠩�� ���",
  "�� ��।���� ᯨ᮪ 䠩���",
  "���᮪ 䠩��� ᫨誮� ������",
  "������ ᯨ᮪ 䠩���",
  "�� ��।����� ��� ��室���� 䠩��",
  "��� ��室���� 䠩�� ᫨誮� �������",
  "����୮� ��� ��室���� 䠩��",
  "������ ��᪮�쪮 ��室��� 䠩���",
  "��� �室���� 䠩�� ᫨誮� �������",
  "����୮� ��� ��室���� 䠩��",
  "������ ��᪮�쪮 �室��� 䠩���",
  "�訡��               : %i",
  "�।�०�����       : %i",
  "���                  : %i",
  "���                  : %i",
  "�����               : %i",
  "���ᯮ�짮����� ��� : %i",
  "���ᯮ�짮������ ��� : %i",
  "��� �� ᣥ���஢��",
  "| ��� ���ன�⢠   | ��砫� ���| ��ꥬ Flash| ��ꥬ ���| ��ꥬ EEPROM|",
  "����砥�� ��� �� ������� ��᫥ 䫠�� '-I'",
  "��।����� ᫨誮� ����� ����砥��� ��⥩",
  "����砥�� ���� ᫨誮� ������"
};

#endif _UTILS_CC_

#endif _MESSAGES_HH_

/// END OF FILE //////////////////////////////////////////////////////////////