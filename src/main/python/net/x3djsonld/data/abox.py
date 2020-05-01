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
    meta(name='title',content='abox.x3d'),
    meta(name='creator',content='John Carlson'),
    meta(name='generator',content='manual'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/abox.x3d'),
    meta(name='description',content='a box')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='anyShape',
      ProtoInterface=ProtoInterface(
        field=[
        field(name='myShape',accessType='inputOutput',type='MFNode',
          children=[
          Shape(
            geometry=Sphere(),)])]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          IS=IS(
            connect=[
            connect(nodeField='children',protoField='myShape')]))])),
    ProtoDeclare(name='one',
      ProtoInterface=ProtoInterface(
        field=[
        field(name='myShape',accessType='inputOutput',type='MFNode',
          children=[
          Shape(
            geometry=Cylinder(),)])]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='anyShape',
            IS=IS(
              connect=[
              connect(nodeField='myShape',protoField='myShape')]))])])),
    ProtoInstance(name='one',
      fieldValue=[
      fieldValue(name='myShape',
        children=[
        Shape(
          geometry=Box(size=(140,140,140)))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for abox.py")
