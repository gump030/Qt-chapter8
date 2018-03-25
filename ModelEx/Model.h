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

	virtual int rowCount(const QModelIndex &parent = QModelIndex()) const;		//QAbstractTableModel类的纯虚函数
	virtual int columnCount(const QModelIndex &parent = QModelIndex()) const;	

	QVariant data(const QModelIndex &index, int role) const;
	QVariant headerData(int section, Qt::Orientation orientation, int role) const;

signals:

	public slots :
private:
	QVector<short> army;				//动态数组的模板类，容器类的一种
	QVector<short> weaponType;

	QMap<short, QString> armyMap;		//用QMap数据结构保存“数值-文字”的映射
	QMap<short, QString> weaponTypeMap;	//

	QStringList  weapon;
	QStringList  header;

	void populateModel();				//表格数据初始化
};