####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python ifscubeworks.py
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
    meta(name='title',content='ifscubeworks.x3d'),
    meta(name='identifier',content='http://coderextreme.net/X3DJSONLD/src/main/data/ifscubeworks.x3d'),
    meta(name='description',content='Template for an Indexed Face Set'),
    meta(name='creator',content='John Carlson'),
    meta(name='created',content='4 April 2017'),
    meta(content='https://www.web3d.org/x3d/content/examples/license.html',name='license'),
    meta(name='generator',content='X3D-Edit, https://savage.nps.edu/X3D-Edit')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ifscubeworks.x3d'),
    Group(
      children=[
      Shape(
        geometry=IndexedFaceSet(DEF='IndexedFaceSet',coordIndex=[0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1],normalIndex=[0,0,1,2,3,4,5],normalPerVertex=False,colorIndex=[0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1],
          coord=Coordinate(point=[(0,0,1),(0,1,1),(1,1,1),(1,0,1)]),
          normal=Normal(vector=[(1,0,0),(-1,0,0),(0,1,0),(0,0,-1),(0,-1,0),(0,0,1)]),
          color=Color(color=[(0,1,0)])))])])
)

### X3D model conversion complete ###

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for ifscubeworks.py:')
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

print("python ifscubeworks.py load and self-test diagnostics complete.")
