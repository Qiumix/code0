# html

### 3.2

#### 放在head标签中的标签
- title
- - 网页标题
- meta
- - 给搜索引擎爬虫用的
```html
<html>
  <head>
    <!--name 属性-->

    <!--网页关键字-->
    <meta name="keywords" content="编程学习，网页开发(常用)"/>
    <!--网页描述-->
    <meta name="description" content="这是一个用于学习html网页开发的网站(常用)"/>
    <!--本页作者-->
    <meta name="author" content="Qiumix"/>
    <!--版权声明-->
    <meta name="copyright" content="版权所有，禁止转载">

    <!--http-equiv属性-->

    <meta http-equiv="Content-Type" content="text/html; charset=tuf-8"/>
    <meta charset="utf-8"/><!--等同上面的代码，一般每个页面都要加以防乱码出现-->
    <!--定义网站自动刷新跳转-->
    <meta http-equiv="refresh" content="6;url=http://www.example.com"/>
  </head>
  <body>
    <p>编码：utf-8</p><br>
    <p>六秒后跳转</p>
  </body>
</html>
```
- style
- - 用于定义css样式
```html
<html>
  <head>
    <style type="text/css">
      /* 这里写css样式 */
    </style>
  </head>
</html>
```
- script
- - 用于定义页面的JS代码
```html
<html>
  <head>
    <script>
      /* 这里写js代码 */
    </script>
  </head>
</html>
```
- link
- - 用于引入外部样式文件(css)
- base
- - 没啥意义，忽略
#### body标签
