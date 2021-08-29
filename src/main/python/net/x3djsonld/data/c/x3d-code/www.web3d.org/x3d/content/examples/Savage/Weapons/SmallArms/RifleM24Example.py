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
    meta(content='RifleM24Example.x3d',name='title'),
    meta(content='Animation example from RifleM24 Prototype. Clicking trigger fires and sound.',name='description'),
    meta(content='Etsuko Lippi',name='creator'),
    meta(content='31 Decmember 2001',name='created'),
    meta(content='16 January 2014',name='modified'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/Weapons/SmallArms/RifleM24Example.x3d',name='identifier'),
    meta(content='Rifle M24',name='subject'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Rifle M24',name='RifleM24',url=["RifleM24Prototype.x3d#RifleM24","https://savage.nps.edu/Savage/Weapons/SmallArms/RifleM24Prototype.x3d#RifleM24","RifleM24Prototype.wrl#RifleM24","https://savage.nps.edu/Savage/Weapons/SmallArms/RifleM24Prototype.wrl#RifleM24"],
      field=[
      field(accessType='inputOnly',appinfo='input true to fire',name='trigger',type='SFBool'),
      field(accessType='outputOnly',appinfo='output true when fired',name='fire',type='SFBool'),
      field(accessType='inputOnly',appinfo='trigger animation',name='animationStartTime',type='SFTime')]),
    Background(skyColor=[(0.604,0.753,0.804)]),
    Group(
      children=[
      ProtoInstance(DEF='rifleM24',name='RifleM24'),
      Script(DEF='FireScript',
        field=[
        field(accessType='outputOnly',name='fire',type='SFBool'),
        field(accessType='inputOnly',name='enabled',type='SFBool')]),
      TouchSensor(DEF='FireTouchSensor',description='click to shoot'),
      ROUTE(fromField='isOver',fromNode='FireTouchSensor',toField='enabled',toNode='FireScript'),
      ROUTE(fromField='touchTime',fromNode='FireTouchSensor',toField='animationStartTime',toNode='rifleM24'),
      ROUTE(fromField='fire',fromNode='FireScript',toField='trigger',toNode='rifleM24')]),
    Transform(DEF='Target',rotation=(0.58,0.58,0.58,2.09),translation=(50,-1,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),
          texture=ImageTexture(url=["Target.gif","Target.jpg","https://savage.nps.edu/Savage/Weapons/SmallArms/Target.gif","https://savage.nps.edu/Savage/Weapons/SmallArms/Target.jpg"])),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,0],creaseAngle=1.75,solid=False,
          coord=Coordinate(point=[(0.00,1.30,0),(2.5,1.30,0),(2.5,-1.30,0),(0.00,-1.30,0)])))]),
    Anchor(DEF='About',description='Federation of American Scientists (FAS) page',parameter=["target=_blank"],url=["http://www.fas.org/man/dod-101/sys/land/m14.htm"],
      children=[
      Transform(DEF='AboutRifleM24',translation=(-0.5,-0.4,-0.3),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0.545))),
          geometry=Text(string=["About RifleM24"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.25,style_='BOLD')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RifleM24Example.py")
