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
    meta(name='title',content='Box.x3d'),
    meta(name='creator',content='John Carlson'),
    meta(name='generator',content='manual'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/box.x3d'),
    meta(name='description',content='3 boxes')]),
  Scene=Scene(
    children=[
    NavigationInfo(type=["EXAMINE"]),
    Viewpoint(description='Cubes on Fire',position=(0,0,12)),
    ProtoDeclare(name='anyShape',
      ProtoInterface=ProtoInterface(
        field=[
        field(name='xtranslation',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
        field(name='myShape',accessType='inputOutput',type='MFNode',
          children=[
          Shape(
            geometry=Sphere(),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1))))])]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='xtranslation'),
            connect(nodeField='children',protoField='myShape')]))])),
    ProtoDeclare(name='three',
      ProtoInterface=ProtoInterface(
        field=[
        field(name='ytranslation',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
        field(name='myShape',accessType='inputOutput',type='MFNode',
          children=[
          Shape(
            geometry=Cylinder(),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1))))])]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='ytranslation')]),
          children=[
          ProtoInstance(name='anyShape',
            fieldValue=[
            fieldValue(name='xtranslation',value=(0,0,0))],
            IS=IS(
              connect=[
              connect(nodeField='myShape',protoField='myShape')])),
          ProtoInstance(name='anyShape',
            fieldValue=[
            fieldValue(name='xtranslation',value=(2,0,0))],
            IS=IS(
              connect=[
              connect(nodeField='myShape',protoField='myShape')])),
          ProtoInstance(name='anyShape',
            fieldValue=[
            fieldValue(name='xtranslation',value=(-2,0,0))],
            IS=IS(
              connect=[
              connect(nodeField='myShape',protoField='myShape')]))])])),
    ProtoInstance(name='three',DEF='threepi',
      fieldValue=[
      fieldValue(name='ytranslation',value=(0,0,0)),
      fieldValue(name='myShape',
        children=[
        Shape(DEF='box',
          geometry=Box(size=(1,1,1)),
          appearance=Appearance(
            material=Material(diffuseColor=(0,1,0))))])]),
    Transform(translation=(0,2,0),
      children=[
      Shape(USE='box')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if         metaDiagnostics(newModel): # built-in utility method in X3D class
    print (metaDiagnostics(newModel))
print ("python x3d.py load successful for Box.py")