#ifndef _TOKEN_ATTR_H_
#define _TOKEN_ATTR_H_

#include <map> 
#include <memory>
#include <string>
#include <utility>

namespace TinyCompiler{
	//词素属性
	enum class TokenAttr{
		KEYWORD,	//关键字
		STRING,		//字符串
		INTEGER,	//整数
		REAL,		//浮点数
		DELIMITER,	//分隔符
		VARIABLE,	//变量

		UNKNOWN		//未知
	};

	class TokenAttrDictInstance{
	private:
		typedef std::map<TokenAttr, std::string> TokenAttrDict;

		static std::shared_ptr<TokenAttrDict> pInstance;

		//TokenAttrDictInstance();
	public:
		static std::shared_ptr<TokenAttrDict> getInstance();
	};
}

#endif