from x3d import *
print(
X3D(
  profile="Immersive", version="3.3", head=head(  children=[
      
          meta(name="title", content="browser.x3d"),
          meta(name="creator", content="John Carlson"),
          meta(name="generator", content="manual"),
          meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/browser.x3d"),
          meta(name="description", content="a script test with embedded 
 between single quotes, a double backslash \\ a backslash \ and a closing quote \""),
          meta(name="translated", content="16 January 2022"),
          meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
          meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")]), Scene=Scene(
    children=[
        Script(
          DEF="Browser", #['', 'ecmascript:', '                function initialize() {', '\t\t    Browser.print(\'DUDES\n\'+\'"DUDETTES\');', '                }', '', '']
    
    ),
        Script(
          DEF="Clouds", #['', '', 'ecmascript:', '', '', 'function cumulustranslation() // These values designate the boundary location of the cloud', '{', "var xxx = ' '+' '+", "'\tTransform\t\t\n'+", "'    ' + '               \t\n';", '', '}', '', '']
    
    )]))
.XML())
