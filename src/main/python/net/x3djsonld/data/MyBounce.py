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
    component(level=1,name='Scripting'),
    meta(name='title',content='MyBounce.x3d'),
    meta(name='creator',content='John Carlson'),
    meta(name='description',content='3 prismatic spheres'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/SFVec3f.x3d')]),
  Scene=Scene(
    children=[
    NavigationInfo(),
    Transform(DEF='transform',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.7,.7,.7),specularColor=(.5,.5,.5))),
        geometry=Sphere(),)]),
    X3DScript(DEF='Bounce2',
      field=[
      field(name='set_translation',accessType='inputOnly',type='SFVec3f',value=(0,0,0)),
      field(name='translation_changed',accessType='outputOnly',type='SFVec3f',value=(0,0,0)),
      field(name='translation',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
      field(name='velocity',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
      field(name='set_fraction',accessType='inputOnly',type='SFTime')]),
    TimeSensor(DEF='TourTime',cycleInterval=0.150,loop=True),
    ROUTE(fromNode='TourTime',fromField='cycleTime',toNode='Bounce2',toField='set_fraction'),
    ROUTE(fromNode='Bounce2',fromField='translation_changed',toNode='transform',toField='set_translation')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MyBounce.py")
