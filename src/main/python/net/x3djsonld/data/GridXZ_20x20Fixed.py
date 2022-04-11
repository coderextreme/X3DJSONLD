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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(name='title',content='GridXZ_20x20Fixed.x3d'),
    meta(name='creator',content='MV4204 class'),
    meta(name='created',content='3 September 2000'),
    meta(name='modified',content='30 March 2016'),
    meta(name='reference',content='GridXY_20x20Fixed.x3d'),
    meta(name='reference',content='GridYZ_20x20Fixed.x3d'),
    meta(name='description',content='Line grid authoring tool to enable precise visual measurement of objects in 3D space - fixed position. Oriented along XZ plane, size 20m by 20m, default block size 1m by 1m.'),
    meta(name='identifier',content='https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d'),
    meta(name='generator',content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit'),
    meta(name='license',content='../../license.html')]),
  Scene=Scene(
    children=[
    Viewpoint(description='XZ horizontal grid, perpendicular to Y axis (seen from 0 10 25)',orientation=(1,0,0,-0.4),position=(0,10,25)),
    Transform(DEF='GridLocation',
      children=[
      Group(
        children=[
        Shape(DEF='LinesAlignedAlongZ',
          geometry=IndexedLineSet(colorIndex=[1,0,0,0,0,2,0,0,0,0,1,0,0,0,0,2,0,0,0,0,1],colorPerVertex=False,coordIndex=[1,22,-1,2,23,-1,3,24,-1,4,25,-1,5,26,-1,6,27,-1,7,28,-1,8,29,-1,9,30,-1,10,31,-1,11,32,-1,12,33,-1,13,34,-1,14,35,-1,15,36,-1,16,37,-1,17,38,-1,18,39,-1,19,40,-1,20,41,-1,21,42,-1],
            coord=Coordinate(DEF='EndPoints',point=[(0,0,0),(-10,0,10),(-9,0,10),(-8,0,10),(-7,0,10),(-6,0,10),(-5,0,10),(-4,0,10),(-3,0,10),(-2,0,10),(-1,0,10),(0,0,10),(1,0,10),(2,0,10),(3,0,10),(4,0,10),(5,0,10),(6,0,10),(7,0,10),(8,0,10),(9,0,10),(10,0,10),(-10,0,-10),(-9,0,-10),(-8,0,-10),(-7,0,-10),(-6,0,-10),(-5,0,-10),(-4,0,-10),(-3,0,-10),(-2,0,-10),(-1,0,-10),(0,0,-10),(1,0,-10),(2,0,-10),(3,0,-10),(4,0,-10),(5,0,-10),(6,0,-10),(7,0,-10),(8,0,-10),(9,0,-10),(10,0,-10)]),
            color=Color(color=[(0.4,0.4,0.4),(0.8,0.2,0),(0.4,0.1,0.05)]))),
        Transform(DEF='LinesAlignedAlongX',rotation=(0,1,0,1.57079),
          children=[
          Shape(USE='LinesAlignedAlongZ')]),
        Transform(translation=(0,-0.5,0),
          children=[
          Billboard(
            children=[
            Shape(
              geometry=Text(DEF='CenterTextNode',string=["origin"],
                fontStyle=FontStyle(DEF='FS4',justify=["MIDDLE","MIDDLE"],size=0.4)),
              appearance=Appearance(DEF='DefaultAppearance',
                material=Material(),))])]),
        Transform(translation=(10,-0.5,10),
          children=[
          Billboard(
            children=[
            Shape(
              geometry=Text(string=["10 0 10"],
                fontStyle=FontStyle(USE='FS4')),
              appearance=Appearance(USE='DefaultAppearance'))])]),
        Transform(translation=(10,-0.5,-10),
          children=[
          Billboard(
            children=[
            Shape(
              geometry=Text(string=["10 0 -10"],
                fontStyle=FontStyle(USE='FS4')),
              appearance=Appearance(USE='DefaultAppearance'))])]),
        Transform(translation=(-10,-0.5,10),
          children=[
          Billboard(
            children=[
            Shape(
              geometry=Text(string=["-10 0 10"],
                fontStyle=FontStyle(USE='FS4')),
              appearance=Appearance(USE='DefaultAppearance'))])]),
        Transform(translation=(-10,-0.5,-10),
          children=[
          Billboard(
            children=[
            Shape(
              geometry=Text(string=["-10 0 -10"],
                fontStyle=FontStyle(USE='FS4')),
              appearance=Appearance(USE='DefaultAppearance'))])])])])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for GridXZ_20x20Fixed.py:')
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

print("python GridXZ_20x20Fixed.py load and self-test diagnostics complete.")
