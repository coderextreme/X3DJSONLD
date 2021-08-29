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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='Figure24_7VirtualTV.x3d',name='title'),
    meta(content='Figure 24.7, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch24/24fig07.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='3 October 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A virtual television.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter24Sound/Figure24_7VirtualTV.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure24_7VirtualTV.x3d'),
    Viewpoint(description='Mandelbrot zoom video by San Diego Supercomputer Center',position=(0,0,8)),
    NavigationInfo(type=["WALK","EXAMINE","ANY"]),
    Group(
      children=[
      Shape(
        geometry=Box(size=(5,3.5,2)),
        appearance=Appearance(
          material=Material(diffuseColor=(0.3,0.3,0.3)))),
      Shape(
        appearance=Appearance(
          texture=ImageTexture(repeatS=False,repeatT=False,url=["tvcntrl.jpg","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter24Sound/tvcntrl.jpg"])),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3],
          coord=Coordinate(point=[(1.75,-1.5,1.01),(2.40,-1.5,1.01),(2.40,1.5,1.01),(1.75,1.5,1.01)]),
          texCoord=TextureCoordinate(DEF='SquareTexCoordMapping',point=[(0,0),(1,0),(1,1),(0,1)]))),
      Shape(
        appearance=Appearance(
          texture=MovieTexture(DEF='TV',description='Mandelbrot Zoom video',loop=True,repeatS=False,repeatT=False,url=["tv.mpg","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter24Sound/tv.mpg"])),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3],
          coord=Coordinate(point=[(-2.35,-1.5,1.01),(1.65,-1.5,1.01),(1.65,1.5,1.01),(-2.35,1.5,1.01)]),
          texCoord=TextureCoordinate(USE='SquareTexCoordMapping'))),
      Sound(maxBack=100,maxFront=100,minBack=30,minFront=30,
        source=MovieTexture(USE='TV')),
      TouchSensor(DEF='Touch',description='Touch TV to begin playing')]),
    ROUTE(fromField='touchTime',fromNode='Touch',toField='set_startTime',toNode='TV')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure24_7VirtualTV.py")
