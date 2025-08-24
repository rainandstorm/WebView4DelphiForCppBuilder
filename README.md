# WebView4DelphiForCppBuilder
c++ builder环境中使用WebView4Delphi组件
感谢:https://github.com/salvadordf/WebView4Delphi 
提供的组件
编译组件之后,生成的hpp文件,有一个文件,出现了问题,进行了修复
修复之后的文件

uWVConstants.hpp
此文件出现错误提示,编译转换过程中,出现了不符合c++规范的转换,造成问题
修复的时候,可以把uWVConstants.pas代码交给 chatgpt ai模型 或者 grok3 或者 grok4 ai模型,让其转换为对应的c++ builder的代码,
与delphi的编译转换,对比之后,可以找到问题所在.

