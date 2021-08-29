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
    meta(content='CompassRoseExample.x3d',name='title'),
    meta(content='Example use of CompassRose prototype, a heads-up display (HUD) showing heading for current viewpoint direction.',name='description'),
    meta(content='Christian Greuel, Director of Art & Production, Planet 9 Studios, Inc.',name='creator'),
    meta(content='Xeena VRML importer, X3D-Edit 3.1, http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='translator'),
    meta(content='1 August 2006',name='created'),
    meta(content='14 October 2006',name='translated'),
    meta(content='27 February 2016',name='modified'),
    meta(content='Textures/CompassHeadings.png',name='Image'),
    meta(content='originals/CompassRoseExample.wrl',name='reference'),
    meta(content='compass rose heads-up display HUD',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CompassRoseExample.x3d',name='identifier'),
    meta(content='X3D-Edit, http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["Christian Greuel, Director of Art & Production"],title='Compass Rose Example'),
    ExternProtoDeclare(name='CompassRose',url=["CompassRosePrototype.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CompassRosePrototype.x3d","CompassRosePrototype.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CompassRosePrototype.wrl"],
      field=[
      field(accessType='initializeOnly',name='size',type='SFVec3f'),
      field(accessType='initializeOnly',name='locationOffset',type='SFVec3f')]),
    NavigationInfo(type=["WALK","ANY"]),
    Viewpoint(DEF='GroundCamera',description='Ground Camera',fieldOfView=0.6024,orientation=(1.0,0.0,0.0,0.0),position=(0.0,1.75,0.0)),
    PointLight(location=(0.0,10.0,0.0),radius=20.0),
    ProtoInstance(name='CompassRose',
      fieldValue=[
      fieldValue(name='size',value=(1.0,1.0,1.0)),
      fieldValue(name='locationOffset',value=(-0.075,-0.045,0.0))]),
    Transform(DEF='Ground',translation=(0.0,4.5E-5,0.0),
      children=[
      Transform(DEF='GridBlue',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.6039,0.7255,0.898))),
          geometry=IndexedFaceSet(coordIndex=[5,0,6,-1,1,6,0,-1,7,2,8,-1,3,8,2,-1,10,4,11,-1,5,11,4,-1,12,6,13,-1,7,13,6,-1,14,8,15,-1,9,15,8,-1,17,11,18,-1,12,18,11,-1,19,13,20,-1,14,20,13,-1,22,16,23,-1,17,23,16,-1,24,18,25,-1,19,25,18,-1,26,20,27,-1,21,27,20,-1,28,23,29,-1,24,29,23,-1,30,25,31,-1,26,31,25,-1],
            coord=Coordinate(point=[(-3.0,0.0,5.0),(-1.0,0.0,5.0),(1.0,0.0,5.0),(3.0,0.0,5.0),(-5.0,0.0,3.0),(-3.0,0.0,3.0),(-1.0,0.0,3.0),(1.0,0.0,3.0),(3.0,0.0,3.0),(5.0,0.0,3.0),(-5.0,0.0,1.0),(-3.0,0.0,1.0),(-1.0,0.0,1.0),(1.0,0.0,1.0),(3.0,0.0,1.0),(5.0,0.0,1.0),(-5.0,0.0,-1.0),(-3.0,0.0,-1.0),(-1.0,0.0,-1.0),(1.0,0.0,-1.0),(3.0,0.0,-1.0),(5.0,0.0,-1.0),(-5.0,0.0,-3.0),(-3.0,0.0,-3.0),(-1.0,0.0,-3.0),(1.0,0.0,-3.0),(3.0,0.0,-3.0),(5.0,0.0,-3.0),(-3.0,0.0,-5.0),(-1.0,0.0,-5.0),(1.0,0.0,-5.0),(3.0,0.0,-5.0)])))]),
      Transform(DEF='GridRed',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.8902,0.5961,0.5961))),
          geometry=IndexedFaceSet(coordIndex=[6,0,7,-1,1,7,0,-1,8,2,9,-1,3,9,2,-1,10,4,11,-1,5,11,4,-1,13,7,14,-1,8,14,7,-1,15,9,16,-1,10,16,9,-1,18,12,19,-1,13,19,12,-1,20,14,21,-1,15,21,14,-1,22,16,23,-1,17,23,16,-1,25,19,26,-1,20,26,19,-1,27,21,28,-1,22,28,21,-1,30,24,31,-1,25,31,24,-1,32,26,33,-1,27,33,26,-1,34,28,35,-1,29,35,28,-1],
            coord=Coordinate(point=[(-5.0,0.0,5.0),(-3.0,0.0,5.0),(-1.0,0.0,5.0),(1.0,0.0,5.0),(3.0,0.0,5.0),(5.0,0.0,5.0),(-5.0,0.0,3.0),(-3.0,0.0,3.0),(-1.0,0.0,3.0),(1.0,0.0,3.0),(3.0,0.0,3.0),(5.0,0.0,3.0),(-5.0,0.0,1.0),(-3.0,0.0,1.0),(-1.0,0.0,1.0),(1.0,0.0,1.0),(3.0,0.0,1.0),(5.0,0.0,1.0),(-5.0,0.0,-1.0),(-3.0,0.0,-1.0),(-1.0,0.0,-1.0),(1.0,0.0,-1.0),(3.0,0.0,-1.0),(5.0,0.0,-1.0),(-5.0,0.0,-3.0),(-3.0,0.0,-3.0),(-1.0,0.0,-3.0),(1.0,0.0,-3.0),(3.0,0.0,-3.0),(5.0,0.0,-3.0),(-5.0,0.0,-5.0),(-3.0,0.0,-5.0),(-1.0,0.0,-5.0),(1.0,0.0,-5.0),(3.0,0.0,-5.0),(5.0,0.0,-5.0)])))]),
      Collision(enabled=False,
        children=[
        Transform(DEF='HeadingE',rotation=(0.5774,-0.5774,0.5774,-4.189),translation=(6.0,1.0,0.0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1.0,diffuseColor=(0.588,0.588,0.588),shininess=0.145),
              texture=ImageTexture(url=["Textures/HeadingE.png","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/Textures/HeadingE.png"])),
            geometry=IndexedFaceSet(coordIndex=[2,0,3,-1,1,3,0,-1],texCoordIndex=[6,4,7,-1,5,7,4,-1],
              coord=Coordinate(point=[(-0.5,0.0,0.5),(0.5,0.0,0.5),(-0.5,0.0,-0.5),(0.5,0.0,-0.5)]),
              texCoord=TextureCoordinate(point=[(0.0,0.0),(1.0,0.0),(0.0,0.0),(1.0,0.0),(0.0,0.0),(1.0,0.0),(0.0,1.0),(1.0,1.0)])))]),
        Transform(DEF='HeadingN',rotation=(-1.0,0.0,0.0,-1.571),translation=(0.0,1.0,-6.0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1.0,diffuseColor=(0.588,0.588,0.588),shininess=0.145),
              texture=ImageTexture(url=["Textures/HeadingN.png","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/Textures/HeadingN.png"])),
            geometry=IndexedFaceSet(coordIndex=[2,0,3,-1,1,3,0,-1],texCoordIndex=[6,4,7,-1,5,7,4,-1],
              coord=Coordinate(point=[(-0.5,0.0,0.5),(0.5,0.0,0.5),(-0.5,0.0,-0.5),(0.5,0.0,-0.5)]),
              texCoord=TextureCoordinate(point=[(0.0,0.0),(1.0,0.0),(0.0,0.0),(1.0,0.0),(0.0,0.0),(1.0,0.0),(0.0,1.0),(1.0,1.0)])))]),
        Transform(DEF='HeadingS',rotation=(0.0,-0.7071,0.7071,-3.142),translation=(0.0,1.0,6.0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1.0,diffuseColor=(0.588,0.588,0.588),shininess=0.145),
              texture=ImageTexture(url=["Textures/HeadingS.png","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/Textures/HeadingS.png"])),
            geometry=IndexedFaceSet(coordIndex=[2,0,3,-1,1,3,0,-1],texCoordIndex=[6,4,7,-1,5,7,4,-1],
              coord=Coordinate(point=[(-0.5,0.0,0.5),(0.5,0.0,0.5),(-0.5,0.0,-0.5),(0.5,0.0,-0.5)]),
              texCoord=TextureCoordinate(point=[(0.0,0.0),(1.0,0.0),(0.0,0.0),(1.0,0.0),(0.0,0.0),(1.0,0.0),(0.0,1.0),(1.0,1.0)])))]),
        Transform(DEF='HeadingW',rotation=(-0.5774,-0.5774,0.5774,-2.094),translation=(-6.0,1.0,0.0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1.0,diffuseColor=(0.588,0.588,0.588),shininess=0.145),
              texture=ImageTexture(url=["Textures/HeadingW.png","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/Textures/HeadingW.png"])),
            geometry=IndexedFaceSet(coordIndex=[2,0,3,-1,1,3,0,-1],texCoordIndex=[6,4,7,-1,5,7,4,-1],
              coord=Coordinate(point=[(-0.5,0.0,0.5),(0.5,0.0,0.5),(-0.5,0.0,-0.5),(0.5,0.0,-0.5)]),
              texCoord=TextureCoordinate(point=[(0.0,0.0),(1.0,0.0),(0.0,0.0),(1.0,0.0),(0.0,0.0),(1.0,0.0),(0.0,1.0),(1.0,1.0)])))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CompassRoseExample.py")
