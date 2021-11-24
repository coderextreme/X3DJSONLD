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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='ComputerKeyboard.x3d',name='title'),
    meta(content='A computer keyboard for the control panel in the CVN bridge control. The buttons animated to be pushed in when touched.',name='description'),
    meta(content='Foo Khee Loon',name='creator'),
    meta(content='17 February 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ComputerKeyboard.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ComputerKeyboard.x3d'),
    Viewpoint(description='Front View',fieldOfView=1,orientation=(0,1,0,1.571),position=(1,0.2,0.5)),
    Transform(rotation=(1,0,0,1.571),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.8,0.7))),
        geometry=Extrusion(ccw=False,creaseAngle=1.75,crossSection=[(0,0),(0.025,-0.05),(0.05,-0.07),(0.075,-0.08),(0.1,-0.09),(0.35,-0.04),(0.4,-0.03),(0.45,-0.0275),(0.45,0),(0.045,-0.0275),(0.045,0),(0,0)],spine=[(0,0,0),(0,0.98,0)])),
      Transform(DEF='EscapeButton',rotation=(1,0,0,-1.571),translation=(0.1,0.95,-0.065),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.7,0.7,0.8))),
          geometry=Extrusion(creaseAngle=2,crossSection=[(-0.02,-0.02),(-0.02,0.02),(0.02,0.02),(0.02,-0.02),(-0.02,-0.02)],scale=[(1,1),(1.2,1.2),(0.7,0.7)],spine=[(0,0,0),(0,0.02,0),(0,0.04,0)])),
        TouchSensor(DEF='TouchButton',description='touch keys to animate'),
        TimeSensor(DEF='push',stopTime=0.5),
        PositionInterpolator(DEF='Move',key=[0,0.5,1],keyValue=[(0.1,0.95,-0.065),(0.1,0.95,-0.05),(0.1,0.95,-0.065)])]),
      #  first row of the keyboard 
      Transform(translation=(0,-0.1,0),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0,-0.1467,0),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0,-0.193367,0),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0,-0.240033,0),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0,-0.340033,0),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0,-0.386700,0),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0,-0.43336700,0),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0,-0.4800,0),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0,-0.5800,0),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0,-0.626667,0),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0,-0.67333,0),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0,-0.72,0),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0,-0.82,0),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0,-0.8667,0),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0,-0.91333,0),
        children=[
        Transform(USE='EscapeButton')]),
      #  second row of key board 
      Transform(translation=(0.1,-0.001,0.015),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0.1,-0.048667,0.015),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0.1,-0.0963,0.015),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0.1,-0.144,0.015),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0.1,-0.19167666,0.015),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0.1,-0.23934,0.015),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0.1,-0.2871,0.015),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0.1,-0.33466,0.015),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0.1,-0.382333,0.015),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0.1,-0.43,0.015),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0.1,-0.477,0.015),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0.1,-0.525333,0.015),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0.1,-0.57,0.015),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0.1,-0.62066,0.015),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0.1,-0.66833,0.015),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0.1,-0.716,0.015),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0.1,-0.763666,0.015),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0.1,-0.811333,0.015),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0.1,-0.859,0.015),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(translation=(0.1,-0.9066,0.015),
        children=[
        Transform(USE='EscapeButton')]),
      #  third row of key board 
      Group(DEF='row',
        children=[
        Transform(translation=(0.146667,-0.001,0.025),
          children=[
          Transform(USE='EscapeButton')]),
        Transform(translation=(0.1467,-0.04866671,0.025),
          children=[
          Transform(USE='EscapeButton')]),
        Transform(translation=(0.1467,-0.096331,0.025),
          children=[
          Transform(USE='EscapeButton')]),
        Transform(translation=(0.1467,-0.144,0.025),
          children=[
          Transform(USE='EscapeButton')]),
        Transform(translation=(0.1467,-0.191664,0.025),
          children=[
          Transform(USE='EscapeButton')]),
        Transform(translation=(0.1467,-0.2393664,0.025),
          children=[
          Transform(USE='EscapeButton')]),
        Transform(translation=(0.1467,-0.287,0.025),
          children=[
          Transform(USE='EscapeButton')]),
        Transform(translation=(0.1467,-0.3346677,0.025),
          children=[
          Transform(USE='EscapeButton')]),
        Transform(translation=(0.1467,-0.38236677,0.025),
          children=[
          Transform(USE='EscapeButton')]),
        Transform(translation=(0.1467,-0.437,0.025),
          children=[
          Transform(USE='EscapeButton')]),
        Transform(translation=(0.1467,-0.4776,0.025),
          children=[
          Transform(USE='EscapeButton')]),
        Transform(translation=(0.1467,-0.525334776,0.025),
          children=[
          Transform(USE='EscapeButton')]),
        Transform(translation=(0.1467,-0.57376,0.025),
          children=[
          Transform(USE='EscapeButton')]),
        Transform(translation=(0.1467,-0.62057376,0.025),
          children=[
          Transform(USE='EscapeButton')]),
        Transform(translation=(0.1467,-0.66832057376,0.025),
          children=[
          Transform(USE='EscapeButton')]),
        Transform(translation=(0.1467,-0.716,0.025),
          children=[
          Transform(USE='EscapeButton')]),
        Transform(translation=(0.1467,-0.7636,0.025),
          children=[
          Transform(USE='EscapeButton')]),
        Transform(translation=(0.1467,-0.8113336,0.025),
          children=[
          Transform(USE='EscapeButton')]),
        Transform(translation=(0.1467,-0.859,0.025),
          children=[
          Transform(USE='EscapeButton')]),
        Transform(translation=(0.1467,-0.90667859,0.025),
          children=[
          Transform(USE='EscapeButton')])]),
      #  Fourth row of key board 
      Transform(translation=(0.04667,0,0.01),
        children=[
        Group(USE='row')]),
      #  Fifth row of key board 
      Transform(translation=(0.093347,0,0.02),
        children=[
        Group(USE='row')]),
      #  sixth row of key board 
      Transform(scale=(1,2,1),translation=(0.286667,-1,0.055),
        children=[
        Transform(USE='EscapeButton')]),
      Transform(DEF='space_bar',rotation=(0,0,1,1.571),translation=(0.3902677,0.5,-0.045),
        children=[
        Transform(rotation=(1,0,0,1.571),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.7,0.7,0.8))),
            geometry=Extrusion(creaseAngle=2,crossSection=[(-0.25,-0.02),(-0.25,0.02),(0.25,0.02),(0.25,-0.02),(-0.25,-0.02)],scale=[(1,1),(1.2,1.2),(0.7,0.7)],spine=[(0,0,0),(0,0.02,0),(0,0.04,0)]))])]),
      Transform(USE='EscapeButton')]),
    ROUTE(fromField='touchTime',fromNode='TouchButton',toField='set_startTime',toNode='push'),
    ROUTE(fromField='fraction_changed',fromNode='push',toField='set_fraction',toNode='Move'),
    ROUTE(fromField='value_changed',fromNode='Move',toField='set_translation',toNode='EscapeButton')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ComputerKeyboard.py")
