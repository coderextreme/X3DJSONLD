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
    meta(content='FlightDeck.x3d',name='title'),
    meta(content='Arleigh Burke flight deck.',name='description'),
    meta(content='James Harney',name='creator'),
    meta(content='1 August 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='http:www.fas.org/man/dod-101/sys/ship/ddg-51.htm',name='reference'),
    meta(content='FASDDG51.htm',name='reference'),
    meta(content='http://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter18-TextureMapping/Figure18.23bTextureCoordinateGrillwork.x3d',name='reference'),
    meta(content='grillwork.png',name='reference'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/FlightDeck.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    NavigationInfo(),
    LOD(range=[400],
      children=[
      Transform(translation=(0,-10,0),
        children=[
        Group(DEF='FLIGHTDECK',
          children=[
          Transform(translation=(0,5.4,0),
            children=[
            Transform(DEF='WHIPS',translation=(-6.25,0,4),
              children=[
              Transform(translation=(.5,2,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(.7,.7,.7),shininess=.3)),
                  geometry=Cylinder(height=3,radius=.15))]),
              Transform(translation=(-.5,2,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(.7,.7,.7),shininess=.3)),
                  geometry=Cylinder(height=3,radius=.15))]),
              Transform(rotation=(0,0,1,1.56),translation=(0,.5,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(.7,.7,.7),shininess=.3)),
                  geometry=Cylinder(height=1,radius=.15))]),
              Transform(translation=(0,.25,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(.7,.7,.7),shininess=.3)),
                  geometry=Cylinder(height=.5,radius=.15))])]),
            Shape(
              appearance=Appearance(
                texture=ImageTexture(DEF='FLTDECK',url=["nsflightdeck.jpg","https://savage.nps.edu/Savage/DestroyerGuidedMissile-UnitedStates-ArleighBurke/nsflightdeck.jpg"])),
              geometry=IndexedFaceSet(coordIndex=[2,3,0,1],solid=False,texCoordIndex=[3,2,1,0],
                coord=Coordinate(point=[(7.5,.05,4.2),(-7.5,.05,4.2),(-9.375,.05,-24.1),(9.375,.05,-24.1)]),
                texCoord=TextureCoordinate(point=[(1,0),(1,1),(0,1),(0,0)]))),
            Shape(
              appearance=Appearance(
                texture=ImageTexture(DEF='NONSKID',url=["nonskid.jpg","https://savage.nps.edu/Savage/DestroyerGuidedMissile-UnitedStates-ArleighBurke/nonskid.jpg"])),
              geometry=IndexedFaceSet(coordIndex=[0,1,3,2,0,-1,5,7,6,4,5,-1,5,1,0,4,5,-1,0,4,6,2,0,-1,1,5,2,3,1,-1],solid=False,
                coord=Coordinate(point=[(7.5,0,4.2),(-7.5,0,4.2),(7.5,.05,4.2),(-7.5,.05,4.2),(9.375,0,-24.1),(-9.375,0,-24.1),(9.375,.05,-24.1),(-9.375,.05,-24.1)]))),
            Group(DEF='FDNETBACK',
              children=[
              Transform(
                children=[
                Group(DEF='ENTIRENET',
                  children=[
                  Transform(translation=(2,.6,4.25),
                    children=[
                    Shape(DEF='NETTING',
                      #  GRILLWORK EXAMPLE FROM VRML COURSE BOOK USED 
                      appearance=Appearance(
                        texture=ImageTexture(url=["grill.png","http://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter18-TextureMapping/grill.png"]),
                        textureTransform=TextureTransform(center=(0.5,0.5),scale=(32,8))),
                      geometry=IndexedFaceSet(DEF='Screen',coordIndex=[0,1,2,3],solid=False,texCoordIndex=[0,1,2,3],
                        coord=Coordinate(point=[(-1,-.4,0.1),(1,-.4,0.1),(1,.4,0.1),(-1,.4,0.1)]),
                        texCoord=TextureCoordinate(point=[(0,0),(1,0),(1,1),(0,1)]))),
                    Transform(translation=(-1,0,0),
                      children=[
                      Shape(DEF='POST',
                        appearance=Appearance(DEF='NETGREY',
                          material=Material(diffuseColor=(.7,.7,.7),shininess=.3)),
                        geometry=Cylinder(DEF='SIDEPOST',height=1,radius=.1))]),
                    Transform(translation=(1,0,0),
                      children=[
                      Shape(USE='POST')]),
                    Transform(rotation=(0,0,1,1.57),scale=(1,2,1),translation=(0,.4,0),
                      children=[
                      Shape(USE='POST')]),
                    Transform(rotation=(0,0,1,1.57),scale=(1,2,1),translation=(0,-.4,0),
                      children=[
                      Shape(USE='POST')])])]),
                Transform(translation=(2,0,0),
                  children=[
                  Group(USE='ENTIRENET')]),
                Transform(translation=(4,0,0),
                  children=[
                  Group(USE='ENTIRENET')]),
                Transform(translation=(-2,0,0),
                  children=[
                  Group(USE='ENTIRENET')]),
                Transform(translation=(-4,0,0),
                  children=[
                  Group(USE='ENTIRENET')]),
                Transform(translation=(-6,0,0),
                  children=[
                  Group(USE='ENTIRENET')])])]),
            Group(DEF='FDNETRIGHT',
              children=[
              Transform(rotation=(0,1,0,1.5),translation=(3.45,0,-1.1),
                children=[
                Group(USE='FDNETBACK')]),
              Transform(rotation=(0,1,0,1.5),translation=(4.25,0,-13.1),
                children=[
                Group(USE='FDNETBACK'),
                Transform(translation=(6,0,0),
                  children=[
                  Group(USE='ENTIRENET')]),
                Transform(translation=(8,0,0),
                  children=[
                  Group(USE='ENTIRENET')])])]),
            Transform(rotation=(0,1,0,.14),translation=(-15.25,0,1),
              children=[
              Group(USE='FDNETRIGHT')])])])]),
      Transform(translation=(0,-10,0),
        children=[
        Transform(translation=(0,5.4,0),
          children=[
          Shape(
            appearance=Appearance(
              texture=ImageTexture(USE='NONSKID')),
            geometry=Extrusion(creaseAngle=.85,crossSection=[(7.5,0),(-7.5,0),(-7.5,.5),(7.5,.5),(7.5,0)],scale=[(1,.1),(1,.1),(1,.1),(1.25,.1)],spine=[(0,0,4.2),(0,0,3),(0,0,2),(0,0,-24.1)]))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for FlightDeck.py")
