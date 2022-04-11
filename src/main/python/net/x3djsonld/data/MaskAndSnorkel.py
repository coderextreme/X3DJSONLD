####################################################################################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach simplifies Python X3D deployment and use.
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
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='MaskAndSnorkel.x3d',name='title'),
    meta(content='Diving mask and snorkel tube.',name='description'),
    meta(content='Etsuko Lippi',name='creator'),
    meta(content='January 24, 2001',name='created'),
    meta(content='23 May 2020',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='MaskAndSnorkel.x3d'),
    Background(skyColor=[(0,0,0.9)]),
    Transform(DEF='maskAndSnorkel',
      children=[
      Transform(
        children=[
        Shape(DEF='maskFrame',
          appearance=Appearance(
            material=Material(DEF='frameColor',diffuseColor=(0,0,0))),
          geometry=IndexedFaceSet(coordIndex=[0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1],creaseAngle=1.45,solid=False,
            coord=Coordinate(point=[(0,0.08,0),(0.02,0.05,0),(0.05,0.05,0),(0.06,0.06,0),(0.06,0.09,0),(0.05,0.1,0),(0,0.1,0),(-0.05,0.1,0),(-0.06,0.09,0),(-0.06,0.06,0),(-0.05,0.05,0),(-0.02,0.05,0),(0.005,0.08,0),(0.02,0.055,0),(0.05,0.055,0),(0.055,0.06,0),(0.055,0.09,0),(0.045,0.095,0),(0.005,0.095,0),(-0.005,0.08,0),(-0.02,0.055,0),(-0.05,0.055,0),(-0.055,0.06,0),(-0.055,0.09,0),(-0.045,0.095,0),(-0.005,0.095,0)])))]),
      Transform(DEF='snorkelHoldRing',translation=(0.075,0.075,-0.02),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='frameColor')),
          geometry=Cylinder(height=0.003,radius=0.015))]),
      Group(DEF='snorkel',
        children=[
        Transform(translation=(0,-0.02,0),
          children=[
          Transform(scale=(0.9,0.9,0.9),translation=(0.035,-0.07,-0.02),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='snorkelTube',diffuseColor=(0.678,1,0.184),transparency=0.4)),
              geometry=Extrusion(crossSection=[(0.0,0.013),(0.00494,0.01196),(0.00923,0.00923),(0.01196,0.00494),(0.013,0.00),(0.01196,-0.00494),(0.00923,-0.00923),(0.00494,-0.01196),(0.00,0.013),(-0.00494,-0.01196),(-0.00923,-0.00923),(-0.01196,-0.00494),(-0.013,-0.0),(-0.01196,0.00494),(-0.00923,0.00923),(-0.00494,0.01196),(0.00,0.013)],spine=[(-0.01,-0.04,0),(0,0,0),(0.03,0.05,0),(0.05,0.2,0),(0.03,0.4,0.03)]))]),
          Transform(rotation=(0,0,1,1.57),scale=(0.9,0.9,0.9),translation=(0.01,-0.04,-0.02),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='Mouthpiece',diffuseColor=(0.678,1,0.8),transparency=0.4)),
              geometry=Extrusion(crossSection=[(0.0,0.013),(0.00494,0.01196),(0.00923,0.00923),(0.01196,0.00494),(0.013,0.00),(0.01196,-0.00494),(0.00923,-0.00923),(0.00494,-0.01196),(0.00,0.013),(-0.00494,-0.01196),(-0.00923,-0.00923),(-0.01196,-0.00494),(-0.013,-0.0),(-0.01196,0.00494),(-0.00923,0.00923),(-0.00494,0.01196),(0.00,0.013)],spine=[(-0.01,-0.03,0),(0,0,0),(0.02,0.01,0)]))]),
          Transform(rotation=(0,0,1,-0.85),scale=(0.9,0.9,0.9),translation=(0.005,-0.01,-0.02),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='Mouthpiece')),
              geometry=Extrusion(crossSection=[(0.0,0.013),(0.00494,0.01196),(0.00923,0.00923),(0.01196,0.00494),(0.013,0.00),(0.01196,-0.00494),(0.00923,-0.00923),(0.00494,-0.01196),(0.00,0.013)],spine=[(-0.02,-0.03,0),(-0.01,-0.03,0),(0,-0.0175,0),(0,-0.0135,0),(-0.01,0,0),(-0.02,0,0)]))])])]),
      Transform(
        children=[
        Shape(DEF='maskLensR',
          appearance=Appearance(
            material=Material(DEF='plastic',diffuseColor=(0.941,0.973,1),transparency=0.8)),
          geometry=IndexedFaceSet(coordIndex=[12,13,14,15,16,17,18,12,-1],creaseAngle=1.45,solid=False,
            coord=Coordinate(point=[(0,0.08,0),(0.02,0.05,0),(0.05,0.05,0),(0.06,0.06,0),(0.06,0.09,0),(0.05,0.1,0),(0,0.1,0),(-0.05,0.1,0),(-0.06,0.09,0),(-0.06,0.06,0),(-0.05,0.05,0),(-0.02,0.05,0),(0.005,0.08,0),(0.02,0.055,0),(0.05,0.055,0),(0.055,0.06,0),(0.055,0.09,0),(0.045,0.095,0),(0.005,0.095,0),(-0.005,0.08,0),(-0.02,0.055,0),(-0.05,0.055,0),(-0.055,0.06,0),(-0.055,0.09,0),(-0.045,0.095,0),(-0.005,0.095,0)])))]),
      Transform(
        children=[
        Shape(DEF='maskLensL',
          appearance=Appearance(
            material=Material(USE='plastic')),
          geometry=IndexedFaceSet(coordIndex=[19,20,21,22,23,24,25,19,-1],creaseAngle=1.45,solid=False,
            coord=Coordinate(point=[(0,0.08,0),(0.02,0.05,0),(0.05,0.05,0),(0.06,0.06,0),(0.06,0.09,0),(0.05,0.1,0),(0,0.1,0),(-0.05,0.1,0),(-0.06,0.09,0),(-0.06,0.06,0),(-0.05,0.05,0),(-0.02,0.05,0),(0.005,0.08,0),(0.02,0.055,0),(0.05,0.055,0),(0.055,0.06,0),(0.055,0.09,0),(0.045,0.095,0),(0.005,0.095,0),(-0.005,0.08,0),(-0.02,0.055,0),(-0.05,0.055,0),(-0.055,0.06,0),(-0.055,0.09,0),(-0.045,0.095,0),(-0.005,0.095,0)])))]),
      Transform(
        children=[
        Shape(DEF='nose',
          appearance=Appearance(
            material=Material(DEF='plasticFit',diffuseColor=(0.678,1,0.184),transparency=0.7)),
          geometry=IndexedFaceSet(coordIndex=[0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1],creaseAngle=1.45,solid=False,
            coord=Coordinate(point=[(0,0.08,0),(0.02,0.05,0),(0.05,0.05,0),(0.06,0.06,0),(0.06,0.09,0),(0.05,0.1,0),(0,0.1,0),(-0.05,0.1,0),(-0.06,0.09,0),(-0.06,0.06,0),(-0.05,0.05,0),(-0.02,0.05,0),(0.005,0.08,0),(0.02,0.055,0),(0.05,0.055,0),(0.055,0.06,0),(0.055,0.09,0),(0.045,0.095,0),(0.005,0.095,0),(-0.005,0.08,0),(-0.02,0.055,0),(-0.05,0.055,0),(-0.055,0.06,0),(-0.055,0.09,0),(-0.045,0.095,0),(-0.005,0.095,0),(0,0.04,0.015),(0.05,0.04,-0.03),(0.06,0.05,-0.03),(0.07,0.095,-0.03),(0.055,0.11,-0.03),(0,0.11,-0.02),(-0.055,0.11,-0.03),(-0.07,0.095,-0.03),(-0.06,0.05,-0.03),(-0.05,0.04,-0.03),(-0.02,0.04,-0.02),(0.02,0.04,-0.02)])))]),
      Transform(
        children=[
        Shape(DEF='faceFit',
          appearance=Appearance(
            material=Material(USE='plasticFit')),
          geometry=IndexedFaceSet(coordIndex=[1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1],creaseAngle=1.45,solid=False,
            coord=Coordinate(point=[(0,0.08,0),(0.02,0.05,0),(0.05,0.05,0),(0.06,0.06,0),(0.06,0.09,0),(0.05,0.1,0),(0,0.1,0),(-0.05,0.1,0),(-0.06,0.09,0),(-0.06,0.06,0),(-0.05,0.05,0),(-0.02,0.05,0),(0.005,0.08,0),(0.02,0.055,0),(0.05,0.055,0),(0.055,0.06,0),(0.055,0.09,0),(0.045,0.095,0),(0.005,0.095,0),(-0.005,0.08,0),(-0.02,0.055,0),(-0.05,0.055,0),(-0.055,0.06,0),(-0.055,0.09,0),(-0.045,0.095,0),(-0.005,0.095,0),(0,0.05,0.015),(0.05,0.04,-0.03),(0.06,0.05,-0.03),(0.07,0.095,-0.03),(0.055,0.11,-0.03),(0,0.11,-0.02),(-0.055,0.11,-0.03),(-0.07,0.095,-0.03),(-0.06,0.05,-0.03),(-0.05,0.04,-0.03),(-0.02,0.04,-0.02),(0.02,0.04,-0.02)])))]),
      Transform(
        children=[
        Shape(DEF='belt',
          appearance=Appearance(
            material=Material(USE='plastic')),
          geometry=IndexedFaceSet(coordIndex=[3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1],creaseAngle=1.45,solid=False,
            coord=Coordinate(point=[(0,0.08,0),(0.02,0.05,0),(0.05,0.05,0),(0.06,0.06,0),(0.06,0.09,0),(0.05,0.1,0),(0,0.1,0),(-0.05,0.1,0),(-0.06,0.09,0),(-0.06,0.06,0),(-0.05,0.05,0),(-0.02,0.05,0),(0.005,0.08,0),(0.02,0.055,0),(0.05,0.055,0),(0.055,0.06,0),(0.055,0.09,0),(0.045,0.095,0),(0.005,0.095,0),(-0.005,0.08,0),(-0.02,0.055,0),(-0.05,0.055,0),(-0.055,0.06,0),(-0.055,0.09,0),(-0.045,0.095,0),(-0.005,0.095,0),(0,0.05,0.015),(0.05,0.04,-0.03),(0.06,0.05,-0.03),(0.07,0.095,-0.03),(0.055,0.11,-0.03),(0,0.11,-0.02),(-0.055,0.11,-0.03),(-0.07,0.095,-0.03),(-0.06,0.05,-0.03),(-0.05,0.04,-0.03),(-0.02,0.04,-0.02),(0.02,0.04,-0.02),(0.075,0.06,-0.135),(0.075,0.09,-0.135),(-0.075,0.06,-0.135),(-0.075,0.09,-0.135),(0.06,0.09,-0.165),(0.06,0.06,-0.165),(-0.06,0.09,-0.165),(-0.06,0.06,-0.165),(0,0.09,-0.2),(0,0.06,-0.175)])))])])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for MaskAndSnorkel.py:')
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

print("python MaskAndSnorkel.py load and self-test diagnostics complete.")
