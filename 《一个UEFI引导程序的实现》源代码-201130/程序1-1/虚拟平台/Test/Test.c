/***************************************************
*		��Ȩ����
*
*	������ϵͳ��Ϊ��MINE
*	�ò���ϵͳδ����Ȩ������ӯ�����ӯ��ΪĿ�Ľ��п�����
*	ֻ�������ѧϰ�Լ���������ʹ��
*
*	������������Ȩ������Ȩ���������У�
*
*	��ģ�����ߣ�	����
*	EMail:		345538255@qq.com
*
*
***************************************************/

#include <Uefi.h>

EFI_STATUS EFIAPI UefiMain(IN EFI_HANDLE ImageHandle,IN EFI_SYSTEM_TABLE *SystemTable)
{
	SystemTable->ConOut->OutputString(SystemTable->ConOut,L"Hello World\n");
	return EFI_SUCCESS;
}

