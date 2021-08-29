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
    meta(content='Rockan.x3d',name='title'),
    meta(content='The wedge-shaped Swedish Rockan GMI-100 mines are anti-ship weapons with acoustic and magnetic activation. These are reduced signature mines that are believed to be difficult to detect.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='NIST Vrml2X3d, beta version, http://ovrt.nist.gov/v2_x3d.html',name='translator'),
    meta(content='2 November 1999',name='created'),
    meta(content='16 January 2014',name='modified'),
    meta(content='RockanHoistDeploy.jpg',name='photo'),
    meta(content='RockanMineTarget.wrl',name='reference'),
    meta(content='MantaInert.jpg',name='photo'),
    meta(content='http://www.exwar.org/whatsnew/mwp/appendix_a.htm',name='reference'),
    meta(content='http://www.nap.edu/html/tech_21st/uw2.htm',name='reference'),
    meta(content='Rockan mine',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Weapons/UnderwaterMines/Rockan.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["Created 2 NOV 99","Author Don Brutzman","Originally Published by Cosmo Worlds V2.0"],title='Rockan Mine'),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    Viewpoint(DEF='Rockan-Mine',description='Rockan Mine',orientation=(-0.895453,0.432576,0.105077,0.52979),position=(1.0,5.0,10.0)),
    Anchor(description='Rockan Mine',parameter=["target=_blank"],url=["RockanHoistDeploy.jpg","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/RockanHoistDeploy.jpg"],
      children=[
      Transform(
        children=[
        Transform(scale=(0.5,0.25,0.5),translation=(-0.474251,1.0,1.0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=0.0,diffuseColor=(0.35,0.8,0.32),shininess=0.12,specularColor=(0.4,0.8,0.43))),
            geometry=IndexedFaceSet(DEF='_0',coordIndex=[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1],creaseAngle=2.5,texCoordIndex=[0,1,3,2,-1,4,5,7,6,-1,8,9,11,10,-1,12,13,15,14,-1,16,17,19,18,-1,20,21,23,22,-1],
              texCoord=TextureCoordinate(point=[(0.0,1.0),(0.0,0.0),(1.0,1.0),(1.0,0.0),(0.0,1.0),(0.0,0.0),(1.0,1.0),(1.0,0.0),(0.0,1.0),(0.0,0.0),(1.0,1.0),(1.0,0.0),(0.0,1.0),(0.0,0.0),(1.0,1.0),(1.0,0.0),(0.0,1.0),(0.0,0.0),(1.0,1.0),(1.0,0.0),(0.0,1.0),(0.0,0.0),(1.0,1.0),(1.0,0.0)]),
              coord=Coordinate(point=[(-1.8764,-0.412774,0.936242),(-1.0,-1.0,1.0),(1.0,1.0,1.0),(1.0,-1.0,1.0),(1.0,1.0,-1.0),(1.0,-1.0,-1.0),(-1.8764,-0.412774,-1.06376),(-1.0,-1.0,-1.0)])))]),
        LOD(range=[20.0],
          children=[
          Transform(DEF='Rockan_Text_Billboard',translation=(-0.596596,1.81641,1.0),
            children=[
            Billboard(axisOfRotation=(0.0,0.0,0.0),
              children=[
              Transform(translation=(-1.0,0.0,0.0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(ambientIntensity=0.28,diffuseColor=(0.0,0.25,0.24),emissiveColor=(0.27,0.27,0.27),shininess=0.06,specularColor=(0.18,0.25,0.23))),
                  geometry=Text(string=["Rockan Mine"],
                    fontStyle=FontStyle(size=0.5)))])])]),
          WorldInfo(info=["null node"])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Rockan.py")
