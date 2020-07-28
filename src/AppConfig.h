#ifndef APPCONFIG_H
#define APPCONFIG_H

#include <stdint.h>

#include <QFile>
#include <QString>
#include <QTranslator>

class MainWindow;

class AppConfig
{
public:
    AppConfig();

    static int VERSION;
    static QString VERSION_NAME;

    /// ����ȫ�ֱ���
    static QString AppDataPath_Main; //����������Ŀ¼
    static QString AppDataPath_Data; //�������ݵ�dataĿ¼
    static QString AppDataPath_Tmp; //��ʱĿ¼(�����˳�ʱ����մ�Ŀ¼)
    static QString AppDataPath_TmpFile; //��������ʱ �������ļ����˳�ʱɾ�����ļ��������жϳ����Ƿ������˳�
    static QString AppFilePath_Log; //��־Ŀ¼
    static QString AppFilePath_Video; //��Ƶ�ļ�����Ŀ¼
    static QString AppFilePath_LogFile; //��־�ļ�
    static QString AppFilePath_EtcFile; //������Ϣ

    static MainWindow *gMainWindow;
    static QRect gMainWindowRect; //�����ڵ�λ�� - ���ڱ���ڷ�ȫ��ģʽ�µĵ�����С
    static QRect gScreenRect;

    static void MakeDir(QString dirName);
    static void InitAllDataPath(); //��ʼ���������ݱ����·��

    static QString bufferToString(QByteArray sendbuf);
    static QByteArray StringToBuffer(QString);
    static QString getFileMd5(QString filePath,qint64 size=-1);

    static QString getMACAdress(); //��ȡmac��ַ ���������count
    static QString getIpAdress();

    ///д��־
//    static QFile gLogFile;
    static void WriteLog(QString str);
    static void InitLogFile();
    static QString getSizeInfo(qint64 size);

    static QImage ImagetoGray( QImage image); //���ɻҶ�ͼ

    static void mSleep(int mSecond);

    static int64_t getTimeStamp_MilliSecond(); //��ȡʱ��������룩

    ///ɾ��Ŀ¼
    static bool removeDirectory(QString dirName);

    ///�������
    static bool restartSelf();

};

#endif // APPCONFIG_H
