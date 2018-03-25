#include "Model.h"

ModelEx::ModelEx(QObject *parent) :
	QAbstractTableModel(parent)
{
	armyMap[1] = tr("空军");
	armyMap[2] = tr("海军");
	armyMap[3] = tr("陆军");
	armyMap[4] = tr("海军陆战队");

	weaponTypeMap[1] = tr("轰炸机");
	weaponTypeMap[2] = tr("战斗机");
	weaponTypeMap[3] = tr("航空母舰");
	weaponTypeMap[4] = tr("驱逐舰");
	weaponTypeMap[5] = tr("直升机");
	weaponTypeMap[6] = tr("坦克");
	weaponTypeMap[7] = tr("两栖攻击舰");
	weaponTypeMap[8] = tr("两栖战车");
	populateModel();
}

void ModelEx::populateModel()
{
	header.append(tr("军种"));
	header.append(tr("种类"));
	header.append(tr("武器"));
	army << 1 << 2 << 3 << 4 << 2 << 4 << 3 << 1;
	weaponType << 1 << 3 << 5 << 7 << 4 << 8 << 6 << 2;
	weapon.append(tr("B-2"));
	weapon.append(tr("尼米兹级"));
	weapon.append(tr("阿帕奇"));
	weapon.append(tr("黄蜂"));
	weapon.append(tr("阿利伯克"));
	weapon.append(tr("AAAV"));
	weapon.append(tr("M1A1"));
	weapon.append(tr("F-22"));
}

int ModelEx::columnCount(const QModelIndex &parent) const
{
	return 3;
}

int ModelEx::rowCount(const QModelIndex &parent) const
{
	return army.size();
}

QVariant ModelEx::data(const QModelIndex &index, int role) const
{
	if (!index.isValid())
		return QVariant();

	if (role == Qt::DisplayRole)
	{
		switch (index.column())
		{
		case 0:
			return armyMap[army[index.row()]];
			break;
		case 1:
			return weaponTypeMap[weaponType[index.row()]];
			break;
		case 2:
			return weapon[index.row()];
		default:
			return QVariant();
		}
	}
	return QVariant();
}

QVariant ModelEx::headerData(int section, Qt::Orientation orientation, int role) const
{
	if (role == Qt::DisplayRole&&orientation == Qt::Horizontal)
		return header[section];
	return QAbstractTableModel::headerData(section, orientation, role);
}
