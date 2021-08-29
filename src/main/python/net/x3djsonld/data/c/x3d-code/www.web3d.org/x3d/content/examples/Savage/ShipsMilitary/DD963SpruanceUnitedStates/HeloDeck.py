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
    meta(content='HeloDeck.x3d',name='title'),
    meta(content='Spruance Helo Deck',name='description'),
    meta(content='LT Josh Hansen',name='creator'),
    meta(content='17 September 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/sh-60.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DD963SpruanceUnitedStates/HeloDeck.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(translation=(0,0,-10),
        children=[
        Shape(
          geometry=Box(size=(10,3,10)),
          appearance=Appearance(
            material=Material(diffuseColor=(.6,.6,.6)))),
        Transform(translation=(0,1.51,0),
          children=[
          Shape(
            geometry=Box(size=(10,.05,10)),
            appearance=Appearance(
              texture=ImageTexture(url=["HeloPaint.jpg","https://savage.nps.edu/Savage/ShipsMilitary/DD963SpruanceUnitedStates/HeloPaint.jpg"])))])]),
      Transform(scale=(.7,1,.5),
        children=[
        Group(DEF='FLIGHTDECK',
          children=[
          Transform(translation=(0,1.48,-14.5),
            children=[
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
                Transform(translation=(-8,0,0),
                  children=[
                  Group(USE='ENTIRENET')]),
                Transform(translation=(4,0,0),
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
              Transform(rotation=(0,1,0,1.57),translation=(2.8,0,-2.6),
                children=[
                Group(USE='FDNETBACK'),
                Transform(translation=(-2,0,0),
                  children=[
                  Group(USE='ENTIRENET')]),
                Transform(translation=(6,0,0),
                  children=[
                  Group(USE='ENTIRENET')]),
                Transform(translation=(8,0,0),
                  children=[
                  Group(USE='ENTIRENET')]),
                Transform(translation=(10,0,0),
                  children=[
                  Group(USE='ENTIRENET')])])]),
            Transform(translation=(-14,0,0),
              children=[
              Group(USE='FDNETRIGHT')])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HeloDeck.py")
