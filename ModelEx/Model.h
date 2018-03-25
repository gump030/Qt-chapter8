#pragma once
#pragma execution_character_set("utf-8") 

#include <QAbstractTableModel>
#include <QVector>
#include <QMap>
#include <QStringList>

class ModelEx : public QAbstractTableModel
{
	Q_OBJECT
public:
	explicit ModelEx(QObject *parent = 0);

	virtual int rowCount(const QModelIndex &parent = QModelIndex()) const;		//QAbstractTableModel��Ĵ��麯��
	virtual int columnCount(const QModelIndex &parent = QModelIndex()) const;	

	QVariant data(const QModelIndex &index, int role) const;
	QVariant headerData(int section, Qt::Orientation orientation, int role) const;

signals:

	public slots :
private:
	QVector<short> army;				//��̬�����ģ���࣬�������һ��
	QVector<short> weaponType;

	QMap<short, QString> armyMap;		//��QMap���ݽṹ���桰��ֵ-���֡���ӳ��
	QMap<short, QString> weaponTypeMap;	//

	QStringList  weapon;
	QStringList  header;

	void populateModel();				//������ݳ�ʼ��
};