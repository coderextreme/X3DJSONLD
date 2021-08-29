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
    meta(content='CompassRosePrototype.x3d',name='title'),
    meta(content='Definition of the CompassRose prototype, a heads-up display (HUD) showing heading for current viewpoint direction.',name='description'),
    meta(content='Christian Greuel, Director of Art & Production, Planet 9 Studios, Inc.',name='creator'),
    meta(content='Xeena VRML importer, X3D-Edit 3.1, http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='translator'),
    meta(content='1 August 2006',name='created'),
    meta(content='14 October 2006',name='translated'),
    meta(content='27 February 2016',name='modified'),
    meta(content='Textures/CompassHeadings.png',name='Image'),
    meta(content='originals/CompassRosePrototype.wrl',name='reference'),
    meta(content='compass rose heads-up display HUD',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CompassRosePrototype.x3d',name='identifier'),
    meta(content='X3D-Edit, http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["Christian Greuel, Director of Art & Production"],title='Compass Rose Prototype'),
    ProtoDeclare(name='CompassRose',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='size',type='SFVec3f',value=(1.0,1.0,1.0)),
        field(accessType='initializeOnly',name='locationOffset',type='SFVec3f',value=(0.0,0.0,0.0))]),
      ProtoBody=ProtoBody(
        children=[
        Group(DEF='CompassRose',
          children=[
          ProximitySensor(DEF='CompassProx',size=(1.0E9,1.0E9,1.0E9),
            IS=IS(
              connect=[
              connect(nodeField='center',protoField='locationOffset')])),
          Transform(DEF='FixedLocation',
            children=[
            Transform(DEF='LocationOffset',
              IS=IS(
                connect=[
                connect(nodeField='translation',protoField='locationOffset'),
                connect(nodeField='scale',protoField='size')]),
              children=[
              Transform(scale=(0.02,0.02,0.02),translation=(0.0,0.0,-0.2),
                children=[
                Group(DEF='Compass',
                  children=[
                  Transform(DEF='Needle',
                    children=[
                    Shape(
                      appearance=Appearance(
                        texture=ImageTexture(url=["Textures/CompassNeedle.png","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/Textures/CompassNeedle.png"])),
                      geometry=IndexedFaceSet(coordIndex=[1,2,3,-1,1,3,0,-1],texCoordIndex=[1,2,3,-1,1,3,0,-1],
                        coord=Coordinate(point=[(0.5,0.5,0.0),(-0.5,0.5,0.0),(-0.5,-0.5,0.0),(0.5,-0.5,0.0)]),
                        texCoord=TextureCoordinate(point=[(1.0,1.0),(0.0,1.0),(0.0,0.0),(1.0,0.0)])))]),
                  Transform(DEF='Headings',
                    children=[
                    Shape(
                      appearance=Appearance(
                        texture=ImageTexture(url=["Textures/CompassHeadings.png","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/Textures/CompassHeadings.png"])),
                      geometry=IndexedFaceSet(coordIndex=[1,2,3,-1,1,3,0,-1],texCoordIndex=[1,2,3,-1,1,3,0,-1],
                        coord=Coordinate(point=[(0.5,0.5,0.0),(-0.5,0.5,0.0),(-0.5,-0.5,0.0),(0.5,-0.5,0.0)]),
                        texCoord=TextureCoordinate(point=[(1.0,1.0),(0.0,1.0),(0.0,0.0),(1.0,0.0)])))]),
                  Script(DEF='RoseScript',
                    field=[
                    field(accessType='initializeOnly',name='rot',type='SFRotation',value=(0.0,0.0,0.0,0.0)),
                    field(accessType='initializeOnly',name='dir',type='SFNode',
                      children=[
                      Transform(USE='Headings')]),
                    field(accessType='inputOnly',name='proxrot',type='SFRotation')])])])])])])]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CompassRosePrototype.py")
