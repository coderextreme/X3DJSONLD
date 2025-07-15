####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python CoordinateAxes.py
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
    meta(content='CoordinateAxes.x3d',name='title'),
    meta(content='Don Brutzman, Byounghyun Yoo',name='creator'),
    meta(content='14 July 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='X Y Z axis arrows and labels in X3D coordinate system. See CoordinateAxesExample for use as an Inline coordinate-system reference frame.',name='description'),
    meta(content='https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d',name='reference'),
    meta(content='https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxesNSEW.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxesNSEW.x3d',name='reference'),
    meta(content='https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='CoordinateAxes.x3d'),
    Collision(DEF='DoNotCollideWithVisualizationWidget',
      #  Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph. 
      #  This NavigationInfo allows examine mode and will be overridden by any parent scene. 
      #  Each arrow goes from +1m to -1m to allow linear scaling to fit a scene 
      #  Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user 
      children=[
      Group(
        #  Vertical Y arrow and label 
        children=[
        Group(DEF='ArrowGreen',
          children=[
          Shape(
            geometry=Cylinder(DEF='ArrowCylinder',radius=.025,top=False),
            appearance=Appearance(DEF='Green',
              material=Material(diffuseColor=(.1,.6,.1),emissiveColor=(.05,.2,.05)))),
          Transform(translation=(0,1,0),
            children=[
            Shape(
              geometry=Cone(DEF='ArrowCone',bottomRadius=.05,height=.1),
              appearance=Appearance(USE='Green'))])]),
        Transform(translation=(0,1.08,0),
          children=[
          Billboard(
            children=[
            Shape(
              appearance=Appearance(DEF='LABEL_APPEARANCE',
                material=Material(diffuseColor=(1,1,.3),emissiveColor=(.33,.33,.1))),
              geometry=Text(string=["Y"],
                fontStyle=FontStyle(DEF='LABEL_FONT',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=.2)))])])]),
      Transform(rotation=(0,0,1,-1.57079),
        #  Horizontal X arrow and label 
        children=[
        Group(
          children=[
          Group(DEF='ArrowRed',
            children=[
            Shape(
              geometry=Cylinder(USE='ArrowCylinder'),
              appearance=Appearance(DEF='Red',
                material=Material(diffuseColor=(.7,.1,.1),emissiveColor=(.33,0,0)))),
            Transform(translation=(0,1,0),
              children=[
              Shape(
                geometry=Cone(USE='ArrowCone'),
                appearance=Appearance(USE='Red'))])]),
          Transform(rotation=(0,0,1,1.57079),translation=(.072,1.1,0),
            #  note label rotated back to original coordinate frame 
            children=[
            Billboard(
              children=[
              Shape(
                appearance=Appearance(USE='LABEL_APPEARANCE'),
                geometry=Text(string=["X"],
                  fontStyle=FontStyle(USE='LABEL_FONT')))])])])]),
      Transform(rotation=(1,0,0,1.57079),
        #  Perpendicular Z arrow and label, note right-hand rule 
        children=[
        Group(
          children=[
          Group(DEF='ArrowBlue',
            children=[
            Shape(
              geometry=Cylinder(USE='ArrowCylinder'),
              appearance=Appearance(DEF='Blue',
                material=Material(diffuseColor=(.3,.3,1),emissiveColor=(.1,.1,.33)))),
            Transform(translation=(0,1,0),
              children=[
              Shape(
                geometry=Cone(USE='ArrowCone'),
                appearance=Appearance(USE='Blue'))])]),
          Transform(rotation=(1,0,0,-1.57079),translation=(0,1.1,.072),
            #  note label rotated back to original coordinate frame 
            children=[
            Billboard(
              children=[
              Shape(
                appearance=Appearance(USE='LABEL_APPEARANCE'),
                geometry=Text(string=["Z"],
                  fontStyle=FontStyle(USE='LABEL_FONT')))])])])])])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for CoordinateAxes.py:')
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

print("python CoordinateAxes.py load and self-test diagnostics complete.")
