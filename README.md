# 列奥那多的acm模板

## 预览

### 目录

### 样式

## 下载


## 编译

###  环境配置

#### latex

本项目使用了[elegantbook-magic-revision](https://github.com/Azure1210/elegantbook-magic-revision)模板，请根据该模板的配置环境来配置: `Win11 22H2` + `TeXLive2022` + `XeLaTeX`, 不支持`pdflatex`。  
使用2021版的texlive编译会少了目录以及章节封面图片，升级到2022版本之后就没事了。  

本仓库下的`gorgeousnbook.cls`latex模板文件相对模板文件做了以下修改:
1. 对lstlisting定义c++的格外style, 在使用时请注明`style=cpp`

### 注意事项
1. 如果编译之后pdf出错，请确保图片文件夹下不能有二级图片目录
2. 图片的分辨率:
   1. part封面图片大小设1240x1754来全页覆盖(为了使目录清晰，最好`不透明度`设为30%-35%)
   2. cover图片大小最好为 1000x500

### 文档变量

在`main.tex`中定义了`\ifshowLink`变量来控制pdf是否含有题目链接，通过在主页设置变量`\showLinktrue` 和 `\showLinkfalse`来定义是否显示