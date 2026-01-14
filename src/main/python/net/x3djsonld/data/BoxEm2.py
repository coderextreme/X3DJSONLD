####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python BoxEm2.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    meta(name='title',content='BoxEm2.x3d'),
    meta(name='creator',content='John Carlson'),
    meta(name='generator',content='manual'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/src/main/data/BoxEm2.x3d'),
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

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for BoxEm2.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python BoxEm2.py load and self-test diagnostics complete.")
