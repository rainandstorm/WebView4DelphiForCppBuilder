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

上传的几个压缩.zip文件,已经包含了编译成功之后.修复之后所有需要的组件库,将其,这是windows 64位版本的,

将其复制到 

C:\Users\Public\Documents\Embarcadero\Studio\23.0

目录中. 然后在c++ builder中 导入安装对应的bpl库 即可 使用.  

导入库之后, 在打开演示代码项目. 便可以使用.

此组件唯一的问题

在 navigate函数, 必须webview 环境完全初始化之后

才正常使用,启动之后,估计要等待 10秒钟, 如果没有等待,直接navigate,得到的一片空白,没有任何网页显示.

初始化时,尽量使用 WVBrowser1->DefaultURL ="https://www.google.com/";  来进行初始导航, 可以正常显示

