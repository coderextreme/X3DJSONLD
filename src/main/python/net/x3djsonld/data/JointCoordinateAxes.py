####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python 
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
# Project home page:    # X3D Python Scene Access Interface Library (X3DPSAIL)
#                       # https://www.web3d.org/x3d/stylesheets/python/python.html
# Conversion generator: # https://www.web3d.org/x3d/stylesheets/X3dToPython.xslt
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    meta(name='converter',content='x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy'),
    meta(name='converted',content='Mon, 31 Jul 2023 03:48:04 GMT')]),
  Scene=Scene(
    children=[
    NavigationInfo(headlight=False),
    Group(
      children=[
      Group(DEF='ARROW',
        children=[
        Shape(
          appearance=Appearance(DEF='ARROW_APPEARANCE',
            material=Material(diffuseColor=(0.3,0.3,1),emissiveColor=(0.3,0.3,0.33))),
          geometry=Cylinder(top=False,bottom=False,radius=0.025)),
        Transform(translation=(0,1,0),
          children=[
          Shape(DEF='ARROW_POINTER',
            appearance=Appearance(USE='ARROW_APPEARANCE'),
            geometry=Cone(height=0.1,bottomRadius=0.05))]),
        Transform(translation=(0,-1,0),rotation=(1,0,0,3.1416),
          children=[
          Shape(USE='ARROW_POINTER')])]),
      Transform(translation=(0,1.08,0),
        children=[
        Billboard(
          children=[
          Shape(
            appearance=Appearance(DEF='LABEL_APPEARANCE',
              material=Material(diffuseColor=(1,1,0.3),emissiveColor=(0.33,0.33,0.1))),
            geometry=Text(string=["Y"],
              fontStyle=FontStyle(DEF='LABEL_FONT',family=["SANS"],size=0.2,justify=["MIDDLE"])))])])]),
    Transform(rotation=(0,0,1,-1.5708),
      children=[
      Group(
        children=[
        Group(USE='ARROW'),
        Transform(translation=(0.072,1.1,0),rotation=(0,0,1,1.5708),
          children=[
          Billboard(
            children=[
            Shape(
              appearance=Appearance(USE='LABEL_APPEARANCE'),
              geometry=Text(string=["X"],
                fontStyle=FontStyle(USE='LABEL_FONT')))])])])]),
    Transform(rotation=(1,0,0,1.5708),
      children=[
      Group(
        children=[
        Group(USE='ARROW'),
        Transform(translation=(0,1.1,0.072),rotation=(1,0,0,-1.5708),
          children=[
          Billboard(
            children=[
            Shape(
              appearance=Appearance(USE='LABEL_APPEARANCE'),
              geometry=Text(string=["Z"],
                fontStyle=FontStyle(USE='LABEL_FONT')))])])])])])
)

### X3D model conversion complete ###

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics:')
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

print("python load and self-test diagnostics complete.")
