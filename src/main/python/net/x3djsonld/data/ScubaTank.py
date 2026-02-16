####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python ScubaTank.py
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

newModel=X3D(profile='Interchange',version='4.0',
  head=head(
    children=[
    meta(content='ScubaTank.x3d',name='title'),
    meta(content='Scuba gear used by Nancy Diving example.',name='description'),
    meta(content='Etsuko Lippi',name='creator'),
    meta(content='24 January 2001',name='created'),
    meta(content='23 May 2020',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ScubaTank.x3d'),
    Transform(DEF='ScubaTank',
      children=[
      Transform(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='tank',ambientIntensity=0.3,diffuseColor=(0.3,0.3,0.5),shininess=0.10,specularColor=(0.7,0.7,0.8))),
          geometry=Cylinder(height=0.7,radius=0.1))]),
      Transform(translation=(0,0.35,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='tank')),
          geometry=Sphere(radius=0.098))]),
      Transform(translation=(0,-0.35,0),
        children=[
        Shape(DEF='tankBottom',
          appearance=Appearance(
            material=Material(DEF='black',ambientIntensity=0.3,diffuseColor=(0,0,0))),
          geometry=Cylinder(height=0.06,radius=0.115))]),
      Group(DEF='tankNozzle',
        children=[
        Transform(
          children=[
          Transform(translation=(0,0.45,0),
            children=[
            Shape(DEF='pressure',
              appearance=Appearance(
                material=Material(DEF='pressureColor',ambientIntensity=0.4,diffuseColor=(0.91,0.91,0.91),shininess=0.16,specularColor=(0.91,0.90,0.91))),
              geometry=Cylinder(height=0.1,radius=0.015))]),
          Transform(translation=(0,0.50,0),
            children=[
            Shape(DEF='pressureTop',
              appearance=Appearance(
                material=Material(USE='black')),
              geometry=Cylinder(height=0.02,radius=0.025))]),
          Transform(rotation=(0,0,1,1.57),translation=(-0.028,0.462,0),
            children=[
            Transform(
              children=[
              Shape(DEF='connectorToRegulator',
                appearance=Appearance(
                  material=Material(USE='pressureColor')),
                geometry=Cylinder(height=0.03,radius=0.01))]),
            Transform(translation=(0,0.02,0),
              children=[
              Shape(DEF='connectorToRegulatorTop',
                appearance=Appearance(
                  material=Material(USE='black')),
                geometry=Cylinder(height=0.02,radius=0.02))])])])]),
      Transform(translation=(0,0.2,0),
        children=[
        Shape(DEF='tankHoldBelt',
          appearance=Appearance(
            material=Material(USE='black')),
          geometry=Cylinder(height=0.1,radius=0.115))])]),
    Background(skyColor=[(0.6,0.6,0.6)])])
)
### X3D model conversion complete ###

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for ScubaTank.py:')
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

print("python ScubaTank.py load and self-test diagnostics complete.")
