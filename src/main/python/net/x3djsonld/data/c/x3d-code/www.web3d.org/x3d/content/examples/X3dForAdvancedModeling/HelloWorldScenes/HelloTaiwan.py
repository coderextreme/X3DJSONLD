###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='HelloTaiwan.x3d',name='title'),
    meta(content='Hello World: Hello Taiwan in Traditional Chinese, æ‚¨å¥½ï¼Œè‡ºç?£!!',name='description'),
    meta(content='Ben Cheng and Don Brutzman',name='creator'),
    meta(content='7 June 2013',name='created'),
    meta(content='15 March 2020',name='modified'),
    meta(content='HelloWorld.x3d',name='reference'),
    meta(content='Hello World Example',name='subject'),
    meta(content='https://www.web3d.org/realtime-3d/news/internationalization-x3d',name='reference'),
    meta(content='http://en.wikipedia.org/wiki/Traditional_Chinese_characters',name='reference'),
    meta(content='images/HelloTaiwan.png',name='Image'),
    meta(content='images/HelloTaiwanBsContact.png',name='Image'),
    meta(content='images/HelloTaiwanH3Dviewer.png',name='Image'),
    meta(content='images/HelloTaiwanInstantReality.png',name='Image'),
    meta(content='images/HelloTaiwanView3dscene.png',name='Image'),
    meta(content='images/HelloTaiwanX3DOM.png',name='Image'),
    meta(content='images/HelloTaiwanXj3D.png',name='Image'),
    meta(content='http://en.wikipedia.org/wiki/Taiwan',name='reference'),
    meta(content='http://zh.wikipedia.org/wiki/%E4%B8%AD%E8%8F%AF%E6%B0%91%E5%9C%8B',name='reference'),
    meta(content='Flag_of_the_Republic_of_China.svg',name='Image'),
    meta(content='Flag_of_the_Republic_of_China.png',name='Image'),
    meta(content='http://en.wikipedia.org/wiki/File:Flag_of_the_Republic_of_China.svg',name='reference'),
    meta(content='http://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloTaiwan.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Hello Taiwan!! æ‚¨å¥½ï¼Œè‡ºç?£!!'),
    Viewpoint(description='Hello Taiwan!! æ‚¨å¥½ï¼Œè‡ºç?£!!',position=(0,1,6)),
    #  character entities: "&#24744;&#22909;&#65292;&#33274;&#28771; 
    Transform(translation=(2,1,0),
      children=[
      Shape(
        geometry=Text(string=["æ‚¨","å¥½","è‡º","ç?£","æ‚¨å¥½ï¼Œè‡ºç?£"],
          #  "&#24744;" "&#22909;" "&#33274;" "&#28771;" 
          fontStyle=FontStyle(horizontal=False,justify=["MIDDLE","MIDDLE"],style_='BOLDITALIC')),
        appearance=Appearance(DEF='TextAppearance',
          material=Material(diffuseColor=(1,1,1))))]),
    Transform(translation=(-0.5,-1.25,0),
      children=[
      Shape(
        geometry=Text(string=["Hello Taiwan !!"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],style_='BOLDITALIC')),
        appearance=Appearance(USE='TextAppearance')),
      Transform(translation=(-0.4,2.6,0),
        children=[
        Anchor(description='Taiwan Wikipedia page',url=["http://en.wikipedia.org/wiki/Taiwan"],
          children=[
          Shape(
            geometry=Box(size=(4.5,3,.0001)),
            appearance=Appearance(
              texture=ImageTexture(url=["Flag_of_the_Republic_of_China.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorld/Flag_of_the_Republic_of_China.png"])))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HelloTaiwan.py")
