/*
	FTP plugins include
*/
#if defined	_FTP_INCLUDED_
	#endinput
#endif
#define	_FTP_INCLUDED_

#define	FTP_READ	1
#define	FTP_WRITE	0

native Ftp_Connect(server[],username[],password[]);
native Ftp_CreateDirectory(directory[]);
native Ftp_DeleteFile(file[]);
native Ftp_GetFile(remote_file[],local_file[],bool:owerwrite);
native Ftp_PutFile(remote_file[],local_file[]);
native Ftp_RemoveDirectory(directory[]);
native Ftp_RenameFile(file_name[],new_file_name[]);
native Ftp_Close(/*No parameters*/);
native Ftp_OpenFile(file[],access);
native Ftp_ReadFile(handle,buff[],size=sizeof(buff));
native Ftp_WriteFile(handle,string[],size=sizeof(string));
native Ftp_CloseFile(handle);

/*
	native Ftp_FileExists(file[]);
*/
stock	bool:	Ftp_FileExists	( file [ ] )
{
	new
		_file = Ftp_OpenFile ( file, FTP_READ );
		
	if ( !_file )
	{
		return false;
	}
	Ftp_CloseFile ( _file );
	return true;
}

//	Forwards
forward	OnFtpFileReceived	( remotefile [ ], localfile [ ] );
forward	OnFtpFileSent		( remotefile [ ], localfile [ ] );